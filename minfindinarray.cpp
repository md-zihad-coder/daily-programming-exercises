#include <iostream>
#include <climits>
using namespace std;

int main() 
{
    int nm=5;
    int tm[5]={8,7,1,9,20};
    int smalle = INT_MAX;
    for(int i= 0;i<nm;i++){
        if(tm[i]<smalle){
            smalle = tm[i];
        }
    }
    cout << smalle << endl;
    
    
    return 0;
}
