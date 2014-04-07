#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <int> a;
    vector <int> :: iterator it;
    int n,m,x;
    cin >> n >> m;
    for(int i = 0; i <= n; i++)
        a.push_back(0);
    while(m--){
        cin >> x;
        for(int i = x; i <= n; i++){
            if(!a[i])
                a[i] = x;
        }
    }
    bool check = false;
    it = a.begin();
    it++;
    while(it != a.end()){
        if(check) cout << " ";
        check = true;
        cout << *it;
        it++;
    }
    cout << endl;

    return 0;
}
