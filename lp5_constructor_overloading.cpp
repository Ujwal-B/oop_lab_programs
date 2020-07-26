#include<iostream>
using namespace std;
class date	{
	int day, month, year;
	public:
		date (char *d)	{
			sscanf (d, "%d%*c%d%*c%d", &day, &month, &year);
		}
		date (int dd, int mm, int yyyy)	{
			day = dd;
			month = mm;
			year = yyyy;
		}
		void show_date ()	{
			cout << "Date is " << day << "-" << month << "-" << year << endl;
		}
};

int main ()	{
	date ob1 (12, 10, 2020), ob2 ("12/10/2020");
	ob1.show_date ();
	ob2.show_date ();
	return 0;
};
