#include <bits/stdc++.h>
using namespace std;

// Reference: https://www.youtube.com/watch?v=VmogG01IjYc

void addEle(priority_queue<int> &lower, priority_queue<int, vector<int>, greater<int>> &upper, int d){
    if(lower.empty()){
        lower.push(d);
        return;
    }

    if(lower.top() > d){
        lower.push(d);
    }
    else{
        upper.push(d);
    }
}

void rebalance(priority_queue<int> &lower, priority_queue<int, vector<int>, greater<int>> &upper){
    int s1 = lower.size();
    int s2 = upper.size();
    int diff = s1 - s2;

    if(s1 == s2 || abs(diff) == 1) return;
    if(s1 - s2 >= 2){
        int top = lower.top();
        lower.pop();
        upper.push(top);
    }
    else{
        int top = upper.top();
        upper.pop();
        lower.push(top);
    }
}

void printMedian(priority_queue<int> &lower, priority_queue<int, vector<int>, greater<int>> &upper){
    int s1 = lower.size();
    int s2 = upper.size();
    if(s1  == s2){
        float t1 = lower.top();
        float t2 = upper.top();
        float ans = (t1+t2)/2;
        cout<<ans<<endl;
    }
    else if(s1>s2){
        float t = lower.top();
        cout<<t<<endl;
    }
    else{
        float t = upper.top();
        cout<<t<<endl;
    }
}


int main(){
    int n;
    cin>>n;

    priority_queue<int> lower;
    priority_queue<int, vector<int>, greater<int>> upper;

    int d;
        std::cout << std::fixed;
    std::cout << std::setprecision(1);
    for(int i=0;i<n;++i){
        cin>>d;
        addEle(lower, upper, d);
        rebalance(lower, upper);
        printMedian(lower, upper);
    }
}