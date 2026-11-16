#include <iostream>
#include<vector>
using namespace std;
class stack{
    vector <int> v;
public:
    void push(int val){
        v.push_back(val);


    }
    void p(){
        v.pop_back();
    }
    int top(){
        return v.back();
    }
    bool empty(){
        return v.size()==0;
    }
};

int main() 
{
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    while(!s.empty()){

        cout<<s.top()<<endl;
        s.p();
    }
   
    return 0;
}