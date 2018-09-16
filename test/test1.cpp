/*************************************************************************
    > File Name: test1.cpp
    > Author: 潘梦园
    > brief:  输入一棵二元查找树，将该二元查找树转换成一个排序的双向链表。要求不能创建任何 新的结点，只调整指针的指向.
    > Created Time: 2018年09月14日 星期五 19时59分52秒
 ************************************************************************/

#include <iostream>

struct BSTreeNode{
    int value;
    BSTreeNode* right;
    BSTreeNode* left;
};

BSTreeNode* PHead = NULL;
BSTreeNode* PIndex = NULL;

void AddNode(BSTreeNode** PRoot, int value) {
    if (*PRoot == NULL) {
        BSTreeNode *temp = new BSTreeNode;
        temp->value = value;
        temp->left = NULL;
        temp->right = NULL;
        *PRoot = temp;
    } else if ((*PRoot)->value > value) {
        AddNode(&(*PRoot)->left, value);
    } else if ((*PRoot)->value < value) {
       AddNode(&(*PRoot)->right, value); 
    } 
} 


void Adjust(BSTreeNode* p) {
    
	if (p == NULL) {
        return; 
	}
    if (p->left != NULL) { 
        Adjust(p->left); 
	}
     
    p->left = PIndex; 
    if (PIndex == NULL) {
        PHead = p;
	} else {
        PIndex->right = p; 
	}
    PIndex = p; 
    if (p->right != NULL) { 
        Adjust(p->right);
	}
}

void Print(BSTreeNode *pHead) { 
    if (pHead == NULL) {
    	return;
	}
    BSTreeNode *t; 
    std::cout << "顺序遍历：" << std::endl; 
    while (pHead != NULL) { 
        t = pHead; 
        std::cout << pHead->value << " "; 
        pHead = pHead->right; 
    } 
    std::cout << std::endl; 
    std::cout << "逆序遍历：" << std::endl; 
    while (t != NULL) { 
        std::cout << t->value << " "; 
        t = t->left; 
    } 
    std::cout << std::endl; 
} 

int main() { 
    BSTreeNode* pRoot = NULL; 
    AddNode(&pRoot,10); 
    AddNode(&pRoot,6); 
    AddNode(&pRoot,14); 
    AddNode(&pRoot,4); 
    AddNode(&pRoot,8); 
    AddNode(&pRoot,12); 
    AddNode(&pRoot,16); 
    Adjust(pRoot); 
    Print(PHead); 
    return 0; 
} 
