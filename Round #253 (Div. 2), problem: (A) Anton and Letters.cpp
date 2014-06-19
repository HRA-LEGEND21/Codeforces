#include <iostream>
#include <set>

using namespace std;

int main(){
    string a;
    while(getline(cin , a)){
        set <char> x;
        for(int i = 0; a[i]; i++){
            if(a[i] >= 'a' && a[i] <= 'z')
                x.insert(a[i]);
        }

        cout << x.size() << "\n";
    }
    return 0;
}
