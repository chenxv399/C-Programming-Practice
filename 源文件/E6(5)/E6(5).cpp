#include<stdio.h>
#include<malloc.h>
#pragma warning(disable : 4996)
typedef struct node
{
    int data;
    struct node* next;
}NODE;
#define LEN sizeof(NODE)
NODE* setup()
{
    NODE* head = NULL, * p1, * p2;
    int n = 0;
    p2 = (NODE*)malloc(LEN);
    p1 = p2;
    scanf("%d", &p1->data);
    while (p1->data)
    {
        n++;
        if (n == 1)
        {
            head = p1;
        }
        else
        {
            p2->next = p1;
            p2 = p1;
        }
        p1 = (NODE*)malloc(LEN);
        scanf("%d", &p1->data);
    }
    p2->next = NULL;
    return head;
}

int main()
{
    NODE* p;
    p = setup();
    while (p)
    {
        printf("%d£¬", p->data);
        p = p->next;
    }
}
