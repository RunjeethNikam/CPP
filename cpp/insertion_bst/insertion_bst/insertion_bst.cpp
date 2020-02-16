// insertion_bst.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
//#include <iostream>
//#include <cstddef>

class Node {
public:
	int data;
	Node *left;
	Node *right;
	Node(int d) {
		data = d;
		left = NULL;
		right = NULL;
	}
};

class Solution {
public:

	void preOrder(Node *root) {

		if (root == NULL)
			return;

		std::cout << root->data << " ";

		preOrder(root->left);
		preOrder(root->right);
	}

	/* you only have to complete the function given below.
	Node is defined as
	*/
	class Node {
		public:
			int data;
			Node *left;
			Node *right;
			Node(int d) {
				data = d;
				left = NULL;
				right = NULL;
			}
	};





	Node * insert(Node * root, int data) {
		if (root->data > data) {
			if (root->right != NULL) {
				return insert(root->right, data);
			}
			else {
				Node *temp = new Node(data);
				root->right = temp;
				return root;
			}
		}
		else if (root->data < data) {
			if (root->left != NULL) {
				return insert(root->left, data);
			}
			else {
				Node *temp = new Node(data);
				root->left = temp;
				return root;
			}
		}
		return root;
	}

}; //End of Solution

int main() {
	Solution hi = new Solution();
	hi.insert
	return 0;
}