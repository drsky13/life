#ifndef STATS_H
#define STATS_H

#include <vector>

int countCell(std::vector<std::vector<int>> board);
int smallestNumberCell(std::vector<int> numberCell);
int greaterNumberCell(std::vector<int> numberCell);
void displayStats (std::vector<std::vector<int>> board, std::vector<int> sumCell);

#endif
