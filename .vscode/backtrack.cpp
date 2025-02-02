#include <iostream>
#include <vector>
using namespace std;

bool issafe(int newx, int newy, int maze[][4], int row, int col, vector<vector<bool>> &visited) {
    return (newx >= 0 && newx < row &&
            newy >= 0 && newy < col &&
            maze[newx][newy] == 1 &&
            !visited[newx][newy]);
}

void printAllpath(int maze[][4], int row, int col, int srcx, int srcy, string output, vector<vector<bool>> &visited) {
    // Base case: If destination (bottom-right corner) is reached
    if (srcx == row - 1 && srcy == col - 1) {
        cout << output << endl;
        return;
    }

    // Move Up
    int newx = srcx - 1, newy = srcy;
    if (issafe(newx, newy, maze, row, col, visited)) {
        visited[newx][newy] = true;
        printAllpath(maze, row, col, newx, newy, output + 'U', visited);
        visited[newx][newy] = false; // Backtracking
    }

    // Move Down
    newx = srcx + 1, newy = srcy;
    if (issafe(newx, newy, maze, row, col, visited)) {
        visited[newx][newy] = true;
        printAllpath(maze, row, col, newx, newy, output + 'D', visited);
        visited[newx][newy] = false; // Backtracking
    }

    // Move Right
    newx = srcx, newy = srcy + 1;
    if (issafe(newx, newy, maze, row, col, visited)) {
        visited[newx][newy] = true;
        printAllpath(maze, row, col, newx, newy, output + 'R', visited);
        visited[newx][newy] = false; // Backtracking
    }

    // Move Left
    newx = srcx, newy = srcy - 1;
    if (issafe(newx, newy, maze, row, col, visited)) {
        visited[newx][newy] = true;
        printAllpath(maze, row, col, newx, newy, output + 'L', visited);
        visited[newx][newy] = false; // Backtracking
    }
}

int main() {
    int maze[4][4] = {
        {1, 0, 0, 0},
        {1, 1, 0, 0},
        {1, 1, 0, 0},
        {1, 1, 1, 1}
    };

    int row = 4, col = 4;
    int srcx = 0, srcy = 0;
    string output = "";
    vector<vector<bool>> visited(row, vector<bool>(col, false));

    // Check if the start or end points are blocked
    if (maze[0][0] == 0 || maze[row - 1][col - 1] == 0) {
        cout << "No path exists" << endl;
    } else {
        visited[srcx][srcy] = true;
        printAllpath(maze, row, col, srcx, srcy, output, visited);
    }

    return 0;
}
