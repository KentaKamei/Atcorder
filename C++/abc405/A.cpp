#include <iostream>

using namespace std;

int main()
{
    int r, x;

    cin >> r >> x;

    if((x == 1 && 1600 <= r && r <= 2999) || (x == 2 && 1200 <= r && r <= 2399))
        cout << "Yes" << endl;
    else 
        cout << "No" << endl;
}
/*解説
#include <bits/stdc++.h>

using namespace std;

int main() {
    int r, x;
    cin >> r >> x;
    if (x == 1) {
        if (1600 <= r and r <= 2999) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    } else {
        if (1200 <= r and r <= 2399) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}

*/