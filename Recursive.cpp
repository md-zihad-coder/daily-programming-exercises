#include <iostream>
using namespace std;
class su {
    public:
    int ps(int val){


    if(val==1){          //base part 
        return 1;
    }else{
        return val+ps(val-1); // Recursive part 
    }
}


};

int main() 
{
    su obj;
    cout<< "Your Recursive sum answer is : " ;
    cout<< obj.ps(30) << endl;

    
    return 0;
}
