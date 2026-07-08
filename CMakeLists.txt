cmake_minimum_required(VERSION 3.15)

project(PathfindingVisualizer)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(pathfinding

    src/main.cpp

    src/Grid.cpp
    src/BFS.cpp
    src/DFS.cpp
    src/Dijkstra.cpp
    src/AStar.cpp
    src/Renderer.cpp
    src/MazeGenerator.cpp
    src/Utils.cpp
)