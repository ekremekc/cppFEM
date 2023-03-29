#include <iostream>


#include "matrix_utils.h"

int main()
{
	Matrix matrix1(4,3);
	matrix1.fill(2);
	matrix1.displayMessage();
	matrix1.setValue(0,0,3);
	matrix1.setValue(0,1,7.5);
	matrix1.print();

	Matrix I(3,3);
	I.makeIdentity();
	I.setValue(1,1,5);
	I.print();
	
	Matrix Multiplication(4,3);
	Multiplication = multiply(matrix1, I); 
	Multiplication.print();
	
	return 0;
}




