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

int main(int argc; string argv[])
{
    // remember filenames
    char *infile = argv[1];

    // open input file
    FILE *inptr = fopen(infile, "r");
    if (inptr == NULL)
    {
        printf("Could not open %s.\n", infile);
        return;
    }

    // read infile's length
    BITMAPFILEHEADER bf;
    fread(void* FILE, sizeof(BITMAPFILEHEADER), 1, inptr);




 // TO DO
 // Read Students.txt into a struct
 // Note that the first character in the file is the number of student entries

 // TO DO
 // Reiteratively, get a student ID #
 // printf the respective student's name and exam score
}
