//author luis barrera
# include <iostream>
#include <string>
# include "student.h"

void student:: setName( string firstName, string lastName)
{
first = firstName;
last = lastName;


}

string student::fullName()
{
string Name;
Name.append(first);
Name.append(" ");
Name.append(last);

return Name;
}
void student::addGrade(double grade)
{
    stuGrade=grade;
    scr.push_back(stuGrade);

}
double student::getScore()
{
    avg=0;
    total=0;
            for (int i = 0; i < scr.size(); i++)
            {
                value = scr[i];
                total = total + value;
            }
    if(scr.size()>0)
    {
        avg = total/scr.size();
    }
    return avg;
}
