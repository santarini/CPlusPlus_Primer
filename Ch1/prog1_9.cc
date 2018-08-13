#include <iostream>

int main(){
	int sum = 0, val = 0;
	while(val <= 50){
		sum = sum + val;
		val++;
	}
	std::cout << "The Sum of numbers between 1 and 50 (inclusive), is " << sum << std::endl;
}