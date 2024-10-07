#include <iostream>

using namespace std;
int fun(int m,int n, int r, int t, int deepF) {
	deepF++;
	if (((t >= m) && (t % m) == 0) && ((t >= n) && (t % n) == 0) && ((t >= r) && (t % r) == 0)) {
		cout << "deep of function = " << deepF << endl;
		return t;
	}
	else
		fun(m, n, r, t + 1, deepF);	
}
int main() {
	int t, n, m, r, res, deepF;
	cout << "m = ";cin >> m;
	cout << "n = ";cin >> n;
	r = n % m;
	if (r == 0)
		r = 1;
	t = 1;
	deepF = 0;
	res = fun(m, n, r, t, deepF);

	cout << "t = " << res;
	

	return 0;
}