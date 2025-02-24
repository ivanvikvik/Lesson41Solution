#include "logic.h"

#define SIZE 10
#define MAX_MARK 10
#define MIN_MARK 0

int main() {
	int marksA[SIZE];
	int marksB[SIZE];
	int marksC[SIZE];

	init(marksA, SIZE, MIN_MARK, MAX_MARK);
	init(marksB, SIZE, MIN_MARK, MAX_MARK);
	init(marksC, SIZE, MIN_MARK, MAX_MARK);

	cout << "Student's marks of class A: " << convert(marksA, SIZE) << endl;
	cout << "Student's marks of class B: " << convert(marksB, SIZE) << endl;
	cout << "Student's marks of class C: " << convert(marksC, SIZE) << endl;
	
	double avgA = calc_avg_mark(marksA, SIZE);
	double avgB = calc_avg_mark(marksB, SIZE);
	double avgC = calc_avg_mark(marksC, SIZE);
	   
	cout << "\nAverage mark of class A is " << avgA << endl;
	cout << "Average mark of class B is " << avgB << endl;
	cout << "Average mark of class C is " << avgC << endl;

	cout << "\nBest class is " << find_best_class(avgA, avgB, avgC) << endl;

	return 0;
}