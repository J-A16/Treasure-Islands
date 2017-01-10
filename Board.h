#ifndef BOARD_H
#define BOARD_H


class Board
{

 private:
  static const int BOARD_SIZE;
  bool *treasureLocated,
       *spotsDugForTreasure;
  char *viewOfDugSpots;

 public:
  Board();
  Board(Board &);
  ~Board();
  Board operator=(const Board &right);
  int getSize();
  void buryTreasure(int startingPosition, int size);
  bool checkIfOccupied(int spot);
  bool digForTreasure(int spot);
  bool checkIfDug(int spot);
  void displayTreasure();
  void displayDugSpots();

};


#endif
