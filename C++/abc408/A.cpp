#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int s, n, i, k;
    k = 0;
    cin >> n >> s;
    vector<int> t(n + 1, 0);
    t[0] = 0;

    for(i = 1 ; i < n + 1 ; i++)
    {
        cin >> t[i];
    }

    for(i = 1 ; i < n + 1 ; i++)
    {
        k = t[i] - t[i - 1];
        if(k >= s + 0.5 )
        {
            cout << "No";
            return 0;
        } 
    }
    cout << "Yes";
}