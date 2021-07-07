#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define modulo 1000000007


class Solution{
public:
    //Function to find the days of buying and selling stock for max profit.
    vector<vector<int> > stockBuySell(vector<int> A, int n){
        vector<vector<int>> v;
        vector<vector<int>> res;
        for(int i = 0; i < n-1; i++){
            if(A[i] < A[i+1])
                res.push_back({i, i+1});
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