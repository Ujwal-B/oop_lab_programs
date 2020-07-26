#include<iostream>
using namespace std;
class resource	{
	public:
	static int res;
	void free_res ()	{
		if (!res)
			cout << "Resource is already free\n";
		else	{
			res = 0;
			cout << "Resource is made free\n";
		}
	}
	void set_res ()	{
		if (res)
			cout << "Resource is busy now\n";
		else	{
			res = 1;
			cout << "Resource is allotted now\n";
		}
	}
};

int resource :: res;

int main ()	{
	resource ob1, ob2;
	ob1.set_res ();
	ob2.set_res ();
	ob1.free_res ();
	ob2.set_res ();
	ob2.free_res ();
	return 0;
}
