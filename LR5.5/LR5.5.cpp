#include <iostream>

using namespace std;
int fun(int m,int n, int r, int t) {

	if (((t >= m) && (t % m) == 0) && ((t >= n) && (t % n) == 0) && ((t >= r) && (t % r) == 0))
		return t;
	else
		fun(m, n, r, t + 1);
	
}
int main() {
	int t, n, m, r, res;
	cout << "m = ";cin >> m;
	cout << "n = ";cin >> n;
	r = n % m;
	if (r == 0)
		r = 1;
	t = 1;
	res = fun(m, n, r, t);

	cout << "t = " << res;

	return 0;
}