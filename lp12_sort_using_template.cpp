#include<iostream>
using namespace std;
template <class X> void sort (X *items, const int count)	{
	int i, j;
	X temp;
	for (i = 0; i < count; i ++)	{
		for (j = i + 1; j < count; j ++)	{
			if (items [i] > items [j])	{
				temp = items [i];
				items [i] = items [j];
				items [j] = temp;
			}
		}
	}
}

template <class X> void display (X *items, const int count)	{
	for (int i = 0; i < count ; i ++)
		cout << items[i] << "\t";
	cout << endl;
}

int main ()	{
	int iarray [] = {1, 3, 5, 4, 2, 9, 8};
	double darray [] = {1.2, -3, 2.5, 4.6, 5, -19, -80};
	cout << "initial arrays\n";
	display (iarray, 7);
	display (darray, 7);
	sort (iarray, 7);
	sort (darray, 7);
	cout << "sorted arrays\n";
	display (iarray, 7);
	display (darray, 7);
	return 0;
}

