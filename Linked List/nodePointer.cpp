#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node *next;

    //constructor

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

int sizeLL(Node* head){
    int length = 0;
    Node* temp = head;

    while(temp != NULL){
        length++;
        temp = temp->next;
    }
    return length;
}

void Display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}

int main(){

    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);

    a->next = b;
    b->next = c;
    c->next = d;

    Display(a);

    cout<<endl;
    int ans = sizeLL(a);

    cout<<"size of the LInked List is  -> "<<ans;
    

}