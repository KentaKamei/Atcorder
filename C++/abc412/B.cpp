#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    char c;

    for(int i = 1;i < s.size();i++)
    {
        if(isupper(s[i]))
        {
            if(t.find(s[i - 1]) == string::npos)
            {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
}