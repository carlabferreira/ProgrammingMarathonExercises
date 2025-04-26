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

bool cmp(pair<int, int> a, pair <int, int> b){ //Obs: falso para iguais, funciona com MENOR QUE
    return a.f > b.f;
}

int main (){ _
    int n, p; 
    cin >> n >> p;
    vector<pair<int, int>> valor(n); //valor do botal e vezes que foi utilizado
    for (int i = 0; i<n; i++) {
        cin >> valor[i].f;
        valor[i].s = 0;
    }

    bool ans = false;

    sort(valor.begin(), valor.end(), cmp);
    
    //for (int i = 0; i<n; i++) cout << valor[i].f << endl;
    //Verificacao
    int diferenca = 1440 - p;
    //cout << diferenca << endl;
    if (diferenca == 0 || p == 0) ans = true;
    else { 
        // para todos os valores, se for posssivel adiciona-lo, adicione
        for (int i = 0; i<n; i++){
            //cout << "valor[i].f "<< valor[i].f << endl;

            //cout << "valor[i].s "<< valor[i].s << endl;
            if (valor[i].f <= diferenca && valor[i].s < 2) {
                diferenca -= valor[i].f;
                valor[i].s ++;
                //cout << "valor utilizado " << valor[i].f << endl;
                i--;
                if (diferenca == 0){
                    ans = true;
                    break;
                }
            }
            
        }
    }

    if (ans) cout << "YES" << endl;
    else cout << "NO" << endl;

}

//! Passa nos exemplos mas Wrong answer on test 8