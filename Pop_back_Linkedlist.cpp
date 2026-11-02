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
        Node *newNode= new Node(val);  ///add 
        if(head==NULL){
            head=tail=newNode;
        }else{
            newNode->ptr = tail;
            tail ->next = newNode;
            tail = newNode;
        }
    
    }
    void pop_p(){


        Node *tt=head;
        head = head ->next;
        if(head==NULL){         /// first delete 
            cout << "Sorry battarey low shatdown " ;
            return;
            
        }
        if(head !=NULL){
            head->ptr = NULL;
        }
        tt->next=NULL;
        delete tt;
        

        }
    void p(){
        Node *tmp=head;
        while(tmp !=NULL){      /////print
        cout<< tmp->data << " = " ;

        tmp=tmp->next;
    }
    cout<<endl;
    }
    void pop_back(){
        Node *t=tail;
        tail=tail->ptr ;
        if(tail==NULL){             // last delate 
            cout << "Emty can't pop back back posible " ;
            return;
        }
        if(tail !=NULL){
            tail->next=NULL;
        }
        t->ptr=NULL;
        delete t;
    }
      

};
int main() 
{
    Doublist ot;
    ot.push_f(12);
    ot.push_f(32);
    ot.push_f(42);  ///value input 
    ot.push_f(52);
    ot.push_f(504);
    ot.p();      
    ot.pop_p();
    ot.p();
    ot.pop_back();
    ot.p();
    
    
    return 0;
}