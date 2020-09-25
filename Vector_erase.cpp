#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> myVec;

    for (int i=1;i<=10;i++) myVec.push_back(i);
    myVec.erase(myVec.begin(), myVec.begin()+3);
     myVec.erase(myVec.begin()+5);

    cout<<"My Vectors contains are: ";
    for(unsigned i=0;i<myVec.size();i++)
        cout<< ' ' <<myVec[i];
    cout<< '\n';

    return 0;
}