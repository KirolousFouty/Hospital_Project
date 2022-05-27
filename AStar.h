#ifndef ASTAR_H
#define ASTAR_H

// A C++ Program to implement A* Search Algorithm
#include <bits/stdc++.h>
#include <QString>

using namespace std;

#define ROW 9
#define COL 10

// Creating a shortcut for int, int pair type
typedef pair<int, int> Pair;

// Creating a shortcut for pair<int, pair<int, int>> type
typedef pair<double, pair<int, int>> pPair;

// A structure to hold the necessary parameters
struct cell
{
    // Row and Column index of its parent
    // Note that 0 <= i <= ROW-1 & 0 <= j <= COL-1
    int parent_i, parent_j;
    // f = g + h
    double f, g, h;
};




class AStar
{
public:

    bool isValid(int row, int col);

    bool isUnBlocked(int grid[][COL], int row, int col);
    bool isDestination(int row, int col, Pair dest);
    double calculateHValue(int row, int col, Pair dest);
    void tracePath(cell cellDetails[][COL], Pair dest);
    void aStarSearch(int grid[][COL], Pair src, Pair dest);

    QString result;

    AStar();
};

#endif // ASTAR_H
