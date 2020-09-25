#include<iostream>
#include<vector>
#include<iterator>

using namespace std;
int main()
{
    vector<int> myvector;

    for (int i=1;i<=5;i++) {
        myvector.push_back(i);
    }

    vector<int> :: iterator ptr;

    cout<<"All elements in the container are";

    for (ptr = myvector.begin(); ptr != myvector.end(); ++ptr) {
        cout<< *ptr <<endl;
    }
    
return 0;
}