#include <iostream>
using namespace std;

//class parent
//tambahkan final sesudag nama class
// untuk mencegah adanya overriding

class baseClass
{
public:
	virtual void perkenalan()
	{
		cout << "halo saya function daari base class";
	}
};

class derivedClass : public baseClass
{
public:
	void perkenalan()
	{
		cout << "halo saya function dari derived class";
	}
};

int main()
{
	derivedClass a;
	a.perkenalan();
	
	return 0;
}