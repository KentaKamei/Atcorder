#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    m = 0;
    cin >> n;

    vector <vector <int>> t(n, vector<int>(2));

    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < 2;j++)
        {
            cin >> t[i][j];
        }
    }

    for(int i = 0;i < n;i++)
    {
        if(t[i][0] < t[i][1])
        {
            m++;
        }
    }
    cout << m << endl;
}