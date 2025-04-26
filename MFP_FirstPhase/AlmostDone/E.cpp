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

int main() { _

    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> arvore(n, vector<ll>(m));

    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++) {
            cin >> arvore[i][j];
        }
    }

    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++) {
            // bool precisa_corrigir = false;
            if ((i-1 >= 0 && arvore[i-1][j] == arvore[i][j]) 
                || (i+1 < n && arvore[i+1][j] == arvore[i][j]) 
                || (j-1 >= 0 && arvore[i][j-1] == arvore[i][j]) 
                || (j+1 < m && arvore[i][j+1] == arvore[i][j])) arvore[i][j]++;
            //if (precisa_corrigir) arvore[i][j]++;
        }
    }

    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++) {
            cout << arvore[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}

//! Passa nos casos de exemplo mas falha com teste 4
// Imcompleto para exemplos como
// 3 1
// 1
// 1
// 1