/*************************************************************************
    > File Name: bepth_of_binary_tree.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年10月30日 星期二 22时31分05秒
 ************************************************************************/

#include <iostream>
#include "bepth_of_binary_tree.h"

//创建一个二叉树
Node* creat(Node* root) {
    int32_t data = 0;
    std::cin >> data;

    if (data == -1) {//-1代表空
        root = NULL;
    } else {
        root = new Node;
        root->data = data;
        root->left = creat(root->left);
        root->right = creat(root->right);
    }
    return root;
}

//前序遍历
void print_node(Node* root) {
    if (root) {
        std::cout << root->data << ' ';
        print_node(root->left);
        print_node(root->right);
    }
}


//求二叉树的深度
int32_t depth(Node* root) {
    if (root == NULL) {
        return 0;
    }
    int32_t left_depth = depth(root->left);
    int32_t right_depth = depth(root->right);

    int32_t max_depth = std::max(left_depth, right_depth);

    return max_depth + 1;
}
