#include <iosream>
#include "Math.h"

using namespace std;

int main()
{
	std::cout << "Add(5 , 3) = " << Math::Add(5 , 3) << std::endl;
	std::cout << "Add(2, 4 , 6) = " << Math::Add(2, 4 , 6) << std::endl;
	std::cout << "Add(2.5 , 3.5) = " << Math::Add(2.5 , 3.5) << std::endl;
	std::cout << "Add(1.1 , 2.2 , 3.3) = " << Math::Add(1.1 , 2.2 , 3.3) << std::endl;
	std::cout << "Mul(5 , 3) = " << Math::Mul(5 , 3) << std::endl;
	std::cout << "Mul(2 , 4 , 6) = " << Math::Mul(2 , 4 , 6) << std::endl;
	std::cout << "Mul(2.5 , 3.5) = " << Math::Mul(2.5 , 3.5) << std::endl;
	std::cout << "Mul(1.1 , 2.2 , 3.3) = " << Math::Mul(1.1 , 2.2 , 3.3) << std::endl;
	std::cout << "Add(4 , 1 , 2 , 3 , 4) = " << Math::Add(4 , 1 , 2 , 3 , 4) << std::endl;
	const char* str1 = "Salut, ";
	const char* str2 = "Lume!";
	char* result=Math::Add(str1 , str2)
		if (result != 0)
		{
			std::cout << "Add(\"Salut, \", \"Lume!\") = " << result << std::endl;
			free(result)//eliberez memoria alocata dinamic
		}
		else
		{
			std::cout << " Concatenare esuata!" << std::endl;
		}
	return 0;
}