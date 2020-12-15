#include <iostream>
#include <string>
using namespace std;
int main()
{
	setlocale(0, "ru");
	string S;
	cout << "Введите строку" << endl;
	cin >> S;
	string S0;
	cout << "Введите подстроку" << endl;
	cin >> S0;
	int count = 0;
	for (string::size_type i = 0; i < S.length(); i++)
		if (S[i] == S0[0])
			if (S.substr(i, S0.length()) == S0)
			{
				count++;
				i += S0.length() - 1;
			}
	cout << "Подстрока " << count << " раз входит в строку." << endl;
	system("pause");
	return 0;

}
