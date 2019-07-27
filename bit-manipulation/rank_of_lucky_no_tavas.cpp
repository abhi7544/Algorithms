/*
B. Tavas and SaDDas
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Once again Tavas started eating coffee mix without water! Keione told him that it smells awful, but he didn't stop doing that. That's why Keione told his smart friend, SaDDas to punish him! SaDDas took Tavas' headphones and told him: "If you solve the following problem, I'll return it to you."


The problem is:

You are given a lucky number n. Lucky numbers are the positive integers whose decimal representations contain only the lucky digits 4 and 7. For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.

If we sort all lucky numbers in increasing order, what's the 1-based index of n?

Tavas is not as smart as SaDDas, so he asked you to do him a favor and solve this problem so he can have his headphones back.

Input
The first and only line of input contains a lucky number n (1 ≤ n ≤ 109).

Output
Print the index of n among all lucky numbers.

Examples
input
4
output
1
input
7
output
2
input
77
output
6


*/
#include<bits/stdc++.h>
using namespace std;

int main()
{

 int n;
 cin>>n;
 int c=n;
 int x=0;
 int ans1=0,ans;
 while(c)
 {
     int r=c%10;
     c=c/10;
     if(r==7)
     ans1=ans1+(1<<x);
     x++;

 }

    ans=ans1+((1<<x)-2)+1;
    cout<<ans;
  }
