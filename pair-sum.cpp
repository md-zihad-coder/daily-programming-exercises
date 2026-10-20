#include <iostream>
using namespace std;

int main() 
{
    int a = 7;
    int ar [7] = {1,2,30,34,50,60,66};      
    int target = 110; //traget         time complexity O(n) and space complexity O(1) (((leaner approach)))
    int st = 0;
    int end = a-1;
   
    while(st < end){
        int pa = ar[st]+ar[end];
        if(pa==target){
            cout << "Index number = " <<  st << " and " << end<< endl;
            break;
        }else if(pa<target){
            st++;
        }else{
            end--;
        }
        
       

    }
   

     
    
    return 0;
}