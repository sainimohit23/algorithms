#include <map>
#include <iostream>
#include <utility>
using namespace std;
class Student{
public:
	int roll, marks;
	Student(int r, int m){
		roll = r;
		marks = m;
	}
};

class comparator{
public:
	bool operator()(const Student& S1, const Student& S2){
		if (S1.marks != S2.marks) return S1.marks > S2.marks;
		else return S1.roll < S2.roll;
	}
};


int main(){
	map<Student, int, comparator> msi;

	//iterator to map
	// map<Student, int, comparator>::iterator it = msi.begin();
	auto it = msi.begin();


	// Student S(1, 100);
	// msi.insert(make_pair(S, 1));
	// msi[S] = 1;
}