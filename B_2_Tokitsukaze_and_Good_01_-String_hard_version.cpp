#include<bits/stdc++.h>
#define int long long 
#define mod 1000000007
#define inf 1e18
#define ninf 1e18*(-1)

#define ff first
#define ss second
#define pb push_back
#define ppb pop_back()
#define vi vector<int>
#define mp make_pair
#define pii pair<int,int>
#define mii map<int,int>
#define pqb priority_queue<int>
#define pqs priority_queue<int,vi,greater<int>>
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)

#define ps(x,y) fixed<<setprecison(y)<<x
#define mk(arr,n,type) type *arr=new type[n]
#define test(t) int t;cin>>t;while(t--)
#define eilop(i,x,y) for(auto i=x;i<=y;i++)
#define ilop(i,x,y) for(int i=x;i<y;i++)
#define edlop(i,x,y) for(int i=y;i>=x;i--)
#define dlop(i,y,x) for(int i=y;i>x;i--)
using namespace std;

void akshay()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int count(vi & arr , int k)
{   
    int n=arr.size();
    bool prv=(arr[0]&1);
    int mr=0;
    ilop(i,0,n-1)
    {  
       if(prv and arr[i]==2)
       {
         mr++;
         prv=!(arr[i+1]&1);
         i++;
       }
    }
    return n-(2*mr)-(arr[n-1]==1) - (arr[0]==1);

}
void solver()
{
int n; 
 cin>>n;
    string s; cin>>s;
    int cnt=0;
    bool bit=s[0]-'0';
    cnt++;
    int res=0;
    vi   bit_count;
    ilop(i,1,n)
    {   
       
        if((bit==0 && (s[i]-'0')==0) or (bit==1 && (s[i]-'0')==1))
        {
            cnt++;
        }
        else if(bit^(s[i]-'0'))
        {  
          //  bit_count.push_back(cnt);
             bit=(s[i]-'0');
             
            if(cnt&1)
            {
                cnt=0;
                res++;
            }
            else cnt=1;
        }
    }
    cnt=0;
    bit=s[0]-'0';
    ilop(i,0,n)
    {
       if((bit==0 && (s[i]-'0')==0) or (bit==1 && (s[i]-'0')==1))
        {
            cnt++;
        } 
         else if(bit^(s[i]-'0'))
        {  
             bit_count.push_back(cnt);
             cnt=1;
             bit=(s[i]-'0');
    
        }
    }
     bit_count.push_back(cnt);
    // ilop(i,0,bit_count.size()) cout<<bit_count[i]<<" ";
    // cout<<endl; 
    cout<<res<<" "<<count(bit_count,0)<<endl;


}

 int tc=1;
signed main()
{
    akshay(); 
    test(t){
        // cout<<"Case #"<<tc++<<": ";
solver();
}
    return 0;
}