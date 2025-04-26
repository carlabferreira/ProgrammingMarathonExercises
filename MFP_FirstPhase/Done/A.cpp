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
    long int n;
    long int m;
    long int aux;
    cin >> n >> m;
    vector<long int> qtdd_amplitude(m+1);


    for (long int i = 0; i <n; i++){
        cin >> aux;
        qtdd_amplitude[aux]++;
    }
    aux = n;
    //cout << aux << ' ';

    for (long int i = 0; i < m; i++){
        aux -= qtdd_amplitude[i];
        cout << aux << ' ';
    }

    cout << endl;
    return 0;
}