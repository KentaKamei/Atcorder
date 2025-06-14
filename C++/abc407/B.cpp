#include <iostream>
#include <utility>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <vector>


using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    vector<pair<int, int>> a;
    vector<pair<int, int>> b;
    for(int i = 1;i <= 6;i++)
    {
        for(int j = 1;j <= 6;j++)
        {
            a.push_back({i, j});
        }
    }

    for(const auto p : a)
    {
        auto it = find(b.begin(), b.end(), p);
        if((p.first + p.second >= x || p.first + y <= p.second || p.second + y <= p.first) && it == b.end())
        {
            b.push_back(p);
        }
    }

    cout << b.size() / 36.0 << endl;
    return 0;
}

/*
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;

    int count = 0; // 条件を満たす出目の組み合わせの個数
    for (int a = 1; a <= 6; ++a) // 1 つめのサイコロの出目
        for (int b = 1; b <= 6; ++b) // 2 つめのサイコロの出目
            if (a + b >= X || a + Y <= b || b + Y <= a) // 条件を満たすなら
                ++count; // カウントを増やす

    // 36 で割った値が答え
    cout << setprecision(10) << count / 36. << endl;
    return 0;
}

*/