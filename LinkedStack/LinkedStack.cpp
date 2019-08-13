#include<iostream>
#include<string>

using namespace std;

template <typename T> class Node
{
    public:
       T item;
       Node<T> *next;
};

class Stack
{
    private: Node<string> *first = NULL;

    public:
        bool isEmpty()
        {
            return first == NULL;
        }

        void push(string val)
        {
            Node<string> *n = first;
            Node<string> node;
            first = &node;
            first->item = val;
            first->next = n;
            cout<< first->item <<endl;
        }

        void search(string val)
        {
            cout<<first->item<<endl;
            Node<string> *p = first;
            cout << p->item<< endl;
            int found = 0;
            while(p != NULL)
            {
                if (p->item == val)
                {
                    cout << "found"<< p->item<<endl;
                    found = 1;
                    break;
                }
                p = p->next;
            }
            if (found ==0)
            {
                cout << "not found"<<endl;
            }
        }

};

int main()
{
    Stack stack;
    cout << stack.isEmpty()<< true << endl;

    stack.push("a");
    cout << stack.isEmpty()<< endl;
    stack.search("a");
}
