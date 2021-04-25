// Tic tac toe board of all 0's

#include <iostream>

int main()
{
    const int BOARD_LENGTH = 3;

    int tttBoard[BOARD_LENGTH][BOARD_LENGTH]{0};

    std::cout << tttBoard[0][0] <<std::endl;

    std::cout << "Tic tac toe board!" << std::endl;
    std::cout << "x | 1 2 3" << std::endl;
    std::cout << "----------" << std::endl;
    for (int i = 0; i < BOARD_LENGTH; i++)
    {
        std::cout << (i + 1) << " | ";
        for (int j = 0;
             j < BOARD_LENGTH; j++)
        {
            std::cout << tttBoard[i][j] << " ";
        }

        std::cout << std::endl;
    }

    return 0;
}