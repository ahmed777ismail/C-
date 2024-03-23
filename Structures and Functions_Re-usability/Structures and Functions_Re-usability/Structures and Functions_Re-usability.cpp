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
void ReadInfo(strInfo &Info)
{
    cout << "please enter your First Name ?\n";
    cin >> Info.FirstName;

    cout << "please enter your Last Name ?\n";
    cin >> Info.LastName;

    cout << "please enter your Age ?\n";
    cin >> Info.Age;

    cout << "please enter your Phone ?\n";
    cin >> Info.Phone;
 }

void PrintInfo(strInfo Info)
{
    cout << "\n**************************\n";
    cout << "FirstName: " << Info.FirstName << endl;
    cout << "LastName: " << Info.LastName << endl;
    cout << "Age: " << Info.Age << endl;
    cout << "Phone: " << Info.Phone << endl;
    cout << "\n**************************\n";
}


int main()
{
    strInfo  Person1Info;
    ReadInfo(Person1Info);
    PrintInfo(Person1Info);
    
    return 0;

}

