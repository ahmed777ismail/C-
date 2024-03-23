#pragma region 1
//#include <iostream>
//using namespace std;
//
//void ReadArrayData(int Arr1[100], int& Length)
//{
//
//
//	cout << "How Many Numbers do you want to enter? 1 to 100?\n";
//	cin >> Length;
//
//	for (int i = 0; i <= Length - 1; i++)
//	{
//
//		cout << "Please enter Number " << i + 1 << endl;
//		cin >> Arr1[i];
//
//	}
//
//}
//
//void PrintArrayData(int Arr1[100], int Length)
//{
//
//	cout << "\nArray Data...\n";
//
//	for (int i = 0; i <= Length - 1; i++)
//	{
//
//		cout << "Number [" << i + 1 << "] : " << Arr1[i] << endl;
//
//	}
//
//}
//
//int CalculateArraySum(int Arr1[100], int Length)
//{
//	int Sum = 0;
//
//	for (int i = 0; i <= Length - 1; i++)
//	{
//		Sum += Arr1[i];
//
//	}
//
//	return Sum;
//
//}
//
//float CalculateArrayAverage(int Arr1[100], int Length)
//{
//	return  (float)CalculateArraySum(Arr1, Length) / Length;
//}
//
//int main()
//
//
//{
//	int Arr1[100], Length = 0;
//	ReadArrayData(Arr1, Length);
//	PrintArrayData(Arr1, Length);
//
//	cout << "\n************************************\n";
//	cout << "Sum = " << CalculateArraySum(Arr1, Length) << endl;
//	cout << "Average = " << CalculateArrayAverage(Arr1, Length) << endl;
//
//	return 0;
//}
#pragma endregion
#pragma region 2
#include <iostream>
#include <string>

using namespace std;

struct strInfo
{
	string FirstName;
	string LastName;
	int Age;
	string Phone;
};


void ReadInfo(strInfo& Info)
{

	cout << "Please enter FirstName?\n";
	cin >> Info.FirstName;

	cout << "Please enter LastName?\n";
	cin >> Info.LastName;

	cout << "Please enter Age?\n";
	cin >> Info.Age;

	cout << "Please enter Phone?\n";
	cin >> Info.Phone;
	cout << "\n\n";


}

void PrintInfo(strInfo Info)
{

	cout << "\n**********************************\n";

	cout << "FirstName: " << Info.FirstName << endl;
	cout << "LastName: " << Info.LastName << endl;
	cout << "Age: " << Info.Age << endl;
	cout << "Phone: " << Info.Phone << endl;

	cout << "**********************************\n\n";


}



void ReadPersonsInfo(strInfo Persons[100], int& NumberOfPersons)
{

	cout << "How many persons?\n";
	cin >> NumberOfPersons;

	for (int i = 0; i <= NumberOfPersons - 1; i++)
	{

		cout << "Please Enter Person's " << i + 1 << " Info: \n";
		ReadInfo(Persons[i]);


	}
}


void PrintPersonsInfo(strInfo Persons[100], int NumberOfPersons)
{


	for (int i = 0; i <= NumberOfPersons - 1; i++)
	{
		cout << "Person's " << i + 1 << " Info: \n";
		PrintInfo(Persons[i]);
	}


}



int main()
{

	strInfo Persons[100];
	int NumberOfPersons = 1;

	ReadPersonsInfo(Persons, NumberOfPersons);
	PrintPersonsInfo(Persons, NumberOfPersons);

	return 0;
}
#pragma endregion
