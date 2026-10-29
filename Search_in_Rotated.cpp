#include <iostream>
using namespace std;

int main() 
{
    int array [7]={4,5,6,7,0,1,2};
    int st = 0;
    int end = 7-1;
    int target = 1;
    while(st <= end ){
        int mid = st + (end - st)/2;
        if(target==array[mid]){
            cout << "Element is found" << endl;
            break;
            //left part handle ........
        } else if (array[st] <= array[mid]){
            if(array[st] <=target && target < array[mid])
            {
                end = mid - 1 ;

            } 
            else 
            {
                st = mid+1;
            }

            //Rigst part handle .......
        } else {
            if(array[mid]<target && target <=array[end])
            {
                st = mid + 1;

            }
            else{
                end = mid -1;
            }
            
        }
        
    }
    
    return -1;
}