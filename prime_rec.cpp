#include<iostream>
using namespace std;

bool isPrime(int n,int i=2){

	if(n == 0 || n == 1){
		return false;
	}
		
	
	if(n == 2){
		return true;
	}
	
	if(n%i == 0){
		return false;
	}
	
	if( i*i > n){
		return true;
	}
	
	return isPrime(n,i+1);

	
	
}


int main(){

	int n;
	cout<<"Enter a number"<<endl;
	
	cin>>n;
	
	if(isPrime(n)){
		cout<<"YES"<<endl;
	}
	
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}

