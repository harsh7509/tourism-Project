#include <iostream.h>
#include<string.h>
#include<conio.h>

class Student{
    public:
    int id;
    char name[30];
    
};
int main()
{
    Student s1;
    s1.id=500;
    strcpy(s1.name,"Welcome to Geeta University");
    cout<<s1.id<<endl;
    cout<<s1.name.endl;
    return0;
}