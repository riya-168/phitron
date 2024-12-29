#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_head(Node *&head, int val)
{
    Node *newnode = new Node(val);
    newnode->next = head;
    head = newnode;
}
void insert_at_tail(Node *&head, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newnode;
}
void delete_head(Node *&head)
{
    if(head == NULL)
    {
        return;
    }
    Node *deletenode = head;
    head = head->next;
    delete deletenode;
}
void delete_at_any_position(Node *&head,int pos)
{
    if(head == NULL){
        return;
    }
    if(pos == 0)
    {
        delete_head(head);
        return;
    }
    Node *tmp = head;
    for(int i=1;i<pos;i++)
    {
        if(tmp->next == NULL)
        {
            return;
        }
        tmp = tmp->next;
    }
    if(tmp->next == NULL)
    {
        return;
    }

    Node* deletenode = tmp->next;
    tmp->next= tmp->next->next;
    delete deletenode;
}
void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val;
        if (tmp->next != NULL)
            cout << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    int q;
    cin >>q;
    for(int i=1;i<=q;i++)
    {
        int choice,val,pos;
        cin>>choice;
        switch(choice)
        {
        case 0:
            cin>>val;
            insert_at_head(head,val);
            print_linked_list(head);
            break;
        case 1:
            cin>>val;
            insert_at_tail(head,val);
            print_linked_list(head);
            break;
        case 2:
            cin >> pos;
            delete_at_any_position(head,pos);
            print_linked_list(head);
            break;

        default:
            break;

        }

    }
    return 0;
}