#include<iostream>
#define SIZE 100
using namespace std;
class stack	{
	private:
		int stack_arr[SIZE];
		int pos;
	public:
		void init ();
		void push (int);
		void pop ();
		void display ();
};

void stack :: init ()	{
	for (int i = 0; i < SIZE; i ++)	{
		stack_arr[i] = 0;
	}
	pos = -1;
}

void stack :: push (int element)	{
	if ( pos == SIZE - 1 )	{
		cout << "Stack full... Element cannot be added\n";
		return;
	}
	pos ++;
	stack_arr[pos] = element;
	return;
}

void stack :: pop ()	{
	if ( pos < 0 )	{
		cout << "Stack empty... No elements to pop\n";
		return;
	}
	cout << "Popped element is " << stack_arr[pos] << endl;
	pos --;
	return;
}

void stack :: display ()	{
	if ( pos < 0 )	{
		cout << "Stack empty\n";
		return;
	}
	for (int i = 0; i <= pos; i++)
		cout << stack_arr[i] << "\t";
	cout << endl;
}

int main ()	{
	stack S1;
	S1.init ();
	int element, choice;
	for (; ;)	{
		cout << "Press 1. to push, 2. to pop, 3. to display, 4. to exit\n";
		cin >> choice;
		switch (choice)	{
			case 1:	cout << "Enter element\n";
				cin >> element;
				S1.push (element);
				break;
			case 2:	S1.pop ();
				break;
			case 3:	S1.display ();
				break;
			default:cout << "Other key pressed... Program terminating\n";
				exit (0);
		}
	}
}
