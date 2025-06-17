#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, k, m;
    m = 0;
    cin >> n;
    vector<int> a(n);
    for(int &i : a)
        cin >> i;
    cin >> k;

    for(int i : a)
    {
        if(i >= k)
        {
            m++;
        }
    }
    cout << m;
}