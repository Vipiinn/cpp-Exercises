#include<iostream>
using namespace std;

class Node{ // user defined data type
public:    
    int data;
    Node *next;

    Node(int data){ //constructor
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList{ //user defined data structure
public:
    Node *head;
    Node *tail;
    int size;

    LinkedList(){// constructor
        head = tail = NULL;
        size = 0;
    }

    void insertAtEnd(int val){
        Node *temp = new Node(val);
        if(size == 0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    void insertAtBeg(int val){
        Node *temp = new Node(val);

        temp->next = head;
        head = temp;
    }

    void display(){
        Node *temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main(){
    LinkedList ll;
    ll.insertAtEnd(10);
    ll.display();
    ll.insertAtEnd(20);

    ll.display();

    ll.insertAtBeg(90);
    ll.display();

    

}