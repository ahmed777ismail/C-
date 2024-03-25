
#include <iostream>
using namespace std;

int main()
{
	cout << "Hello World!\n";
	// count the positive and even numbers
#pragma region 1
					//int result = 0;
	//int nums[] = { 10,-20,6,7,-50 };
	//int numSize = size(nums);


	//for (int i = 0; i < numSize; i++)
	//{
	//	if (nums[i] > 0 && nums[i] % 2)
	//	{
	//		result += nums[i];
	//	}

	//}
	//cout << "result is " << result;  
#pragma endregion

	// Guess the number
#pragma region 2
					//int guessNumbers = 7;
	//int guessTries = 0;
	//int choose;
	//cout << "please enter a number between 1 and 10" << endl;
	//while (true)
	//{
	//	cin >> choose;
	//	if (choose == guessNumbers)
	//	{
	//		cout << "good , correct Guess";
	//		break;
	//	}
	//	else
	//	{
	//		cout << "please try again" << endl;
	//		guessTries++;

	//	}

	//	if (guessTries == 3)
	//	{
	//		cout << "you faild the write guess is " << guessNumbers << endl;
	//		break;
	//	}
	//}
	//return 0;  
#pragma endregion

	int vals[5];
	int inp;
	cout << "type 5 numbers to reverse" << endl;

	for (int i = 4; i > -1; i--)
	{
		cin >> inp;
		vals[i] = inp;

	}

	cout << "==============================" << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << vals[i] << endl;

	}

	return 0;
}
