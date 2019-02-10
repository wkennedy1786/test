# test
Your exam programming challenge is to create a C program that:

1) reads the number of student records as the first character in students.txt
2) then reads the contents of students.txt into a structured array (struct student records[nStudents];)
3) reiteratively prompts the user to enter an ID # (0 to end the session)
4) prints out that student’s name and exam score
5) extra credit if you have time to trap errors, such as file not found or an ID outside the range of nStudents…

Useful tips:
FILE *ptr; //creates a pointer for file access
ptr = fopen(“file name”, “r”); //opens the file to read
int variable = fgetc(ptr); //gets one character from the file to set the integer variable
fscanf(ptr, “%i” & int variable); //gets integer 
fscanf(ptr, “%s”, string variable);
fscanf(ptr, “%f”, & float variable);
fclose(ptr);
Use the CS50 get_int function (with prompt!) to get the student id#
