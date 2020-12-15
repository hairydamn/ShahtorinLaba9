#include <iostream>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int index = 0, count = 0;
	string str;
	cout << "Введите строку из символов (латинские буквы):" << endl;
	getline(cin, str);
	while (str[index] != '\0')
	{
		if (str[index] >= 'A' && str[index] <= 'Z') count++;
		index++;
	}
	cout << "Прописных латинских букв в строке = " << count << endl;
	system("pause");
	return 0;
}
