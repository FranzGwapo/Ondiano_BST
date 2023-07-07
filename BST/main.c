#include <stdio.h>
#include <stdlib.h>
#include "BST.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	BSTPtr bstPtr;
	initBST(&bstPtr);
	
	Product prod1 = createProduct(123, "Franz", 5, 25.25);
	Product prod2 = createProduct(456, "Casimir", 6, 26.26);
	Product prod3 = createProduct(122, "Ondiano", 8, 25.25);
	
	bstPtr = addElement(bstPtr, prod1);
	bstPtr = addElement(bstPtr, prod2);
	bstPtr = addElement(bstPtr, prod3);

	inOrderBST(bstPtr);

	return 0;
}
