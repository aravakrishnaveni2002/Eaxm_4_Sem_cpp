//Find largest element in the array using recursion
#include<bits/stdc++.h>
using namespace std;

int max_ele=INT_MIN;

int maxEle(int a[],int n){

	if(n==0){
		return max_ele;
	}
	
	if(a[n-1] > max_ele){
		max_ele=a[n-1];
	}
	return maxEle(a,n-1);
}

int main(){

	int n;
	cout<<"Enter the total number of elements"<<endl;
	cin>>n;
	
	int a[n];
	cout<<"Enter the elements"<<endl;
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	cout<<"Ans is "<<maxEle(a,n)<<endl;
	
	return 0;
}

