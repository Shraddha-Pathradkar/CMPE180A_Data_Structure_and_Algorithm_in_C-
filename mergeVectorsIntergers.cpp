#include <iostream>
#include<vector>
using namespace std;

void mergeVectors(vector<int> &result, const vector<int> &vec1, const vector<int> &vec2 ){
   int i=0, j=0;
   while(i<vec1.size() && j<vec2.size()){
      if(vec1[i]<vec2[j]){
          result.push_back(vec1[i]);
          i++;
      }
      else{
          result.push_back(vec2[j]);
          j++;
      }
   }
    while(i<vec1.size()){
          result.push_back(vec1[i]);
          i++;
    }
    while(j<vec2.size()){
          result.push_back(vec2[j]);
          j++;
    }
}


int main()
{
    vector<int> result;
    vector<int> vec1;
    vector<int> vec2;
    vec1.push_back(1);
    vec1.push_back(5);
    vec1.push_back(8);

    vec2.push_back(3);
    vec2.push_back(4);
    vec2.push_back(6);
    vec2.push_back(7);
    vec2.push_back(9);
    vec2.push_back(10);


    mergeVectors(result,vec1,vec2);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }

    return 0;
}
