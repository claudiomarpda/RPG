#include <iostream>
#include "include/IndividualDAO.h"

int main() {
    std::cout << "Hello, Player!" << std::endl;

    IndividualDAO dao;
    dao.readPlayers();
//    dao.readEnemies();

    return 0;
}