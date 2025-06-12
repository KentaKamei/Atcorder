#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string a;
    int x;
    cin >> a;
    vector<char> s(a.begin(), a.end());
    vector<char> k;
    for(char c = 'a'; c <= 'z'; c++)
        k.push_back(c);
    vector<bool> t(k.size(), false);
    sort(s.begin(), s.end());
    auto last = unique(s.begin(), s.end());
    s.erase(last, s.end());
    x = s.size();
    for(int i = 0;i < x; i++)
    {
        for(int j = 0; j < 25; j++)
        {
            if(s[i] == k[j])
            {
                t[j] = true;
                break;
            }
        }
    }
    auto it = find(t.begin(), t.end(), false);
    int index = distance(t.begin(), it); 
    cout << k[index];
}

/*
#include<bits/stdc++.h>

using namespace std;

int main(){
  string s;
  cin >> s;
  for(char c='a';c<='z';c++){
    bool ok=true;
    for(int i=0;i<s.size();i++){
      if(s[i]==c){ok=false;}
    }
    if(ok){
      cout << c << "\n";
      return 0;
    }
  }
  return 0;
}

*/