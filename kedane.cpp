#include<bits/stdc++.h>
#define for(i,c,n) for(int i=c;i<=n;i++)
using namespace std;

/*
local_max[i]=max(a[i],local_max[i-1]+a[i])

*/

int max_sub_array_sum(int *a,int n)
  {

  int local_max=0;
  int g_max=INT_MIN;
  for(i,0,n-1)
  {
   local_max=max(a[i],local_max+a[i]);
   g_max=max(g_max,local_max);

  }

  return g_max;

  }



int main()
{

int n;
cin>>n;
int *a=new int[n];
int s=0;
for(i,0,n-1)
{cin>>a[i];
 s+=a[i];
  }
for(i,0,n-1)
	a[i]=-a[i];

cout<<s-max_sub_array_sum(a,n);

}