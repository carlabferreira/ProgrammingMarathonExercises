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
    int n_criancas, p, k_patos;
    cin >> n_criancas >> p >> k_patos;
    int primeira_crianca = 1;
    if (p == 1) primeira_crianca = 2;

    int crianca_atual = p + 1;
    if (crianca_atual == p) crianca_atual ++; //desconsidera a que esta contando
    if (crianca_atual == n_criancas+1) crianca_atual = 1; //ciclo
    
    for (int i = k_patos; i > 0; i--){
        //cout << "atual: " << crianca_atual << endl;
        crianca_atual ++;
        if (crianca_atual == p) crianca_atual ++; //desconsidera a que esta contando
        if (crianca_atual == n_criancas+1) crianca_atual = primeira_crianca; //ciclo
    }

    cout << crianca_atual << endl;
    return 0;
}