#include <iostream>
using namespace std;

int main() {
    string poolA[5] = {"calculus-1", "electrical and electronics", "Chemistry", "energy and environment", "C"};
    string poolB[5] = {"professional communication", "calculus-2", "manufacturing processes", "physics", "engineering drawing"};
    
    string subjects[5];
    char pool;

    cout << "Select your pool: ";
    cin >> pool;

    if (pool == 'A' || pool == 'a') {
        for (int i = 0; i < 5; i++) subjects[i] = poolA[i];
        cout << "Pool A selected." << endl;
    } else if (pool == 'B' || pool == 'b') {
        for (int i = 0; i < 5; i++) subjects[i] = poolB[i];
        cout << "Pool B selected." << endl;
    } else {
        cout << "Invalid pool. Exiting." << endl;
        return 1;
    }

    float marks[5];
    float total = 0;

    cout << "\nEnter marks for all subjects out of 100:" << endl;

    for (int i = 0; i < 5; i++) {
        cout << subjects[i] << ": ";
        cin >> marks[i];
        total += marks[i];
    }

    float average = total / 5;
    string grade;

    if (average >= 90) grade = "A";
    else if (average >= 80) grade = "B";
    else if (average >= 70) grade = "B-";
    else if (average >= 60) grade = "C";
    else if (average >= 50) grade = "C-";
    else grade = "F";

    cout << "\nRESULT IS:" << endl;
    cout << "Pool:    " << pool << endl;
    cout << "Total:   " << total << "/500" << endl;
    cout << "Average: " << average << "%" << endl;
    cout << "Grade:   " << grade << endl;

    return 0;
}