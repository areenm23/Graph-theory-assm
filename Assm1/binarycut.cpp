#include<bits/stdc++.h>
using namespace std;
void nc(string s){
    int n=s.length();
    int z=0,count=1;
    int i;
    for( i=0;i<n-1;i++){
        if(s[0]=='1' && count==1){
            while(s[i]=='1'){
                i++;
            }
           count++;          
        }
        if(s[i]=='1' && s[i+1]=='0' ){
            z++;      
        }       
        if(z>0) {
            if(s[i]!=s[i+1])
            count++;     
        }
    }
    cout<<count<<endl;   
}   
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string s;
        cin>>s;   
        nc(s);
    }
    return 0;
}