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

	void jump(){
		int num = 5;
		string value = "I am jumpin";
		// some comment
	}
};