#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void display(Node *head){
    Node *temp = head;
     while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void displayRecursively(Node *ptr){
    //base case
    if(ptr == NULL) return;
    cout<<ptr->data<<" ";
    displayRecursively(ptr->next);
}



int size(Node *ptr){
    int n = 0;
    while(ptr!=NULL){
        n++;
        ptr = ptr->next;
    }
    return n;
}



int main(){

    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    a->next = b;
    b->next = c;
    c->next = d;

    display(a); // space com -> O(1)

    //it will return the size of the LL
    cout<<size(a)<<endl;

    displayRecursively(a);//space com -> O(n)
   
}
