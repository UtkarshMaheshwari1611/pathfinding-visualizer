#ifndef GRID_H
#define GRID_H

#include <vector>
#include "Node.h"

class Grid
{
private:

    int rows;
    int cols;

    std::vector<std::vector<Node>> grid;

public:

    Grid(int rows,int cols);

    int getRows() const;
    int getCols() const;

    void printGrid() const;

    void setWall(int row,int col);

    Node& getNode(int row,int col);

};

#endif