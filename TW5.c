#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left, *right;
};

struct node *head=NULL ,*temp,*curr,*prev;


void insert(int a)
{
    temp = (struct node *)malloc(sizeof(struct node));
    curr = head;
    prev = NULL;
    temp->data = a;
    temp->left = NULL;
    temp->right = NULL;
    if (head == NULL)
    {
        head = temp;
        return;
    }
    while (curr != NULL)
    {
        prev = curr;
        if (a > curr->data)
            curr = curr->right;
        else
            curr = curr->left;
    }
    if (a >= prev->data)
        prev->right = temp;
    else
        prev->left = temp;
}

void inorder(struct node *n)
{
    if (n != NULL)
    {
        inorder(n->left);
        printf("%d ", n->data);
        inorder(n->right);
    }
}

void preorder(struct node *n)
{
    if (n != NULL)
    {
        printf("%d ", n->data);
        preorder(n->left);
        preorder(n->right);
    }
}

void postorder(struct node *n)
{
    if (n != NULL)
    {
        postorder(n->left);
        postorder(n->right);
        printf("%d ", n->data);
    }
}

int main()
{
    int a, ch;
    while (1)
    {
        printf("Enter no.:");
        scanf("%d", &a);
        insert(a);
        printf("Press 1 to enter more data:\n");
        scanf("%d", &ch);
        if (ch != 1)
        {
            break;
        }
    }
    printf("Inorder\n");
    inorder(head);
    printf("\nPreorder\n");
    preorder(head);
    printf("\nPostorder\n");
    postorder(head);
}
