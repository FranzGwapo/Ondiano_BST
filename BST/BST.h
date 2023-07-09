#ifndef BST_H
#define BST_H
#include <stdbool.h>

typedef struct {
	int prodID;
	char prodName[20];
	int prodQty;
	float prodPrice;
} Product;

typedef struct node {
	Product data;
	struct node *left;
	struct node *right;
} Nodetype, *NodePtr, BST,  *BSTPtr;

//Add element to the BST based on the product ID
BST *addElement(BST *list, Product item); //using recursive method
void insertBST(BSTPtr *list, Product item); //using iterative method

//Delete element in the BST base on the product ID
void removeElement(BST **list, int prodID); //using iterative method
BST *deleteElement(BST *list, int prodID); // using recursive method

//Display BST all in recursive method
void inOrderBST(BST *list);
void preOrderBST(BST *list);
void postOrderBST(BST *list);

//Other functions
BST *newBST();
void initBST(BST **list);
bool isEmpty(BST *list);
Product createProduct(int id, char *name, int qty, float price);
void displayProduct(Product prod); //Use the following format { <id> | <prodName>} replacing the angular brackets with data
BST *max(BST *list);
BST *min(BST *list);
bool isMember(BST *list, int prodID);


#endif