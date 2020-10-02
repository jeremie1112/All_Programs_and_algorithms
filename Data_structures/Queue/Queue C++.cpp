#include<iostream>
using namespace std;


int queue[100], n=100, front=-1, rear=-1,val,i;
void insert(){
    if(rear==n-1){
        cout<<"Queue Overflow\n";
    }
    else{
        front=0;
        cout<<"Enter the element \n";
        cin>>val;
        rear++;
        queue[rear]=val;
    }
}

void delete(){
    if(front==-1 || front> rear){
        cout<<"Queue Underflow \n";
    }
    else{
        cout<<"Element deleted \n"<<queue[front];
        front++;
    }
}

void display(){
    if(front==-1 || front> rear){
        cout<<"Queue is empty \n";
    }
    else{
        cout<<"The elements inside the queue are: \n";
        for(i=front; i<=rear; i++){
            cout<<queue[i];
        }
    }
}


int main(){
    int ch;
    do{
    cout<<"Enter an the number of the operation to be performed \n 1. Insert \n 2. Delete \n 3. Display \n 4. Exit \n";
    switch(ch){
        case 1: void insert();
          break;
        case 2: void delete();
          break;
        case 3: void display();
          break;
        default: "You have entered the wrong choice \n"    
    }

while(ch!=4)}
}