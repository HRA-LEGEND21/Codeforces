#include <iostream>
#include <cstdio>
#include <map>
#include <set>
#include <algorithm>
#include <math.h>
#include <vector>
#include <string>
#include <cctype>
#include <stack>

using namespace std;

int main(){
    int n,b;
    vector <int> a;
    vector <int> :: iterator it;
    cin >> n;
    while(n--){
        cin >> b;
        a.push_back(b);
    }
    sort(a.begin(),a.end());
    bool check = false;
    it = a.begin();
    while(it != a.end()){
        if(check) cout << " ";
        check = true;
        cout << *it;
        it++;
    }
    return 0;
}
