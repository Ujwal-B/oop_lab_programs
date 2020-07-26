#include<iostream>
using namespace std;
struct node	{
	int info;
	node *link;
};
typedef struct node node;

class list	{
	node *f;
	public:
		list ()	{
			f = NULL;
		}
		void ins (int num)	{
			node *p;
			try	{
				p = new node;
			}
			catch (bad_alloc xa)	{
				cout << "Allocation failure\n";
				return;
			}
			p -> info = num;
			p -> link = f;
			f = p;
		}
		void del ()	{
			node *temp = f;
			if (f == NULL)	{
				cout << "No elements to delete\n";
				return;
			}
			cout << "Deleted element is " << f -> info << endl;
			f = f -> link;
			delete temp;
		}
		void display ()	{
			node *temp = f;
			if (f == NULL)	{
				cout <<"No elements to display\n";
				return;
			}
			while (temp != NULL)	{
				cout << temp -> info << "  ";
				temp = temp -> link;
			}
			cout << endl;
		}
};

int main ()	{
	list ob;
	int item, choice;
	for (;;)	{
		cout << "1. to insert, 2. to delete, 3. to display, 4. to exit\n";
		cin >> choice;
		switch (choice)	{
			case 1:	cout << "Enter item\n";
				cin >> item;
				ob.ins (item);
				break;
			case 2:	ob.del ();
				break;
			case 3: ob.display ();
				break;
			default:exit (0);
		}
	}
}
