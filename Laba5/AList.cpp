#pragma once
#include "AList.h"

AList::AList(std::vector<std::vector<int>> list)
{
	this->list = list;
}

void AList::BFS()
{
	this->color.clear();
	while (!this->queue.empty())
	{
		this->queue.pop();
	}

	for (int i = 0; i < this->list.size(); i++)
	{
		this->color.push_back(0);
	}
	std::cout << "Обход в ширину:" << std::endl;

	for (int i = 0; i < this->list.size(); i++)
	{
		if ((this->color[i] == 1) && (this->color[i] == 2))
		{
			continue;
		}
		this->queue.push(i);
		this->color[i] = 1;

		while (!this->queue.empty())
		{
			i = this->queue.front();
			this->queue.pop();
			this->color[i] = 2;
			std::cout << i << " ";

			for (int j = 0; j < this->list[i].size(); j++)
			{
				if (((this->color[this->list[i][j]]) == 2) || ((this->color[this->list[i][j]]) == 1))
				{
					continue;
				}
				this->queue.push(this->list[i][j]);
				this->color[this->list[i][j]] = 1;
			}
		}
	}
}