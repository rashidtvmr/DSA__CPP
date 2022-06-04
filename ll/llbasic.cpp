#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next = NULL;
};

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

void insertAfter(Node *prevNode, int value)
{
    if (!prevNode)
    {
        cout << "Invalid previoud node";
        return;
    }
    Node *newNode = new Node();
    newNode->value = value;
    newNode->next = prevNode->next;
    prevNode->next = newNode;
}

void push(Node **head, int value)
{
    Node *newNode = new Node();
    newNode->value = value;
    newNode->next = (*head);
    if (*head == NULL)
    {
        newNode = (*head);
        return;
    }
    (*head) = newNode;
}

void deleteNode(Node **head, int n)
{
    Node *cNode = (*head);
    Node *prev;
    if (cNode != NULL && cNode->value == n)
    {
    }
    else
        while (cNode != NULL && n != cNode->value)
        {
            prev = cNode;
            cNode = cNode->next;
        }
    prev->next = cNode->next;
    delete cNode;
}

int lengthOfLL(Node *head)
{
    if (head == NULL)
        return 0;
    else
        return 1 + lengthOfLL(head->next);
    // cout << "Length of LL:" << count << endl;
}

void printInReverse(Node *head, bool flag)
{
    flag = !flag;
    if (head == NULL)
        return;
    printInReverse(head->next, flag);
    if (flag)
    {
        cout << head->value << "<-";
    }
}

bool searchInLL(Node *head, int key)
{
    Node *temp = head;
    while (temp)
    {
        if (temp->value == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int getNTHNode(Node *head, int nn, int len)
{
    Node *d = head;
    int n = len / 2;
    if (n < 0)
        return -1;
    while (n != 0)
    {
        d = d->next;
        n--;
    }
    return d->value;
}

int getMiddleNode(Node *head)
{
    Node *p1 = head, *p2 = head;
    while (p2 != NULL && p2->next != NULL)
    {
        p1 = p1->next;
        p2 = p2->next->next;
    }
    return p1->value;
};

bool detectLoopAndRemoveLoop(Node *head)
{
    // this will work if the loop is clockwise and loop is created from end
    map<Node *, int> hm;
    Node *dn = head;
    hm[head] = 1;
    while (dn != NULL)
    {
        if (hm[dn->next])
        {
            for (auto const &imap : hm)
                cout << "Keys:" << imap.first << endl;
            cout << "Terminated Keys:" << dn->next << endl;
            dn->next=NULL;
            return true;
        }
        hm[dn->next] = 1;
        dn = dn->next;
    }
    return false;
};

int main()
{
    Node *head = NULL;

    append(&head, 1);
    append(&head, 2);
    append(&head, 3);
    append(&head, 4);
    // append(&head, 5);
    // append(&head, 6);
    // append(&head, 7);
    // append(&head, 8);
    // append(&head, 9);
    // append(&head, 10);
    // append(&head, 11);
    // deleteNode(&head, 6);
    // int len = lengthOfLL(head);
    // cout << searchInLL(head, 8) << endl;
    // cout << getNTHNode(head, 6, len) << endl;
    // cout << getMiddleNode(head) << endl;
    head->next->next->next->next = head->next->next;
    cout << "Loop exist ?:" << detectLoopAndRemoveLoop(head) << endl;

// this will work if the loop is clockwise and loop is created from end
    Node *dHead = head;
    int counter=0;
    // bool flag = !true;
    while (dHead)
    {
        if(counter == 10) break;
        // if (flag)
        cout << dHead->value << "-->";
        dHead = dHead->next;
        counter++;
        // flag = !flag;
    }
    cout << endl;
    // printInReverse(head, false);

    return 0;
}