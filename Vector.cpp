#include <iostream>
#include <vector>  
using namespace std;

int main() 
{
    vector<char > vec = {'z','i','h','a','d'};
    cout << vec.size() << endl;
    for(char i : vec){
        cout << i << endl;
    }

   
    return 0;
}
