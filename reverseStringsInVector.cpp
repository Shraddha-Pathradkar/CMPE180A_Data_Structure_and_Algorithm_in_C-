#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


using namespace std;


void reverseStringsInVec(vector<string>&vec){
    for(int i=0;i<vec.size();i++){
            for(int j=0;j<vec[i].length();j++){
                reverse(vec[i].begin(),vec[i].end());
            }
    }
}

int main()
{
    vector<string> vec;
    vec.push_back("abc");
    vec.push_back("def");
    vec.push_back("ghi");
    vec.push_back("jkl");

    reverseStringsInVec(vec);

    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }

    return 0;
}
