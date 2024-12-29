#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }

};
void insert_at_tail(Node *&head,Node*& tail,int val)
{
    Node * newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;

}
void input_linked_list(Node *&head,Node *&tail)
{
     int val;
   while(true)
   {
    cin>> val;
    if(val == -1)
    {
        break;
    }
    insert_at_tail(head,tail,val);
   }
}
void remove_duplicate(Node *head)
{
    Node *& tmp = head;
    while (tmp != NULL)
    {
        Node * crnt = tmp;
        while (crnt->next != NULL)
        {
            if(crnt->next->val == tmp->val)
            {
                Node *deleteNode = crnt->next;
                crnt->next = crnt->next->next;
                delete deleteNode;
            }
            else{
                crnt = crnt->next;
            }

        }
        tmp = tmp->next;
    }
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
   Node* head = NULL;
   Node * tail = NULL;
    input_linked_list(head,tail);
    remove_duplicate(head);
    print_linked_list(head);
   return 0;
}