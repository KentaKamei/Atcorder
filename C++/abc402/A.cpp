#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string s, t;
    cin >> s;
    
    for(char c : s)
    {
        if(c >= 'A' && c <= 'Z')
        {
            t += c;
        }
    }
    //sort(t.begin(), t.end());

    cout << t << endl;
}