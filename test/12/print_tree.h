/*************************************************************************
    > File Name: print_tree.h
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年10月11日 星期四 23时20分26秒
 ************************************************************************/

#ifndef _LEARN_TEST_12_PRINT_TREE_H_
#define _LEARN_TEST_12_PRINT_TREE_H_


#include <stdint.h>
#include <queue>

struct Tree{
    int32_t value;
    Tree* left;
    Tree* right;
};


class TreeNode{
public: 
    Tree* add_tree(Tree* root, int32_t value);
    void print_tree();
    void get_push(Tree* root);

private:
    std::queue<Tree*> q;


};

#endif
