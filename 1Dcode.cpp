#include <iostream>

using std::cout;
using std::endl;


#include "matrix_utils.h" 


int main()
{
	Matrix matrix1(5,5);
	
	vector<vector<double>> I;
	int size = 5;
	I = Identity(size);
	for (int i = 0;i<I.size(); i++){
		for (int j = 0;j<I.size(); j++)
		{
		cout << I[i][j] << "\t";
		}
		cout << endl;
	}
	
	return 0;
}








