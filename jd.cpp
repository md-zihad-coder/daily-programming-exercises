#include <iostream>
using namespace std;
int linear(int num[], int m , int target ){
    for(int i = 0 ; i < m ; i ++){
        if(num[i]==target){
            return i ;
            break;
        }
    
    }
    return -1;

}

int main() 
{  
    int target = 60;
    int m= 5;
    int num[5]={20,40,50,60,70} ;
    cout << linear(num,m,target) << endl ;
   
    return 0;
}