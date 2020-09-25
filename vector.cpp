#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec;
    vec.push_back(10);
    vec.push_back(11);
    vec.push_back(12);

    cout<<vec.front()<<endl;
    cout<<vec.back()<<endl;
    cout<<vec.at(1)<<endl;
    return 0;
}
