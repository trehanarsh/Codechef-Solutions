#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int ans=0;
		for (int i = 0; i < s.length(); ++i)
		{
			if (s[i]!='4'&&s[i]!='7')
			{
				ans++;
			}
		}
		printf("%d\n",ans );
	}
	return 0;
}