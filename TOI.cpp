#include<iostream>
using namespace std;

void toi(int n,char source,char destination,char intermediate){

	if(n==1){
		cout<<"Move disk 1 from "<<source<<" to "<<destination<<endl;
		return;
	}
	
	toi(n-1,source,intermediate,destination);
	cout<<"Move disk "<<n<<" from "<<source<<" to "<<destination<<endl;
	toi(n-1,intermediate,destination,source);
}

int main(){
	
	int n;
	
	cout<<"Enter the no of disks"<<endl;
	
	cin>>n;
	
	toi(n,'A','C','B');
	
	
	return 0;
}
