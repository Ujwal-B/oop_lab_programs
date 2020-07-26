//Not Working yet
#include<iostream>
#include<cstring>
using namespace std;
class employee	{
	private:
		string name;
		int age;
	public:
		int basic, sal, da, it, gsal, netsal;
	public:
		employee ()	{
			cout << "New employee object is created\n";
		}
		void details ()	{
			cout << "Please enter employee details:\n";
			cout << "Enter name, age and basic salary\n";
			cin >> name;
			cin >> age >> basic;
		};
		void display ()	{
			cout << "The entered details are:\n";
			cout << this -> name << "\n" << this -> age << "\n" << this -> basic << endl;
			cout << "Calculated data of employee:" << endl;
			cout << "basic salary " << basic << endl;
			cout << "salary " << sal << endl;
			cout << "daily allowance " << da << endl;
			cout << "gross salary " << gsal << endl;
			cout << "IT " << basic << endl;
			cout << "net salary " << netsal << endl;
		}
		void calculate ()	{
			da=(0.52)*basic;
			sal=da+basic;
			it=(0.3)*gsal;
			netsal=basic+da-it;
		}

};

int main ()	{
	int n;
	cout << "Enter the number of enployees\n";
	cin >> n;
	employee e[n], *p;
	for (int i = 0; i < n; i ++)	{
		p = &e[i];
		cout << "Employee " << i + 1 << endl;
		p -> details ();
		p -> calculate ();
		cout << endl;
	}
	for (int i = 0; i < n; i ++)	{
		p = &e[i];
		cout << "Employee " << i + 1 << endl;
		p -> display ();
		cout << endl;
	}
	return 0;
}
