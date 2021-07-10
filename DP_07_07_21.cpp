#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define modulo 1000000007

class Solution
{
    public:
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        long int first=-1,last=-1;
        long int count = 0;
        for(long int i=0;i<v.length();i++){
            if(arr[i]==x && count==0){
                first=i;
                last=i;
                count++;
            }
            if(arr[i]==x && count==1){
                last=i;
            }
        }
        pair<long,long> res;
        res.first=first;
        res.second=last;
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