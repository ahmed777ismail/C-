#include <iostream>
using namespace std;


int main()
{
	int point = 0;
	int answers[3];
	cout << "the missing number in sequances :\n ";
	cout << "sequances 1 \n";
	cout << "2 | 4 | 6 | 8 | ? \n";
	cin >> answers[0];

	cout << "sequances 2\n";
	cout << "1 | 3 | 5 | 7 | ? \n";
	cin >> answers[1];

	cout << "sequances 3\n";
	cout << "1 | 2 | 3 | 4 | ? \n";
	cin >> answers[2];

	int sequances[3][5] = {
		{2,4,6,8,10},
		{1,3,5,7,9},
		{1,2,3,4,5}
	};

	if (answers[0] == sequances[0][4])
	{
		point++;
	}
	if (answers[1] == sequances[1][4])
	{
		point++;
	}
	if (answers[2] == sequances[2][4])
	{
		point++;
	}

	cout << "your points is " << point << "form 3";
	return 0;
}
