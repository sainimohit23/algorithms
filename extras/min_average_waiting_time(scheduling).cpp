#include <bits/stdc++.h>
using namespace std;

class comparator{
public:
    int operator() (const pair<int, int> &p1, const pair<int, int> &p2){
        return p1.second > p2.second;
    }
};


int main(){
    int n;
    cin>>n;
    priority_queue<pair<int, int>, vector<pair<int, int>>, comparator> pq;
    vector<pair<int,int>> v;
    int t, l;
    for(int i=0;i<n;++i){
        cin>>t>>l;
        v.push_back(make_pair(t, l));
    }

    sort(v.begin(), v.end());

    int idx = 0;
    int total_time = 0;
    int waiting_time = 0;
    while(idx < n || !pq.empty()){
        while(idx < n && v[idx].first <= total_time){
            pq.push(v[idx]);
            ++idx;
        }

        if(!pq.empty()){
            pair<int, int> cur = make_pair(pq.top().first, pq.top().second);
            pq.pop();

            waiting_time += total_time - cur.first + cur.second;
            cout<<waiting_time<<endl;
            total_time += cur.second;
        }
        else{
            pq.push(v[idx]);
            total_time = v[idx].first;
            ++idx;
        }
    }

    cout<<waiting_time/n;

    // for(int i=0;i<n;++i){
    //     cout<<v[i].first<<" "<<v[i].second<<endl;
    // }

    // while(!pq.empty()){
    //     int t = pq.top().first;
    //     cout<<t<<" ";
    //     pq.pop();
    // }
}