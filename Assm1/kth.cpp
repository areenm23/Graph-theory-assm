#include<bits/stdc++.h>
using namespace std;
int main() {
    long long t,n,k,fac;
    cin>>t;
    for(int i=0;i<t;i++) {
        cin>>n>>k;
        fac=(n+k-1)/k;
        k*=fac;
        cout<<(n+k-1)/n<<endl;
    }
    return 0;
}