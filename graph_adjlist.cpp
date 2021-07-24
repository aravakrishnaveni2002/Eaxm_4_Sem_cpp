#include<iostream>
using namespace std;
#define MAX 20

class Node{
	public:
		int value;
		Node *next;
};

class LinkedList{
	Node *head;
	public:
        LinkedList(){
           head=NULL;
        }
        void insertEnd(int);
        void display();
        int count();
        int isEmpty();
};

void LinkedList::insertEnd(int item){
	Node *curr=new Node;
     curr->value=item;
     if(head==NULL){
       curr->next=NULL;
       head=curr;
       return;
     }
     Node *temp=head;

     while(temp->next!=NULL){
        temp=temp->next;
     }
     temp->next=curr;
     curr->next=NULL;
}

int LinkedList::isEmpty(){
	
	if(head == NULL){
		return 1;
	}
	
	return 0;
}

void LinkedList::display(){
	Node *temp = head;
	
	while(temp != NULL){
		cout<<char(temp->value+65)<<"--> ";
		temp = temp->next;
	}
	
	cout<<"NULL"<<endl;
	
	return;
}

int LinkedList::count(){
	
	Node *temp = head;
	int count = 0;
	
	while(temp != NULL){
		
		count++;
		temp = temp->next;
	}
	
	return count;
}

int main(){

	system("clear");
	
	freopen("input_adjlist.txt","r",stdin);
	
	int v;
	cin>>v;
	
	LinkedList l[v];
	
	for(int i=0;i<v;i++){
		l[i].insertEnd(i);
		for(int j=0;j<v;j++){
			
			int item;
			cin>>item;
			
			if(item != 0){
				l[i].insertEnd(j);
			}
		}
	}
	
	int vertex;
	cin>>vertex;
	
	int total_degree=0,total_edges=0;
	
	cout<<"The Graph is "<<endl;
	
	for(int i=0;i<v;i++){
		l[i].display();
		cout<<endl;
	} 
	cout<<endl;
	
	
	for(int i=0;i<v;i++){
		total_degree+=l[i].count()-1;	
	}
	cout<<"The no of total degree is "<<total_degree<<endl<<endl;
	
	total_edges=total_degree/2;
	
	cout<<"The no of total egdes are "<<total_edges<<endl<<endl;
	
	
	cout<<"The adjacent vertices of "<<char(vertex+65)<<" are "<<endl<<endl;
	
	l[vertex].display();
	cout<<endl;
	
	
	return 0;
}
