#pragma once
#include "Node.hpp"
#include <vector>

using namespace std;
namespace spacePu
{
	class Tree
	{
		Node* root;
	public:
		Tree();
		Tree(Node* node);
		~Tree();
		Node* getRoot() { return root; };
	private:

		void deleteTree(Node* node);
	};

	Tree::Tree()
	{
		root = NULL;
	}

	Tree::Tree(Node* node)
	{
		root = node;
	}

	Tree::~Tree()
	{
		//deleteTree(root);
	}

	void Tree::deleteTree(Node* root)
	{
		if (root != NULL)
		{
			deleteTree(root->getLeft());
			deleteTree(root->getRight());
			delete root;
		}
	}
	

}
