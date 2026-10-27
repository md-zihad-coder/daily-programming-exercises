#include <iostream>
using namespace std;

int main() 
{          
     //subfix 
     int array [5]= {1,2,3,4,5};
     int n = 0;
     int subfix = 1;
     int new_array [5]={};
     for(int j= 4 ; j >= n ; j --){
        new_array[j]=subfix;
        subfix = subfix * array[j];
        
        cout <<" " << new_array[j] ;
     }
     cout << endl;
     //prefix 
    // int array [5]= {1,2,3,4,5};
     int x = 5;
     int prefix = 1;
     int newi_array [5]={};
     for(int i = 0 ; i < x ; i ++){
        newi_array[i]=prefix;
        prefix = prefix * array[i];
        
        cout <<" " <<newi_array[i] ;
     }
    cout << endl;
    int l [5]={};
    for (int k = 0 ; k <= 4; k++){
        l[k]= new_array[k]* newi_array[k];
        cout << l[k]<< endl;
    }
    return 0;
}