#include "board.h"
#include <fstream>
#include <iostream>
#include <sstream>

// Definiciones de las funciones
std::vector<int> ParseLine(const std::string& line) {
    std::istringstream sline(line);
    int n;
    char c;
    std::vector<int> row;
    while (sline >> n >> c && c == ',') {
        row.push_back(n);
    }
    return row;
}

std::vector<std::vector<int>> ReadBoardFile(const std::string& path) {
    std::vector<std::vector<int>> board;
    std::ifstream my_file(path);
    if (my_file) {
        std::cout << "The file stream has been created!" << "\n";
        std::string line;
        while (std::getline(my_file, line)) {
            board.push_back(ParseLine(line));
        }
    }
    return board;
}

void PrintBoard(const std::vector<std::vector<int>>& board) {
    for (const auto& row : board) {
        for (int value : row) {
            std::cout << value << " ";
        }
        std::cout << "\n";
    }
}

