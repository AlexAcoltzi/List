#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>


#endif // STUDENT_H
class Student
{
private:
    char *name;
    char *lastName;
    char *career;
    int id;
public:
    Student();
    Student(char *name,char *lastName,char *career ,int id);
    int getId();
    char getName();
    friend std::ostream &operator<<(std::ostream &write, Student &ObjectStudent);
    friend std::istream &operator>>(std::istream &read, Student &ObjetcStudent);
};

Student::Student(){}

Student::Student(char *name,char *lastName,char *career, int id)
{
    this->name = new char[50];
    this->lastName = new char[50];
    this->career = new char[50];
    this->id = id;
}

std::ostream &operator<<(std::ostream &write, Student &ObjectStudent)
{
    write << "Nombre: " << ObjectStudent.name;
    write << "\nApellido: " << ObjectStudent.lastName;
    write << "\nCarrera: " << ObjectStudent.career;
    write << "\nMatricula: " << ObjectStudent.id;
}
std::istream &operator >>(std::istream &lee, Student &ObjectStudent)
{
    std::cout << "Ingrese la matricula: ";
    lee >> ObjectStudent.id;
    std::cout << "\n Ingrese el nombre: ";
    lee >> ObjectStudent.name;
    std::cout << "\n Ingrese el apellido: ";
    lee >> ObjectStudent.lastName;
    std::cout << "\n Ingrese la carrera: ";
    lee >> ObjectStudent.career;
}
int getId()
{

}
