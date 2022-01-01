#include <iostream>
#include "../Head/RedBlackTree.h"
using namespace std;
int main() {
	int n;
	cin>>n;
	bst t;
	while(n--) {
		int x;
		cin>>x;
		t.insert(x);
	}
	t.inorder();
	return 0;
}
