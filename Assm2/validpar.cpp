#include<bits/stdc++.h>
 using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int n=s.size();
        for(char c : s){
            if(c=='('||c=='{'||c=='[') st.push(c) ;
            else{
            if(st.empty()) return false;
            char top = st.top();
            if((c==')'&& top=='(') || (c=='}'&& top=='{') || (c==']'&& top=='[') ){
                st.pop();
            }
            else return false;
            }
        }
        return st.empty();
    }
};