#include<bits/stdc++.h>
using namespace std;

int parent[20];

int find(int i){
	
	while(parent[i] != i){
		i=parent[i];
	}
	
	return i;
}

void union_(int i,int j){

	int a=find(i);
	int b=find(j);
	
	parent[a]=b;	
}

void kruskalMST(int cost[20][20],int v){

	int min_cost=0;
	
	for(int i=0;i<v;i++){
		parent[i]=i;
	}
	
	int edge_count=0;
	
	while(edge_count < v-1){
	
		int min=INT_MAX,a=-1,b=-1;
	
		for(int i=0;i<v;i++){
			for(int j=0;j<v;j++){
				if(find(i) != find(j) && cost[i][j]!=0 && cost[i][j] < min){
					min=cost[i][j];
					a=i;
					b=j;
				}
			}	
		}
		
		union_(a,b);
	
		cout<<"Edge "<<edge_count++<<":"<<"("<<char(a+65)<<", "<<char(b+65)<<")"<<"cost: "<<min<<endl;
		min_cost+=min;
	}
	
	
	
	cout<<"Min_cost is	"<<min_cost<<endl;	
	
	return;
}


int main(){
	
	system("clear");
	
	freopen("input_adjmat.txt","r",stdin);
	
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
	
	kruskalMST(adj_mat,v);
	
	return 0;	
}
