
#include "GlobalConfig.h"

void GlobalConfig::setNumberOfPlayers(int numberOfPlayers)
{
    selectedNumberOfPlayers = numberOfPlayers;
}

void GlobalConfig::setNumberOfDices(int numberOfDices)
{
    selectedNumberOfDices = numberOfDices;
}

void GlobalConfig::setNamesOfPlayers(int playerID, std::string playerName)
{
    if (playerID < MAX_PLAYERS) {
        namesOfPlayers[playerID] = playerName;
    } else {
       throw std::out_of_range("The number of players has been exceeded!");
    }

}

int GlobalConfig::getNumberOfPlayers()
{
    return selectedNumberOfPlayers;
}

int GlobalConfig::getNumberOfDices()
{
    return selectedNumberOfDices;
}

std::string GlobalConfig::getNameOfPlayer(int playerID)
{
    if (playerID < MAX_PLAYERS) {
        return namesOfPlayers[playerID];
    }
    throw std::out_of_range("The number of players has been exceeded!");
}
