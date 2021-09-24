/**
 * @brief   Sym table
 *
 * @authors Jakub Komárek (xkomar33)
 */
#pragma once

#include "./../baseDeclarations.h"

typedef struct bNode {
    char *key;
    struct bData *data;
    struct bNode *lPtr;
    struct bNode *rPtr;
} *bNodePtr;

typedef struct bData{
    int data;
} *bDataPtr;

/**
 * binary tree inicialization
 * @param *tree-tree to incializate
 */ 
void bInit(bNodePtr *tree);
/**
 * deconstruction of tree
 * @param *tree-tree to destruction
 */ 
void bDestruct(bNodePtr *tree);
/**
 * binary tree search
 * @param *tree-tree to search from
 * @return finded-pointer to searched node, not finded - NULL
 */ 
bDataPtr bSearch(bNodePtr *tree, char *key);
/**
 * binary tree insertion
 * @param *tree-tree to insert,* key-key from inserted node, data-iformation to insert
 */ 
void bInsert(bNodePtr *tree, char *key, bDataPtr data);
/**
 * binary tree auxiliary function
 */ 
void replaceByRightmost (bNodePtr ReplacedPtr, bNodePtr *tree);
/**
 * remove node from binary tree 
 * @param *tree-tree where is node for removing,* key-key from deleted node
 */ 
void bDelete(bNodePtr *tree, char *key);
/**
 * debug function- print data from tree
 * @param *tree-node to print
 */ 
void nodePrint(bNodePtr *tree);