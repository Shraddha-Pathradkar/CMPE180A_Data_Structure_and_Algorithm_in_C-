#include <iostream>
#include <vector>
#include <string>


using namespace std;

class javaStringBuilder{
    public:
        append(string str);
        clearVec();
        toString();
        javaStringBuilder();
        ~javaStringBuilder();

    private:
        vector<string> vec;

};
javaStringBuilder::javaStringBuilder(){
cout<<"Constructor"<<endl;
}
javaStringBuilder::~javaStringBuilder(){
cout<<"Destructor"<<endl;
}
javaStringBuilder::append(string str){
    vec.push_back(str);
}
javaStringBuilder::clearVec(){
    vec.clear();
}
javaStringBuilder::toString(){
    string resultStr;
    for(int i=0;i<vec.size();i++){
        resultStr+=vec[i];
    }
    cout<< resultStr<<endl;
}

int main()
{
    javaStringBuilder obj;
    obj.append("abc");
    obj.append("abc");
    obj.append("abc");
    obj.append("abc");
    obj.toString();

    return 0;
}
