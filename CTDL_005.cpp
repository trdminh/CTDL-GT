#include <iostream>

using namespace std;

struct Node
{
    /* data */
    int data;
    Node *next;
};

class LinkedList
{
private:
    /* data */
    Node *head;
public:
    LinkedList() : head(NULL) {};

    void Insert_node_at_end(int value)
    {
        Node *new_node = new Node();
        new_node->data=value;
        new_node->next=NULL;
        if (!head)
        {
            head = new_node;
            return;
        }

        Node *temp = head;
        while (temp->next)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }
    void Delete_node(int value)
    {
        if(!head)
        {
            return;
        }

        while (head && head->data == value)
        {
            Node *delete_node = head;
            head = head->next;
            delete delete_node;
        }

        Node *temp = head;
        while (temp->next)
        {   
            if (temp->next->data == value){
                Node *delete_node = temp->next;
                temp->next = temp->next->next;
                delete delete_node;
            }
            else
            {
                temp = temp->next;
            }
        }   
    }
    void Display()
    {
        if(!head)
        {
            cout << "NULL";
        }
        Node *temp = head;
        while (temp)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        
    }
};

int main()
{
    LinkedList list;
    int n,k;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        list.Insert_node_at_end(value);
    }
    cin >> k;
    list.Delete_node(k);
    list.Display();
}

