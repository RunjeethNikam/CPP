#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    Node(int a)
    {
        data = a;
    }
    int data;
    Node *next = NULL;
};
Node *push1(Node *head, int data)
{
    Node *temp = new Node(data);
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        Node *curr = head;
        while (curr->next != NULL)
        {
            curr = curr->next;
        }
        curr->next = temp;
    }
    return head;
}
Node *push(Node *head, int data)
{
    Node *temp = new Node(data);
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        temp->next = head;
        head = temp;
    }
    return head;
}
void print(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << (temp->data) << " ";
        temp = temp->next;
    }
    cout << endl;
}
Node *insertAfter(Node *head, int data, int data1)
{
    Node *temp = new Node(data1);
    Node *curr = head;
    while (curr->data != data)
    {
        curr = curr->next;
    }
    temp->next = curr->next;
    curr->next = temp;
    return head;
}
Node *delValue(Node *head, int data)
{
    if (head->data == data)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *prev = head;
        while (curr and curr->data != data)
        {
            prev = curr;
            curr = curr->next;
        }
        if (curr == NULL)
        {
            cout << "data not found" << endl;
            return head;
        }
        prev->next = curr->next;
        delete curr;
    }
    return head;
}
Node *deli(Node *head, int count)
{
    if (count == 0)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
    else
    {
        int i = 0;
        Node *curr = head;
        Node *prev = head;
        while (i != count and curr)
        {
            // cout<<i<<" "<<curr->data<<endl;
            prev = curr;
            curr = curr->next;
            i++;
        }
        if (curr == NULL)
        {
            cout << " index out of range ";
            return head;
        }
        prev->next = curr->next;
        delete curr;
    }
    return head;
}
Node *clear(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        Node *curr = temp;
        temp = temp->next;
        delete curr;
    }
    return NULL;
}
int length(Node *head)
{
    int i = 0;
    Node *curr = head;
    while (curr)
    {
        curr = curr->next;
        i++;
    }
    return i;
}
Node *Search(Node *head, int data)
{
    Node *temp = head;
    while (temp && temp->data != data)
    {
        temp = temp->next;
    }
    if (temp == NULL)
    {
        cout << "not found";
    }
    return temp;
}
void printMiddle(Node *head)
{
    if (head)
    {
        Node *slow = head;
        Node *fast = head;
        while (fast and fast->next and fast->next->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        cout << slow->data;
    }
    return;
}
void frequency(Node *head, int data)
{
    Node *temp = head;
    int count = 0;
    while (temp)
    {
        if (temp->data == data)
        {
            count++;
        }
        temp = temp->next;
    }
    cout << count << endl;
}
void detectLoop(Node *head)
{
    Node *slow = head, *fast = head;
    while (slow && fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            cout << "detected a loop" << endl;
            return;
        }
    }
}
Node *createLoop(Node *head)
{
    Node *curr = head;
    while (curr->next)
    {
        curr = curr->next;
    }
    curr->next = head->next->next;
    return head;
}
Node *removeDuplicates(Node *head)
{
    Node *curr = head;
    Node *next_next;
    if (curr == NULL)
        return head;
    while (curr->next)
    {
        if (curr->data == curr->next->data)
        {
            Node *temp = curr->next;
            curr->next = curr->next->next;
            delete temp;
        }
        else
        {
            curr = curr->next;
        }
    }
    return head;
}
Node *removeDuplicates1(Node *head)
{
    if (head)
    {
        unordered_set<int> seen;
        Node *curr = head;
        Node *prev = head;
        while (curr)
        {
            if (seen.find(curr->data) != seen.end())
            {
                prev->next = curr->next;
                delete curr;
            }
            else
            {
                seen.insert(curr->data);
                prev = curr;
            }
            curr = prev->next;
        }
    }
    return head;
}
Node *reverse(Node *head)
{
    Node *prev = NULL, *next = NULL;
    Node *current = head;
    while (current)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}
Node *rotate(Node *head, int k)
{
    if (k == 0)
    {
        return head;
    }
    Node *current = head;
    int count = 1;
    while (count < k && current != NULL)
    {
        current = current->next;
        count++;
    }
    if (current == NULL)
    {
        return head;
    }
    Node *KthNode = current;
    while (current->next)
    {
        current = current->next;
    }
    current->next = head;
    head = KthNode->next;
    KthNode->next = NULL;
    return head;
}
int main(int argc, char const *argv[])
{
    Node *head = NULL;
    head = push1(head, 1);
    head = push1(head, 2);
    head = push1(head, 3);
    head = push1(head, 4);
    head = push1(head, 5);
    head = push1(head, 6);
    head = rotate(head, 4);
    print(head);

    return 0;
}
