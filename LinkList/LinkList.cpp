#include<iostream>
#include<string>

template <typename T>  class Node
{

  public:
    T item;
    Node<T> *next;
};

int main()
{
    Node<std::string> first;
    Node<std::string> second;
    first.item = "abc";
    second.item = "bcd";
    first.next = &second;
    Node<std::string> *p = &second;
    std::cout << first.next->next << std::endl;    
}
