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
vi binary(int n)
{
    vi bn(32,0);
 
   
    int i = 0;
    while (n > 0) {
        bn[i] = n % 2;
        n = n / 2;
        i++;
    }
    return bn;
}
void akshay()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

void solver()
{

    int a,b,c;
     cin>>a>>b>>c;
     vi BinA=binary(a), BinB=binary(b), BinC=binary(c);
     int ans=1;
    // ilop(i,0,32) cout<<BinA[i]<<" ";
    // cout<<endl;
     for(int i=31;i>=0;i--)
     {
        int x=BinA[i],y=BinB[i],z=BinC[i];
      //  cout<<x<<" "<<y<<" "<<z<<endl;
        vi arr({x,y,z});
        sort(arr.begin(),arr.end());
        vi fr={1,1,1};
        vi one={0,1,1};
        vi on={0,0,0};
        if(arr==fr)
        {
            ans*=4;
        }
        else if(arr==one || arr==on)
        {

        }
        else ans=0;

     }
    cout<<ans<<endl;



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