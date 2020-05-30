#include <iostream>
using namespace std;

int sum(int *a, int n){
	int ans = 0;
	int *p = a;
	for(int i = 0; i < n; ++i){
		// ans += a[i];
		// ans += *(a + i);
		ans += *a;
		++a;
		// ans += *a + i;
	}
	cout << &p[3] << " " << a << endl;
 	return ans;

}

int main(){
	int arr[] = {1,2,3};
	int n = sizeof(arr)/sizeof(int);

	int ans = sum(arr, n);
	cout << ans;
	
	return 0;
}
	