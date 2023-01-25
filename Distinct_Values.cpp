
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
//  https://www.geeksforgeeks.org/next-greater-element/

void nextLargerElement(int arr[], int n)
{
    vector<unordered_map<string, int> > s;
 
   
    for (int i = 0; i < n; i++) {
        while (s.size() > 0
               && s[s.size() - 1]["value"] <= arr[i]) {
            
            unordered_map<string, int> d = s[s.size() - 1];
            s.pop_back();
            arr[d["ind"]] = arr[i];
        }
      
        unordered_map<string, int> e;
 
        e["value"] = arr[i];
        e["ind"] = i;
        s.push_back(e);
    }
 
    
    while (s.size() > 0) {

        unordered_map<string, int> d = s[s.size() - 1];
        s.pop_back();
        arr[d["ind"]] = -1;
    }
}

// Driver Code
void solver()
{
int n; 
 cin>>n;
 take(a,n);
 int ng1[n] , ng2[n];
 set<int> st1;
 ilop(i,0,n)
 {   
    st1.insert(a[i]);
    ng1[i]=a[i];
    ng2[n-i-1]=a[i];
 }

//  ilop(i,0,n) cout<<ng1[i]<<" ";
//  cout<<endl;
//  ilop(i,0,n) cout<<ng2[i]<<" ";
//  cout<<endl;
 nextLargerElement(ng1,n);
 nextLargerElement(ng2,n);
//  ilop(i,0,n) cout<<ng1[i]<<" ";
//  cout<<endl;
//  ilop(i,0,n) cout<<ng2[i]<<" ";
//  cout<<endl;
 set<int> st;
 ilop(i,0,n)
 {  
    if(ng1[i]!=-1)
    st.insert(abs(a[i]-ng1[i]));
    
    if(ng2[i]!=-1)
    {
        st.insert(abs(ng2[i]-a[n-i-1]));
    }
 }
//  int num=st.size();
//  if(st1.size()<n) st.insert(0);
cout<<st.size()<<endl;

    
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