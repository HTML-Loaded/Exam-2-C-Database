#include <iostream> //is the library that stores most of the variables that are used in simple or complex coding
#include <string>

using namespace std;

// Define the Student class
class Student {
public:

    //create public class members to use in class functions
    int StudentID;
    string FirstName;
    string LastName;
    string BirthDate;
    string Email;

    /*create a student function that will store student id, fist name, last name, birthDate, and email.
    this would later be used to print in a separate void function, but now the public variable members will store
    the value the user inputs in this function
    */
    Student(int id, string firstName, string lastName, string birthDate, string email) {
        StudentID = id;
        FirstName = firstName;
        LastName = lastName;
        BirthDate = birthDate;
        Email = email;
    }

    //this function will be used to print what it is stored in the public class members
    void display() {
        cout << "StudentID: " << StudentID << ", Name: " << FirstName << " " << LastName
            << ", BirthDate: " << BirthDate << ", Email: " << Email << endl;
    }
};

// Define the Course class
class Course {
public:

    //public class members in this function
    int CourseID;
    string CourseName;
    int Credits;
    string StartDate;

    //function that will be use to store the information stored for later use
    Course(int id, string courseName, int credits, string startDate) {
        CourseID = id;
        CourseName = courseName;
        Credits = credits;
        StartDate = startDate;
    }

    //fuction that prints the value of the public class members
    void display() {
        cout << "CourseID: " << CourseID << ", CourseName: " << CourseName
            << ", Credits: " << Credits << ", StartDate: " << StartDate << endl;
    }
};

// Define the Enrollment class
class Enrollment {
public:

    //public Class members for Enrollment
    int EnrollmentID;
    int StudentID;
    int CourseID;
    float Grade;

    //function that is created to store value to the public member variables
    Enrollment(int id, int studentId, int courseId, float grade) {
        EnrollmentID = id;
        StudentID = studentId;
        CourseID = courseId;
        Grade = grade;
    }

    //function that is used to print the value of the variables in a statement
    void display() {
        cout << "EnrollmentID: " << EnrollmentID << ", StudentID: " << StudentID
            << ", CourseID: " << CourseID << ", Grade: " << Grade << endl;
    }
};

int main() {

    //declaring the value for the member variables in the student class
    Student s1(1, "John", "Doe", "2000-01-15", "john.doe@example.com");
    Student s2(2, "Jane", "Smith", "1999-04-23", "jane.smith@example.com");

    //declaring the value for the member variables in the course class
    Course c1(1, "Introduction to Computer Science", 4, "2024-01-10");
    Course c2(2, "Calculus I", 3, "2024-01-15");

    //declaring the value for the member variables in the enrollment class
    Enrollment e1(1, 1, 1, 95.5);
    Enrollment e2(2, 1, 2, 88.0);
    Enrollment e3(3, 2, 1, 92.0);

    // Display the statement from the student class members and functions
    cout << "Students:" << endl;
    s1.display();
    s2.display();

    // Display the statement from the course class members and functions
    cout << "\nCourses:" << endl;
    c1.display();
    c2.display();

    //display the statement form the enrollment class members and functions
    cout << "\nEnrollment: " << endl;
    e1.display();
    e2.display();
    e3.display();

}