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
    
    string s;
    string p1 = "     ";
    string p2 = "     ";

    cin >> s;
    int aux = 0;

    for (int i = 0; i < s.length(); i+=2){
        p1[aux] = s[i];
        p2[aux] = s[i+1];
        aux ++;
    }

    cout << p1 << endl << p2 << endl;
    return 0;
}