#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <set>
#include <math.h>
#include <map>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

bool isPrime(int n){
    if(n < 2) return false;
    int h = sqrt(n);
    for(int i = 2; i <= h; i++){
        if(n%i == 0)
            return false;
    }
    return true;
}

int main(){
    int n,i,j;
    cin >> n;
    bool check = true;
    for(i = 2; i < n; i++){
        for(j = 2; j < n; j++){
            if(!isPrime(i) && !isPrime(j)){
                if(i+j == n){
                    check = false;
                    break;
                }
            }
        }
        if(!check)
            break;
    }

    cout << i << " " << j << "\n";
    return 0;
}
