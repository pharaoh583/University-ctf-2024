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

string noSpaces(string t) {
    string res = "";
    forn(i, t.size()) {
        if(t[i] == ' ' or t[i] == '{' or t[i] == '}') continue;
        res += t[i];
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
    vector<pair<string, string> > m;
    forn(l, 2) {
        string s; getline(cin, s);
        s = noSpaces(s);
        vector<string> d = split(s, ',');
        forn(i, d.size()) {
            vector<string> tp = split(d[i], ':');
            bool dup = false;
            forn(j, m.size()) {
                if(m[j].F == tp[0]) {
                    m[j].S = tp[1];
                    dup = true;
                    break;
                }
            }
            if(!dup) m.pb(mp(tp[0], tp[1]));
        }
    }

    vector<string> res;
    forn(i, m.size()) {
        res.pb(m[i].F + ": " + m[i].S);
    }
    cout<<"{";
    forn(i, res.size()) {
        cout<<res[i];
        if(i + 1 != res.size()) cout<<", ";
    }
    cout<<"}"<<el;
    
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