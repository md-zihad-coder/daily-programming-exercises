#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next ;
    Node *ptr;
    Node(int value){
        data = value;
        next = ptr =  NULL;
    }

};
class Doublist{
    Node *head;
    Node *tail;

    public:
    Doublist(){
        head = tail = NULL;
    }
    void push_f(int val){
        Node *newNode= new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }else{
            newNode->next = head;
            head ->ptr = newNode;
            head = newNode;
        }
    }
    void p(){
        Node *tmp=head;
        while(tmp !=NULL){
        cout<< tmp->data << " = " ;
        tmp=tmp->next;
    }
    cout << "NULL " ;

    }

      

};
int main() 
{
    Doublist ot;
    ot.push_f(12);
    ot.push_f(32);
    ot.push_f(42);
    ot.push_f(52);
    ot.p();
    cout << "Hello, World!";
    return 0;
};