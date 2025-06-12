#include <iostream>

using namespace std;

int main()
{
    int n, x;
    cin >> n;
    int A[n];
    x = 0;
    for(int i = 0;i < n;i++)
    {
        cin >> A[i];
    }
    for(int i = 0;i < n;i += 2)
    {
        x += A[i];
    }
    cout << x;
}