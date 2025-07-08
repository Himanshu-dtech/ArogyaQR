#include <stdio.h>
#include <string.h>

// Define the structure for student
struct student {
    int roll;                // Student's roll number
    char name[100];          // Student's name
    int marksInPhysics;      // Marks in Physics
    int marksInChemistry;    // Marks in Chemistry
    int marksInMathematics;  // Marks in Mathematics
    int totalMarks;          // Total marks
};

// Function to calculate total marks
void calculateTotalMarks(struct student* s) {
    s->totalMarks = s->marksInPhysics + s->marksInChemistry + s->marksInMathematics;
}

// Function to display student information
void displayStudent(struct student s) {
    printf("Roll: %d, Name: %s, Physics: %d, Chemistry: %d, Mathematics: %d, Total Marks: %d\n",
           s.roll, s.name, s.marksInPhysics, s.marksInChemistry, s.marksInMathematics, s.totalMarks);
}

// Function to sort students in descending order based on total marks
void sortStudents(struct student students[], int n) {
    struct student temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (students[i].totalMarks < students[j].totalMarks) {
                // Swap the students if the current one has fewer total marks
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}

int main() {
    int n;

    // Ask for the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Create an array of student structures
    struct student students[n];

    // Input data for each student
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll number: ");
        scanf("%d", &students[i].roll);
        getchar();  // To consume the newline character left by scanf
        printf("Name: ");
        fgets(students[i].name, 100, stdin);
        students[i].name[strcspn(students[i].name, "\n")] = 0;  // Remove trailing newline
        printf("Marks in Physics: ");
        scanf("%d", &students[i].marksInPhysics);
        printf("Marks in Chemistry: ");
        scanf("%d", &students[i].marksInChemistry);
        printf("Marks in Mathematics: ");
        scanf("%d", &students[i].marksInMathematics);

        // Calculate total marks for the student
        calculateTotalMarks(&students[i]);
    }

    // Sort the students based on total marks in descending order
    sortStudents(students, n);

    // Display the list of students sorted by total marks
    printf("\nStudent List in Descending Order of Total Marks:\n");
    for (int i = 0; i < n; i++) {
        displayStudent(students[i]);
    }

    return 0;
}
