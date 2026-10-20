#include <iostream>
using namespace std;
#include <vector>
int main() 
{
    vector<int>nums = {2,2,1,1,2,1,1,2,2,3};
    int n =  10;
    int ind= n-1;
    int st=0;
    int vote=0;
    int candiate = 0;
    while(st<n){
        if(vote==0){
            candiate =nums[st];
        }
        if(candiate==nums[st]){
            vote+=1;
            

        }else{
            vote-=1;
            
        }

        st++;    
   
}
std::cout << candiate << std::endl;
 return 0;

}