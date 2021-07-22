#include<iostream>
using namespace std;



int rev(int n,int rev_num){
	
	if(n==0){
		return rev_num;
	}
	
	return rev(n/10,(rev_num)*10+(n%10));
	
}

int main(){
	
	
	int n;
	
	cout<<"Enter the number"<<endl;
	
	cin>>n;
	
	int rev_num=0;
	rev_num=rev(n,rev_num);
	
	if(n==rev_num){
		cout<<"YES"<<endl;
	}
	
	else{
		cout<<"NO"<<endl;
	}

	return 0;
	
}
