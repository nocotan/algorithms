//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

auto main() -> signed {
map<char,string> m;
	m['b']=m['c']="1";
	m['d']=m['w']="2";
	m['t']=m['j']="3";
	m['f']=m['q']="4";
	m['l']=m['v']="5";
	m['s']=m['x']="6";
	m['p']=m['m']="7";
	m['h']=m['k']="8";
	m['n']=m['g']="9";
	m['z']=m['r']="0";
	int n,f=0;
	cin>>n;
	for(int i=0;i<n;i++){
		string s,ans;
		cin>>s;
		for(int i=0;i<(int)s.size();i++) ans+=m[tolower(s[i])];
		if(ans.size()){
		  if(f) cout<<" ";
		  cout<<ans;
		  f=1;
		}
	}
	cout<<endl;
    return 0;
}

