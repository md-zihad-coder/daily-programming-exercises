#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{ 
    
    int a[7]={-3,5,-1,-6,8,4,-2} ;
    int b = 7;
    int maxsum = a[0];
    int crusum = 0;
    for(int i = 0; i<b ;i++){
        crusum +=a[i];
        maxsum = max(maxsum,crusum);
        if(crusum<0){
            crusum = 0;
        }
            
       
    }
    cout << maxsum << endl;

    
    return 0;
}