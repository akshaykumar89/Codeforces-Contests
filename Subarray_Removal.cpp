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

void solver()
{
int n; 
 cin>>n;
    vi a(n);
    int n1=0;
    ilop(i,0,n) {cin>>a[i];
     if(a[i]==1) n1++;}
    stack <int> st;
    int cnt=0;
    ilop(i,0,n)
    {
        if(st.size()==0)
        {
            st.push(a[i]);
            continue;
        }
        if(st.top()==a[i])
        {
            st.push(a[i]);
        }
        else{
            st.pop();
            cnt++;
        }
    }
    while(st.size()>=2)
    {
        int t=st.top();
        st.pop();
        if(t==st.top())
        {
            st.pop();
            st.push(0);
        }
        else{
            cnt++;
            st.pop();
        }
    }
    cout<<cnt<<endl;
    
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