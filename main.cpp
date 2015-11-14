#include <cstddef>//include NULL
#include <iostream>

#include "Tree.hpp"
#include "Node.hpp"

using namespace std;
using namespace spacePu;

int main()
{
	//int count = 0;
	int n = 3;
	
	vector<vector <int>> permutation;
	//n=3,i=	     0
	permutation = BinaryTreePermutation(n);
	
cout << permutation.size() << endl;
	return 0;
	
	}
