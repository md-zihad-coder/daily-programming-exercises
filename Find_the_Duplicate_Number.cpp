#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() 
{
    bool found = false;
    vector<int>vac ={1,3,5,5,2};
    int l = vac.size();
    sort(vac.begin(),vac.end());
    
    int k=0;
    for(int j = 0; j<l; j++){
        if(vac[j]==vac[j+1]){        //Find the Duplicate Number
            cout<<"Found the duplicate number : "<<vac[j]<<endl;
            found=true;
        }
             
        
    }
    if(!found){
        cout<< "Not found" << endl;
    }
    



    return 0;
}