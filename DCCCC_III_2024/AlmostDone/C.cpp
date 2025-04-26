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

int main (){ _
    int n;
    vector<string> usual(110);
    vector<string> pai(110);

    cin >> n;
    for (int i=0; i<n; i++) cin >> usual[i];
    for (int i=0; i<n; i++) cin >> pai[i];

    int resp = 0;
    bool pa = false;
    for (int i=0; i<n; i++){
        if(usual[i]!=pai[i]){ //palavra diferente
            for(int j=0; j<pai[i].size(); j++){
                if ((usual[i][j] != 'p' || j>usual[i].size()) && pai[i][j] == 'p' && pai[i][j+1] == 'a'){
                    resp++;
                    j++;
                    pa = true;
                }
                if (pa && pai[i][j+1] != 'p'){ //terminou os pa daquela frase
                    pa = false;
                    break;
                }
            }
        }
    }

    cout << resp << endl;
    
    //! PASSA OS TESTES EXEMPLO MAS FALHA NO TESTE 6
}