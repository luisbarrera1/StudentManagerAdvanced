//author luis barrera

#ifndef _STUDENT_H_
#define _STUDENT_H_
#include<string>
#include<vector>
using namespace std;

class student
{
        private:
                string first;
                string last;
                double stuGrade;
                vector<double> scr;
                double total;
                double avg;
                double value;
        public:
                void setName(string, string);
                string fullName();
                void addGrade(double);
                double getScore();

};


#endif


