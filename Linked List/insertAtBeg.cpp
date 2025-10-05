#include<iostream>
using namespace std;

class Node{
public:    
    int val;
    Node *next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

class LinkedList{
public:    
    Node *head;
    Node *tail;
    int size;

    //constructor
    LinkedList(){
        head = NULL;
        tail = NULL;
        size = 0;
    }

    void insertAtebeg(int val){
        Node *temp = new Node(val);

        if(size == 0) head = tail = temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }

    void Display(){
        Node *temp = head;
        while(temp != NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main(){

    LinkedList ll;

    ll.insertAtebeg(10);
    ll.insertAtebeg(20);

    ll.Display();

    ll.insertAtebeg(80);
    ll.insertAtebeg(70);

    ll.Display();

}