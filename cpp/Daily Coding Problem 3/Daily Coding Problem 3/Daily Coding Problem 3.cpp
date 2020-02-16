#include"pch.h"
#include<algorithm>
#include<vector>
#include<stack>
#include<string>
#include<iostream>
#include<cmath>
#include<map>
#include<utility>
#include<set>
#include<list>
#include <iterator> 
#include<deque>
#include<array>
#include<tuple>
#include<forward_list>
#include<queue>
#pragma warning (disable : 4996)
using namespace std;
#define lli long long int
#define MARKER -1
FILE stream1, stream2;
class Node {
public://by default it is private
	lli data;
	Node* Left = NULL;
	Node* Right = NULL;
	Node(lli data) {
		this->data = data;
	}
};

void Serialize(Node* head, FILE *fp) {
	if (head == NULL) {
		fprintf(fp, "%d", MARKER);
		return;
	}
	fprintf(fp, "%d", head->data);
	Serialize(head->Left, fp);
	Serialize(head->Right, fp);
}

void deSerialize(Node* &root, FILE *fp) {// root is a referrence to a pointer to Node object
	int Val;
	if (!fscanf(fp, "%d", &Val) || Val == MARKER)
		return;
	root = new Node(Val);
	deSerialize(root->Left, fp);
	deSerialize(root->Right, fp);
}

void inOrder(Node* root) {// just to check
	if (root) {
		inOrder(root->Left);
		cout << root->data<<"  ";
		inOrder(root->Right);
	}
}


int main() {
	Node *root = new Node(20);
	root->Left = new Node(8);
	root->Right = new Node(22);
	root->Left->Left = new Node(4);
	root->Left->Right = new Node(12);
	root->Left->Right->Left = new Node(10);
	root->Left->Right->Right = new Node(14);
	//inOrder(root);
	FILE* fp = fopen("tree.txt", "w");
	if (fp == NULL) {
		cout << "fail to open" << endl;
		return 0;
	}
	Serialize(root, fp);
	fclose(fp);

	Node* root1 = NULL;
	fp = fopen("tree.txt", "r");
	if (fp == NULL) {
		cout << "can not open that file";
	}
	deSerialize(root1, fp);
	cout << root1->data;
	inOrder(root1);
}
