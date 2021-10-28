#include <iostream>
using namespace std;

bool checkPalindrome(string test){
    for(int i=0;i<test.length()/2;i++){
        if(test[i]!=test[test.length()-1-i]) return false;
    }
    return true;
}

int main()
{

    string test1= "abcdefcghi";
    string test2= "asdfdsa";

    if(checkPalindrome(test1)){
        cout<<"Yes "<<test1<<" is a palindrome.";
    }
    else{
        cout<<"No,"<<test1<< " is not a palindrome.";
    }
    cout<<endl;
    if(checkPalindrome(test2)){
        cout<<"Yes,"<<test2<< " is a palindrome.";
    }
    else{
        cout<<"No,"<<test2<< " is not a palindrome.";
    }

    return 0;
}
