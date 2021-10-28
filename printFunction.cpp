#include <iostream>

using namespace std;
void printAText(){
cout<<"Hello People!"<<endl;
}
void printError(){
cerr<<"Error Text"<<endl;
}

int main()
{
    printAText();
    printError();

    return 0;
}
