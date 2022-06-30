/*30/06/2022 By Koungmeng*/
#include <iostream>
#include <fstream>
#include <string>

int main()
{
	char c; //useless variable haha
	std::fstream File("AUC_data.csv");
	double arr_x[351];
	double arr_y[351];
	double AUC = 0.0;
	//Read file from csv and put to array
	for (int i = 0; i < 351; i++)
	{
		File >> arr_x[i] >> c >> arr_y[i];
	}
	//Calculate AUC using Trapezoidal Rule
	for (int i = 0; i < 350; i++)
	{
		AUC += (arr_y[i] + arr_y[i + 1]) * (arr_x[i + 1] - arr_x[i]) / 2; //Area = (B+b)*h/2
	}
	std::cout << "The area under curve using trapezoidal rule is: " <<AUC << std::endl;
	std::cin.get();
	return 0;
}