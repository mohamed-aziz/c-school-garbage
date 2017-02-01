
/*

  Trying to discover trees in C.
 */

#include <stdlib.h>
#include <stdio.h>

struct node {
  // pointers to left and right childs
  struct node *leftChild;
  struct node *rightChild;
  int value;
};

void treeMaker(struct node *somenode, int depth) {
  if (depth == 3) {
    return;
  }
  // Dynamically allocate memory
  somenode->leftChild = malloc(sizeof(struct node));
  somenode->rightChild = malloc(sizeof(struct node));

  somenode->leftChild->value = depth * 10;
  somenode->rightChild->value = depth;
  treeMaker(somenode->leftChild, depth+1);
  treeMaker(somenode->rightChild, depth+1);
}

void displayTree(struct node *somenode) {
  if (somenode == NULL) {
    return;
  }
  printf("right %d\n", somenode->value);
  displayTree(somenode->leftChild);
  displayTree(somenode->rightChild);
}

int main(int argc, char *argv[]) {
  // create root node
  struct node *root;

  // point root to a root struct
  root = malloc(sizeof(struct node));

  root->value = 0;
  treeMaker(root, 0);
  displayTree(root);
  return 0;
}

