#ifndef NODE_H
#define NODE_H

enum class NodeType
{
    Empty,
    Wall,
    Start,
    End
};

struct Node
{
    int row;
    int col;

    NodeType type;

    bool visited;

    int distance;

    int parentRow;
    int parentCol;
};

#endif