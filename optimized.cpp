#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a, b, c;
	cin >> a >> b >> c;
	int ans = a + b + c;
	ans = max(ans, a + b * c);
	ans = max(ans, a * (b + c));
	ans = max(ans, a * b * c);
	ans = max(ans, (a + b) * c);
	cout << ans << '\n';
	return 0;
}
