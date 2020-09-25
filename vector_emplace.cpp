#include<vector>
#include<iostream>
using namespace std;
int main()
{
    vector<int> myVec = {10, 20, 30, 40, 50};
    auto it = myVec.emplace(myVec.begin()+2, 99);

    cout<<"All the elements are: ";
    for (auto it = myVec.begin(); it != myVec.end(); it++)
    cout<<*it<<"  ";
        
    return 0;
}