#include <iostream>
using namespace std;
#include<string>

int main()
{
	string str;
	int index;

	cin >> str;
	cin >> index;
	cout << str.at(index);
}