// 04/24/2017
// @brief: Implement an algorithm to determine if a string has all unique 
// characters. What if you can not use additional data structures?

#include <iostream>

int main(int argc, char** argv)
{
	std::cout << "Argc: " << argc << std::endl;
	for (int ii = 0; ii < argc; ++ii)
	{
	   std::cout << argv[ii] << std::endl;
	}
	
	
	// String to check
	std::string stringToCheck = "abcdz";
	
	int checker = 0; 
	for (int ii = 0; ii < stringToCheck.size(); ++ii)
	{
		int val = stringToCheck.at(ii) - 'a';
		std::cout << val << std::endl; 
		
		std::cout << "Shift: " << (1 << val) << std::endl;
	}
	
}
