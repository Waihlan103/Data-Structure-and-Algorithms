#include<vector>
#include<iostream>

using namespace std;

int main()
{
    vector<int> MyVec = { 1, 2, 3, 4, 5, 6 };
    auto it = MyVec.insert(MyVec.begin(), 5,88);
    MyVec.insert(it, 33);

    cout<<"The vector elements are: ";
    for (auto it = MyVec.begin(); it != MyVec.end(); ++it)
        cout<< *it <<"  "<<endl;
    
    return 0;
}