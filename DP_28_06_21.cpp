#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define modulo 1000000007
long long int arr[80];
class Solution{
public:
    long long int fun(ll N){
        // cout<<N<<endl;
        if(N<=0) return -1;
        if(N<=6) return N;
        ll res=0,mul=2;
        for(ll i=N-3;i>=0;i--){
            if(arr[i]==-1) {
                arr[i]=fun(i);
            }
            ll temp=mul*arr[i];
            mul++;
            res=max(res,temp);
        }
        // cout<<N<<" "<<res<<endl;
        return res;
        
    }

    long long int optimalKeys(int N){
        if(N<=6) return N;
        for(ll i=0;i<N;i++) arr[i]=-1;
        return fun(N);
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