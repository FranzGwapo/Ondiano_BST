#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "BST.h"


//using recursive method
BST *addElement(BST *list, Product item){
	if(list==NULL){
		BSTPtr newPtr = malloc(sizeof(BST));
		if(newPtr==NULL){
			return;
		}
		newPtr->left = NULL;
		newPtr->right = NULL;
		newPtr->data = item;
		list = newPtr;
		return list;
		
	}
	
	else if(list->data.prodID < item.prodID){
		addElement(list->right, item);
		
	}
	else if(list->data.prodID > item.prodID){
		addElement(list->left, item);
	
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
	
}

void postOrderBST(BST *list){
	
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

BST *max(BST *list);
BST *min(BST *list);
bool isMember(BST *list, int prodID);

