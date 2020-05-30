#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool myCompare(int a, int b){
	return a > b;
}


class Student{
	public : 
	int roll, marks;
	Student(int r, int m){
			roll = r;
			marks = m;
	}
	void print(){
		cout << marks << " " << roll << endl;
	}

	bool operator< (const Student& S) const{
		if (marks != S.marks){
			return marks > S.marks;
		}
		return roll < S.roll;
	}

} ;

bool compStud(const Student& A, const Student& B){
	if (A.marks != B.marks){
		return A.marks > B.marks;
	}

	return A.roll < B.roll;
}


class COMPARATORCLASS{
public:
	bool operator()(const Student& A, const Student& B){
	if (A.marks != B.marks){
		return A.marks > B.marks;
	}

	return A.roll < B.roll;
}
}

int main(){
	// int arr[] = {3 , 2 , 1 , -1 , 8};
	// sort(arr, arr + 5);
	
	// vector<int> v = {3 , 2 , 1 , -1 , 8};
	// sort(v.begin(), v.end(), myCompare);

	vector<Student> vs;
	for(int i = 0; i < 5; ++i){
		Student tmp(i, -i);
		vs.push_back(tmp);
	}

	vs.push_back(Student(7, -1));

	sort(vs.begin(), vs.end());
	for(int i = 0; i < vs.size(); ++i){
		vs[i].print();
	}




	// for(int i = 0; i  < 5; ++i){
	// 		cout << v[i] << " ";
	// }
}