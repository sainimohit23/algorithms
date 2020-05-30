#include "bstNode.h"
#include <cmath>
#include <algorithm>
using namespace std;

struct HBPair{
	int height;
	bool isBal;
	HBPair(int h = 0, bool bal = false){
		height = h;
		isBal = bal;
	}
};

HBPair isBalanced(BstNode<int> *root){
	if (root == 0){
		HBPair ans(0, true);
		return ans;
	}

	HBPair left = isBalanced(root->left);
	HBPair right = isBalanced(root->right);
	HBPair ans;
	ans.height = max(left.height, right.height) + 1;
	if (abs(left.height - right.height) <= 1 && left.isBal && right.isBal){
		ans.isBal = true;
	}
	return ans;
}