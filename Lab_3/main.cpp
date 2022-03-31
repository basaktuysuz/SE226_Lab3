#include <iostream>
using namespace std;


class Node {
public:
    int data;
    Node *next;
    Node(int x, Node *n) {data=x ;next=n;}
    };

class Stack {
int max;
private:
    Node *top;
    int x;
public:
    Stack(int x) {
        top = NULL;
        max = x;
    }

void push(int data)
{
    Node* temp = new Node(data, NULL);
    if (!top)
    {
        top=temp;
    }
    else
    { temp->data = data;
        temp->next = top;
        top = temp;}
}


bool isEmpty()
{
    return false;
}


int peek(){
    if (!isEmpty())
        return top->data;
    else
        exit(1);
    }


int pop()
{
    Node* temp;


    if (top == NULL)
    {
        cout << "\nStack Underflow" << endl;
        exit(1);
    }
    else
    {
        temp = top;
        top = top->next;
        free(temp);
    }
}


void display()
{
    Node* temp;

    if (top == NULL)
    {
        cout << "\nStack Underflow";
        exit(1);
    }
    else
    {
        temp = top;
        while (temp != NULL)
        {
            cout << temp->data << "-> ";
            temp = temp->next;
        }
    }
}};

int main()
{
    Stack *stack = new Stack(5);
    stack->push(11);
    stack->push(22);
    stack->push(33);
    stack->pop();
    stack->push(44);
    stack->push(55);
    stack->pop();
    stack->push(66);
    stack->push(77);
    stack->display();



    cout << "\nTop element is "
        << stack->peek() << endl;

cout<< "elements in present stack <<";
while(!stack->isEmpty())
{
    cout<< stack->peek() << "  ";
    stack->pop();
}

    return 0;
}
