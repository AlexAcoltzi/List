#ifndef SIMPLELIST_H
#define SIMPLELIST_H
#include "Student.h"
#include "Node.h"

#endif // SIMPLELIST_H
class Simple_List
{
private:
    Node *start;
    Node *end;
public:
    Simple_List();
    void addFirst(Student student);
    void addEnd(Student student);
    void addInMiddle(Student student);
    void higherOrder();
    void minorOrder();
    void deletFirst();
    void deletEnd();
    void deletStudent(Student student);
    void deletList();
    void print();
};

Simple_List::Simple_List()
{
    start = nullptr;
    end = nullptr;
}

void Simple_List::addFirst(Student student)
{
    Node *aux = new Node(student);
    if (start == nullptr){
        start->next = aux;
        end->next = aux;
    }
    else{
        aux->next = start;
        start->next = aux;
    }
}

void Simple_List::addEnd(Student student)
{
    Node *aux = new Node(student);
    if(end == nullptr){
        end->next = aux;
        start->next = aux;
    }
    else{
        end->next->next = aux;
        end->next = aux;
    }
}

void Simple_List::addInMiddle(Student student)
{

}
