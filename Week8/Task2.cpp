#include <iostream>
using namespace std;
int calculateDamage(string, string, int, int);
main()
{
    cout << calculateDamage("fire", "water", 100, 100) << endl;
    cout << calculateDamage("grass", "fire", 35, 5) << endl;
    cout << calculateDamage("electric", "fire", 100, 100);
}

int calculateDamage(string playerType, string opponentType, int attackPower, int defensePower)
{
    float effectivness;
    // Not very effective
    if ((playerType == opponentType)                                                          // Same type condition
        || (playerType == "fire" && opponentType == "water")                                  // fire < water condition
        || (playerType == "water" && (opponentType == "grass" || opponentType == "electric")) // water < grass,electric
        || (playerType == "grass" && opponentType == "fire")                                  // inverse of fire > grass
    )
    {
        effectivness = 0.5;
    }
    // Neutral
    else if ((playerType == "fire" && opponentType == "electric") || (playerType == "grass" && opponentType == "electric") || (playerType == "electric" && opponentType == "fire") || (playerType == "electric" && opponentType == "grass"))
    {
        effectivness = 1;
    }
    else
    {
        effectivness = 2;
    }
    return 50 * (attackPower / defensePower) * effectivness;
}