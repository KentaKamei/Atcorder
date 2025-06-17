#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b;
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
    for(int j = 0;j < n;j++)
    {
        auto it = find(b.begin(), b.end(), a[j]);
        if(it == b.end())
        {
            b.push_back(a[j]);
        }
    }
    sort(b.begin(), b.end());
    cout << b.size() << endl;
    for(int k : b)
    {
        cout << k << endl;
    }
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int &i : a)
		cin >> i;
	set<int> s(a.begin(), a.end());
	vector<int> ans(s.begin(), s.end());
	sort(ans.begin(), ans.end());
	cout << ans.size() << endl;
	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] << " \n"[i + 1 == ans.size()];
}

*/