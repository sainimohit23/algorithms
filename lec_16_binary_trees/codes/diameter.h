#include "node.h"
#include "heightTree.h"
#include <algorithm>
#include <utility>
template <typename T>
int diameter(Node<T>* root){
	if (root == 0) return 0;

	int leftDia = diameter(root->left);
	int rightDia = diameter(root->right);
	int leftHt = heightTree(root->left);
	int rightHt = heightTree(root->right);
	int curDia = leftHt + rightHt + 1;
	return std::max(std::max(leftDia, rightDia), curDia);
}

//STL PAIR
// using namespace std;
// typedef	pair<int, int> pii;
// template <typename T>
// pair<int, int> diameterExpress(Node<T>* root){
// 	if (root == 0){
// 		return pair(0,0);
// 	}

// 	pii left = diameterExpress(root->left);
// 	pii right = diameterExpress(root->right);
// 	pii ans;
// 	ans.second = max(left.second, right.second) + 1;
// 	ans.first = max(max(left.first, right.first), left.second + right.second + 1);
// }


class myPair{
public:
	int d;
	int height;
	myPair(int x = 0, int y = 0){
		d = x;
		height = y;
	}
};

myPair diameterfast(Node<int> * root){
	if (root == 0){
		return myPair();
	}

	myPair left = diameterfast(root->left);
	myPair right = diameterfast(root->right);
	myPair current;
	current.height = max(left.height, right.height) + 1;
	current.d = max(max(left.d, right.d), left.height + right.height + 1);
	return current;
} 