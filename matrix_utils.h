#include <iostream>

using std::cout;
using std::endl;


#include <vector>
using std::vector;



class Matrix
{
	public:
		Matrix (int row, int col){
			setNumberOfRows(row);
			setNumberOfCols(col);
			makeMatrix(row,col);
		}
		void displayMessage()
		{
			cout << "The matrix class has initialized." <<endl;
		}
		void setNumberOfRows(int row){
			rowNums = row;
		}
		void setNumberOfCols(int col){
			colNums = col;
		}
		void makeMatrix(int row, int col){
			vector<vector<double>> temp_mat(row, vector<double>(col,0));
			matrix = temp_mat;
		}
		void makeIdentity(){
			for (int i=0; i<getRow(); i++)
			{
				matrix[i][i] = 1.0;
			}
		}
		void fill(double value){
			for (int i=0; i<getRow(); i++)
			{
				for (int j = 0;j<getCol(); j++)
				{
					matrix[i][j] = value;
				}
			}
		}
		void setValue(int row, int col, double value){
			matrix[row][col] = value;
		}
		void print(){
			cout << endl;
			for (int i = 0;i<getRow(); i++)
			{
				for (int j = 0;j<getCol(); j++)
				{
					cout << getMat()[i][j] << "\t";
				}
				cout << endl;
			}	
		}
		int getRow(){
			return rowNums;
		}
		int getCol(){
			return colNums;
		}
		double getValue(int row, int col){
			return matrix[row][col];
		}
		vector<vector<double>> getMat(){
			return matrix;
		}

	private:
		int rowNums;
		int colNums;
		vector<vector<double>> matrix;	
};


Matrix multiply(Matrix Mat1, Matrix Mat2){
	Matrix Result(Mat1.getRow(), Mat2.getCol());
	double sum = 0;
	for (int k = 0; k<Mat1.getRow();k++){
		for(int i = 0; i<Mat2.getCol();i++){
			for(int j = 0; j<Mat2.getCol();j++){
			
				sum += Mat1.getMat()[k][j] * Mat2.getMat()[j][i];
				
			}
			Result.setValue(k, i, sum);
			sum = 0;
			
		}
	}	
	
	return Result;
}
