#include<bits/stdc++.h>
 using namespace std;
int n;
int min_coins(int coins[],int am,int *dp)
{
int coins_need,res;


 if(dp[am]!=-1)return dp[am];
 else{
     if(am==0)return 0;
     coins_need=INT_MAX;
     for(int i=0;i<n;i++)
     {
         if((am-coins[i])>=0)
         {
              res=min_coins(coins,am-coins[i],dp);
         }
         coins_need=min(res+1,coins_need);
     }
     dp[am]=coins_need;
      }

 return dp[am];

}


int main()
{int coins[]={9,6,5,1};
int am=11;
 int *dp=new int[am];
 memset(dp,-1,(am+1)*sizeof(int));
 n=sizeof(coins)/sizeof(int);


cout<<min_coins(coins,am,dp);
return 0;}
