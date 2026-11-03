#include <iostream>
using namespace std;
                        //Circular Linked List 
class Node{
    public:
    int data;
    Node *next ;
    Node(int val){
        data = val;
        next = NULL;
    }

};
class cir{
    Node * head;
    Node * tail;
    public:
    cir(){
        head = tail = NULL;
    }
void adsvl(int v){
    Node *first = new Node(v);
    if(head==NULL){
        head=tail=first;
    }else{
        first->next = head;            // new value next head oky 
        head=first;                     // new Value now time head
        tail->next=head ;          // last tail link in head 
    }
}
void postinsrt(int val){
    Node *posti = new Node(val);      // post insert
    if(head==NULL){
        head=tail=posti;
    }else{
        tail->next=posti;
        tail=posti;
        tail->next=head;
    }
}
void pre_del(){

    Node *tp = head;
    if(head==NULL){       ///pre delate 
        return;
    }
    if(head==tail){
        delete head;
    }else{

        head=head->next;
        tail->next=head;
        tp->next=NULL;
    delete tp;

    }  

}
void post_del(){
    Node *tmp= tail;    //post delete
    Node *prv = head;
    if(head==NULL){
        return;
    }else if(head==tail){
        delete head;
    }else{
        while(prv->next !=tail){
            prv=prv ->next ;
        }
        tail= prv;
        tail->next=head;
        tmp->next = NULL;
        delete tmp;
    }
}
void p(){
    if(head==NULL){
        return ;
    }
    Node *tmp=head->next;
    cout << head->data << " ";
    while(tmp !=head){
        cout << tmp->data << " ";
        tmp=tmp->next;
    }
    
}

};

int main() 
{
    cir obj;
    
    obj.adsvl(5);
    obj.adsvl(10);
    obj.adsvl(15);
    obj.adsvl(20);
    cout<<"Preinsert : ";
    obj.p();
    cout<<endl;
    obj.postinsrt(25);
    obj.postinsrt(30);
    cout<<"Postinsert : ";
    obj.p();
    cout<<endl;
    obj.pre_del();
    cout<< "Pre delate : " ;
    obj.p();
    cout<<endl;
    cout<<"delete post : ";
    obj.post_del();
    obj.p();

    return 0;
};