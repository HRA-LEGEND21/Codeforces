#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<algorithm>
#include<string.h>
#include<math.h>
#include<vector>

using namespace std;

int main(){
    vector <pair <int , int> > v;
    v.push_back(make_pair(1,12));
    v.push_back(make_pair(2,6));
    v.push_back(make_pair(3,4));
    v.push_back(make_pair(4,3));
    v.push_back(make_pair(6,2));
    v.push_back(make_pair(12,1));
    vector <pair <int , int> > :: iterator it;
    vector <pair <int , int> > :: iterator rt;
    vector <pair <int , int> > r;
    string in;
    int test,x,y;
    cin >> test;
    getchar();
    while(test--){
        cin >> in;
        it = v.begin();
        while(it != v.end()){
            x = it->first;
            y = it->second;
            for(int i = 0; i < y; i++){
                bool flag = true;
                for(int j = i; j < 12; j += y){
                    if(in[j] == 'O'){
                        flag = false;
                        break;
                    }
                }
                if(flag){
                    r.push_back(make_pair(x,y));
                    break;
                }
            }
            it++;
        }
        cout << r.size();
        rt = r.begin();
        while(rt != r.end()){
            cout << " ";
            cout << rt->first << "x" << rt->second;
            rt++;
        }
        cout << endl;
        r.clear();
    }

    return 0;
}
