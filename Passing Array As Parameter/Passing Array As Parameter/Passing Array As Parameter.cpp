#include <iostream>
using namespace std;



void calc(int nums[], int count) {
	int result = 0;
	for (int i = 0; i < count; i++)
	{
		result += nums[i];
	}

	cout << "the result is " << result << endl;
}

int main()
{
	cout << "Hello World!\n";
	int numberOfArray[] = { 10, 20, 30, 40, 50,60,70,80,90,100 };
	int numSize = size(numberOfArray);

	calc(numberOfArray, numSize);
	return 0;


}

