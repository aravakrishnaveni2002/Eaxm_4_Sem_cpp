#include<bits/stdc++.h>
using namespace std;
#define MAX 20

int adj_mat[MAX][MAX];
int x[MAX];

void nextValue(int k,int m){

	while(true){
	
		x[k] = (x[k]+1)%(m+1);
		
		if(x[k] == 0){
			return;	
		}
		
		int j;
		for(j=1;j<k;j++){
		
			if(adj_mat[k][j] == 1 && x[j] == x[k]){
				break;
			}
		}
		
		if(j == k){
			return;
		}
		
	}
}

void mColor(int v,int k,int m){
	
	while(true){
	
		nextValue(k,m);
		
		if(x[k] == 0){
			return;
		}
		
		if(k == v){
			for(int i=1;i<=v;i++){
			
				cout<<x[i]<<" ";
			}
			cout<<endl;
		}
		
		else{
			
			mColor(v,k+1,m);
		}
	}
}


int main(){

	system("clear");
	
	freopen("input_mcolor.txt","r",stdin);
	
	int v;
	cin>>v;
	
	
	for(int i=1;i<=v;i++){
	
		for(int j=1;j<=v;j++){
			
			cin>>adj_mat[i][j];
		}
	}
	
	int m;
	cin>>m;
	
	cout<<"The Adjacency Matrix is "<<endl;
	
	for(int i=1;i<=v;i++){
		
		for(int j=1;j<=v;j++){
			
			cout<<adj_mat[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	
	for(int i=1;i<=v;i++){
		x[i] = 0; 
	}
	
	mColor(v,1,m);
	
	
	return 0;
}
