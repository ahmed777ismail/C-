#include <iostream>
using namespace std;

void ReadArrayData(int x[3])
{
    cout << "please enter number 1 ?\n";
    cin >> x[0];

    cout << "please enter number 2 ?\n";
    cin >> x[1];

    cout << "please enter number 3 ?\n";
    cin >> x[2];
}

void PrintArrayData(int x[3])
{
    cout << "*************************\n";
    cout << x[0] << endl;
    cout << x[1] << endl;
    cout << x[2] << endl;

}


int main()
{
    int x[3];
    ReadArrayData(x);
    PrintArrayData(x);

    return 0;
}

