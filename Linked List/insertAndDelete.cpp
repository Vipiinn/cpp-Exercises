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

class LinkedList{
public:
    Node *head;
    Node *tail;
    int size;

    LinkedList(){ // constructor
        head = tail = NULL;
        size = 0;
    }

    void insertAtbeg(int val){
        Node *temp = new Node(val);
        if(size == 0) head = tail = temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
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

    void insertAtLoc(int idx , int val){
        
        if(idx < 0 || idx > size) cout<<"invalid index"<<endl;
        else if(idx==0) insertAtbeg(val);
        else if(idx == size) insertAtEnd(val);

        else{
            Node *newnode = new Node(val);
            Node *temp = head;

            for(int i=0;i<idx-1;i++){
                temp = temp->next;
            }
            newnode->next = temp->next;
            temp->next = newnode;
            size++;
        }
            
        
    }

    void display(){
        Node *temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

    int getidx(int idx){
        if(idx < 0 || idx >= size){
            cout<<"invalid index";
            return -1;
        }
        else if(idx == 0) return head->data;
        else if(idx == size-1) return tail->data;

        else{
            Node *temp = head;
            for(int i = 0;i<idx;i++){
                temp = temp->next;
            }
            return temp->data;     
        }

    }

    void deleteAtBeg(){
        if(size <= 0) cout<<"list is enpty";
        head = head->next;
    }

    void deleteAtEnd(){
        if(size <= 0){
            cout<<"list is empty";
        }
        else{
            Node *temp = head;
            while(temp->next!=tail){
                temp = temp->next;
            }
            temp->next = NULL;
            tail = temp;
            size--;

        }
    }

    void deleteAtInd(int idx){
        if(idx < 0 || idx > size-1) cout<<"invalid index";
        else if(size == 0) deleteAtBeg();
        else if(idx == size-1) deleteAtEnd();
        else{
            Node *temp = head;
            for(int i=0;i<idx-1;i++){
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }
    }
};

int main(){

    LinkedList ll;

    ll.insertAtEnd(10);
    ll.insertAtEnd(20);

   // ll.display();

    ll.insertAtbeg(70);
    ll.insertAtbeg(40);
    ll.insertAtEnd(90);

    ll.display();

    // ll.insertAtLoc(3,100);

    // ll.display();


    // cout<<ll.getidx(3);

    //ll.deleteAtBeg();
   // ll.deleteAtEnd();
    ll.deleteAtInd(3);
    ll.display();


}