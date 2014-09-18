#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n,x,y,count = 0;
    cin >> n;
    vector<int> a,b;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        if(y-x >= 2)
            count++;
    }
    cout << count << "\n";
    return 0;
}
