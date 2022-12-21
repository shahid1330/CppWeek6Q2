#include<iostream>
using namespace std;
class Complex
{
	int a,b;
	public:
		Complex(int a=0, int b=0 )
		{
			Complex::a=a;
			Complex::b=b;
		}
		Complex(Complex &obj)
		{
			a=obj.a;
			b=obj.b;
		}
		
		void input()
		{
			cout<<"ENter Real PArt : ";
			cin>>a;
			cout<<"ENter Imaginary PArt : ";
			cin>>b;
			cout<<endl;
		}
		void show()
		{
			cout<<"Format is "<<a<<" +i"<<b<<endl;
		}
		
		friend Complex add(Complex obj1,Complex obj2);
		friend Complex sub(Complex obj1,Complex obj2);
		
};
	    Complex add(Complex obj1,Complex obj2)
		{
			obj1.a=obj1.a + obj2.a;
			obj1.b=obj1.b + obj2.b;
			return obj1;	
		}
		Complex sub(Complex obj1,Complex obj2)
		{
			obj1.a=obj1.a - obj2.a;
			obj1.b=obj1.b - obj2.b;
			return obj1;
		}
int main()
{
	cout << "MOHAMMAD SHAHID RAZA" << endl;
	cout << "A35404821013" << endl;
	cout << "Week 6 Question 2 output:"<<endl;
	Complex ob1(2,3),ob2(3,7),ob;	
	ob=add(ob1,ob2); ob.show();
	ob=sub(ob1,ob2); ob.show();
	
	cout<<endl<<endl;
	
	Complex obj1(ob), obj2(ob) , obj3;
	obj1.input();  obj2.input();
	obj3=add(obj1,obj2); obj3.show();
	obj3=sub(obj1,obj2); obj3.show();
		
}



