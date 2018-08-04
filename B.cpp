#include <bits/stdc++.h>
using namespace std;

int main() {
	pair<long,pair<long,long> > a[100002];
	priority_queue<long> q;
	long n,k,sum;
	long ans[100002];	
	cin >> n >> k;
	for (long i=1; i<=n; i++) {
		cin >> a[i].first;
	}
	for (long i=1; i<=n; i++) {
		cin >> a[i].second.first;
		a[i].second.second=i;
	}
	sort(a+1,a+n+1);
	for (long i=1; i<=n; i++){
		if (i>k+1) {
			sum+=q.top();
			q.pop();
		}
		sum+=a[i].second.first;
		ans[a[i].second.second]=sum;
		q.push(-a[i].second.first);
	}
	for (long i=1; i<=n; i++) {
		cout << ans[i] << " ";
	}
	return 0;
}