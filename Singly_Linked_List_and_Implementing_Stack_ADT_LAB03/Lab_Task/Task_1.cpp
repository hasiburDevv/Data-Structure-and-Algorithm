/*
Task 1 Given a SinglyLinkedList, print all keys except the first one. Sample Input/Output is given below.
--------------------------------------------------------------------------------------------------------
Sample Input                Sample Output
1 → 2 → 3 → 4 → NULL        2 3 4
NULL                        Nothing to print
1 → NULL                    Nothing to print
*/

#include <iostream>
using namespace std;

struct node {
    int data;
    node *next;
};

class Linked_list {
private:
    node *head, *tail;
    static int temp;
public:
    Linked_list () {
        temp = 0;
        head = NULL;
        tail = NULL;
    }

void add_node (int data) {
    node *tmp = new node;
    tmp->data = data;

    tmp->next = NULL;

    if(head == NULL) {
        head = tmp;
        tail = tmp;
    } else {
        tail->next = tmp;
        tail = tail->next;
    }
}

node* getHead () {
    return head->next;
}

static void display (node* head) {
    if(head == NULL) {
        if(Linked_list::temp == 0) {
            cout<<"Nothing to print"<<endl;
        }
    } else {
        Linked_list::temp++;
        cout<<head->data<<" ";
        display(head->next);
    }
}
};

int Linked_list::temp;

int main() {
    // cerating first object
    Linked_list obj1;

    obj1.add_node(1);
    obj1.add_node(2);
    obj1.add_node(3);
    obj1.add_node(4);

    Linked_list::display(obj1.getHead());
    //obj1.display(obj1.getHead());
    cout<<endl;

    // cerating first object

    Linked_list obj2;
    obj2.add_node(NULL);
    Linked_list::display(obj2.getHead());

    // cerating first object

    Linked_list obj3;
    obj3.add_node(1);
    Linked_list::display(obj3.getHead());

}
