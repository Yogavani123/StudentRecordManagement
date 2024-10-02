#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int i=0; // to track the num of student

struct studentData // store the data
{
    char firstName[25];
    char lastname[15];
    int rollNumber;
    float CGPA;
    int courseId[15];
} st[500];

void addStudent();
void findByRollNumber();
void findByName();
void findRegisteredStudent();
void totalCount();
void deleteStudent();
void updateStudent();

int main()
{
    int tasktoperform;
    while(1)
    {
        printf("1. Add a new Student Data:\n");
        printf("2. Find a Student by RollNumbber:\n");
        printf("3. Find a Student by Name:\n");
        printf("4. Find by RegisterNumber:\n");
        printf("5.Total Number of the Student:\n");
        printf("6.Delete the Student Data:\n");
        printf("7.Update the Student Data:\n");
        printf("8. Exit\n");
        scanf("%d", &tasktoperform);

        switch (tasktoperform)
        {
            case 1:
            addStudent();
            break;

            case 2:
            findByRollNumber();
            break;

            case 3:
            findByName();
            break;

            case 4:
            findRegisteredStudent();
            break;

            case 5:
            totalCount();
            break;

            case 6:
            deleteStudent();
            break;

            case 7:
            updateStudent();
            break;

            case 8:
            exit(0);
            break;

        }
    }
    return 0;
}
void addStudent()
{
    printf("Add the Student Details\n");
    printf("Enter the First Name of Student:\t\n");
    scanf("%s", st[i].firstName);
    printf("Enter the lastName:\t\n");
    scanf("%s", st[i].lastname);
    printf("Enter the RollNumber:\n");
    scanf("%d", &st[i].rollNumber);
    printf("Enter the CGPA of student:\t\n");
    scanf("%f", &st[i].CGPA);

    printf("Enter the course ID of each student\n");
    for(int j=0;j<5;j++)
    {
        scanf("%d", &st[i].courseId[j]);
    }
    i++;
}

void findByRollNumber() {
    int temp;
    printf("Enter the Student's RollNumber:\t\n");
    scanf("%d", &temp);
    for (int j = 0; j < i; j++) {  // Assuming 'i' is the number of students
        if (temp == st[j].rollNumber) {
            printf("Student's details are..\n");
            printf("First Name is : %s\n", st[j].firstName);
            printf("Last name is : %s\n", st[j].lastname);
            printf("RollNumber is : %d\n", st[j].rollNumber);
            printf("CGPA is : %.2f\n", st[j].CGPA);  // Assuming CGPA is a float
            for (int k = 0; k < 5; k++) {
                printf("Course ID is : %d\n", st[j].courseId[k]);
            }
            return;  // Exit the function once the student is found
        }
    }
    printf("Student with RollNumber %d not found.\n", temp);
}

void findByName()
{
   char temp[25];
   printf("Enter the First Name of the Student\n");
   scanf("%s", temp);


   for (int j = 0; j < i; j++)
   {
      if (strcmp(st[j].firstName, temp)==0)
      {
         printf("The student's details are: \n");
         printf("The first name is : %s\n", st[j].firstName);
         printf("The last name is : %s\n", st[j].lastname);
         printf("The CGPA is : %.2f\n", st[j].CGPA);
         for (int k = 0; k < 5; k++)
         {
            printf("The enrolled course Ids are %d\n", st[j].courseId[k]);
         }
         return;
      }
   }
    printf("Student with First Name %s not found.\n", temp);
}

void findRegisteredStudent()
{
   int temp;
   printf("Enter the course ID\n");
   scanf("%d", &temp);
  

   for (int j = 0; j < i; j++)
   {
      for (int d = 0; d < 5; d++)
      {
         if (temp == st[j].courseId[d])
         {
            printf("The student's details are\n");
            printf("The first name is %s\n", st[j].firstName);
            printf("The last name is %s\n", st[j].lastname);
            printf("The CGPA is %.2f\n", st[j].CGPA);
            for (int k = 0; k < 5; k++)
            {
               printf("The enrolled course Ids are %d\n", st[j].courseId[k]);
            }
            return;
         }
      }
   }
   printf("No student found with the Course ID %d.\n", temp);
}

void totalCount()
{
   printf("The total number of students currently in the system is %d\n", i);
}


void deleteStudent()
{
   int temp;
   printf("Enter the roll number of the student to delete: \n");
   scanf("%d", &temp);
   for (int j = 0; j < i; j++)
   {
      if (temp == st[j].rollNumber)
      {
         for (int k = j; k < i-1; k++)
         {
            st[k] = st[k + 1];
         }
         i--;
         printf("The entered student's record deleted successfully",temp);
         return;
      }
   }
   printf("Student with Roll Number %d not found.\n", temp);
}

// Function to update a student's data
void updateStudent()
{
   int temp;
   printf("Enter the roll number of the student\n");
   scanf("%d", &temp);
   for (int j = 0; j < i; j++)
   {
      if (temp == st[j].rollNumber)
      {
         printf("1. First Name\n"
                "2. Last Name\n"
                "3. Roll Number\n"
                "4. CGPA\n"
                "5. Courses\n");
         int c;
         scanf("%d", &c);
         switch(c) {
            case 1:
               printf("Enter the updated first name : ");
               scanf("%s", st[j].firstName);
               break;
            case 2:
               printf("Enter the updated last name : ");
               scanf("%s", st[j].lastname);
               break;
            case 3:
               printf("Enter the updated roll number : ");
               scanf("%d", st[j].rollNumber);
               break;
            case 4:
               printf("Enter the updated CGPA : ");
               scanf("%f", &st[j].CGPA);
               break;
            case 5:
               printf("Enter the updated list of courses: ");
               scanf("%d%d%d%d%d", &st[j].courseId[0], &st[j].courseId[1], &st[j].courseId[2], &st[j].courseId[3], &st[j].courseId[5]);
               break;
         }
         printf("Records updated successfully");
      }
   }
}