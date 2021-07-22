//Menu driven programme to implement a Linearqueue using array.
#include<iostream>
#include<stdlib.h>
using namespace std;

# define MAX 5

class Queue{
   int arr[MAX];
   int front,rear;
   public:
   	Queue(){
   	   front=-1;
   	   rear=-1;
   	}
   	void Enqueue(int x);
   	int Dequeue();
   	int peek();
   	int isEmpty();
   	int isFull();
   	void display();
   	
};   	
	void Queue:: Enqueue(int x){
	   rear++;
	   arr[rear]=x;
	}

	int Queue:: Dequeue(){
	   front++;
	   return arr[front];
	}
	
	int Queue:: peek(){
	   return arr[front+1];
	}

	int Queue:: isEmpty(){
	   if(rear==front)
	      return 1;
	   else
	     return 0;
	}

	int Queue:: isFull(){
	   if(rear==MAX-1)
	      return 1;
	   else
	     return 0;
	}

	void Queue:: display(){
	   if(!isEmpty()){
	     for(int i=front+1;i<=rear;i++)
	        cout<<arr[i]<<" ";
	     cout<<"\n";
	   }
	  else
	    cout<<"Queue is Empty\n";
	}

int main(){
 system("clear");
 Queue q1;
 
  while(1){
  
   cout<<"1 Enqueue "<<endl;
   cout<<"2 Dequeue "<<endl;
   cout<<"3 isEmpty "<<endl;
   cout<<"4 isFull "<<endl;
   cout<<"5 display "<<endl;
   cout<<"6 peek"<<endl;
   cout<<endl;
   
     cout<<"Enter your choice"<<endl;
        int ch,item;
	cin>>ch;
	switch(ch){
	   case 1:
	     if(!q1.isFull()){
	       cout<<"Enter item\n";
	       cin>>item;
	       q1.Enqueue(item);
	     }
	     else
                cout<<"Queue is full\n";
           break;

	  case 2:
	     if(!q1.isEmpty())
	        cout<<q1.Dequeue()<<"\n";
	     else
	       cout<<"Queue is empty\n";
	  break;
	 
          case 3:
	     if(q1.isEmpty()==1)
	       cout<<"Empty\n";
	     else
	       cout<<"Not Empty\n";
	  break;

	  case 4:
	     if(q1.isFull()==1)
	       cout<<"Full\n";
	     else
	       cout<<"Not Full\n";
	  break;
	 
	  case 5:
	    q1.display();
	  break;
	  
	  case 6:
	    if(!q1.isEmpty())
	        cout<<q1.peek()<<"\n";
	     else
	       cout<<"Queue is empty\n";
	  break;

	  default :
	    exit(1);
	}
	
	cout<<endl;
    }
 }
 
