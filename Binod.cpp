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
#define take(name,size) vi name(size) ; ilop(i,0,size) cin>>name[i];
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
vi decToBinary(int n)
{
    // array to store binary number
   vi bin(60,0);
 
    // counter for binary array
    int i = 0;
    while (n > 0) {
 
        // storing remainder in binary array
        bin[i] = n % 2;
        n = n / 2;
        i++;
    }
   return bin;
}
void solver()
{
int n,q; 
 cin>>n>>q;
 take(a,n);
 vector<vi> BinaryArray(n);
 ilop(i,0,n)
 {
     BinaryArray[i]=decToBinary(a[i]);
 }
 vector<vi> prif(n,vi(60));
 ilop(j,0,60)
 {   
    int sum=0;
    ilop(i,0,n)
    {
       sum+=BinaryArray[i][j];
       prif[i][j]=sum;
    }
 }

 ilop(i,0,q)
 {
    int k , l1 , r1, l2 , r2;
    cin>>k>>l1>>r1>>l2>>r2;
    k;l1--;r1--;l2--;r2--;
    int range_1_one;
    if(l1!=0)
    {
        range_1_one=prif[r1][k]-prif[l1-1][k];
    }
    else range_1_one=prif[r1][k];
    int range_1_zero = (r1-l1+1)-range_1_one;
    int range_2_one;
    if(l2!=0)
    {
        range_2_one=prif[r2][k]-prif[l2-1][k];
    }
    else range_2_one=prif[r2][k];
     int range_2_zero = (r2-l2+1)-range_2_one;
     int ans=0;
    // cout<<range_1_one<<" "<<range_1_zero<<" "<<range_2_one<<" "<<range_2_zero <<endl;
     ans+=range_1_one*range_2_zero;
     ans+=range_2_one*range_1_zero;
     cout<<ans<<endl;
 }
   // cout<<"run";
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