#pragma region about By-Val vs By-Ref
//#include <iostream>
//using namespace std;
//
//void myFunction(int &num1)
//{
//	num1 = 7000;
//	cout << "Number inside Function Become = " << num1 << endl;
//}
//
//int main()
//{
//	int num1;
//	num1 = 1000;
//	myFunction(num1);
//	cout << "Number after calling the Function Become = " << num1 << endl;
//}  
#pragma endregion

//this the example about how t swap --practice on By-Val vs By-Ref
#include <iostream>
#include<string>
using namespace std;

void Swap(int &A ,int &B)
{
	int Temp;
	Temp = A;
	A = B;
	B = Temp;
	cout << "After Swap inside function A = " << A << ", B =" << B << endl;
}
int main()
{
	int A, B;
	cout << "please enter the A?\n ";
	cin >> A;
	cout << "please enter the B?\n ";
	cin >> B;
	cout << "Before Swap A=" <<A<< ",B="  <<B<< endl;
	Swap(A, B);
	cout << "After swap inside main the function A" << A << ",B=" << B << endl;
	return 0;

}
