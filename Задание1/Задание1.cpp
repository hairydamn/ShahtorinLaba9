#include <iostream>
#include <string>
using namespace std;
int main()
{
	setlocale(0, "ru");
	cout << "Введите строку" << endl;
	string str;
	cin >> str;
	cout << "Введите символ" << endl;
	char simvol;
	cin >> simvol;

	int sch = 0;

	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == simvol) {
			sch++;
		}
	}
	cout << "Символ " << simvol << " встречается " << sch << " раз." << endl;
	return 0;
}
