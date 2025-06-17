#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m, l;
    m = 0;
    l = 0;
    cin >> n;
    vector<int> a(n);
    for(int &i : a)
        cin >> i;
    for(int i = 0;i <= a.size();i++)
    {
        for(int j = 0;j <= a.size();j++)
        {
            if(i <= a[j])
            {
                m++;
            }
        }
        if(i <= m)
        {
            l = i;
            m = 0;
        }
        else
        {
            cout << l << endl;
            return 0;
        }
    }
    cout << l << endl;
    return 0;

}
/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (auto& x : A) cin >> x;
    for (int x = N; x >= 0; --x) {
        int count = 0;
        for (auto a : A) {
            if (a >= x) ++count;
        }
        if (count >= x) {
            cout << x << endl;
            break;
        }
    }
}

*/