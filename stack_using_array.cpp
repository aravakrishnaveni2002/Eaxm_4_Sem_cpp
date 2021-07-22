//Define a class Stack with all its functions and write a main function menu driven to show all functions works properly or not.

#include<iostream>
#include<stdlib.h>
using namespace std;

# define MAX 5

  class Stack{
	int arr[MAX];
        int top;
	public:
	   Stack(){top=-1;}

	   void push(int item){
	     top++; arr[top]=item;
	   }
	   
           int pop(){
 	      return arr[top--];
	   }

	   int isFull(){
   	      if(top==MAX-1) return 1;
	      else return 0;
	   }

	   int isEmpty(){
   	      if(top==-1) return 1;
	      else return 0;
	   }

	   int peek(){
	     return arr[top];
	   }

	  void display(){
	    for(int i=top;i>=0;i--)
              cout<<arr[i]<<"\n";
	  }
	
  };

 int main(){
 system("clear");
 Stack s1;
 
 while(1){
     
     cout<<"1 push"<<endl;
     cout<<"2 pop"<<endl;
     cout<<"3 isEmpty"<<endl;
     cout<<"4 isFull"<<endl;
     cout<<"5 display"<<endl;
     cout<<"6 peek"<<endl;
     cout<<endl;
     	
     cout<<"Enter your choice\n";
        int ch,item;
	cin>>ch;
	switch(ch){
	   case 1:
	     if(!s1.isFull()){
	       cout<<"Enter item\n";
	       cin>>item;
	       s1.push(item);
	     }
	     else
                cout<<"Stack is full\n";
           break;

	  case 2:
	     if(!s1.isEmpty())
	        cout<<s1.pop()<<"\n";
	     else
	       cout<<"Stack is empty\n";
	  break;
	 
          case 3:
	     if(s1.isEmpty()==1)
	       cout<<"Empty\n";
	     else
	       cout<<"Not Empty\n";
	  break;

	  case 4:
	     if(s1.isFull()==1)
	       cout<<"Full\n";
	     else
	       cout<<"Not Full\n";
	  break;
	 
	  case 5:
	    if(!s1.isEmpty()){
	    	s1.display();
	    }
	    else{
	    	cout<<"Stack is Empty"<<endl;
	    }	
	  break;
	  
	  case 6:
	    if(!s1.isEmpty())
	        cout<<s1.peek()<<"\n";
	     else
	       cout<<"Stack is empty\n";
	  break;

	  default :
	    exit(1);
	}
	
	cout<<endl;
 }
 
 return 0;
}


