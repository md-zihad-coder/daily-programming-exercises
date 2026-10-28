#include <iostream>
using namespace std;

int main() 
{
    int binary [7] = {1,2,3,5,9,20,70};
    int st = 0; 
    int end = 7 - 1;
    int target = 20 ;          ///Binary search algorithm 
    while(st <= end){
        int mid = st + (end-st)/2;
        if (binary[mid]== target){
            cout << binary[mid] << endl;
            break;
        } else if (binary[mid]<target){
            st= mid+1;
        } else {
            end = mid-1;
        }
    }

    return 0;
}