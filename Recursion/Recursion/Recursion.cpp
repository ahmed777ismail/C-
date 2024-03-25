#include <iostream>
using namespace std;


int add(int num) {
	if (num == 0)
	{
		return 0;
	}
	cout << num << endl;
	cout << "=====================\n";
	return num + add(num - 1);
}

int main()
{

	cout << add(5) << endl;
    cout << "Hello World!\n";
}


