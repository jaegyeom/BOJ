#include<iostream>
#include<vector>
#include<stack>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	vector<int> v1(n), v2(n);
	stack<int> s;

	for (int i = 0; i < n; i++) {
		cin >> v1[i];
	}

	for (int i = n - 1; i >= 0; i--) {
		while (!s.empty() && s.top() <= v1[i]) {
			s.pop();
		}

		if (s.empty()) v2[i] = -1;
		else v2[i] = s.top();

		s.push(v1[i]);
	}
	for (int n : v2) {
		cout << n << " ";
	}
}
