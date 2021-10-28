#include <iostream>

using namespace std;

string mergeStrings(string str1,string str2){
    int i=0;
    int j=0;
    string result;
    while(i<str1.length()&&j<str2.length()){
        result+=str1[i];
        result+=str2[j];
        i++;
        j++;
    }
    while(i<str1.length()){
        result+=str1[i];
        i++;
    }
    while(j<str2.length()){
        result+=str2[j];
        j++;
    }
    return result;
}

int main()
{
    cout<<mergeStrings("Srdha","hada");


    return 0;
}
