#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> x(q);
    vector<int> y(n, 0);
    for(int &i : x)
        cin >> i;
    for(int i = 0;i < q;i++)
    {
        if(x[i] >= 1)
        {
            cout << x[i] << " ";
            y[x[i] - 1]++;
        }
        else
        {
            auto min = min_element(y.begin(), y.end());
            int min_dis = distance(y.begin(), min);
            y[min_dis]++;
            cout << min_dis + 1 << " ";
        }
    }

}