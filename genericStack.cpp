#include <iostream>
#include <vector>
#include <string>


using namespace std;

template <typename T>
class genericStack{

    public:
        push(T item);
        pop();
        peek();
        void print();
    private:
        vector<T> vec;
};

template <typename T>
genericStack <T>::push(T item){
    vec.push_back(item);
}
template <typename T>
genericStack <T>::pop(){
    vec.pop_back();
}
template <typename T>
genericStack <T>::peek(){
    cout<<vec[vec.size()-1]<<endl;
}
template <typename T>
void genericStack <T>::print(){
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
}


int main()
{
    genericStack<string> obj;
    obj.push("abc");
    obj.push("def");
    obj.push("geh");
    cout<<"pushing : ";
    obj.print();
    cout<<"peeking : ";
    obj.peek();
    obj.pop();
    cout<<"poping : ";
    obj.print();

    return 0;
}
