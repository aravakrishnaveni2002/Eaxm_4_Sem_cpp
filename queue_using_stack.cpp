//Queue using two Stacks
#include"ass1.cpp"
class Queue{
	
	Stack s1,s2;
	public:
	void Enqueue(int item){
		if(!s1.isFull()){
			s1.push(item);
		}
		else{
			cout<<"Queue is Full"<<endl;
		}
	}
	
	void Dequeue(){
		if(s2.isEmpty() && s1.isEmpty()){
			cout<<"Queue is Empty"<<endl;
			return;	
		}
		
		if(s2.isEmpty()){
			while(!s1.isEmpty()){
				
				s2.push(s1.pop());
					
			}
		}
		cout<<s2.pop()<<endl;
	}
	
	
};


int main(){
 system("clear");
 Queue q1;
 
  while(1){
  
   cout<<"1 Enqueue "<<endl;
   cout<<"2 Dequeue "<<endl;
    cout<<endl;
   
     cout<<"Enter your choice"<<endl;
    int ch,item;
	cin>>ch;
	switch(ch){
	   case 1:
	       cout<<"Enter item\n";
	       cin>>item;
	       q1.Enqueue(item);
           break;

	  case 2:
	       q1.Dequeue();
	  	   break;
	 
	 default:
	 	exit(1);
	 }
	 
	 cout<<endl;
  }
  
  return 0;
 } 	 	
