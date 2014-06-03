#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main(){
    bool a[100000];
    memset(a,false,sizeof(a));
    int n,x,i;
    cin >> n;
    i = 0;
    while(i < n - 1){
        cin >> x;
        a[x] = true;
        i++;
    }
    for(i = 1; a[i] && i < n; i++);

    cout << i << "\n";
    return 0;
}
