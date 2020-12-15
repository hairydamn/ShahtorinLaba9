#include <iostream>
#include <string>
using namespace std;
int main() 
{
	setlocale(LC_ALL, "ru");
	string str;
	cout << "Введите строку" << endl;
	int i = 0, k = 0;
	cin >> str;
	k = str.length();
	while (k != i)
	{
		if (str[i] >= '0' && str[i] <= '9') {
			str.erase(str.begin() + i);
		}
		else i++;
		k = str.length();
	}
	cout << "Ваша строка без цифр:";
	cout << endl << str;
	return 0;
}
