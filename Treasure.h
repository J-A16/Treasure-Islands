#ifndef TREASURE_H
#define TREASURE_H


class Treasure
{

 private:
  int size;
  int *treasurePosition;
  bool completed;
  bool *treasureTaken;

 public:
  Treasure(int size);
  Treasure(Treasure &);
  ~Treasure();
  Treasure operator=(const Treasure &right);
  void setPosition(int startingPosition);
  bool checkForHit(int spot);
  bool checkIfCompleted();
  int getSize();

};


#endif
