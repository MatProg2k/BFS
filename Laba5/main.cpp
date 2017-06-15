#include <iostream>

#include "AList.h"

int main()
{
	setlocale(LC_CTYPE, "Russian");

	AList listGraph
	(
	{
		{ 1 },
		{ 0, 5, 2 },
		{ 3, 4 },
		{ 4 },
		{ 1, 6 },
		{ 1, 4 },
		{ 0, 1}
	}
	);

	listGraph.BFS();
	std::cout << std::endl;
	
	system("pause");
	return 0;
}