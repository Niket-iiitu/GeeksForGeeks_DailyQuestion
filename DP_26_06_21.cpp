#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define modulo 1000000007

class Solution
{
    public:
    //Function to find the maximum number of cuts.
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        int arr[3];
        arr[0]=x;
        arr[1]=y;
        arr[2]=z;
        sort(arr,arr+3);
        int res=0;
        for(int i=0;i*arr[2]<=n;i++){
            for(int j=0;j*arr[1]<=n;j++){
                if((n-i*arr[2]-j*arr[1])%arr[0]==0 && (i*arr[2]+j*arr[1])<=n){
                    
                    int k = (n-i*arr[2]-j*arr[1])/arr[0];
                    // cout<<i<<" "<<j<<" "<<i*arr[2]+j*arr[1]+k*arr[0]<<endl;
                    if(i*arr[2]+j*arr[1]+k*arr[0]==n)
                    res = max((i+j+(n-i*arr[2]-j*arr[1])/arr[0]),res)  ; 
                }
            }
        }
        return res;
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