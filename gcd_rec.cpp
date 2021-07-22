//Find GCD of two numbers using recursion
#include<iostream>
using namespace std;

int gcd(int a,int b){
	
	if(a==0){
		return b;	
	}
	
	if(a > b){
		return gcd(b,a);
	} 
	
	return gcd(b%a,a);
}

int main(){

	int a,b;
	
	cout<<"Enter two numbers"<<endl;
	
	cin>>a>>b;
	
	cout<<"Ans is "<<gcd(a,b)<<endl;

	return 0;
}
