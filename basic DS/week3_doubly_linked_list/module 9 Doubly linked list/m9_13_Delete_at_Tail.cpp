#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node * prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }

};
void delete_at_tail(Node *&head, Node *& tail)
{
    Node * deletenode = tail;
    tail = tail->prev;
    delete deletenode;
    if(tail == NULL)
    {
        head = NULL;
        return;
    }
    tail->next = NULL;
    //there is no node but want to delete
    
}
void print_forward(Node*head)
{
    Node * tmp = head;
    while(tmp!= NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout << endl;
}
// void print_backward(Node*tail)
// {
//     Node * tmp = tail;
//     while(tmp!= NULL)
//     {
//         cout<<tmp->val<<" ";
//         tmp = tmp->prev;
        
//     }
//     cout<< endl;
// }
int main()
{
    Node * head = new Node(10);
    Node * a = new Node(20);
    Node * tail = new Node(30);
    head->next =a;
    a->next = tail;
    a->prev = head;
    tail->prev = a;
    delete_at_tail(head,tail);
    print_forward(head);

   // print_backward(tail);
   
   return 0;
}