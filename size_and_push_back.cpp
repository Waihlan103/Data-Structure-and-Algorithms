#include<iostream>
#include<vector>
int main()
{
    std::vector<int> myVec;
    std::cout << "0. size" << myVec.size() << '\n';

    for (int i=0;i<10;i++) myVec.push_back(i);
    std::cout << "1. size" << myVec.size() << '\n';

    myVec.insert (myVec.end(), 10, 100);
    std::cout << "2. size" << myVec.size() << '\n';

    myVec.pop_back();
    std::cout << "3. size" <<myVec.size() << '\n';

    std::cout<< "All the elements in the container are:> "<<std::endl;

    for(auto it=myVec.begin() ; it!=myVec.end() ; ++it)
    std:: cout<<*it<<"  ";

    return 0;
}
