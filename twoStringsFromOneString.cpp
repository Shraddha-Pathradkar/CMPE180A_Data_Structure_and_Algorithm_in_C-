#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector <string> twoStringsFromOne( string const &test){
    vector <string> result;
    string firstHalf;
    string secondHalf;

    for(int i=0;i<test.length()/2;i++){
        firstHalf+=test[i];
    }
    for(int i=test.length()/2;i<test.length();i++){
        secondHalf+=test[i];
    }
    result.push_back(firstHalf);
    result.push_back(secondHalf);
    return result;
}


int main()
{
    string test="Shraddha";
    for(int i=0;i<twoStringsFromOne(test).size();i++){
        cout<<twoStringsFromOne(test)[i]<<endl;
    }
    return 0;
}
