#include <iostream>
using namespace std;
class Node {
public:                  //Create Node 
    int data;
    Node *next;
    Node (int value){
    data = value;
    next = NULL;

}
};

int main() 
{
    
    Node *Head=NULL;
    
    int arr [5]={20,30,40,50,60};
    for(int i = 0; i < 5; i ++ ){
        if(Head==NULL){
           Head = new Node(arr[i]);
        }
        else{
            Node *temp;
            temp = new Node(arr[i]);
            temp->next = Head;
            Head=temp;
            
        }
            
    }
    Node *tp = Head;
    while(tp !=NULL){
        cout << tp->data << " " ;
        tp = tp->next;
        
    }
    return 0;
};