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
    cin >> n;
    switch (n){
        case 0:
            cout << "Dinossauro" << endl;
            break;
        case 1:
            cout << "Departamento Computacao" << endl;
            break;
        case 2:
            cout << "DCC" << endl;
            break;
        case 3:
            cout << "DCC Competition " << endl;
            break;
        case 4:
            cout << "DCC Code Cup" << endl;
            break;
        case 5:
            cout << "DCC Com Caras Carismaticos" << endl;
            break;
        default:
            break;
    }

}