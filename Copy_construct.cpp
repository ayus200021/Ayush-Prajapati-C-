#include<iostream>
using namespace std;

class A{
  int m,n;
	public:
	A(int x,int y){
		m=x;
		n=y;
		cout<<"Parameterized Constructor"<<endl;
	}
	A(A &x){
		m=x.m;
		n=x.n;
		cout<<"Copy Constructor"<<endl;
	}
};
int main(){
	A obj1(5,6);
	A obj2(obj1);
}




