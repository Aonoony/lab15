#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}
void showMatrix(const bool b[][N]){
	for(int i = 0; i<N; i++){
		for(int j = 0; j<N; j++) cout << b[i][j] << " ";
		cout << endl; 
	}
}
void inputMatrix(double a[][N]){
	for(int i = 0; i<N; i++){
		cout << "Row " << i+1 << ": ";
		for(int j = 0; j<N; j++) cin >> a[i][j];
	}
}
void findLocalMax(const double a[][N], bool b[][N]){
	for(int i = 0; i<N; i++){
		for(int j = 0; j<N; j++){
			if(a[j][i] >= a[j+1][i] && a[j][i] >= a[j-1][i] && a[j][i] >= a[j][i+1] && a[j][i] >= a[j][i-1]){
				if(j != 0 && j != N-1 && i !=0 && i != N-1) b[j][i] = 1;
				else b[j][i] = 0;
			}else b[j][i] = 0;
		}
	}
}
