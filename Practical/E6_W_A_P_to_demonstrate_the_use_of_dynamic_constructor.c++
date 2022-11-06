#include <iostream>
using namespace std;

class demo {
	int* p;

public:
	// default constructor
	demo()
	{

		// allocating memory at run time
		p = new int;
		*p = 10;
	}

	// parameterized constructor
	demo(int x)
	{
		p = new int;
		*p = x;
	}
	void display()
	{
		cout << *p << endl;
	}
};

int main()
{

	// default constructor would be called
	demo obj1 = demo();
	obj1.display();

	// parameterized constructor would be called
	demo obj2 = demo(30);
	obj2.display();
}
