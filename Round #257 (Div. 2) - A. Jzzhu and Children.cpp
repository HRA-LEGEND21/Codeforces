#include <iostream>
#include <algorithm>
#include <cstdio>
#include <set>
#include <math.h>
#include <cmath>
#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <iterator>
#include <vector>
#include <cstdint>
#include<bits/stdc++.h>
#define inn freopen("in.in","r",stdin)
#define outt freopen("out.out","w",stdout)
#define llp(n) for(ll i=n-1;i>=0;i--)
#define lp(i,n) for(int i=0;i<(int)n;i++)
#define INF -1000000000
#define clr(v,d) memset(v,d,sizeof (v))
#define sz(v) ((int)(v.size()))
#define all(v) ((v).begin()), ((v).end())

typedef long long ll;
typedef unsigned long long ul;
typedef long double db;
//typedef pair<int, int> ii;
//typedef vector<ll> vii;
//typedef vector<int> vi;
using namespace std;

int main()
{
    int n,m,x;
    bool flag=1;
    scanf("%d %d",&n,&m);
    queue<int>q,c;
    lp(i,n)
    {
        scanf("%d",&x);
        flag&=(x<=m);
        q.push(x);
        c.push(i+1);
    }
    int element;
    if(flag)printf("%d\n",n);
    else
    {
        while(!q.empty())
        {
            element = q.front();
            x = c.front();
            q.pop();
            c.pop();
            if(m<element)
            {
                q.push(element-m);
                c.push(x);
            }
        }
        printf("%d\n",x);
    }
    return 0;
}
