#include<iostream>
#include<cstring>
using namespace std;
class negative_number	{
	public:
		char str_what[100];
		int what;
		negative_number (char *s, int num)	{
			strcpy (str_what, s);
			what = num;
		}
};
class divide_by_zero	{
	public:
		char str_what[100];
		int what;
		divide_by_zero (char *s, int num)	{
			strcpy (str_what, s);
			what = num;
		}
};
int main ()	{
	int nr, dr, num;
	try	{
		cout << "Enter a number\n";
		cin >> num;
		if (num < 0)
			throw negative_number ("Number not positive", num);
	}	catch (negative_number n)	{
		cout << n.str_what << endl;
		cout << n.what << endl;
	}
	try	{
		cout << "Enter numerator and denominator\n";
		cin >> nr >> dr;
		if (dr == 0)
			throw divide_by_zero ("Denominator is zero", dr);
	}	catch (divide_by_zero obj)	{
		cout << obj.str_what << endl;
		cout << obj.what << endl;
	}
	return 0;
}
