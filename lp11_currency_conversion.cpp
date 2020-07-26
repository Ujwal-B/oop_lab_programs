#include<iostream>
using namespace std;
class currency	{
	public:
		float rs;
		virtual void convert () = 0;
		void display ()	{
			cout << " is equivalent to " << rs << " rupees\n";
		}
};

class dollar : public currency	{
	public:
		float dol;
		
		void convert ()	{
			cout << "Enter currency\n";
			cin >> dol;
			rs = dol * 54.3;
			cout << dol << " in dollars";
			display ();
		}
};
class euro : public currency	{
	public:
		float eur;
		
		void convert ()	{
			cout << "Enter currency\n";
			cin >> eur;
			rs = eur * 70;
			cout << eur << " in euros";
			display ();
		}
};
class pound : public currency	{
	public:
		float pnd;
		
		void convert ()	{
			cout << "Enter currency\n";
			cin >> pnd;
			rs = pnd * 81.1;
			cout << pnd << " in pounds";
			display ();
		}
};

int main ()	{
	dollar d;
	euro e;
	pound p;
	int c;
	cout << "Enter 1 for dollar, 2 for euro, 3 for pound\n";
	cin >> c;
	switch (c)	{
		case 1:	d.convert ();
			break;
		case 2:	e.convert ();
			break;
		case 3:	p.convert ();
			break;
		default:return 1;
	}
	return 0;
}
