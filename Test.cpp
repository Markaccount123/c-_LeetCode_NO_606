#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
	string tree2str(TreeNode* root) {
		string s;
		//�����Ϊ��
		if (root == nullptr)
			return s;

		//����������Ϊ�յ�ʱ��
		s += to_string(root->val);
		if (root->left == nullptr && root->right == nullptr)
			return s;

		//������,�ܽ�һ�仰������Զ��Ҫ����()�ģ���������û�н�㣬��������Ŀ���Ǳ��ֽṹ���ñ���
		s += '(';
		s += tree2str(root->left);
		s += ')';

		//��������������б�������,���ұ�Ϊ�յ�ʱ����������ǿ���ɾ���ģ������ǿյ�ʱ�򣬾Ͳ����κζ����ˣ�
		if (root->right != nullptr)
		{
			s += '(';
			s += tree2str(root->right);
			s += ')';
		}
		return s;
	}
};
