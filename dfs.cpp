//DFS and DFS_REC
#include<iostream>
#include "stack.cpp"
using namespace std;

void dfsRec(int v,int start,int adj_mat[20][20],bool visited[20]){
	
	cout<<(char)(start+'A')<<" ";
	
	visited[start]=true;
	
	for(int i=0;i<v;i++){
		if(adj_mat[start][i]==1 && (!visited[i])){
			dfsRec(v,i,adj_mat,visited);
		}
	}
}

void dfs(int v,int adj_mat[20][20]){
	bool visited[v];
	
	for(int i=0;i<v;i++){
		visited[i]=false;
	}
	
	Stack s;
	s.push(3);
	while(!s.isEmpty()){
		int it=s.peek();
		s.pop();
		
		if(!visited[it]){
			cout<<(char)(it+'A')<<" ";
			visited[it]=true;
		}
		
		for(int i=0;i<v;i++){
			if(adj_mat[it][i]==1 && (!visited[i])){
				s.push(i);
			}
		}
	}
	cout<<endl;
}

int main(){
	system("clear");
	
	freopen("input.txt","r",stdin);
	
	int v;	
	cin>>v;
	int adj_mat[20][20];
	
	for(int i=0;i<v;i++){
		for(int j=0;j<v;j++){
			cin>>adj_mat[i][j];
		}
	}
	
	system("clear");
	cout<<"The Adjacency Matrix is"<<endl;
	for(int i=0;i<v;i++){
		for(int j=0;j<v;j++){
			cout<<adj_mat[i][j]<<" ";
		}
		cout<<endl;
	}
	
	bool visited[20];
	
	for(int i=0;i<v;i++){
		visited[i]=false;
	}
	
	cout<<"The DFS Traversal"<<endl;
	dfs(v,adj_mat);
	
	cout<<"The DFS REC"<<endl;
	dfsRec(v,3,adj_mat,visited);
	
	cout<<endl; 
	return 0;
}

/*
6
0 1 1 0 0 0
1 0 0 1 1 0
1 0 0 0 1 0
0 1 0 0 1 1 
0 1 1 1 0 1 
0 0 0 1 1 0
*/
