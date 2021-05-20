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
    int key;
    char sdate[10];
    int data;
    struct day_node* left;
    struct day_node* right;
    int height;
}node;

typedef struct day_bucket2{
    char date[10];
    int volume;
    struct day_bucket2** next_level;

}bucket2;

bucket2* hash_search2(bucket2** table,char* date,int h_mode);
bucket2** insert_bucket(bucket2** table,bucket2* b,int h_mode);
bucket2** create_hash_table2(char* path,bucket2** table);
int d_hash(char* date ,int mode);
int search_table(bucket** table,char* date);
bucket* list_search(bucket* list,char* date);
bucket** create_hash_table(char* path,bucket** table);
int hash(char* date);
int height(node* node1);
node* avl_search(node* tree,int key);
void print_node(node* n);
void print_inorder(node* tree);
node* create_avl_tree(node* tree,char*path,int mode);
node* bst_insertion(node* tree,node* node1);
int max(int x,int y);
int get_balance(node* node1);
node* rebalance(node* node,int key,int balance);
node* left_rotate(node* x);
node* right_rotate(node* y);
#endif //PROJECT_FUNCTIONS2_H
