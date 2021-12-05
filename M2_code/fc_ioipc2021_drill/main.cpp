#include <bits/stdc++.h>

using namespace std;

struct test{
    string q, a;
};

vector<test> dt;

void drill(string question, string answer){
    test t;
    t.q = question;
    t.a = answer;
    dt.push_back(t);
}

string query(string question){
    for(int i = 0; i < dt.size(); i++){
        if(question == dt[i].q)
            return dt[i].a;
    }
}

void xuli(){
    int n, m;
    cin >> n >> m;
    cin.ignore();
    for(int i = 0; i < n; i++){
        string q, a;
        getline(cin, q);
        getline(cin, a);
        drill(q, a);
    }

    for(int i = 0; i < m; i++){
        string q;
        getline(cin, q);
        cout << query(q) << endl;
    }
}

int main()
{
    cin.tie(0);
    xuli();
}
