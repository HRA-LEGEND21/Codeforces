#include<bits/stdc++.h>

using namespace std;

bool isHaveAll(string x){
    int index[26];
    memset(index,0,sizeof(index));

    for(int i = 0; x[i]; i++){
        index[tolower(x[i]) - 97]++;
    }

    for(int i = 0; i < 26; i++){
        if(index[i] == 0)
            return false;
    }
    return true;
}

int main(){
    int x;
    string word;
    cin >> x;
    cin >> word;
    if(isHaveAll(word))
        cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
