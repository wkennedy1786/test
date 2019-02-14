// Test Chapter 4 Challenge
// You got this by "git clone https://github.com/wkennedy1786/test"
// Collaborate to fill in the blanks
// Commit and push your work to github
// Dr. Bill, Feb. 2019

#include <cs50.h>
#include <stdio.h>
#define FILE "students.txt"

struct student
{
     int id;
     char student_name[30];
     float exam_score;
};

int main(void)
{
    // determine path to dictionary
    string students = dirname(argv[0]);
    char path[strlen(students) + 1 + strlen(students) + 1];
    sprintf(path, "%s/%s", directory, FILE);

    // load structure
    if (!load(path))
    {
        printf("Could not open student list.\n");
        return 1;
    }

 // TO DO
 // Read Students.txt into a struct
 // Note that the first character in the file is the number of student entries

 // TO DO
 // Reiteratively, get a student ID #
 // printf the respective student's name and exam score
}
