#include "stdio.h"
#include "stdlib.h"

/* 树节点 */
typedef struct node {
	int data;
	struct node * left;   /* 节点左边的树枝 */
	struct node * right;  /* 节点右边的树枝 */
} Node;

/* 树根 */
typedef struct tree {
	Node * root;
} Tree;

/*插入函数 向一个树里面插入数据*/
void insert (Tree* tree, int value) {
	/*创建一个节点*/
    Node* node=(Node*)malloc(sizeof(Node));
    node->data = value;
    node->left = NULL;
    node->right = NULL;
    
    /*判断树是不是空树*/
    if (tree->root == NULL) {
        tree->root = node;
    } else {
        Node* temp = tree->root;/*从树根开始*/
        while (temp != NULL) {
            if (value < temp->data) {
                if(temp->left == NULL)
                {
                    temp->left = node;
                    return;
                }
                else {
                    temp = temp->left;
                }
            } else {
 
                if(temp->right == NULL)
                {
                    temp->right = node;
                    return;
                } else {
                    temp = temp->right;
                }
            }
        }
    }
}

/*
 遍历一整颗树
 中序遍历:先左后根再右
 */
void traverse (Node* node) {
    if(node != NULL)
    {
        traverse(node->left);
        printf("%d ",node->data);
        traverse(node->right);
    }
}

/*销毁一棵树*/
void distory_tree (Node* node) {
	if (node != NULL) {
		distory_tree(node->left);
    distory_tree(node->right);
    printf("free node:%d\n",node->data);
		
    free(node);
		node = NULL;
	}
}

/* 主函数 */
int main () {
	int i = 0;
	Tree tree;
    tree.root = NULL; /* 创建一个空树 */
    int n;
    printf("input total num:\n");
    
    /* 输入n个数并创建这个树 */
    scanf("%d",&n);
    
    for(i = 0; i < n; i++) {
        int temp;
        scanf("%d",&temp);
        insert(&tree, temp);
    }
    
    /* 遍历整个树 */
    traverse(tree.root);
	
	  /* 销毁一棵树 */
	  distory_tree(tree.root);
	  return 0;
}
