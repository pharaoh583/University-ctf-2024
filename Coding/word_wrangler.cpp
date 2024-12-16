//                           ____         ___	
//                         ,' __ ``.._..''   `. 
//                         `.`. ``-.___..-.    :
// ,---..____________________>/          _,'_  |
// `-:._,:_|_|_|_|_|_|_|_|_|_|_|.:SSt:.:|-|(/  |
//                        _.' )   ____  '-'    ;
//                       (    `-''  __``-'    /
//                        ``-....-''  ``-..-''
//		All for DKP :') and to reach the world finals
#include <bits/stdc++.h>
#define forn(i,n) for(int i = 0; i < int(n); i++)
#define forsn(i,s,n) for(int i = int(s); i < int(n); i++)
#define forit(i, str) for(auto i = str.begin(); i != str.end(); i++)
#define DBG(x) cerr << #x << " = " << (x) << endl
#define all(v) (v).begin(),(v).end()
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long 
#define ii pair<int,int>
#define vi vector<int>
#define F first
#define S second
#define pb push_back
#define pf push_front
#define mp make_pair
#define el "\n"
using namespace std;

string noPunct(string t) {
    string res = "";
    forn(i, t.size()) {
        if(t[i] != ' ' and !isalpha(t[i])) continue;
        if(t[i] == ' ') res += t[i];
        else res += tolower(t[i]);
    }
    return res;
}

vector<string> split(string t, char c) {
    vector<string> res;
    string aux = "";
    t += c;
    forn(i, t.size()) {
        if(t[i] == c) {
            if(!aux.empty()) res.pb(aux), aux = "";
        }
        else aux += t[i];
    }
    return res;
}

void solve(){
    string t; getline(cin, t);
    t = noPunct(t);
    vector<string> v = split(t, ' ');

    string maxi = "";
    map<string, int> m;
    forn(i, v.size()) {
        m[v[i]]++;
    }

    for(auto [k, v] : m) {
        if(m[maxi] < v) maxi = k;
    }
    cout<<maxi<<el;
}
int main(){
    FastIO;
    int t = 1; 
    //int t; cin>>t;
    while(t--) solve();
}

/*
⣿⠘⡀Today YOU will compete⡜⠀⣿   ⠀
⣿⠀⠑⡀⠀⠀⠀and YOU will⠀get⠀⡔⠁⣿⣿⠀⠀⠀
⣿⣿⣿⠈⠢⢄⠀⠀⠀⠀BETTER!!!⠀⠀⣀⠴⠊⠀⣿⣿⣿⠀⠀⠀⠀
⣿⣿⣿⣿⣿⠀⠀⢸⠀⠀⠀⢀⣀⣀⣀⣀⣀⡀⠤⠄⠒⠈⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀
⣿⣿⣿⣿⣿⣿⠀⠘⣀⠄⠊⠁⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⣿⣿⣿⠟⠛⠛⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⢋⣩⣉⢻⣿⣿⣿⣿⣿⣿	   '&`
⣿⣿⣿⠀⣿⣶⣕⣈⠹⠿⠿⠿⠿⠟⠛⣛⢋⣰⠣⣿⣿⠀⣿⣿⣿⣿⣿⣿	    #
⣿⣿⣿⡀⣿⣿⣿⣧⢻⣿⣶⣷⣿⣿⣿⣿⣿⣿⠿⠶⡝⠀⣿⣿⣿⣿⣿⣿	    #
⣿⣿⣿⣷⠘⣿⣿⣿⢏⣿⣿⣋⣀⣈⣻⣿⣿⣷⣤⣤⣿⡐⢿⣿⣿⣿⣿⣿	   _#_
⣿⣿⣿⣿⣆⢩⣝⣫⣾⣿⣿⣿⣿⡟⠿⠿⠦⠀⠸⠿⣻⣿⡄⢻⣿⣿⣿⣿	  ( # )
⣿⣿⣿⣿⣿⡄⢻⣿⣿⣿⣿⣿⣿⣿⣿⣶⣶⣾⣿⣿⣿⣿⠇⣼⣿⣿⣿⣿	  / 0 \
⣿⣿⣿⣿⣿⣿⡄⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⣰⣿⣿⣿⣿⣿	 ( === )
⣿⣿⣿⣿⣿⣿⠇⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢀⣿⣿⣿⣿⣿⣿	  `---'
⣿⣿⣿⣿⣿⠏⢰⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢸⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⠟⣰⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⣿⣿⣿⣿⣿⣿
⣿⣿⣿⠋⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡄⣿⣿⣿⣿⣿⣿
⣿⣿⠋⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⢸⣿⣿⣿⣿⣿
⣿⠏⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⢸⣿⣿⣿⣿⣿*/