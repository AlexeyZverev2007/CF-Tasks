#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
signed main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	vector<int> b(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i] >> b[i];
	}
	int cnt = 0;
	for (int i = 0; i < n; ++i) {
		cout << a[i] << " " << b[i] << "\n";
	}
	cout << cnt << "\n";
}


/*
	1. Даны количество команд и сами команды.
	2. У них есть формы домашние и выездные.
	3. Принимающая команда меняет форму, если их домашняя совпадает с нападющей врага.
	3. Создам два вектора, домашних форм и нападающих.
	4. Двумя циклами переберу, если совпадение есть, то счетчик++.
	5. Все логично.

*/
