#include <iostream>
using namespace std;
#include <cassert>


int main() {
    int k;

    cin>>k;

    assert(k<100 && k>7); //abort will be called whenever this condition becomes false

    cout<<k;

    return 0;
}
