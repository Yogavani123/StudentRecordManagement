# Student Management System

📚 A simple C program that allows you to manage student records efficiently. This system includes functionalities to add, delete, search, and update student data based on their roll numbers, names, or courses. 

## Features

- 📝 **Add a new Student**: Input student details such as first name, last name, roll number, CGPA, and course IDs.
- 🔍 **Find by Roll Number**: Search for a student based on their unique roll number.
- 🔍 **Find by Name**: Search for a student by their first name.
- 🔍 **Find by Registered Course**: Find all students registered for a particular course.
- 📊 **Total Student Count**: Displays the current number of students in the system.
- 🗑 **Delete a Student**: Remove a student record based on their roll number.
- ✏️ **Update Student Data**: Modify student details like name, roll number, CGPA, or course IDs.

## Usage

```bash
gcc student_management_system.c -o student_management_system
./student_management_system
```

Once you run the program, you can interact with it through a series of prompts to perform various tasks.

## Menu Options

1. ➕ **Add a new Student**  
2. 🔎 **Find a Student by Roll Number**  
3. 🔍 **Find a Student by Name**  
4. 🧑‍🎓 **Find by Registered Course**  
5. 📈 **View Total Number of Students**  
6. 🗑 **Delete a Student**  
7. 🔧 **Update Student Details**  
8. 🚪 **Exit the Program**  

## Example

Below is a simple example of adding a student:

```plaintext
1. Add a new Student Data:
Enter the First Name of Student: John
Enter the lastName: Doe
Enter the RollNumber: 101
Enter the CGPA of student: 3.8
Enter the course ID of each student: 101 102 103 104 105
```

## Dependencies

None. Just compile and run the C program.
