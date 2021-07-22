#include<bits/stdc++.h>
#include "priority_queue.cpp"
using namespace std;
#define MAX 20

int findMin(int key[],bool mst[],int v){

	int min_val=INT_MAX;
	int min_vertex=0;	
	
	for(int i=0;i<v;i++){
	
		if(mst[i] == false && key[i] < min_val){
			min_val = key[i];
			min_vertex = i;
		}
	}
	
	return min_vertex;
}


void primsAlgo(int adj_mat[MAX][MAX],int v,int start_vertex){

	int key[v];
	bool mst[v];
	int parent[v];
	
	for(int i=0;i<v-1;i++){
	
		key[i]=INT_MAX;
		mst[i]=false;
		parent[i]=-1;
		
	}
	
	key[start_vertex]=0;
	int min_cost=0;
	cout<<char(start_vertex+65)<<"  0"<<endl;
	MinHeap h(MAX);
	/*for(int i=0;i<v;i++){
		if(i == start_vertex){
			h.insertKey(i,0);
		}
		else{	
			h.insertKey(i,INT_MAX);
		}	
	}*/
	
	h.insertKey(start_vertex,0);
	
	for(int i=0;i<v;i++){
		
		int min_vertex = h.extractMin();
		
		mst[min_vertex] = true;
		min_cost+=key[min_vertex];
		
		if(min_vertex != start_vertex)
			cout<<char(parent[min_vertex]+65)<<char(min_vertex+65)<<" "<<key[min_vertex]<<endl;
			//cout<<parent[min_vertex]<<min_vertex<<" "<<key[min_vertex]<<endl;
			
		for(int j=0;j<v;j++){
		
			if(adj_mat[min_vertex][j] > 0 && mst[j] == false){
				
				if(adj_mat[min_vertex][j] < key[j]){	
					key[j]=adj_mat[min_vertex][j];
					h.insertKey(j,key[j]);
					parent[j] = min_vertex;
				}
			}
		}
	
	}
	
	cout<<endl;
	
	cout<<"Min cost is "<<min_cost<<endl;
}

int main(){

	system("clear");
	
	freopen("input_prims.txt","r",stdin);
	
	int v;
	cin>>v;
	
	int adj_mat[MAX][MAX];
	
	for(int i=0;i<v;i++){
		for(int j=0;j<v;j++){
			
			cin>>adj_mat[i][j];	
			
		}
	}
	
	int start_vertex;
	cin>>start_vertex;
	
	cout<<"The Adjacency Matrix is"<<endl;
	
	for(int i=0;i<v;i++){
		for(int j=0;j<v;j++){
			cout<<adj_mat[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<endl;
	
	
	
	
	primsAlgo(adj_mat,v,start_vertex);
	
	
	return 0;
}
