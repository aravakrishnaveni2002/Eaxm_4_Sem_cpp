#include<iostream>
using namespace std;

int noOfEdges(int adj_mat[20][20],int v){
	
	int edges=0;
	
	for(int i=0;i<v;i++){
		for(int j=0;j<v;j++){
		
			if(i == j && adj_mat[i][j] == 1){
				edges+=2;
			}
			
			else if(adj_mat[i][j] == 1){
				edges++;
			}
		}
	}
	
	return edges/2;
}

int totalDegree(int adj_mat[20][20],int v){

	return noOfEdges(adj_mat,v)*2;
}


void displayAdjVertex(int adj_mat[20][20],int v,int vertex){

	cout<<char(vertex+65)<<"-->";
	for(int i=0;i<v;i++){
		if(adj_mat[vertex][i] == 1){
			cout<<char(i+65)<<" ";
		}
	}
	cout<<endl;
	
	return ;
}

void displayGraph(int adj_mat[20][20],int v){

	for(int i=0;i<v;i++){
		for(int j=0;j<v;j++){
			cout<<adj_mat[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<endl;
	
	return ;
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
	
	int vertex;
	cin>>vertex;
	
	/*while(1){
	
		cout<<"1 Total number of edges"<<endl;
		cout<<"2 Total degree of graph"<<endl;
		cout<<"3 Dispaly adjacent of a given vertex"<<endl;
		cout<<"4 Dispaly the graph"<<endl;
		
		
		cout<<"Enter the choice"<<endl;
		int ch;
		
		cin>>ch;
		
		switch(ch){
			
			case 1:
				cout<<noOfEdges(adj_mat,v)<<endl;
				break;	
				
			case 2:
				cout<<totalDegree(adj_mat,v)<<endl;
				break;
				
			case 3:
				int vertex;
				cout<<"Enter the vertex"<<endl;
				cin>>vertex;
				
				displayAdjVertex(adj_mat,v,vertex);
				break;
				
			case 4:
				displayGraph(adj_mat,v);
				break;
				
			default :
	    		exit(1);						
		} 
		
		cout<<endl;
	}*/
	
	cout<<"The Graph is "<<endl;
	displayGraph(adj_mat,v);
	
	cout<<"The no of total degree is "<<totalDegree(adj_mat,v)<<endl<<endl;
	
	cout<<"The no of total egdes are "<<noOfEdges(adj_mat,v)<<endl<<endl;
	
	cout<<"The adjacent vertices of "<<char(vertex+65)<<" are ";
	displayAdjVertex(adj_mat,v,vertex);
	cout<<endl;
	
	return 0;
}


/*
4
0 1 1 0
1 0 1 1
1 1 0 1
0 1 1 0 
*/

