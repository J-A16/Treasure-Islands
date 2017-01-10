#include <iostream>
#include <cstdlib>

#include "Board.h"

using namespace std;

void automationPositionCheck(Board playerBoard, int &startingPosition,
			     int treasureSize)
{
  for(int position = startingPosition;
      position < startingPosition + treasureSize; position++)
  {
      while(playerBoard.checkIfOccupied(position))
	{
	  startingPosition = rand() % playerBoard.getSize();
	  position = startingPosition;
	}
  }
}
