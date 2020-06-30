#include <stdio.h>
#include <stdlib.h>
/*
input:9 1 1
output:1 2 3 4 5 6 7 8 9
input:20 7 3
output:9 12 15 18 1 4 7 11 16 20 5 10 17 3 13 2 14 8 19 6
*/ 
typedef struct node {
    int data;
    struct node *next;
} Node;

Node *circle_create(int n);
void count_off(Node *head, int n, int k, int m);

int main() 
{
    int n, k, m;
    scanf("%d%d%d", &n, &k, &m);
    Node *head = circle_create(n);
    count_off(head, n, k, m);
    return 0;
}

Node *circle_create(int n) 
{
    Node *temp, *new_node, *head;
    int i;

    temp = (Node *) malloc(sizeof(Node));
    head = temp;
    head->data = 1;

    for(i = 2; i <= n; i++) {
        new_node = (Node *) malloc(sizeof(Node));
        new_node->data = i;
        temp->next = new_node;
        temp = new_node;
    }

    temp->next = head;
    return head;
}

void count_off(Node *head, int n, int k, int m) 
{
    int i;
    int count;
    Node *pre;
    Node *temp;
    Node *out;
    pre = head;
    count = 0;
    if(k == 1) {
        for(i = 1; i < n; i++) {
            pre = pre->next; //move ->pre to the last node, which is ahead of the node to process
        }
    }
    else {
        for(i = 1; i < k - 1; i++) {
            pre = pre->next; //move ->pre to the node two position ahead of the node to process
        }
    }
    temp = pre->next;
    
    while (count < n) {
        if (m != 1) {
            for (i = 1; i < m - 1; i++) {
                temp = temp->next;
            }
            pre = temp;
            temp = temp->next; 
        }
        printf("%d", temp->data);
        out = temp;
        temp = temp->next;
        pre->next = temp;
        free(out);
        if(count != n) {
            printf(" ");
        }
        count++;  
    }
    return;
}
