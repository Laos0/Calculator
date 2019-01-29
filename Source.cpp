#include <iostream>
#include <string>

using namespace std;

class Calculator {
public:
	int x;
	int y;
	int add(int x, int y) {
		int sum = x + y;
		return sum;
	}
};