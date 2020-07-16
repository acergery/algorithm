#include <iostream>
#include <string>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, s, cnt = 0, sum;
	int num[20];
	cin >> n >> s;
	for (int i = 0; i < n; i++)
		cin >> num[i];
	for (int i = 1; i < (1 << n); i++) {
		sum = 0;
		for (int j = 0; j < n; j++) {
			if (i & (1 << j)) {
				sum += num[j];
			}
		}
		if (sum == s)
			cnt++;
	}
	cout << cnt << '\n';

	return 0;
}