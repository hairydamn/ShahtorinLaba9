#include <iostream>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	const int N = 14;
	char p[N] = { 'A', 'a', 'E', 'e', 'I', 'i', 'J', 'j', 'O', 'o', 'U', 'u', 'Y', 'y' };
	string str;
	int k;
	cout << "Введите строку из символов (латинские буквы):" << endl;
	getline(cin, str);
	k = 0;
	for (int i = 0; str[i]; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (str[i] == p[j])
				k++;
		}
	}
	if (k)
		cout << "Количество гласных символов: " << k << endl;
	else
		cout << "Гласных символов не найдено!" << endl;
	cin.get();
	return 0;
}