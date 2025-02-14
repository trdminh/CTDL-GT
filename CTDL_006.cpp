#include<iostream>
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
        Node *new_node = new Node;
        new_node->data = value;
        new_node->next = NULL;

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
    void Display()
    {
        if(!head)
        {
            cout << "NULL";
        }
        Node *temp = head;
        while (temp)
        {
            /* code */
            cout << temp->data << " ";
            temp = temp->next;
        }
        
    }
    void Delete_node()
    {
        if(!head)
        {
            return;
        }
        Node *temp = head;
        while (temp)
        {
            /* code */
            Node *check = temp;
            while (check->next)
            {
                if(temp->data == check->next->data)
                {
                    Node *delete_node = check->next;
                    check->next = check->next->next;
                    delete delete_node;
                }
                else{
                    check = check->next;
                }
            }
            temp = temp->next;
            
        }
        
    }
};

int main()
{
    LinkedList list;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        list.Insert_node_at_end(value);
    }
    list.Delete_node();
    list.Display();
}
