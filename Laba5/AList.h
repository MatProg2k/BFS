#pragma once
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

#define INF INT_MIN
#define PLM INT_MAX

class AList
{
private:
	
	std::queue<int> queue; 
	std::vector<int> color; 
	std::vector<std::vector<int>> list;
public:

	AList(std::vector<std::vector<int>> list);
	void BFS();
};