// Test Chapter 4 Challenge
// You got this by "git clone https://github.com/wkennedy1786/test.git"
// Collaborate to fill in the blanks
// Commit and push your work to github
// Dr. Bill, Feb. 2019

#include <cs50.h>
#include <stdio.h>

struct student
{
     int id;
     char student_name[30];
     float exam_score;
};

int main(void) 
{
 // TO DO
 // Read Students.txt into a struct
 // Note that the first character in the file is the number of student entries
  char buffer[30];
  FILE *file = fopen("students.txt", "r");
 fgets(buffer, 10, file);
 int nStudents = atoi(buffer);
 //printf ("%i\n", nStudents);
 struct student Students[nStudents];
 // fill the structured array

 for (int i=0; i<nStudents; i++)
 {
     fgets(buffer, 10, file);
    Students[i].id = atoi(buffer);
    fgets(Students[i].student_name, 30, file);
    fgets(buffer, 10, file);
    Students[i].exam_score = atof(buffer);
   // printf("%i  %s  %f\n", Students[i].id, Students[i].student_name, Students[i].exam_score);
 }
 fclose(file);
 
 // TO DO
 // Reiteratively, get a student ID #
 // printf the respective student's name and exam score
 
 while (1) {
     int id = get_int("ID? (0 to end) ");
     if (id==0)
     {
        printf("Okay, bye!\n");
        exit (0);
     }
    else if (id>nStudents) 
    {
        printf("An ID number between 1 and %i, please.\n", nStudents);
    }
    else {
        id--;
        printf("Student name: %sScore = %.2f\n\n", Students[id].student_name, Students[id].exam_score);
    }
 }
}
