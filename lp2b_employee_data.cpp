#include <iostream>
using namespace std;
inline int largest (int a, int b, int c = 50)	{
	return ( (a > b && a > c) ? a : b > c ? b : c);
}
int main ()	{
	int result = largest (10, 20, 70);
	cout << "Largest number is " << result << endl;
	return 0;
}
