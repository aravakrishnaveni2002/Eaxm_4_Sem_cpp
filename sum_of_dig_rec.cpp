//Find sum of digits using recursion
#include<iostream>
using namespace std;

int sumOfDigits(int n){
	
	if(n==0){
		return 0;
	}
	
	return (n%10)+sumOfDigits(n/10);

}

int main(){

	int n;
	
	cout<<"Enter the number"<<endl;
	
	cin>>n;
	
	int res=sumOfDigits(n);
	
	cout<<"Ans is "<<res<<endl;
	
	return 0;	
}
