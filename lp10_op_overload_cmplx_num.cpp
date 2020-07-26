#include<iostream>
using namespace std;
class complex_num	{
	public:
		int real_num;
		int imaginary_num;
		complex_num (int rnum, int inum)	{
			real_num = rnum;
			imaginary_num = inum;
		}
		complex_num operator + (complex_num ob2)	{
			this -> real_num += ob2.real_num;
			this -> imaginary_num += ob2.imaginary_num;
			return *this;
		}
		complex_num operator - (complex_num ob2)	{
			this -> real_num -= ob2.real_num;
			this -> imaginary_num -= ob2.imaginary_num;
			return *this;
		}
		complex_num operator ++ ()	{
			this -> real_num ++;
			this -> imaginary_num ++;
			return *this;
		}
		complex_num operator ++ (int)	{
			this -> real_num ++;
			this -> imaginary_num ++;
			return *this;
		}
		complex_num operator -- ()	{
			this -> real_num --;
			this -> imaginary_num --;
			return *this;
		}
		complex_num operator -- (int)	{
			this -> real_num --;
			this -> imaginary_num --;
			return *this;
		}
		int operator == (complex_num ob2)	{
			if (this -> real_num == ob2.real_num)	{
				if (this -> imaginary_num == ob2.imaginary_num)	{
					return 1;	// == returns 1 if equal
				}
			}	else	{
				return 0;
			}
		}
		void show ()	{
			cout << real_num << " , " << imaginary_num << endl;
		}
};

int main ()	{
	complex_num ob1 (12, 24), ob2 (5, 9), ob3 (0,0);
	cout << "Ob1 and Ob2 are: ";
	ob1.show ();
       cout << endl;
	ob2.show ();
	ob3 = ob1 + ob2;
	ob3.show ();
	ob3 = ob1 - ob2;
	ob3.show ();
	ob1 ++;
	ob1.show ();
	++ ob1;
	ob1.show ();
	ob1 --;
	ob1.show ();
	-- ob1;
	ob1.show ();
	int res = ob1 == ob2;
	cout << res << endl;
	return 0;
}
