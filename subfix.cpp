#include <iostream>
using namespace std;

int main() 
{          
     //subfix 
     int array [5]= {1,2,3,4,5};
    int n = 0;
     int subfix = 1;
     int new_array [5]={};
     for(int i = 4 ; i >= n ; i --){
        subfix = subfix * array[i];
        new_array[i]=subfix;
        cout <<" " << new_array[i] ;
     }
    cout << endl;
    return 0;
}