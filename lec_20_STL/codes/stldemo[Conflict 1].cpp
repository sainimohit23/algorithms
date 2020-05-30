#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool myCompare(const Student &a,const Student &b){
	if(a.marks != b.marks){
		return a.marks > b.marks;
	}
	
	return a.roll > b.roll;
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