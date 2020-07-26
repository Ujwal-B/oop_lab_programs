#include<iostream>
using namespace std;

class patient	{
	protected:
		char name[100];
		int age;
		char gender;
	public:
		void details ()	{
			cout << "Enter patient details\n";
			cout << "Enter name,age, and gender (M or F)\n";
			cin >> name >> age >> gender;
		}
		void show ()	{
			cout << "Patient's name is " << name << endl;
			cout << "Patient's age is " << age << endl;
			cout << "Patient's gender is " << gender << endl;
			if (age > 12)
				cout << "This is an adult patient\n";
		}
};

class child : public patient	{
	private:
		char vaccine_name[20];
	public:
		void get_details ()	{
			details ();
			if (age <= 12)	{
				cout << "Enter vaccine to be given\n";
				cin >> vaccine_name;
			}
		}
		void show_details ()	{
			show ();
			if (age <= 12)
				cout << "This is a paediatric patient\n";
		}
};

int main ()	{
	patient p[10];
	child c[10];
	int pat_num, child_num;
	cout << "Enter no. of adult patients\n";
	cin >> pat_num;
	cout << "Enter no. of paediatric patients\n";
	cin >> child_num;
	for (int i = 0; i < pat_num; i ++)
		p[i].details ();
	for (int i = 0; i < child_num; i ++)
		c[i].get_details ();
	for (int i = 0; i < pat_num; i ++)
		p[i].show ();
	for (int i = 0; i < child_num; i ++)
		c[i].show_details ();
	return 0;
}
