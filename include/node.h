#ifndef NODE_H
#define NODE_H

enum class NodeType
{
    Empty,
    Wall,
    Start,
    End,
    Visited,
    Path
};

struct Node
{
    int row = 0;
    int col = 0;

    NodeType type = NodeType::Empty;

    bool visited = false;

    int distance = -1;

    int parentRow = -1;
    int parentCol = -1;

    Node() = default;

    Node(int r, int c)
        : row(r), col(c)
    {
    }
};

#endif