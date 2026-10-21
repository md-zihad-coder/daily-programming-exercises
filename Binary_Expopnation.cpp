#include <iostream>
using namespace std;

int main() 
{
    int n = 2;
    int p = 10;
    int r=1;
    int i = 10;
    while(p>0){
        if(p%2==1){
          r=r*n;  

        }
        n=n*n;
        
        p=p/2;

    }
    cout << r << endl;

                    ///2 power 10;=====1024 

    cout << "Hello, World!";
    return 0;
}