#include <iostream>
#include <string>

using namespace std;

int main()
{
    string p;
    int l;
    cin >> p >> l;

    if(p.length() >= l)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}