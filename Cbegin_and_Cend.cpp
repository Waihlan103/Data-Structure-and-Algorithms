#include<iostream>
#include<vector>

using namespace std;
int main()
{
    vector<int> MyVec;

    MyVec.push_back(1);
    MyVec.push_back(2);
    MyVec.push_back(3);
    MyVec.push_back(4);
    MyVec.push_back(5);

    cout<<"The vector elements in the reverse order are: \n";
    for (auto it = MyVec.rbegin(); it != MyVec.rend(); it++)
    cout<< *it <<"   "<<endl;

    return 0;
}