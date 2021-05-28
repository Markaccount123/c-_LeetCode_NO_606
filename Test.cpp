#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
	string tree2str(TreeNode* root) {
		string s;
		//根结点为空
		if (root == nullptr)
			return s;

		//左右子树都为空的时候
		s += to_string(root->val);
		if (root->left == nullptr && root->right == nullptr)
			return s;

		//左子树,总结一句话左树永远是要加入()的，不管他有没有结点，这样做的目的是保持结构，好辨认
		s += '(';
		s += tree2str(root->left);
		s += ')';

		//右子树（这个是有别的情况的,当右边为空的时候，这个括号是可以删除的，所以是空的时候，就不加任何东西了）
		if (root->right != nullptr)
		{
			s += '(';
			s += tree2str(root->right);
			s += ')';
		}
		return s;
	}
};
