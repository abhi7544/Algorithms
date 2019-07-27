#include<iostream>
using namespace std;
int main() {
int n;
cin>>n;
int *a=new int[n];
int res=0
for(i=0;i<n;i++)
{cin>>a[i];res^=a[i];
}
 for(int i=0;i<31;i++)
 {
    if((res<<i)&1)break;
 }
 cout<<i;

	return 0;
}
