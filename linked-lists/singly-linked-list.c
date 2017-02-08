

#include <stdio.h>
#include <stdlib.h>

struct node {
	int valeur;
	struct node *nextNode;
};

void readLinkedListFromStdin(struct node *headNode, int times) {
	if (times == 5) {
		return ;
	}
	headNode->nextNode = (struct node *) malloc(sizeof(struct node));
	scanf("%d", &headNode->valeur);
	readLinkedListFromStdin(headNode->nextNode, times+1);
}


void readLinkedListCircularFromStdin(struct node *headNode, int times, struct node *firstNode) {
	if (times == 5) {
		headNode = (struct node *) &firstNode;
		return ;
	}
	headNode->nextNode = (struct node *) malloc(sizeof(struct node));
	scanf("%d", &headNode->valeur);
	readLinkedListCircularFromStdin(headNode->nextNode, times+1, firstNode);
}


int main(int argc, char *argv[]) {
	struct node *headNode;
	headNode = (struct node *) malloc(sizeof(struct node));
	// readLinkedListFromStdin(headNode, 0);
	readLinkedListCircularFromStdin(headNode, 3, headNode);
	return 0;
}
