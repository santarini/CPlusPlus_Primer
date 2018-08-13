#include <iostream>

int main(){
	std::cout << "Enter two different numbers." << std::endl;
	int i = 0, j= 0;
	std::cin >> i >> j;
	if(i==j){
		std::cout << "The two numbers are the same." << std::endl;
	}
	else if(i<j){
		while(i <= j){
			std::cout << i << std::endl;
			i++;
		}
	}
	else if(i>j){
		while(i >= j){
			std::cout << i << std::endl;
			i--;
		}
	}
}