#include<iostream>

using namespace std;

class Complex{
	
	int real, img;
	public:
	
	Complex(){
		real = 0;
		img =0;
		}
	Complex(int x,int y){
		real = x;
		img  = y;
		}
	




	void display(){
		cout<<"The Value for real part :"<< real <<"& img is :"<< img<<endl;
		}

	Complex operator +(Complex ob){
		Complex temp;
		temp.real = real + ob.real;
		temp.img  = img  + ob.img;
		return temp;
		}
};


int main()
{

	Complex c1(1,1),c2(2,2);
	Complex c3;
	c1.display();
	c2.display();
	
    	c3=c1.operator+(c2);
	c3.display();
}

