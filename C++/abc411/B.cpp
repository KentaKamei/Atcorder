#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int m, n;
    m = 0;
    cin >> n;
    vector<int> d(n - 1);

    for (int &i : d)
        cin >> i;

    for(int i = 0;i < d.size();i++)
    {
        for(int j = i;j < d.size();j++)
        {
            m += d[j];
            cout << m << " ";
        }
        m = 0;
        cout << endl;
    }
}