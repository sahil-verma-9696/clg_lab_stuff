//what is difference between malloc and calloc
#include<stdio.h>
#include<stdlib.h>

struct node
{
    /* code */
    int value;
    struct node *next;
};

//printing the node 
    void display(struct node *p)
    {
        while(p != NULL)
        {
            printf("%d ",p->value);
            p = p->next;
        }
        printf("\n NULL");
    }

void main()
{
    //initialise the node
    struct node *head;
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;

    // allocate memory
    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));

    //asign the value
    one->value = 100;
    two->value = 200;
    three->value = 300;

    //connecting the node 
    one->next = head;
    one->next = two;
    two->next = three;
    three->next = NULL;

    head = one;
    printf("printing linked list\n");
    display(head);

}