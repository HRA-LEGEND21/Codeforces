#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    long int n,p,k,x;
    vector <long int> page;
    vector <long int> :: iterator it;
    cin >> n >> p >> k;
    long int i = 0;
    while(p-k+i < p){
        if(p-k+i > 0) page.push_back(p-k+i);
        i++;
    }
    page.push_back(p);
    x = page.size();
    i = 0;
    while(p+k-i > p){
        if(p+k-i <= n) page.push_back(p+k-i);
        i++;
    }

    reverse(page.begin()+x,page.end());
    it = page.begin();
    if(*it != 1) cout << "<< ";
    bool check = false;
    while(it != page.end()){
        if(check)
            cout  << " ";
        check = true;
        if(*it == p)
            cout << "(" << p << ")";
        else cout << *it;
        it++;
    }
    if(*(it-1) != n) cout << " >>\n";
    else cout << "\n";
    return 0;
}
