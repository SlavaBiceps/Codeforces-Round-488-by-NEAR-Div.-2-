#include <bits/stdc++.h>
using namespace std;
const int inf=0x3f3f3f3f;

int main () {
    int x,y,a,b,l,xi,xa,yi,ya,xi1,xa1,yi1,ya1;
    cin >> x >> y;
    for (int i=1; i<4; i++) {
        cin >> x >> y;
        xi=min(xi,x);
        xa=max(xa,x);
        yi=min(yi,y);
        ya=max(ya,y);
    }
    cin >> x >> y;
    for (int i=1; i<4; i++) {
        cin >> x >> y;
        xi1=min(xi1,x);
        xa1=max(xa1,x);
        yi1=min(yi1,y);
        ya1=min(ya1,y);
    }
    if (yi1>ya || ya1<yi || xi1>xa || xa1<xi) {
        cout << "NO";
        return 0;
    }
    a=min(abs(xi-xa1),abs(xa-xi1));
    b=min(abs(yi-ya1),abs(ya-yi1));
    l=2*(a+b);
    if (l<abs(yi1-ya1)) {
        cout << "NO";
        return 0;
    }
    cout << "YES";
    return 0;
}