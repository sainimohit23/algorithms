#include <bits/stdc++.h>
using namespace std;

void nextGreaterEle(int arr[], int greaterIndexMapping[], int n){
    if(n==0) return;
    stack<int> s1,s2;

    s1.push(arr[0]);
    s2.push(0);

    for(int i=1;i<n;++i){
        if(s1.empty() == true){
            s1.push(arr[i]);
            s2.push(i);
            continue;
        }

        while(s1.empty()==false && s1.top()<arr[i]){
            greaterIndexMapping[s2.top()] = i;
            s1.pop();
            s2.pop();
        }

        s1.push(arr[i]);
        s2.push(i);
    }

    while(s1.empty() == false){
        greaterIndexMapping[s2.top()] = -1;
        s2.pop();
        s1.pop();
    }
}

void nextSmallerEle(int arr[], int smallerIndexMapping[], int n){
    if(n==0) return;
    stack<int> s1,s2;

    s1.push(arr[0]);
    s2.push(0);

    for(int i=1;i<n;++i){
        if(s1.empty() == true){
            s1.push(arr[i]);
            s2.push(i);
            continue;
        }

        while(s1.empty()==false && s1.top()>arr[i]){
            smallerIndexMapping[s2.top()] = i;
            s1.pop();
            s2.pop();
        }

        s1.push(arr[i]);
        s2.push(i);
    }

    while(s1.empty() == false){
        smallerIndexMapping[s2.top()] = -1;
        s2.pop();
        s1.pop();
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }

    int greaterIndexMapping[n]={0};
    int smallerIndexMapping[n]={0};

    nextGreaterEle(arr, greaterIndexMapping, n);
    nextSmallerEle(arr, smallerIndexMapping, n);

    // for(int i=0;i<n;++i){
    //     if(greaterIndexMapping[i] == -1){
    //         cout<<"num: "<<arr[i]<<"  nextgre: "<<-1<<"  mapping: "<<greaterIndexMapping[i]<<endl;
    //         continue;
    //     }
    //     cout<<"num: "<<arr[i]<<"  nextgre: "<<arr[greaterIndexMapping[i]]<<"  mapping: "<<greaterIndexMapping[i]<<endl;
    // }

    // cout<<endl<<endl;

    // for(int i=0;i<n;++i){
    //     if(smallerIndexMapping[i] == -1){
    //         cout<<"num: "<<arr[i]<<"  nextSml: "<<-1<<"  mapping: "<<smallerIndexMapping[i]<<endl;
    //         continue;
    //     }
    //     cout<<"num: "<<arr[i]<<"  nextSml: "<<arr[smallerIndexMapping[i]]<<"  mapping: "<<smallerIndexMapping[i]<<endl;
    // }


    // for(int i=0;i<n;++i){
    //     if(greaterIndexMapping[i] == -1){
    //         cout<<arr[i]<<" --> "<<-1<<"    "<<-1<<" --> "<<-1<<endl;
    //         continue;
    //     }

    //     cout<<arr[i]<<" --> "<<arr[greaterIndexMapping[i]]<<"    "<<arr[greaterIndexMapping[i]]<<" --> "<<arr[smallerIndexMapping[greaterIndexMapping[i]]]<<endl;
    // }


    for(int i=0;i<n;++i){
        if(greaterIndexMapping[i] == -1){
            cout<<-1<<" ";
            continue;
        }

        // cout<<arr[i]<<" --> "<<arr[greaterIndexMapping[i]]<<"    "<<arr[greaterIndexMapping[i]]<<" --> "<<arr[smallerIndexMapping[greaterIndexMapping[i]]]<<endl;
        else if(smallerIndexMapping[greaterIndexMapping[i]] == -1){
            cout<<-1<<" ";
            continue;
        }
        cout<<arr[smallerIndexMapping[greaterIndexMapping[i]]]<<" ";
    }
    return 0;
}
