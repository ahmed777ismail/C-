#include <iostream>
using namespace std;

#pragma region if you want to know the number of the array
//// if you want to know the number of the array
//int main()
//{
//	// if you want to know the number of the array
//	/*int arr[] = { 3,4,5,6,7 };
//	int sizeOfArray = 0;
//	sizeOfArray = sizeof(arr) / sizeof(arr[3]);
//	cout << "size of array is : " << sizeOfArray;*/
//
//	// if you want to know the number of the array
//	string arrs[] = { "ahmed","ali","maha","nada" };
//	int sizeOfArray = 0;
//	sizeOfArray = sizeof(arrs) / sizeof(arrs[3]);
//	cout << "size of array is : " << sizeOfArray;
//}  
#pragma endregion




int main()
{
	const int size = 3;
	int ages[size];
	cout << "enter ages" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "enter your ages["<<i+1<<"] :";
		cin >> ages[i];
		
	}
	cout << "array";
	for (int i = 0; i < size; i++)
	{
		cout << ages[i] << " ";
	}
}

