#include<bits/stdc++.h>
using namespace std;
list<int>*adj;
int main()
{
	int n,m,a,b,l,r,i;
	vector<pair<int,int> >v;
	vector<pair<int,int> >v1;
	map<pair<int,int> , pair<int,int> >m1;
	cin>>n>>m;
	for(i=0;i<m;i++)
	{
		cin>>a>>b>>l>>r;
		m1[make_pair(a,b)]=make_pair(l,r);
		v1.push_back(make_pair(a,b));
	}
	int k1,k2;
	v[0]=make_pair(1,32);
	for(i=0;i<n;i++)
	{
		if(m1[v1[i]].first >= v[v1[i].first].first && m1[v1[i]].second <=v[v1[i].first].second )
		{
			k1=m1[v1[i]].first;
			k2= m1[v1[i]].second;
		}
		else
		{
			k1=max((m1[v1[i]].first),v[v1[i].first].first);
			k2=min(m1[v1[i]].second,v[v1[i].first].second);
		}
		v[v1[i].second]=make_pair(k1,k2);
	}
	return 0;
}
