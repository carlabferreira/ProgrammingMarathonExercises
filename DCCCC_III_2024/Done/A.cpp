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
    int n,m; 
    vector<int> x(MAX);
    //i =  xerebêrelebidade da pessoa
    //x[i] = quantidade de pessoas
    vector<int> p(MAX); 
    //i = numero de perninha, 
    //p[i] = quantidade de espirros com aquelas perninhas
    cin >> n;
    int aux;
    for (int i=0; i<n; i++) {
        cin >> aux;
        x[aux]++;
    }
    
    cin >> m;

    for (int i=0; i<m; i++){
        cin >> aux;
        p[aux]++;
    }

    int resp = 0;
    for (int i=0; i<MAX; i++) {
        if (p[i]>0 && x[i]>0){ //espirro e pessoas compativel
            if (p[i] >= x[i]) {
                resp+= x[i];
            }else{
                resp+= p[i];
            }
        }
    }

    cout << resp << endl;

}