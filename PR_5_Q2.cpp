#include<iostream>
using namespace std;

class A
{
	public:
		int a;
		getData()
		{
			cout << "Enter value of A : ";
			cin >> a;
		}
};

class B : public A
{
	public:
		int b;
		getData2()
		{
			cout << "Enter value of B : ";
			cin >> b;
		}
};

class C : public A
{
	public:
		int c;
		getData3()
		{
			cout << "Enter value of C : ";
			cin >> c;
		}
};

class D : public B, public C
{
	public:
		int d;
		getData4()
		{
			cout << "Enter value of D : ";
			cin >> d;
		}
		
		sumData()
		{
			int sum;
			
			sum = B::a + b + c + d;
			
			cout << "Sum of all four values : " << sum;
			
		}
};

int main()
{
	D obj;
	
	obj.B::getData();
	obj.getData2();
	obj.getData3();
	obj.getData4();
	obj.sumData();
	
	return 0;
	
}
