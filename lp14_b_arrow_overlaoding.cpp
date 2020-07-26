#include<iostream>
using namespace std;
class general	{
	public:
		int i;
		general *operator -> ()	{
			return this;
		}
		void show ()	{ cout << i << endl; }
};

int main ()	{
	general ob1, ob2;
	ob1 -> i = 30;
	ob2 -> i = 20;
	ob1.show ();
	ob2.show ();
	return 0;
}

