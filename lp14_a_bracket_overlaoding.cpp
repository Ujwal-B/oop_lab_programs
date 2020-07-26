#include<iostream>
using namespace std;
class location	{
	public:
		int latitude;
		int longitude;
		location () {}
		location (int lt, int lg)	{
			latitude = lt;
			longitude = lg;
		}
		location operator + (location ob2)	{
			this -> latitude += ob2.latitude;
			this -> longitude += ob2.longitude;
			return *this;
		}
		location operator () (int i, int j)	{
			this -> latitude = i;
			this -> longitude = j;
			return *this;
		}
		void show ()	{
			cout << "Latitude = " << latitude << endl;
			cout << "Longitude = " << longitude << endl;
		}
};

int main ()	{
	location ob1(10,10), ob2(3,4), ob3;
	cout << "Ob1 and ob2\n";
	ob1.show ();
	ob2.show ();
	ob3 = ob1 + ob2 (1,1);
	location ob4;
	ob4(10,20);
	ob3.show ();
	ob4.show ();
	return 0;
}
