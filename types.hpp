#include <array>
#include <iostream>
#include <cstddef>

template <typename T, std::size_t Rows, std::size_t Cols>
struct Matrix {
	std::array<std::array<T, Cols>, Rows> m;

	template <std::size_t OtherCols>
	Matrix<T, Rows, OtherCols> operator*(const Matrix<T, Cols, OtherCols>& other) {
		Matrix<T, Rows, OtherCols> c;
		// Resto do código de multiplicação de matrizes
		return c;
	}
};