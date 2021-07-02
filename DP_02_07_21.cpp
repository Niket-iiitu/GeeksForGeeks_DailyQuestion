#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define modulo 1000000007
class Solution{
	public:
    string precisionCompute(int x, int y)
    {
    string res="";
    int d = x / y;
        for (int i = 0; i <= 1000; i++) {
            res+=to_string(d);
             x = x - (y * d);
            if (x == 0)
                break;
            x = x * 10;
            d = x / y;
            if (i == 0)
                res+= ".";
        }
        return res;
    }
    string fractionToString(int numr, int denr)
    {
    string res;
    map<int, int> mp;
    mp.clear();
    int rem = numr % denr;
    while ((rem != 0) && (mp.find(rem) == mp.end())){
        mp[rem] = res.length();
        rem = rem * 10;
        int res_part = rem / denr;
        res += to_string(res_part);
        rem = rem % denr;
    }
    // return (rem == 0) ? "" : res.substr(mp[rem]);
    // cout<<res.substr(mp[rem])<<endl;
    return res.substr(mp[rem]);
    }
    string removeZero(string num){
        bool flag=true;
        int n=num.length();
        for(int i=n-1;i>=0;i--){
            if(num[i]=='0' && flag){
                continue;
            }else{
                flag=false;
                n=i+1;
                if(num[i]=='.') n--;
                break;
            }
        }
        return num.substr(0,n);
    }
	string fractionToDecimal(int numerator, int denominator) {
	    int num=denominator;
        while(num%2==0) num/=2;
        while(num%5==0) num/=5;

        if(num==1 || numerator%num==0){
            return removeZero(precisionCompute(numerator,denominator));
        }else{
            string temp = precisionCompute(numerator,denominator);
            string rep = fractionToString(numerator,denominator);
            string res = removeZero(temp);
            // cout<<rep<<" "<<res<<endl;
            // int i=res.find(".");
            if(res.find(rep)==0) res=rep+".";
            else res= res.substr(0,res.find(rep));
            // res = res.substr(0,i)+res.substr(i,res.find(rep)-1);
            // cout<<res.substr(0,i)<<" "<<res.substr(i,res.find(rep))<<endl;
            return res+"("+rep+")";
        }
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