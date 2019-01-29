#include "Sudoku.h"
#include <iostream>
#include <ctime>
using namespace std;

int main() {

	/*int matrix[9][9] = { {0,0,5,0,0,7,0,8,2},
						{6,0,0,4,0,0,7,3,0},
						{3,0,0,0,2,0,0,9,0},
						{0,7,0,0,3,0,2,0,0},
						{0,0,0,0,0,0,9,0,0},
						{0,1,6,0,0,0,0,0,3},
						{0,0,0,0,0,3,0,0,0},
						{0,6,0,0,9,8,0,7,0},
						{0,9,0,0,0,0,0,0,1} };*/
	int matrix[9][9] = { {0,0,0,0,0,0,0,1,2},
						{0,0,0,0,3,5,0,0,0},
						{0,0,0,6,0,0,0,7,0},
						{7,0,0,0,0,0,3,0,0},
						{0,0,0,4,0,0,8,0,0},
						{1,0,0,0,0,0,0,0,0},
						{0,0,0,1,2,0,0,0,0},
						{0,8,0,0,0,0,0,4,0},
						{0,5,0,0,0,0,6,0,0} };
	clock_t start, finish;
	start = clock();
	Sudoku s(matrix);
	s.Print();
	s.Solve();
	finish = clock();
	double totaltime = (double)(finish - start) / CLOCKS_PER_SEC;
	cout << "\n递归次数为" << s.recursion_num << endl;
	cout << "\n此程序的运行时间为" << totaltime << "秒！" << endl;
	system("pause");
	return 0;
}