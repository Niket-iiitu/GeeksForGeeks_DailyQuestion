#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define modulo 1000000007


class Solution {
  public:
    vector<vector<string>> result;
    bool isPalindrome(string str){
        int n=str.length();
        stack<char> s;
        int i=0;
        for(i;i<n/2;i++){
            s.push(str[i]);
        }
        if(n%2==1) i++;
        for(i;i<n;i++){
            if(str[i]!=s.top()) return false;
            s.pop();
        }
        return true;
    }
    void recur(string s, int n, int i, vector<string> vec)
    {
        if (i == n) {
            result.push_back(vec);
        }
 
        for (int j = n - 1; j >= i; j--)
        {
            vector<string>newV;
            newV=vec;
            if(isPalindrome(s.substr(i, j - i + 1)))
            {newV.push_back(s.substr(i, j - i + 1));
            recur(s, n, j + 1, newV);}
        }
    }
    vector<vector<string>> allPalindromicPerms(string S) {
        vector<string> v;
        recur(S,S.length(),0,v);
        sort(result.begin(),result.end());
        return result;
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

    cout<<isPalindrome("amma")<<endl;
    return 0;
}

/*
www zz /
www z z /
ww w zz /
ww w z z /
w ww zz /
w ww z z /
w w w zz /
w w w z z /
*/

/*
w w w z z /
w w w zz /
w ww z z /
w ww zz /
ww w z z /
ww w zz /
www z z /
www zz /
*/