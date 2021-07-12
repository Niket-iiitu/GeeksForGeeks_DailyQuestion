#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define modulo 1000000007

class Solution {
    public:
        int isValid(string s) {
            int dotCount=0;
            int arr[4];
            for(int i=0;i<s.size();i++){
                if(s[i]=='.'){
                    arr[dotCount] = i-1;
                    dotCount++;
                    if(dotCount==4) return false;
                }else if(s[i]<'0' || s[i]>'9'){
                    return false;
                }
            }
            if(dotCount!=3) return false;
            int zeroCount=0;
            int numCount=0;
            for(int i=0;i<arr[0];i++){
                if(s[i]=='0') zeroCount++;
                else{
                    if(zeroCount>0 && numCount==0) return false;
                    numCount*=10;
                    numCount+=s[i]-'0';
                }
            }
            if(numCount<0 && numCount>255) return false;
            zeroCount=0;
            numCount=0;
            for(int i=arr[0]+1;i<arr[1];i++){
                if(s[i]=='0') zeroCount++;
                else{
                    if(zeroCount>0 && numCount==0) return false;
                    numCount*=10;
                    numCount+=s[i]-'0';
                }
            }
            if(numCount<0 && numCount>255) return false;
            zeroCount=0;
            numCount=0;
            for(int i=arr[1]+1;i<arr[2];i++){
                if(s[i]=='0') zeroCount++;
                else{
                    if(zeroCount>0 && numCount==0) return false;
                    numCount*=10;
                    numCount+=s[i]-'0';
                }
            }
            if(numCount<0 && numCount>255) return false;
            zeroCount=0;
            numCount=0;
            for(int i=arr[2]+1;i<s.length();i++){
                if(s[i]=='0') zeroCount++;
                else{
                    if(zeroCount>0 && numCount==0) return false;
                    numCount*=10;
                    numCount+=s[i]-'0';
                }
            }
            if(numCount<0 && numCount>255) return false;int N = str.size();
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
            return true;
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