#include <bits/stdc++.h>
#include <numeric> 

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
    
    int n, k1, k2, k3;

    cin >> n;

    for (int i = 0; i <n; i++){
        cin >> k1 >> k2 >> k3;
        if (k1 == k2) cout << k3 << endl;
        else if (k2 == k3) cout << k1 << endl;
        else cout << k2 << endl;
    }

    return 0;
}