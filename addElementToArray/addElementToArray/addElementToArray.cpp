#include <iostream>
using namespace std;



int main()
{
	const int size = 5;
	int element = 0;
	int index = 0;
	int arr[size] = { 10,20,30,40,50 };
	cout << "array before editind : ";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	cout << "enter the element rhat you want to add ";
	cin >> element;
	cout << "index :";
	cin >> index;

	if (index > size)
	{
		cout << "ivalid index" << endl;
	}
	else
	{
		for (int i = size; i > index; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[index] = element;
		size++;
	}

}

