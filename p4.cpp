/* This problem can be found at: https://neps.academy/exercise/321 */

#include <bits/stdc++.h>
using namespace std;

int main(){
    double v[5];

    cout.precision(1);
    cout.setf(ios::fixed);

    for (int i = 0; i < 5; i++){
        cin >> v[i];
    }

    sort (v,v+5);

    cout << v[1] + v[2] + v[3];  
    return 0;
}