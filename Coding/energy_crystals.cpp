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
        if(t[i] == ' ' or t[i] == '[' or t[i] == ']') continue;
        res += t[i];
    }
    return res;
}

vector<int> split(string t, char c) {
    vector<int> res;
    string aux = "";
    t += c;
    forn(i, t.size()) {
        if(t[i] == c) {
            if(!aux.empty()) res.pb(stoi(aux)), aux = "";
        }
        else aux += t[i];
    }
    return res;
}

void solve(){
    string t; getline(cin, t);
    t = noSpaces(t);
    int n; cin>>n;
    vi c = split(t, ',');
    int k = c.size();
    int dp[n + 1][2];
    forn(i, n + 1) forn(j, 2) {
        dp[i][j] = 0;
    }
    
    forn(j, k) {
        if(c[j] > n) continue;
        dp[c[j]][1] = 1;
        
        //pull dp
        forn(i, n + 1) {
            if(i - c[j] >= 0){
                dp[i][1] = (dp[i - c[j]][0] + dp[i][1]);
                dp[i][1] = (dp[i - c[j]][1] + dp[i][1]); 
            }
            dp[i][0] = (dp[i][1] + dp[i][0]);
            dp[i][1] = 0;
            
            // cout<<dp[i][0]<<" ";
        }
        // cout<<el;
    }
    
    cout<<dp[n][0]<<el;
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