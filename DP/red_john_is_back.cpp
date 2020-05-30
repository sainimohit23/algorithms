#include <bits/stdc++.h>
using namespace std;

// https://www.hackerrank.com/challenges/red-john-is-back/copy-from/48459016

vector<int> primes(220000, 1);

void sieve(){
    primes[0] = 0;
    primes[1] = 0;

    int t=sqrt(220000);
    for(int i=2;i<=t;++i){
        if(primes[i] == 1){
            for(int j=2; j*i<220000;++j){
                primes[i*j] = 0;
            }
        }
    }

    for(int i=1;i<220000;++i){
        primes[i] += primes[i-1];
    }
}

vector<int> findWays(){
    vector<int> v(41);
    v[0] = 1;
    v[1] = 1;
    v[2] = 1;
    v[3] = 1;
    
    for(int i=4;i<42;++i){
        v[i] = v[i-1] + v[i-4];
    }
    return v;
}

int main(){
    vector<int> v = findWays();
    sieve();
    int n,d;
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>d;
        cout<<primes[v[d]]<<endl;
    }
}