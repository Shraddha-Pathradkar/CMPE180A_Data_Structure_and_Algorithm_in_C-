#include <iostream>
using namespace std;

class Base{
     public:
        Base();
        ~Base();
};
class Derived: public Base{
    public:
        Derived();
        ~Derived();
};

Base::Base(){
    cout<<"Base Constructor"<<endl;
}
Base::~Base(){
    cout<<"Base Destructor"<<endl;
}

Derived::Derived(){
    cout<<"Derived Constructor"<<endl;
}
Derived::~Derived(){
    cout<<"Derived Destructor"<<endl;
}

int main()
{
    Derived obj;

    return 0;
}
