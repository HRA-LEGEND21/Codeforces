#include<iostream>
#include <vector>

using namespace std;

bool hasEight(long x){
    if(x < 0)
        x *= -1;
    while(x > 0){
        if(x%10 == 8)
            return true;
        x /= 10;
    }
    return false;
}

int main(){
    long x,y = 0;
    cin >> x;
    while(x <= 8888888888){
        
        if(hasEight(x) && y != 0)
            break;
        x = x + 1;
        y++;
    }
    cout << y;
    return 0;
}
