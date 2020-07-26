#include<iostream>
using namespace std;
template <class atype>class sort	{
	public:
		atype arr[10];
		atype &operator [] (int i)	{
			if ( i = 0 || i > 9 )	{
				cout << "Index value out of bounds\n";
				exit (1);
			}
			return arr[i];
		}
		sort ()	{}
		void read (int z)	{
			for (int i = 0; i < z; i ++)	{
				cout << "enter " << z << " elements\n";
				cin >> arr[i];
			}
		}
		void display (int z)	{
			for (int i = 0; i < z; i ++)	{
				cout << arr[i] << "\t";
			}
			cout << endl;
		}
		template <class X> void sort_func (X *items, int count)	{
			X temp;
			for (int i = 0; i < count; i ++)	{
				for (int j = i; j < count; j ++)	{
					if (items[i] > items[j])	{
						temp = items[i];
						items[i] = items[j];
						items[j] = temp;
					}
				}
			}
		}
};

int main ()	{
	sort <int> intob;
	sort <double> doubleob;
	int size;
	cout << "Enter size\n";
	cin >> size;
	intob.read (size);
	doubleob.read (size);
	intob.display (size);
	doubleob.display (size);
	intob.sort_func (intob.arr, size);
	doubleob.sort_func (doubleob.arr, size);
	intob.display (size);
	doubleob.display (size);
	return 0;
}

