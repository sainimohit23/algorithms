// C++ program to print all primes smaller than or equal to 
// n using Sieve of Eratosthenes 
#include <bits/stdc++.h> 
using namespace std; 

void SieveOfEratosthenes(int n) 
{
	bool prime[n+1]; 
	memset(prime, true, sizeof(prime)); 

	prime[0] = false;
	prime[1] = false;
	for(int i=2;i<=sqrt(n)+1;++i){
		if(prime[i]==true){
			for(int j=2;j*i<=n;++j){
				prime[i*j] = false;
			}
		}
	}

	for (int p=2; p<=n; p++) 
       if (prime[p]) 
          cout << p << " "; 
} 

// Driver Program to test above function 
int main() 
{ 
	int n = 30; 
	cout << "Following are the prime numbers smaller "
		<< " than or equal to " << n << endl; 
	SieveOfEratosthenes(n); 
	return 0; 
} 
