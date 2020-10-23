#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a, b, c;
	cin >> a >> b >> c;
	int n1 = a + b * c;
	int n2 = a * (b + c);
	int n3 = a * b * c;
	int n4 = (a + b) * c;
	int n5 = a + b + c;
	cout << max({n1, n2, n3, n4, n5}) << '\n';
	return 0;
}
