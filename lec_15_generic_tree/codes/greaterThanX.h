int greaterThanX(Node<int>* root, int x){
	if (root == 0) return 0;

	int ans = 0;
	for(int i = 0; i < root->n_child; ++i){
		ans += greaterThanX(root->children[i], x);
	}

	if (root->data > x) ++ans;
	return ans;
}