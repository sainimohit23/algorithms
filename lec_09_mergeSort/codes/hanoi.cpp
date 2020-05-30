#include <iostream>
using namespace std;

void hanoi(int n, char source, char dest, char helper){
	if (n == 0) return;

	hanoi(n - 1, source, helper, dest);
	cout << "Moving disc " << n << " from " << source << " to " << dest << endl;
	hanoi(n - 1, helper, dest, source);
}

int main(){
	int n;	cin >> n;
	hanoi(n, 'S', 'D', 'H');
	return 0;
}