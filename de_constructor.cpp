#include<iostream>
using namespace std;

class A{
public:

    A(){
    cout<<"Inside Constructor"<<endl;
    cout<<"C++ Object created"<<endl;
        }
    ~A(){
    cout<<"Inside Destructor"<<endl;
    cout<<"C++ Object cdestructed"<<endl;
        }
};
int main()
{
  A a1;
  A a2;
  return 0;
}
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
