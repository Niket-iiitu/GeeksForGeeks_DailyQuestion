#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define modulo 1000000007

class Solution
{
  public:
    long long minTime(int arr[], int n, int k)
    {
      if(n==0) return 0;
        if(n=<k){
          int maxV=0;
          for(int i=0;i<n;i++) maxV = max(arr[i],maxV);
          return maxV;
        }
      int time = arr[0];
      int res=0;
      int work = 0;
      int sum=0;
      for(int i=0;i<n;i++){
        sum+=arr[i];
        int temp = sum;
        if(k>1){
          int brr[n-1];
          for(int j=1;j<n;j++) brr[j-1]=arr[i];
          temp+=minTime(brr,n-1,k-1);
        }
        work=max(work,temp);
      }
      return work;
    }
};


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
    return 0;
}