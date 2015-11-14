#pragma once
#include <cstddef>

namespace spacePu
{
	class Node
	{
		int key;
		Node* left;
		Node* right;
	public:
		Node() { key = 1; left = NULL; right = NULL; };
		Node(int akey) { key = akey; left = NULL; right = NULL; };

		void setKey(int akey) { key = akey; };
		void setLeft(Node* aleft) { left = aleft; };
		void setRight(Node* aright) { right = aright; };
		int getKey() { return key; };
		Node* getLeft() { return left; };
		Node* getRight() { return right; };
	};

}
