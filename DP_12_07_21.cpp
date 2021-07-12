#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define modulo 1000000007

int N = str.size();
        vector<int> lastOccur(256, -1);
        
        int res = 0;
        
        int i = 0;
        for(int j = 0; j < N; j++)
        {
            i = max(i, lastOccur[str[j]] + 1);
            
            res = max(res, j - i + 1);
            
            lastOccur[str[j]] = j;
        }
        
        return res;

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