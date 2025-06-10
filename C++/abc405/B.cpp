#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, m, c;
    cin >> n >> m;
    c = 0;
    vector<int> a(n);
    for(int i = 0;i < n;i++)
        cin >> a[i];
    for(int i = 1;i <= m;i++)
    {
        auto x = find(a.begin(), a.end(), i);
        if(x == a.end())
        {
            cout << c << endl;
            return 0;
        }
        if(i == m)
        {
            c += 1;
            a.pop_back();
            i = 0;
        }
    }
}

/*
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        --a[i];
    }

    int ans = 0;
    while (true) {
        vector<bool> exist(m);
        for (int i: a) exist[i] = true;
        bool ok = false;
        for (bool b: exist) {
            if (!b) ok = true;
        }
        if (ok) break;
        ++ans;
        a.pop_back();
    }

    cout << ans << endl;
}

*/