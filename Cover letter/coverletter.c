#include <stdio.h>

// Define color codes
#define RED     "\033[1;31m"
#define RESET   "\033[0m"

int main() {
    // Submitted by (in red)
    printf(RED "\nSubmitted by:\n" RESET);
    printf("Nafisa Tabassum Nusrat\n");
    printf("Student ID: 252-16-009\n");
    printf("Department of Computing and Information System (CIS)\n");
    printf("Semester: Summer 2025\n");
    printf("Batch: 22(A)\n\n");
   

    // Submitted to (in red)
    printf(RED "Submitted to:\n" RESET);
    printf("Mr. Md. Faruk Hosen\n");
    printf("Lecturer, Department of Computing and Information System (CIS)\n");
    printf("Daffodil International University\n");

    // Submission date in red italics-like style (simulated with underscore and spacing)
    printf(RED "\nSubmission Date: 22th July 2025\n" RESET);

    return 0;
}
