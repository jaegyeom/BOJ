#include<iostream>
#include<vector>
using namespace std;

int n,m;
vector<int> v;
bool visit[9];
void func(int cnt) {
	if (cnt == m) {
		for (int i=1; i<v.size(); i++){
		    cout<<v[i]<<" ";
		}
		cout<<"\n";
		return;
	}
	
	for (int i=v[v.size()-1]; i<=n; i++) {
		if (visit[i]) continue;
		visit[i] = 1;
		v.push_back(i);
		func(cnt+1);
		visit[i] = 0;
		v.pop_back();
	}
}
int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);
	cin>>n>>m;
	v.push_back(1);
	func(0);
	return 0;	
}
