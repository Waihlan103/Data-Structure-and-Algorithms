
#include<iostream>
#include<vector>
using namespace std;
#define WINHTUT 10

int main()
{
    vector<int> myVec(WINHTUT);

    for (int i = 0; i < WINHTUT; i++)
        myVec[i] = i;
    cout<<"Vector size initailly; "<<myVec.size();

    cout<<"\nVector elements are"; 

    for (int i=0;i<WINHTUT;i++)
        cout<<myVec[i]<<"  ";
    myVec.resize(5);
    cout<<"\n\nVector after resize are: "<<myVec.size();

    cout<<"\nVector elements after resize(5) are: ";
    for (int i=0;i<WINHTUT;i++)
        cout<<myVec[i]<<"  ";
    myVec.shrink_to_fit();

    cout<<"\n\nVector size after shrink to fit"<<myVec.size();
    
    cout<<"\nVector elements after shrink to fit are: ";
    for (int i=0;i<WINHTUT;i++)
        cout<<myVec[i]<<"  ";
        
    return 0;
}