#ifndef GLOBALCONFIG_H
#define GLOBALCONFIG_H

#include <string>
#include <algorithm>

#define MAX_PLAYERS 5
#define MAX_DICES 6

class GlobalConfig {
public:
    GlobalConfig() : selectedNumberOfPlayers(1), selectedNumberOfDices(1) {
        std::fill(scores, scores+MAX_PLAYERS, 0);
    }

    void setNumberOfPlayers(int);
    void setNumberOfDices(int);
    void setNamesOfPlayers(int, std::string);
    void setScoreOfPlayer(int playerID, int score);

    int getNumberOfPlayers();
    int getNumberOfDices();
    std::string getNameOfPlayer(int);

private:
    int selectedNumberOfPlayers;
    int selectedNumberOfDices;
    std::string namesOfPlayers[MAX_PLAYERS];
    int scores[MAX_PLAYERS];
};

#endif // GLOBALCONFIG_H
