#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;
#define  ll long long
#define  ull unsigned long long
#define  ul unsigned long
#define all(v) v.begin(),v.end()
#define sz(n) (int)n.size()
#define pb(s) push_back(s);
#define format(n) fixed<<setprecision(n)
#define finl "\n"
#define Mohammed_Atef_Hassan fastt();
void fast()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
}
void infile()
{
	freopen("input.in", "r", stdin);
}
void outfile()
{
	freopen("output.in", "w", stdout);
}

void fastt(){
	fast();
	//	infile();
	//	outfile();
}
bool vis[26];
int main()
{   
	Mohammed_Atef_Hassan
		int n;
	cin >> n;
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
		vis[tolower(s[i]) - 'a']=1;
	for (int i = 0; i < 26; i++)
	{
		if (!vis[i])
		{
			cout << "NO" << finl;
			return 0;
		}
	}
	cout << "YES" << finl;
}