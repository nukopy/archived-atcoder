#include<bits/stdc++.h>
using namespace std;
using ll = long long;

//BEGIN CUT HERE
template<typename T>
map<T, T> factorize(T x){
    map<T, T> res;
    for(int i=2;i*i<=x;i++){
        while(x%i==0){
            x/=i;
            res[i]++;
        }
    }
    if(x!=1) res[x]++;
    return res;
}
//END CUT HERE



int main() {
    
    return 0;
}
