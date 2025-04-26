#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define pb push_back

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const int MAX = 1e5+10;

int main (){ _
    int a, b;
    cin >> a >> b;
    if (a < b) {
        b -= a;
        cout << a << ' ' << floor(b/2);
    } else {
        a -= b;
        cout << b << ' ' << floor(a/2);
    }


}