#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define modulo 1000000007

class Solution
{
public:
    int countBits(int N, long long int A[])
    {
        long long ans = 0;
        int mod = 1000000007;
        for (int i = 0; i < 32; i++)
        {
            long long count = 0;
            for (int j = 0; j < N; j++)
            {
                if (A[j] & 1 << i)
                    count++;
            }
            ans = (ans + count * (N - count) * 2) % mod;
        }

        return ans;
    }
};

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << (3 ^ 1) << endl;
    return 0;
}