#include <iostream>
using namespace std;
int main()
{
#pragma region insert to array
    //// insert an item on specfic postion in array
//int size = 5;
//int element = 0;
//int postion = 0;
//int founded = 0;
//int arr[5] = { 5, 6, 7, 4, 3 };
//cout << "Array  : ";
//for (int i = 0; i < size; i++)
//{
//    cout << arr[i] << " ";
//}
//cout << endl;

//cout << "enter the element that you want to search on  : ";
//cin >> element;

//// i = 5
//for (int i = 0; i < size - 1; i++)
//{
//    if (element == arr[i])
//    {
//        postion = i;
//        founded = 1;
//        break;
//    }
//}
//if (founded == 1)
//{
//    cout << "Founded" << endl;
//    cout << "postion is " << postion << endl;
//}
//else
//{
//    cout << "not founded";
//}  
#pragma endregion
    int x = 10;
    int  *pointer = &x;
    cout << &x << endl ;
    cout << *pointer << endl ;
}