#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	int mx = -1;

	char s[100];
	int hist[101] = {0};
	int su = 0;
	for (int i = 0; i < n; i++) {cin >> s[i]; su += s[i] == '0'; hist[i + 1] = su;}

	for (int i = 0; i < n; i++) {
		for (int j = n; j > i; j--) {
			int z = hist[j] - hist[i];
			mx = max(mx, z * 2 - (j - i));
		}
	}

	cout << n - su + mx;
}
