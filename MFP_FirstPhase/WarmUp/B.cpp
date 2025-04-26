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
    int T1 = 0;
    int T2 = 0;
    int n;
    string aux;
    string pontuacao;
    int time;

    cin >> n;

    for (int i = 0; i <n; i++){
        cin >> aux >> time >> pontuacao;
        //cout << "aqui" << endl;
        if (time == 1){
            T1 += (pontuacao[1] - '0');
        } else T2 += (pontuacao[1] - '0');
    }
    
    cout << T1 << " x " << T2 << endl;
    return 0;
}