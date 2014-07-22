/**
            BISMILLAHIR RAHMANIR RAHIM { IN THE NAME OF ALLAH }

           LLLLLLL      LL     LL   LL    LL   LL    LLLLLLLLLL
         LL        LL   LL     LL   LL   LL    LL    LL        LL
         LL             LL     LL   LL  LL     LL    LL        LL
           LLLLLL       LLLLLLLLL   LLL        LL    LLLLLLLLLL
                  LLL          LL   LL  LL     LL    LL        LL
        LL        LLL          LL   LL   LL    LL    LL        LL
          LLLLLLLLL            LL   LL    LL   LL    LLLLLLLLLLL
**/


// All standard Headers
#include <algorithm>
#include <cctype>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <list>
#include <map>
#include <math.h>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>

using namespace std;

// Data type
typedef long long int LLI;
typedef long int  LI;
typedef vector<LLI> VLLI;
typedef vector<int> VI;
typedef vector<string> VS;
typedef map<int,int> MII;
typedef map<string,int> MSI;
typedef map<string,string> MSS;

// I/O Defination
#define SI(n) scanf("%d",&n)
#define SIL(n) scanf("%lld",&n);
#define SC(a) scanf("%c",&a)
#define SS(x) scanf("%s",x)
#define CPS(s) getline(cin , s)
#define IP(n) printf("%d",n)
#define ILP(n) printf("%lld",n)
#define CPSP(a) cout << a << "\n"
#define PB push_back
#define MP make_pair
#define MSET(a,v) memset(a,v,sizeof(a))
#define STB(const) const.begin()
#define STE(const) const.end()

// Program Flow & Mathematical Functions
#define FOR(i,n,inc) for(;i < n;i += inc)
#define GCD(a,b) __gcd(a, b)
#define LCM(a,b) (a/GCD(a,b))*b
#define PI 3.1415926535897932384626433832795

int main(){
    int n,m,a,x;
    queue<int> q,c;
    cin >> n >> m;
    int i = 1;
    while(n--){
        cin >> a;
        q.push(a);
        c.push(i);
        i++;
    }
    int l;
    while(!q.empty()){
        l = q.front();
        x = c.front();

        if(m >= l){
            q.pop();
            c.pop();
        }else{
            q.pop();
            q.push(l-m);
            c.pop();
            c.push(x);
        }
    }
    cout << x << endl;
    return 0;
}
