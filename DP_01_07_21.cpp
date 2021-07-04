#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define modulo 1000000007

struct Node{
    int key;
    int val;
    int hit;
}
#define node struct Node 
bool compare(node a,node b) return a.hit<b.hit;
class LRUCache
{
    private:
    int n;
    vector<int> vec;
    public:
    //Constructor for initializing the cache capacity with the given value.
    LRUCache(int cap)
    {
        n=cap;
    }
    
    //Function to return value corresponding to the key.
    static int get(int key)
    {
        for(int i=0;i<min(vec.length(),n);i++){
            if(vec[i].key==key){
                vec[i].hit++;
                sort(vec.begin(),vec.end(),compare);
                return vec[i].val;
            }
            
        }
        return -1;
    }
    
    //Function for storing key-value pair.
    static void set(int key, int value)
    {
        node temp;
        temp.key=key;
        temp.value=value;
        temp.hit=0;
        vec.insert(vec.begin(),temp);
        sort(vec.begin(),vec.end(),compare);
    }
}

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