#include <iostream>
#include <vector>
#include <set>


using namespace std;

void mergeVectors(const vector<vector<int>> &parentVec,vector<int> &result){
    multiset<int> myset;
    for(int i=0;i<parentVec.size();i++){
        for(int j=0;j<parentVec[i].size();j++){
            myset.insert(parentVec[i][j]);
        }
    }
    for(auto it= myset.begin();it!=myset.end();it++){
        result.push_back(*it);
    }
}

int main()
{
    vector<vector<int>> parentVec;
    vector<int> result;

    vector<int> vec1;
    vec1.push_back(8);
    vec1.push_back(5);
    vec1.push_back(2);

    vector<int> vec2;
    vec2.push_back(7);
    vec2.push_back(9);
    vec2.push_back(3);

    vector<int> vec3;
    vec3.push_back(4);
    vec3.push_back(8);
    vec3.push_back(2);

    parentVec.push_back(vec1);
    parentVec.push_back(vec2);
    parentVec.push_back(vec3);

    mergeVectors(parentVec,result);

    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}
