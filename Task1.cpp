//student grade tracker


#include <iostream>
#include <string>
using namespace std;

// Function to input a student's grades
void inputGrades(int grades[], int numSubjects) {
    for (int i = 0; i < numSubjects; ++i) {
        cout << "Enter grade for subject " << i + 1 << ": ";
        cin >> grades[i];
    }
}

// Function to calculate the average grade for a student
int calculateAverage(int grades[], int numSubjects) {
    int sum = 0;
    for (int i = 0; i < numSubjects; ++i) {
        sum += grades[i];
    }
    return sum / numSubjects;
}

// Function to determine if the student passes or fails
void determinePassFail(int average) {
    if (average >= 50) {
        cout << "Pass";
    } else {
        cout << "Fail";
    }
}

int main() {
    int grades[3];
    int numSubjects = 3;

    cout << "Enter grades for 3 subjects:\n";
    inputGrades(grades, numSubjects);

    int average = calculateAverage(grades, numSubjects);
    
    cout << "Average Grade: " << average << endl;
    cout << "Overall Performance: ";
    determinePassFail(average);

    return 0;
}
