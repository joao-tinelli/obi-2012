/* This problem can be found at: https://neps.academy/exercise/524 */

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5+10;

int n, k;
int c[MAXN];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> c[i];

    cin >> k;

    int i = 0, j = n-1;

    while (i <= j){
        if (c[i] + c[j] == k){
            cout << c[i] << " " << c[j];
            return 0;
        }

        if (c[i] + c[j] < k)
            i++;
        else
            j--;
    }
}
