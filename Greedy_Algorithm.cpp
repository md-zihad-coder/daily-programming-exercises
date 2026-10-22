#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int a[8] = {7,44,4,6,3,2,9,8};
    int n = 8;
    int best_buy = a[0];
    int profit = 0;
    for (int i = 0; i<n;i++){      ///Greedy Algorithm  
        if(a[i]<best_buy){
            best_buy = a[i];
        }
        profit = max( profit,a[i]-best_buy);
    }
    cout << "best buy = " << best_buy << endl;
    cout << "profit = " << profit << endl;
   
    return 0;
}