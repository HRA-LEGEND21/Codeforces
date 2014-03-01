#include <iostream>
#include <map>
#include <cstdio>

using namespace std;

int main(){
    int n,x,y;
    map <int,bool> mp;
    bool check = true;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d",&x,&y);
        for(;x < y; x++){
            if(check)
                mp[x] = true;
            else mp[x] = false;
        }
        check = false;
    }
    int count = 0;
    map <int,bool> :: iterator it;
    it = mp.begin();
    while(it != mp.end()){
        if(it->second) count++;
        it++;
    }
    printf("%d\n",count);
    return 0;
}
