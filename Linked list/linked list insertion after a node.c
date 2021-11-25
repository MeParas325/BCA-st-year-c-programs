#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node * insertafternode(struct Node *head, struct Node *previousnode, int data){
	 struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
	 ptr->data=data;
	 
	 ptr->next = previousnode->next;
	 previousnode->next = ptr;
	 

	 return head;
	
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->data = 11;
    second->next = third;

    // Link third and fourth nodes
    third->data = 41;
    third->next = fourth;

    // Terminate the list at the third node
    fourth->data = 66;
    fourth->next = NULL;
    
    printf("Linked list before insertion....\n");
    linkedListTraversal(head);
    
    head=insertafternode(head, second, 56);
    
    printf("Linked list After insertion....\n");
    linkedListTraversal(head);
    return 0;
}
 