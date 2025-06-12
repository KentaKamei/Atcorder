#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, k, m;
    cin >> n >> k;
    int A[n];

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    m = 1;
    for(int i = 0;i < n;i++)
    {
        m = m * A[i];
        if (m >= pow(10, k))
        {
            m = 1;
        }
    }
    cout << m;

}
/*
#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n,k;
	long long a,y=1,x=1;

	cin>>n>>k;

	for(int i=0;i<k;i++)y*=10;
	y--;

	for(int i=0;i<n;i++){
		cin>>a;
		if(x>(y/a))x=1;
		else x*=a;
	}

	cout<<x<<endl;
	return 0;
}
*/