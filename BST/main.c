#include <stdio.h>
#include <stdlib.h>
#include "BST.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	BSTPtr bstPtr;
	bool state;
	initBST(&bstPtr);
	
	Product prod1 = createProduct(123, "Franz", 5, 25.25);
	Product prod2 = createProduct(456, "Casimir", 6, 26.26);
	Product prod3 = createProduct(122, "Ondiano", 8, 25.25);
	
	bstPtr = addElement(bstPtr, prod1);
	addElement(bstPtr, prod2);
	addElement(bstPtr, prod3);

	printf("In Order:\n");
	inOrderBST(bstPtr);
	printf("\nPre Order:\n");
	preOrderBST(bstPtr);
	printf("\nPost Order:\n");
	postOrderBST(bstPtr);
	
	printf("Is Member (456)\n");
	state = isMember(bstPtr, 789);
	if(state){
		printf("True\n\n");
	}
	else{
		printf("False\n\n");
	}
	
	BSTPtr bstPtrMin = bstPtr;
	bstPtrMin = min(bstPtrMin);
	printf("Min Product: %d\n", bstPtrMin->data.prodID);
	
	BSTPtr bstPtrMax = bstPtr;
	bstPtrMax = max(bstPtrMax);
	printf("Max Product: %d", bstPtrMax->data.prodID);
	

	return 0;
}