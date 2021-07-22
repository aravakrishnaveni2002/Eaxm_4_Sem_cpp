#include<bits/stdc++.h>
using namespace std;



int knapsack(int capacity,int w[],int p[],int n){
	
	int x[n+1][capacity+1];
	
	for(int i=0;i<=n;i++){
		x[i][0]=0;
	}
	
	for(int i=0;i<=capacity;i++){
		x[0][i]=0;
	}
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=capacity;j++){

			if(w[i-1] <= j){
				x[i][j] = max(p[i-1]+x[i-1][j-w[i-1]],x[i-1][j]);
			}
			
			else{
				x[i][j] = x[i-1][j];
			}
		}
	}
	
	cout<<"The dp matrix"<<endl;
	for(int i=0;i<=n;i++){
		for(int j=0;j<=capacity;j++){
			cout<<x[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<endl;
	
	int total_profit = x[n][capacity];
	int j=capacity;
	
	cout<<"Item to be included"<<endl;
	
	for(int i=n;i>=1;i--){
		if(total_profit == x[i-1][j]){
			continue;
		}
		
		else{
			cout<<i<<" ";
			j=j-w[i-1];
			total_profit = total_profit-p[i-1];
			if(total_profit == 0){
				break;
			}
		}
	}
	
	cout<<endl;
	
	return x[n][capacity];
}

int main(){

	system("clear");
	freopen("input1.txt","r",stdin);
	int capacity;
	//cout<<"enter the capacity of knapsack:";
	cin>>capacity;
	
	int n;
	//cout<<"enter the no of items:";
	cin>>n;
	
	int w[n];
	//cout<<"enter the weights:";
	for(int i=0;i<n;i++)
	cin>>w[i];
	
	int p[n];
	//cout<<"enter the profits:";
	for(int i=0;i<n;i++)
	cin>>p[i];
	
	cout<<"Weight array"<<endl;
	for(int i=0;i<n;i++)
		cout<<w[i]<<" ";
	cout<<endl;
	
	cout<<"Profit array"<<endl;
	for(int i=0;i<n;i++)
		cout<<p[i]<<" ";
	cout<<endl;		
	
	
	int max_profit=knapsack(capacity,w,p,n);
	cout<<"maximum profit:"<<max_profit;
	cout<<endl;
	
	return 0;
}
