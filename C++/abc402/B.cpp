#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int q, p, o;
    p = 0;
    cin >> q;
    vector<vector<int>> a(q, vector<int>(2));
    
    for(int i = 0;i < q;i++)
    {
        for(int j = 0;j < 2;j++)
        {
            cin >> a[i][j];
            if(j == 0 && a[i][j] == 2)
            {
                break;
            }
        }
    }
    for(int i = 0;i < q;i++)
    {
        if(a[i][0] == 2)
        {
            cout << a[p][1] << endl;
            p++;
        }
    }

}

/*
#include <bits/stdc++.h>
using namespace std;
int main() {
    int q;
    cin >> q;
    queue<int> que;
    for (int i = 0; i < q; ++i) {
        int t;
        cin >> t;
        if (t == 1) {
            int x;
            cin >> x;
            que.push(x);
        } else {
            cout << que.front() << endl;
            que.pop();
        }
    }
}

*/