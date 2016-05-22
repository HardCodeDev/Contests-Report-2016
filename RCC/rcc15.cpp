#include <iostream>
using namespace std;
int main() {
	long t, a, b, c;
	cin >> t;
	while (t--) {
		cin >> a >> b >> c;
		if (c % 2) {
			if (a + 2*b >= c && a >= 1) {
				cout << "YES";
			} else {
				cout << "NO";
			}
		} else {
			if (a + 2*b >= c && a >= 1) {
				cout << "YES";
			} else {
				cout << "NO";
			}
		}
		cout << endl;
	}
	return 0;
}