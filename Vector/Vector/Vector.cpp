#include <iostream>
#include <vector>
using namespace std;

void calc(vector<int> numsVector) {
	int result = 0;
	for (int i = 0; i < numsVector.size(); i++)
	{
		result += numsVector[i];
	}

	cout << "Result is " << result << "\n";
}

int main()
{
#pragma region MyRegion
	//vector<int> numsOne = { 10,20,30,40 };
//vector<int> numsTwo{ 100,200,300,400 };
//vector<int> numsThree(4, 50);
//for (int i = 0; i < numsOne.size(); i++)
//{
//	cout << numsOne.at(i) << " ";
//}
//cout << "\n=============\n";

//for (int i = 0; i < numsTwo.size(); i++)
//{
//	cout << numsTwo.at(i) << " ";
//}
//cout << "\n=============\n";

//for (int i = 0; i < numsThree.size(); i++)
//{
//	cout << numsThree.at(i) << " ";
//}
//cout << "\n=============\n";

//cout << "number of elemnts is :" << numsThree.size() << " \n";
//numsThree.push_back(1000);
//cout << "number of elemnts is :" << numsThree.size() << " \n";
//for (int i = 0; i < numsThree.size(); i++)
//{
//	cout << numsThree.at(i) << " ";
//}
//cout << "\n=============\n";  
#pragma endregion


	vector<int> arrayOfNumbers = { 10,20,30,40,50,60,70,80,90 };
	calc(arrayOfNumbers);
	return 0;
}

