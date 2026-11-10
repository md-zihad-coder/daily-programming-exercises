#include <iostream>
#include <unordered_set>
using namespace std;

int main() 
{
    unordered_set<int>s;
    s.insert(11);
    s.insert(22);
    s.insert(33);
    s.insert(22);
    s.insert(44);
    cout << s.size() << endl;
    return 0;
}