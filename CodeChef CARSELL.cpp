/// Coded by Dhiman Sarker Bappi (Dhimanda) - RMSTU
// Problem Link : https://www.codechef.com/APRIL20B/problems/CARSELL
#include<bits/stdc++.h>
using namespace std;
#define    in_file     freopen("input.txt", "r", stdin)
#define    out_file    freopen("output.txt", "w", stdout)
#define    fast        ios_base :: sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define    F           first
#define    S           second
#define    pb          push_back
#define    popb        pop_back
#define    pf          push_front
#define    popf        pop_front
#define    lcm(a,b)    (a*b)/gcd(a,b)
#define    gcd(a,b)    __gcd(a,b)
#define    pi          2*acos(0)
#define    elif        else if
#define    ll          long long
#define    sp          fixed<<setprecision
#define    nl          '\n'
#define    endl        '\n'
#define    forr(i,b,e) for(int (i)=(b); (i) <= (e); (i)++)
#define    fora(i,n)   for(int (i)=0; (i) < (n); (i)++)


int Int(){int x;scanf("%d", &x);return x;}
#define    Int         Int()
#define    mx          100010
int main()
{
    //fast;
    //in_file;
    //out_file;
    //int t=1;
    int t=Int;
    while(t--){
        int n;
        cin >> n;
        vector <ll> v;
        v.clear();
        ll ans=0;
        ll d = 0;
        for(int i=0;i<n ; i++) {
            int x;
            cin >> x;
            if(x>0){
                v.pb(x);
                d++;
            }
        }
        sort(v.begin(), v.end());
        ll sub = -1;
        for(int i=d-1; i >= 0 ; i--){
                sub++;
                ll tmp = (v[i]-sub);
                if(tmp<0) break ;
                ans += tmp;

        }
        ll dsb = ans % 1000000007 ;
        cout << dsb <<endl;


    }
    return 0;
}


// Contact : chessdhiman@gmail.com

