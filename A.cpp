#include<iostream>
using namespace std;
main()
{
	int m,n;
	int a[12],b[12];
	cin >> n >> m;
	for (int i=0; i<n; i++) { 
		cin >> a[i];
	}
	for (int i=0; i<m; i++) {
		cin >> b[i];
	}
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			if (a[i]==b[j]) {
				cout<<a[i]<<' ';
			}
		}
	}
}