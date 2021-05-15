//
// Created by peri on 7/5/21.
//

#ifndef PROJECT_FUNCTIONS2_H
#define PROJECT_FUNCTIONS2_H

typedef struct day_bucket{
    char date[10];
    int volume;
    struct day_bucket* next;
}bucket;

typedef struct day_node{
    int date;
    char sdate[10];
    int volume;
    struct day_node* left;
    struct day_node* right;
    int height;
}node;

int search_table(bucket** table,char* date);
bucket* list_search(bucket* list,char* date);
bucket** create_hash_table(char* path,bucket** table);
int hash(char* date);
int height(node* node1);
void print_inorder(node* tree);
node* create_avl_tree(node* tree,char*path);
node* bst_insertion(node* tree,node* node1);
int max(int x,int y);
int get_balance(node* node1);
node* rebalance(node* node,int date,int balance);
node* left_rotate(node* x);
node* right_rotate(node* y);
#endif //PROJECT_FUNCTIONS2_H