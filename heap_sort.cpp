//heap sort

#include<iostream>
using namespace std;

void swap(int *a,int *b){
	int temp=*b;
	*b=*a;
	*a=temp;
}

void heapify(int a[],int n,int i){

	int largest=i;
	int l=(2*i);
	int r=(2*i)+1;
	
	if(l <= n && a[l] > a[largest]){
		largest=l;
	}
	
	if(r <= n && a[r] > a[largest]){
		largest=r;	
	}
	
	if(largest != i){
		swap(&a[largest],&a[i]);
		heapify(a,n,largest);
	
	}
}


void heapsort(int a[],int n){

	for(int i=n/2;i>=1;i--){
		heapify(a,n,i);
	}
	
	
	
	
	for(int i=n;i>1;i--){
		swap(&a[1],&a[i]);
		heapify(a,i-1,1);
	}

}

int main(){
	system("clear");
	int n;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter the elemnts of the array"<<endl;

	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	heapsort(a,n);
	cout<<"Array after sorting"<<endl;	
	for(int i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}
