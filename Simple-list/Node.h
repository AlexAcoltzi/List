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
    Node(Student);
    friend class Simple_List;
};
