// Iterative Queue based C program to do level order traversal 
// of Binary Tree 

#include <stdio.h>
#include <stdlib.h>
#define MAX_Q_SIZE 500

/* 	A binary tree node has data, pointer to left child 
   	and a pointer to right child */

struct node {
	int data;
	struct node *left;
	struct node *right;
}

/*	function prototyps.	*/
struct node **createQueue(int *, int *);
void enQueue(struct node **, int *, struct node *);
struct node *deQueue(struct node **, int *);

/* Given a binary tree, print its nodes in level order 
   using array for implementing queue */

/*UTILITY FUNCTIONS*/
struct node **createQueue(int *front, int *rear){
	struct node **queue = (struct node **)malloc(sizeof(struct node *)*MAX_Q_SIZE);

	*front = *rear = 0;
	return queue;
}


void enQueue(struct node **queue, int *rear, struct node *new_node) {
	queue[*rear]  = new_node;
	(*rear)++;
}

struct node *deQueue(struct node **queue, int *front){
	(*front)++;
	return queue[*front - 1];
}

void printLevelOrder(struct node *root){
	int rear, front;
	struct node **queue = createQueue(&front, &rear);
	struct node *temp_node = root;

	while (temp_node) {
		printf("%d", temp_node->data);

		/*	Enqueue left child.	*/
		if (temp_node->left) {
			enQueue(Queue, &rear, temp_node->left);
		}

		/*Enqueue right child */
		if (temp_node->right) {
			enQueue(queue, &rear, temp_node->right);
		}

		/*	Dequeue node and make it temp_node.	*/
		temp_node = deQueue(queue, &front);



	}

}


