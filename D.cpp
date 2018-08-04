#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m,num;
	pair<int, int> a[13], b[13];
	set<int> oa[13], ob[13];
	set<int> tmp;
	cin >> n >> m;
	for( int i = 0; i < n; i++ ) {
		cin >> a[i].first >> a[i].second;
	}
	for( int i = 0; i < m; i++ ) {
		cin >> b[i].first >> b[i].second;
	}
	
	for( int i = 0; i < n; i++ ) {
		for( int j = 0; j < m; j++ ) {
			tmp.insert(a[i].first);
			tmp.insert(a[i].second);
			tmp.insert(b[j].first);
			tmp.insert(b[j].second);
			if( tmp.size() == 3 ) {
				num = a[i].second;
				if( a[i].first == b[j].first || a[i].first == b[j].second ) {
					num = a[i].first;
				}
				ok_a[i].insert(num);
				ok_b[j].insert(num);
			}
		}
	}
	set<int> ms;
	int max_a = 0;
	int max_b = 0;
	for( int i = 0; i < n; i++ ) {
		max_a = max(max_a, (int)ok_a[i].size());
		for( set<int>::iterator it = ok_a[i].begin(); it != ok_a[i].end(); it++ )
			ms.insert(*it);
	}
	for( int i = 0; i < m; i++ )
		max_b = max(max_b, (int)ok_b[i].size());
	
	if( ms.size() == 1 ) {
		cout << (*ms.begin());
	}
	else if( max(max_a, max_b) == 1 )
		cout << 0;
	else
		cout << -1;

	return 0;
}