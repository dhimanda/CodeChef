/// Coded by Dhiman Sarker Bappy (Dhimanda) - RMSTU
// Problem Link : https://www.codechef.com/MARCH20B/problems/CHPINTU
// Problem Code : CHPINTU

#include<bits/stdc++.h>
using namespace std;
#define in_file freopen("input.txt", "r", stdin)
#define out_file freopen("output.txt", "w", stdout)
#define    F    first
#define    S    second
#define    pb    push_back
#define    popb    pop_back
#define    pf    push_front
#define    popf    pop_front
#define    lcm(a,b)    (a*b)/gcd(a,b)
#define    gcd(a,b)    __gcd(a,b)
#define    pi    2*acos(0)
#define    elif    else if
#define    ll    long long
int Int(){int x;scanf("%d", &x);return x;}
#define Int Int()
#define mx 100010
int arr[mx];
int tree[mx*4];
void init(int node,int b,int e){
    if(b==e){
        tree[node]=arr[e];
        return;
    }
    int lft = node *2;
    int rgt = lft + 1;
    int mid = (b+e)/2;
    init(lft,b,mid);
    init(rgt,mid+1,e);
    tree[node] = min(tree[lft],tree[rgt]);
}

int q(int node,int b,int e,int l,int r){
    if(l > e | r < b){
        return mx;
    }
    if(b >= l && e<=r){
        return tree[node];
    }
    int lft = node *2;
    int rgt = lft + 1;
    int mid = (b+e)/2;
    int x = q(lft,b,mid,l,r);
    int y = q(rgt,mid+1,e,l,r);
    return min(x,y);
}
 int main()
{
    //in_file;
    //out_file;
    int t=Int;
    int kase = 0;
    while(t--){

        int n=Int , m =Int;
        int a[n+1],b[n+1], c[m+1];
        for (int i=1 ; i <= n ; i++) cin >> a[i];
        for (int i=1 ; i <= n ; i++) cin >> b[i];
        for (int i=0 ; i <= m ; i++) c[i] = INT_MAX;

        for(int i=1 ; i <= n ; i++){
            if(c[a[i]] == INT_MAX) c[a[i]]=0;
            c[a[i]] += b[i];
        }
        sort(a+1, a+(n+1));
        sort (c+1,c+(a[n]+1));
        cout<<c[1]<<endl;
        //printf("Case %d:\n" , ++kase);

    }
    return 0;
}
