#include <bits/stdc++.h>
using namespace std;

// https://www.youtube.com/watch?v=GTJr8OvyEVQ
void fillLps(int lps[], int n, string pat){
	lps[0]=0;
	int i=1;
	int j=0;

	while(i<n){
		if(pat[i] == pat[j]){
			++j;
			lps[i] = j;
			++i;
		}
		else{
			if(j != 0){
				j = lps[j-1];
			}
			else{
				lps[i] = 0;
				++i;
			}
		}
	}
}


void KMPsearch(string text, string pat){
	int n = text.length();
	int m = pat.length();

	int lps[m];
	fillLps(lps, m, pat);

	int i=0;
	int j=0;
	while(i<n){
		if(text[i] == pat[j]){
			++i;
			++j;
		}
		if(j==m){
			cout<<i-j<<endl;
			j = lps[j-1];
		}

		else if (i < n && pat[j] != text[i]) { 
            if (j != 0) 
                j = lps[j - 1]; 
            else
                i = i + 1; 
		}
	}
}


int main(){
	string txt;
	string pattern;
	cin>>txt;
	cin>>pattern;

	KMPsearch(txt, pattern);
	// int m = pattern.length();

	// int lps[m];
	// fillLps(lps, m, pattern);
	// for(int i=0;i<m;++i) cout<<lps[i];
}
