#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	char c;
	struct node *suivant;
} Node;

Node *dec2bin(int n) {
	Node *previousNode = NULL;
	while (n) {
		Node *uneNode = (Node *) malloc(sizeof(Node));
		uneNode->suivant = previousNode;
		uneNode->c = n%2;
		previousNode = uneNode;
		n /= 2;
	}
	return previousNode;
}


int main(int argc, char *argv[]) {
	Node *uneNode = dec2bin(10001);
	for (; uneNode; uneNode=uneNode->suivant) {
		printf("%d", uneNode->c);
	}
	printf("\n");
	return 0;
}
