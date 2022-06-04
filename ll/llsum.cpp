#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next = NULL;
};

// void append(Node** head_ref, int new_data)
// {

//     // 1. allocate node
//     Node* new_node = new Node();

//     // Used in step 5
//     Node *last = *head_ref;

//     // 2. Put in the data
//     new_node->value = new_data;

//     // 3. This new node is going to be
//     // the last node, so make next of
//     // it as NULL
//     new_node->next = NULL;

//     // 4. If the Linked List is empty,
//     // then make the new node as head
//     if (*head_ref == NULL)
//     {
//         *head_ref = new_node;
//         return;
//     }

//     // 5. Else traverse till the last node
//     while (last->next != NULL)
//     {
//         last = last->next;
//     }

//     // 6. Change the next of last node
//     last->next = new_node;
//     return;
// };

void append(Node **head, int value)
{
    Node *newNode = new Node();
    Node *dNode = (*head);
    newNode->value = value;
    if (*head == NULL)
    {
        (*head) = newNode;
        return;
    }
    while (dNode->next != NULL)
    {
        dNode = dNode->next;
    }
    dNode->next = newNode;
}

void printList(Node *node)
{
    while (node != NULL)
    {
        cout << node->value << "->";
        node = node->next;
    }
    cout << endl;
}

int sumTwoList(Node *list1, Node *list2)
{
    Node *l1 = list1, *l2 = list2;
    int c1 = 0, c2 = 0;
    while (l1 != NULL)
    {
        cout << l1->value << endl;
        c1 = (c1 * 10) + l1->value;
        cout << c1 << endl;
        l1 = l1->next;
    }
    while (l2 != NULL)
    {
        cout << l2->value << endl;
        c2 = (c2 * 10) + l2->value;
        cout << c2 << endl;
        l2 = l2->next;
    }
    return c1 + c2;
}

void printSumToList(Node **newList, int n)
{
    stack<int> digits;
    while (n)
    {
        digits.push(n % 10);
        n /= 10;
    }
    while (!digits.empty())
    {
        append((newList), digits.top());
        digits.pop();
    }
}

void reverseLinkedList(Node **head){
    Node *current=(*head),*next=NULL,*prev=NULL;
    while(current != NULL){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    *head=prev;
}

int main()
{
    Node *list1 = NULL;
    append(&list1, 1);
    append(&list1, 2);
    append(&list1, 3);

    reverseLinkedList(&list1);

    // Node *list2 = NULL;
    // append(&list2, 8);
    // append(&list2, 4);
    // append(&list2, 2);

    printList(list1);
    // printList(list2);
    // int softl = sumTwoList(list1, list2);
    // cout << "Sum of two list:" << softl << endl;

    // Node *newList = new Node();
    // printSumToList(&newList, softl);
    // printList(newList);
    return 44;
}
