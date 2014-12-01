#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

int main(){
    long n,height = 0,cubee = 1;
    cin >> n;
    while(n >= cubee){
        height++;
        cubee += height;
        n -= cubee;
    }
    cout << height << "\n";
    return 0;
}
