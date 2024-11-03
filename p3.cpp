/* This problem can be found at: https://neps.academy/exercise/273 */

#include <bits/stdc++.h>
using namespace std;

int c, n, cont;

priority_queue <int, vector <int>, greater <int>> caixa;
queue < pair <int,int> > cliente; // {chegada, duracao}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> c >> n;

    for (int i = 0; i < c; i++)
        caixa.push(0);

    for (int i = 0; i < n; i++){
        int t, d;
        cin >> t >> d;

        cliente.push({t,d});
    }

    while (!cliente.empty()){
        int c = caixa.top(); // o caixa que estara livre primeiro
        caixa.pop();

        pair <int,int> pri = cliente.front(); // o primeiro da fila   
        cliente.pop();     

        if (c-pri.first > 20)
            cont++;
        
        if (pri.first > c)
            caixa.push(pri.first + pri.second);
        else
            caixa.push(c+pri.second);        
    }

    cout << cont;

    return 0;
}