#ifndef BOARD_H
#define BOARD_H

#include <vector>
#include <string>

// Declaraciones de las funciones
std::vector<int> ParseLine(const std::string& line);
std::vector<std::vector<int>> ReadBoardFile(const std::string& path);
void PrintBoard(const std::vector<std::vector<int>>& board);

#endif // BOARD_H

