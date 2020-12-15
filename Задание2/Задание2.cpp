#include <iostream>
#include <string>
using namespace std;
int main() 
{
	setlocale(0, "ru");
	cout << "Введите строку" << endl;
	string str;
	cin >> str;
	cout << "Введите символ, который хотите заменить" << endl;
	string simvol;
	cin >> simvol;
	cout << "Введите символ, на который хотите заменить" << endl;
	string simvolz;
	cin >> simvolz;
	string::size_type index;
	while ((index = str.find(simvol)) != string::npos)
		str.replace(index, simvol.size(), simvolz);
	cout << str << endl;
	return 0;
}
