#include <iostream>
using namespace std;

int main() 
{          
     //prefix 
     int array [5]= {1,2,3,4,5};
     int n = 5;
     int prefix = 1;
     int new_array [5]={};
     for(int i = 0 ; i < n ; i ++){
        prefix = prefix * array[i];
        new_array[i]=prefix;
        cout <<" " <<new_array[i] ;

     }
    cout << endl;
      

    return 0;
}