#include <iostream>
using namespace std;

int main() 
{
    ///Peak index in Mountain array 
    // leetcode problem 852 
    int array [6]={0,3,8,9,5,2};
    int st = 1;
    int end = 6-2;
    int maxnum;
    while(st <= end){
        int mid = st + (end-st)/2;
        if (array[mid-1]<array[mid] && array[mid]>array[mid+1]){
            cout << "Peak index is: " << mid << endl;
            break ; 
        }
        else if (array[mid-1]>array[mid]){
            end = mid - 1;
        }
        else {
            st = mid + 1 ;
        }
       
    }


    
    return 0;
}