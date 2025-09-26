#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long int
using namespace std;
bool cmp(int x, int y) {
    return x > y;
}

ll mincostgrid(vector<ll>& horizontal, vector<ll>& vertical) {
    sort(horizontal.begin() , horizontal.end(),cmp);
    sort(vertical.begin() , vertical.end(),cmp);
    int HB = 1;
    int VB = 1;

    int h = 0; 
    int v = 0;
    ll ans = 0;
    while(h<horizontal.size() && v<vertical.size()) {
        if(vertical[v] > horizontal[h]) {
            ans += vertical[v]*VB;

            HB++;
            v++;
        }
        else{
            ans += horizontal[h]*HB;

            VB++;
            h++;
        }
    }

    while(h<horizontal.size()) {
        ans += horizontal[h]*HB;

        VB++;
        h++;
    }

    while(v<vertical.size()) {
        ans += vertical[v]*VB;

        HB++;
        v++;
    }
    return ans;
}
int main() {
    int m,n;
    cin>>m>>n;
    vector<ll> vertical;
    vector<ll> horizontal;
    for(int i = 0; i<n; i++ ) {
        int x;
        cin>>x;
        vertical.push_back(x);
    }
    for(int i = 0; i<m; i++ ) {
        int x;
        cin>>x;
        horizontal.push_back(x);
    }

    cout<<mincostgrid(horizontal,vertical);
}