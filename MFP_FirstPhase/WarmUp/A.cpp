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
    vector<int> x(4);
    vector<int> y(4);

    for (int i = 0; i <4; i++){
        cin >> x[i] >> y[i];
    }
    

    int base;
    int altura;

    for (int i = 0; i <3; i++){
        base = abs(x[0]-x[i]);
        if (base != 0) break;
    }

    for (int i = 0; i < 3; i++){
        altura = abs(y[0]-y[i+1]);
        if (altura != 0) break;
    }
    //out << base << ' ' << altura << endl;
    cout << base * altura << endl;
    return 0;
}