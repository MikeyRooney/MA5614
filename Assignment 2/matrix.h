#include <vector>

// TODO: destructor

class Matrix {
public:
	Matrix(int nrows, int ncols);
	void set(const int row, const int col, const double val);
	double get(const int row, const int col);
	void print();
	std::vector<double>& operator[](const int row);
	double& operator()(const int row, const int col);
private:
	int nrows;
	int ncols;
	std::vector<std::vector<double> > data;
	Matrix(); // disable default constructor
	//~Matrix(); // disable default destructor
};
