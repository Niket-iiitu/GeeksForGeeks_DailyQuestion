#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define modulo 1000000007

class Solution
{
    public:
    int findSubArraySum(int arr[], int N, int k)
    {
        unordered_map<int, int> mp;
        int pre_sum = 0;
        int res = 0;
        
        for(int i = 0; i < N; i++)
        {
            pre_sum += arr[i];
            
            if(pre_sum == k)
            {
                res++;
            }
            
            if(mp.find(pre_sum - k) != mp.end())
            {
                res += mp[pre_sum - k];
            }
            
            mp[pre_sum]++;
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