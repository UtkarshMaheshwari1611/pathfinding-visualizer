#include "Grid.h"
#include <iostream>

Grid::Grid(int rows, int cols)
    : rows(rows), cols(cols)
{
    grid.resize(rows, std::vector<Node>(cols));

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            grid[i][j] = Node(i, j);
        }
    }
}

int Grid::getRows() const
{
    return rows;
}

int Grid::getCols() const
{
    return cols;
}
void Grid::printGrid() const
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            std::cout << ". ";
        }

        std::cout << std::endl;
    }
}