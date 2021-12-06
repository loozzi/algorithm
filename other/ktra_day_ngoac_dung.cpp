#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    bool ok = true;
    stack<char> st;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
            st.push(s[i]);
        }
        else if(s[i] == ')'){
            if(st.size() == 0 || st.top() != '(')
                ok = false;
            else
                st.pop();
        }
        else if(s[i] == ']'){
            if(st.size() == 0 || st.top() != '[')
                ok = false;
            else
                st.pop();
        }

        else if(s[i] == '}'){
            if(st.size() == 0 || st.top() != '{')
                ok = false;
            else
                st.pop();
        }
    }
    if(st.size()!=0)
        ok = false;
    if(ok)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
