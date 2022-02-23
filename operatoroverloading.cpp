
#include<iostream>
using namespace std;

class Complex
{
	float real,img;
	public:
		Complex() 
		{
			real = 0;
			img = 0;
		}
		Complex(int a,int b) 
		{
			real = a;
			img = b;
		}
		void display()
		{
			cout<<"Real:"<<real<<" Imaginary:"<<img<<endl;
		}
		Complex operator +(Complex C) 
		{
			Complex temp;
			temp.real = real + C.real ;
			temp.img = img + C.img;
			return temp;
		}
		Complex operator -(Complex C) 
		{
			Complex temp;
			temp.real = real - C.real;
			temp.img = img - C.img;
			return temp;
		}
		Complex operator *(Complex C) 
		{
			Complex temp;
			temp.real = real * C.real;
			temp.img = img * C.img;
			return temp;
		}
		friend Complex operator /(Complex C1,Complex C2);
};



int main()
{
	Complex c1(1,2),c2(3,4),c3;
	c1.display();
	c2.display();
	c3.display();
	c3 = c1.operator +(c2);
	c3.display();
	c3 = c1.operator -(c2);
	c3.display();
	c3 = c1.operator *(c2);
	c3.display();

	return 0;
}
