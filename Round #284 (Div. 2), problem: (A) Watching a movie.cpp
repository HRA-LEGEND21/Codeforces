#include <iostream>
#include <vector>

using namespace std;

int main(){
    long n,x,a,b,time = 0,length;
    vector<pair<long,long> > v;
    cin >> n >> x;
    while(n--){
        cin >> a >> b;
        v.push_back(make_pair(a,b));
    }

    length = b;
    long init = 1;
    vector<pair<long,long> > :: iterator it;
    it = v.begin();
    while(init <= length && it != v.end()){
        if((init+x) <= it->first){
            init += x;
        }else{
            time += (it->second - init) + 1;
            init = it->second + 1;
            it++;
        }

        // cout << "# " << init << " -> " << time << endl;
    }

    cout << time << "\n";
    return 0;
}
