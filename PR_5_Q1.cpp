#include<iostream>
using namespace std;

int main()
{
	int h,p;
	
	cout << "Enter your age : ";
	cin >> h;
	
	try
	{
		if(h < 18)
		{
			throw h;
		}
	
		cout << "You are aligible for vote...";
    }
		catch(...)
		{
			cout << "You are not aligible for vote...";
		}
		
		return 0;
	
}
