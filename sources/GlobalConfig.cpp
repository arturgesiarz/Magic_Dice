
#include "../headers/GlobalConfig.h"

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

void GlobalConfig::setScoreOfPlayer(int playerID, int score)
{
    if (playerID < MAX_PLAYERS) {
        scores[playerID] += score;
    } else {
        throw std::out_of_range("The number of players has been exceeded!");
    }
}

// Funkcja czyszcaca
void GlobalConfig::clear()
{
    std::fill(scores, scores+MAX_PLAYERS, 0);
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

int GlobalConfig::getScoreOfPlayer(int playerID)
{
    if (playerID < MAX_PLAYERS) {
        return scores[playerID];
    }
    throw std::out_of_range("The number of players has been exceeded!");
}
