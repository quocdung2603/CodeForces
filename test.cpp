#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> a;
	int n;
	cin>>n;
    int mn=101, mx=-101;
	for ( int i = 0; i < n;i++)
	{
		int t;cin>>t;
        mn= min(mn,t);
        mx= max(mx,t);
		a.push_back(t);
	}
	sort( a.begin(),a.end());
	int b[100];
	int fl = 0;
	for ( int i = 0;i <a.size();i++)
	{
		if ( a[i] != a[0])
		{
			b[fl++] = a[i];
		}
	}
	if ( a.size() == 1  || mn==mx)
	{
		cout<<"NO";
	}
	else
		cout<<b[0];
	return 0;
}