#include<iostream>
using namespace std;
int topper = 0, topper_marks = 0;
class student	{
	public:
		char usn[10], name[20];
		float marks[3];
		int best;
		static int topper, topper_marks;

		void read ()	{
			cout << "Enter name, USN, and marks of 3 tests\n";
			cin >> name >> usn;
			for (int i = 0; i < 3; i ++)
				cin >> marks[i];
		}
		void display ()	{
			cout << "Name : " << name << endl;
			cout << "USN : " << usn << endl;
			cout << "Average of best of 2 : " << best << endl;
		}
		void calculate ()	{
			int mark1, mark2;
				if (marks[0] > marks[1])
					mark1 = marks[0];
				else
					mark1 = marks[1];
				if (marks[0] > marks[2])
					mark2 = marks[0];
				else
					mark2 = marks[2];
				best = (mark1 + mark2) / 2;
		}
};
//int student :: topper = 0;
//int student :: topper_marks = 0;

int main ()	{
	int n;
	cout << "Enter number of students\n";
	cin >> n;
	student s[n];
	for (int i = 0; i < n; i ++)	{
		s[i].read ();
		s[i].calculate ();
	}
	for (int i = 0; i < n; i ++)	{
		if (topper_marks < s[i].best)	{
			topper = i;
			topper_marks = s[i].best;
		}
	}
	for (int i = 0; i < n; i ++)	{
		s[i].display ();
	}
	cout << "Topper is student " << topper + 1 << " with marks " << topper_marks << endl;
	return 0;
}
