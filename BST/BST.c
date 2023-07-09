#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "BST.h"


//using recursive method
BST *addElement(BST *list, Product item){
	if(isEmpty(list)){
		BSTPtr newPtr = malloc(sizeof(BST));

		newPtr->left = NULL;
		newPtr->right = NULL;
		newPtr->data = item;
		list = newPtr;
		return list;
		
	}
	
	else if(list->data.prodID < item.prodID){
		list->right = addElement(list->right, item);
		
	}
	else if(list->data.prodID > item.prodID){
		list->left = addElement(list->left, item);
	
	}
	
}

//using iterative method
void insertBST(BSTPtr *list, Product item){
	int i;
	BSTPtr newNode = malloc(sizeof(BST));
	
	newNode->data = item;
	
	
	
}


 //using iterative method
void removeElement(BST **list, int prodID){
	
}

// using recursive method
BST *deleteElement(BST *list, int prodID);

//Display BST all in recursive method
void inOrderBST(BST *list){
	if(list!=NULL){
		inOrderBST(list->left);
		displayProduct(list->data);
		inOrderBST(list->right);
	}
}

void preOrderBST(BST *list){
	if(list!=NULL){
		displayProduct(list->data);
		preOrderBST(list->left);
		preOrderBST(list->right);
	}
}

void postOrderBST(BST *list){
	if(list!=NULL){
		postOrderBST(list->left);
		postOrderBST(list->right);
		displayProduct(list->data);
	}
}


BST *newBST(){
	BST * newBST;
	newBST->data = createProduct(0, " ", 0, 0);
	newBST->left = NULL;
	newBST->right = NULL;
	
	return NULL;
}

void initBST(BST **list){
	*list = NULL;
}

bool isEmpty(BST *list){
	return (list==NULL) ? true : false;
}

Product createProduct(int id, char *name, int qty, float price){
	Product prod;
	prod.prodID = id;
	strcpy(prod.prodName, name);
	prod.prodQty = qty;
	prod.prodPrice = price;
	return prod;
}

void displayProduct(Product prod){
	printf("{ <%d> | <%s> }\n", prod.prodID, prod.prodName);
}

BST *max(BST *list){
	while(list->right !=NULL){
		list = list->right;
	}
	return list;
}

BST *min(BST *list){
	while(list->left !=NULL){
		list = list->left;
	}
	return list;
}

bool isMember(BST *list, int prodID){
	int i;
	BSTPtr trav = list;
	while(trav!=NULL){
		if(trav->data.prodID == prodID){
			return true;
		}
		else{
			if(trav->data.prodID > prodID){
				trav = trav->left;
			}
			else{
				trav = trav->right;
			}
		}
	}

	return false;
}
