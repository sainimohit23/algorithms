#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool myCompare(vector<int> a, vector<int> b){
	if(a.marks > b.marks){
		return true;
	}
	if(a.marks == b.marks){
		return a.roll > b.roll;
	}

	else return false;
}

class Student{
	public : 
	int roll, marks;
	Student(int r, int m){
			roll = r;
			marks = m;
	}
} ;

int main(){
	
	vector<Student> vs;
	for(int i = 0; i < 5; ++i){
		Student tmp(i, -i);
		vs.push_back(tmp);
	}

	sort(vs.begin(),vs.end(),myCompare)



	for(int i = 0; i  < 5; ++i){
			cout << v[i] << " ";
	}
}