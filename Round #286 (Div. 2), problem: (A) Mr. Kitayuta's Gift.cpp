#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

bool isPalindrome(char x[20]){
    int j = strlen(x);
    for(int i = 0; i <= j/2; i++)
        if(x[i] != x[j-i-1])
            return false;
    return true;
}

int main(){
    char x[20],y[20], check = false;
    scanf("%s",x);
    int len = strlen(x);
    for(int i = 0; i<= 25 && !check; i++){
        memset(y, '\0', sizeof(y));
        for(int j = 0; j <= len; j++) {
            for (int k = 0,l = 0; k <= len; k++) {
                if (k == j) {
                    y[k] = (char) (i + 97);
                }else y[k] = x[l++];
            }
            y[len+1] = '\0';
            //cout << y << endl;
            check = isPalindrome(y);
            if (check)
                break;
        }
    }
    if(check)
        cout << y << endl;
    else cout << "NA\n";
    return 0;
}
