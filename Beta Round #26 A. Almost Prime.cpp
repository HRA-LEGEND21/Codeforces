#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <math.h>
#include <vector>

using namespace std;

bool isPrime(int n){
    if(n == 2) return true;
    if(n < 2) return false;
    int h = sqrt(n);
    for(int i = 2; i <= h; i++){
        if(n%i == 0)
            return false;
    }
    return true;
}

int main(){
    int n,almostprime = 0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int h = i/2 , c = 0;
        // cout << i << " -> ";
        for(int j = 1; j <= h; j++){
            if((i%j == 0) && isPrime(j)){
                c++;
                // cout << j << " ";
            }
        }
        if(c == 2){
            almostprime++;
        }
        // cout << endl;
    }
    cout << almostprime << endl;
    return 0;
}
