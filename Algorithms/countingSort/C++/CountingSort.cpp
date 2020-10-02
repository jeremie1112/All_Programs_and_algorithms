// Counting Sort 
// Stable
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	//given vector
	std::vector<int> v { 1,44,5,36,5,1,21,8,99,5};
	int maxx = v[0];
	int len = v.size();
	for(int i=1;i<len;i++)
		maxx = max(maxx,v[i]);
	//creating index vector
	std::vector<int> index(maxx+1,0);

	
	for(int i=0;i<len;++i)
	{
		index[v[i]]++;
	}

	for(int i=1;i<maxx+1;++i)
	{
		index[i]+=index[i-1];
	}

	//final sorted vector
	std::vector<int> ans(v.size(),0);
	int i = 0,ini = 0;
	while(i<maxx+1)
	{
		for(int j=ini;j<index[i];++j)
		{
			ans[j]=i;
		}
		ini = index[i];
		i++;
	}
	for(int i=0;i<len;i++)cout<<" "<<ans[i]<<" ";
}