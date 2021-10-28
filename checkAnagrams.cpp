#include <iostream>
#include <string>
#include <set>


using namespace std;

bool checkAnagram(string str1,string str2){
    multiset<char> myset;
    for(int i=0;i<str1.length();i++){
        myset.insert(str1[i]);
    }
    for(int i=0;i<str2.length();i++){
        if(myset.find(str2[i])!=myset.end()){
            auto itr = myset.find(str2[i]) ;
            myset.erase(itr);
        }
    }
     if(myset.size()) return false;
     return true;
}

int main()
{
    if(checkAnagram("anagram","graanam")) cout<< "Yes they are anagrams."<<endl;
    else cout<< "No they are not anagrams."<<endl;

    return 0;
}
