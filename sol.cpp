#include <bits/stdc++.h>

using namespace std;

void test_case() {
	int n;
	char a[100];
	cin >> n;
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	int st = 0, sf = 0;
	for(int i = 0; i < n; ++i) {
		if(a[i] == 'S' && a[i+1] == 'F') {
			st++;
		}
		else if(a[i] == 'F' && a[i+1] == 'S') {
			sf++;
		}
	}
	if(st > sf) cout << "YES";
	else cout << "NO";
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	//int T;
	//cin >> T;
	//for(int nr = 1; nr <= T; ++nr) {
		//test_case();
	//}
	test_case();
	return 0;
}
