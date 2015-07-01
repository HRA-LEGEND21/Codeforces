#include <iostream>
#include <cstdio>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    long n, selectedX, selectedY, selectedZ, x1, x2, y1, y2, z1, z2;

    cin >> n;
    cin >> x1 >> x2;
    cin >> y1 >> y2;
    cin >> z1 >> z2;

    bool first = true;

    selectedX = 0;
    selectedY = 0;
    selectedZ = 0;
    while((selectedX + selectedY + selectedZ) < n){
        if(first && (x2 + y2 + z2 <= n)){
            selectedX = x2;
            selectedY = y2;
            selectedZ = z2;
            break;
        }
        if(first){
            selectedX += x1;
            selectedY += y1;
            selectedZ += z1;
            first = false;
        }else{
            if(selectedX < x2 && ((selectedX + selectedY + selectedZ) < n)){
                selectedX +=  min((x2 - selectedX), (n - (selectedX + selectedY + selectedZ)));
            }
            if(selectedY < y2 && ((selectedX + selectedY + selectedZ) < n)){
                selectedY +=  min((y2 - selectedY), (n - (selectedX + selectedY + selectedZ)));
            }
            if(selectedZ < z2 && ((selectedX + selectedY + selectedZ) < n)){
                selectedZ +=  min((z2 - selectedZ), (n - (selectedX + selectedY + selectedZ)));
            }
        }
        // cout << selectedX << selectedY << selectedZ << endl;
    }

    cout << selectedX << " " << selectedY << " " << selectedZ << endl;
    return 0;
}
