#include<iostream>
#include<fstream>
using namespace std;
struct acc_holder	{
	char name[100];
	long acc;
	double balance;
};
int main ()	{
	int no;
	cout << "Enter number of customers\n";
	cin >> no;
	acc_holder a [no];
	ofstream op ("/home/ujwal/bankdb.txt");
	if (!op)	{
		cout << "Error in opening file to write values. Exiting...\n";
		return 1;
	}
	for (int i = 0; i < no; i ++)
	{
		cout << "Enter name, account number and balance\n";
		cin >> a[i].name >> a[i].acc >> a[i].balance;
		op.write ((char *) &a[i], sizeof(struct acc_holder));
	}
	op.close ();

	acc_holder b[no];
	ifstream ip ("/home/ujwal/bankdb.txt");
	if (!ip)	{
		cout << "Error opening file\n";
		return 1;
	}
	for (int i = 0; i < no; i ++)
	{
		ip.read ((char *)&b[i], sizeof(struct acc_holder));
		cout << "Name: " << b[i].name << endl;
		cout << "Account number: " << b[i].acc << endl;
		cout << "Balance: " << b[i].balance << endl;
	}
	ip.close ();
	return 0;
}


