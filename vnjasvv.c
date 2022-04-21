#include <bits/stdc++.h>

using namespace std;

class node
{
    public:
    int data;
    node *next;
    node(int val)
    {
        next = NULL;
    }
};

void push(node &head, int val)
{
    node *temp = new node(val);
    temp->next = head;
    head = temp;
}

void display(node &head)
{
    node *temp = head;
    while (temp != NULL)
    {
        printf("%d: ", temp->data);
        temp = temp->next;
    }
}

int main()
{
    node *head = NULL;
    push(head, 1);
    push(head, 2);
    push(head, 3);
    push(head, 4);
    display(head);
    return 0;
}