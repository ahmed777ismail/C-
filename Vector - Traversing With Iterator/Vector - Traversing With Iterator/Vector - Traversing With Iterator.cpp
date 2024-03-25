#include <iostream>
using namespace std;
#include <vector>


int main()
{

#pragma region MyRegion
    //vector<int> nums = {10,20,30,40};
//vector<int>::iterator first = nums.begin();
//vector<int>::iterator last = nums.end() -1;

//cout << "first elemnts is " << *first << "\n";
//cout << "second elemnts is " << first[1] << "\n";
//cout << "trird elemnts is " << first[2] << "\n";
//cout << "last elemnts is " << *last << "\n";
//cout << "last elemnts is " << *last -1 << "\n";  //39 ?
//cout << "last elemnts is " << *(last -1) << "\n";  //40 

//advance(first, 3);
//cout << "first elemnts is " << *first << "\n"; //40  
#pragma endregion

	// loop with iterator
    vector<int> nums = { 10,20,30,40 };
    vector<int>::iterator it;
	for (it = nums.begin();it<nums.end();it++ )
	{
		cout << *it << endl;
	}

	cout << "===========\n"; 

	// ranged loop with for

	for (int val : nums)
	{
		cout << val << endl;
	}
	cout << "===========\n";

	int numbers[5] = { 10,20,30,40,50 };

	for (int number : numbers)
	{
		cout << number << endl;
	}

	return 0;
}

