#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main ()	{
	ifstream in ("/home/ujwal/example.txt");
	if (!in)	{
		cout << "Input file could not be opened: Exiting...\n";
		return 1;
	}
	ofstream of ("/home/ujwal/outsample.txt");
	if (!of)	{
		cout << "Output file could not be opened: Exiting...\n";
		return 1;
	}
	char str[5][20];
	char temp[20];
	cout << "File contents:\n";
	for (int i = 0; i < 5; i ++)	{
		in >> str[i];
		cout << str[i] << endl;
	}
	for (int i = 1; i < 5; i ++)
		for (int j = 1; j < 5; j ++)
			if (strcmp (str[j-1], str[j]) > 0)
			{
				strcpy (temp, str[j-1]);
				strcpy (str[j-1], str[j]);
				strcpy (str[j], temp);
			}
	cout << "Sorted file contents\n";
	for (int i = 0; i < 5; i ++)
		cout << str[i] << endl;
	return 0;
}
