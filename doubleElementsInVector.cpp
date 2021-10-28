#include <iostream>
#include <vector>
#include <set>

using namespace std;

void doubleElementsInVector(vector<double> &vec){
    multiset<double> myset;
    for(int i=0;i<vec.size();i++){
        myset.insert(vec[i]*vec[i]);
    }
    int i=0;
    for(auto itr= myset.begin();itr!= myset.end();itr++){
         vec[i]=*itr;
         i++;
    }
}

int main()
{

    vector<double> vec;
    vec.push_back(0);
    vec.push_back(3.5);
    vec.push_back(4);
    vec.push_back(6.7);
    vec.push_back(-2);
    vec.push_back(9);

    doubleElementsInVector(vec);
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}
