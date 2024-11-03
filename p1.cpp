/* This problem can be found at: https://neps.academy/exercise/523 */

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int x, y;
    int a, b, c, d;

    cin >> x >> y;
    cin >> a >> b >> c >> d;

    bool ok = false;

    if ((a+c <= x && b <= y && d <= y) || (a+d <= x && b <= y && c <= y) || (b+c <= x && a <= y && d <= y) || (b+d <= x && a <= y && c <= y))
        ok = true;

    if ((b+d <= y && a <= x && c <= x) || (b+c <= y && a <= x && d <= x) || (a+d <= y && b <= x && c <= x) || (a+c <= y && b <= x && d <= x))
        ok = true;   

    if (ok)
        cout << "S";
    else
        cout << "N";  
    
    return 0;
}
