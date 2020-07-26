#include<iostream>
using namespace std;
class object	{
	public:
	static int num;
	object ()	{
		num ++;
	}
	~object ()	{
		cout << "1 object destroyed. Total number of objects remaining: " << num << endl;
		num --;
	}
	void num_of_objects ()	{
		cout << "no. of objects in existence is " << num << " currently" << endl;;
	}
};

int object :: num;

int main ()	{
	object ob1, ob2, ob3;
	ob1.num_of_objects ();
	object ob4;
	ob4.num_of_objects ();
	return 0;
}

