#include "types.hpp"

int main() {
	Matrix<int, 2, 2> m{};

	m.m = {{ 
		3, 1, 
		5, 4 
	}};

	Matrix<int, 2, 2> n{};

	n.m = {{
		3, 1,
		3, 1
	}};

	m = m * n;
}