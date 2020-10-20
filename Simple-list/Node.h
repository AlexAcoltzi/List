#ifndef NODE_H
#define NODE_H
#include "Student.h"
#include "Simple-List.h"

#endif // NODE_H
class Node
{
private:
 Student student;
 Node* next;
public:
    Node(Student student);
    friend class Simple_List;
};

Node::Node(Student student)
{
    this->student = student;
    next = nullptr;
}
