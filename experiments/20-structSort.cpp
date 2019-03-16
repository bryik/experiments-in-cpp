#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct Player {
  int score = 0;
  Player(int _score) : score(_score){};
};

// Comparison function (passed to sort())
bool scoreSort(Player p1, Player p2) { return p1.score > p2.score; }

// Convenience function for printing a vector of Players.
void playerPrint(vector<Player> players) {
  for (Player& player : players) {
    cout << player.score << endl;
  }
}

int main() {
  vector<Player> players = {Player(2), Player(8), Player(1), Player(3)};

  cout << "Players (unsorted): " << endl;
  playerPrint(players);
  cout << endl;

  sort(players.begin(), players.end(), scoreSort);

  cout << "Players (sorted by greatest to lowest score): " << endl;
  playerPrint(players);
  cout << endl;

  /*
    Players (unsorted):
    2
    8
    1
    3

    Players (sorted by greatest to lowest score):
    8
    3
    2
    1
  */
}