#include <iostream>
#include <algorithm>
using namespace std;

int main() 
      ///conter with most water           two pointer approach
{
    int conter [9]= {2,7,4,5,1,6,3,5,8};
    int n = 9 ;
    int st = 0;
    int end = n -1;
    int maxare = 0;
    while (st<end){
        if ( conter[st] < conter[end] ){


            int are= conter[st]*(end-st);
            maxare = max(are , maxare);
            st++;
          
        }else{
             int are= conter[end]*(end-st);
             maxare = max(are , maxare);

             end--;
           
        }
       
    }
    cout << maxare << endl;        
    
    return 0;
}