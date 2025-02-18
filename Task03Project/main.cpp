#include <iostream>
#define N 10
#define MAX 100

using namespace std;

int sum_main_elements(int matrix[N][N]) {
	int sum = 0;

	for (int i = 0; i < N; i++)
	{
		sum += matrix[i][i];
	}

	return sum;
}

int sum_add_elements(int matrix[N][N]) {
	int sum = 0;

	for (int i = 0; i < N; i++)
	{
		sum += matrix[i][N - 1 - i];
	}

	return sum;
}


int main() {
	int matrix[N][N]{};

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			matrix[i][j] = rand() % MAX;
		}
	}
	
	cout << "Sum of elements of main diagonale is " << sum_main_elements(matrix) << endl;
	cout << "Sum of elements of add diagonale is " << sum_add_elements(matrix) << endl;
	   
	return 0;
}