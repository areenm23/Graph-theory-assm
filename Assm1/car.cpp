#include<bits/stdc++.h>
using namespace std;
int main() {
    int t,n,k,q,d;
    cin>>t;
    for(int i=0;i<t;i++) {
        cin>>n>>k>>q;
        long long x[k+1],y[k+1];
        x[0]=0;
        y[0]=0;
        for(int j=1;j<=k;j++) {
            cin>>x[j];
        }
        for(int j=1;j<=k;j++) {
            cin>>y[j];
        }
        for(int j=0;j<q;j++) {
            cin>>d;
            int l=0,r=k;
            while(l<=r) {
                int m=(l+r)/2;
                if(x[m]>d) {
                    r=m-1;
                } else {
                    l=m+1;
                }
            }
            if(x[r]==d) {
                cout<<y[r]<<' ';
            } else {
                cout<<y[r]+(d-x[r])*(y[r+1]-y[r])/(x[r+1]-x[r])<<' ';
            }
        }
        cout<<endl;
    }
    return 0;
}