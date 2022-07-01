#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int traversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d", ptr->data);
        printf("\n");
        ptr = ptr->next;
    }
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    fifth = (struct node *)malloc(sizeof(struct node));

    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 66;
    third->next = fourth;

    fourth->data = 85;
    fourth->next = fifth;

    fifth->data = 100;
    fifth->next = NULL;

    traversal(head);

    return 0;
}