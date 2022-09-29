//https://cloud.tencent.com/developer/article/1894837
#include <variant>
#include <iostream>
std::variant<int, double, std::string> x, y;
int main() {
	x = 1;
	y = "1.0";
	x = 2.0; // overwrite value
	std::cout << "x - " << x.index() << std::endl;
	std::cout << "y - " << y.index() << std::endl;
	double d = std::get<double>(x);
	std::string s = std::get<2>(y);
	try
	{
	    int i = std::get<int>(x);
	}
	catch (std::bad_variant_access e)
	{
	    std::cerr << e.what() << std::endl;
	}
	int* i = std::get_if<int>(&x);
	if (i == nullptr)
	{
	    std::cout << "wrong type" << std::endl;
	}
	else
	{
	    std::cout << "value is " << *i << std::endl;
	}
	return 0;
}
