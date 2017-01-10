#include <iostream>

#include "Board.h"

using namespace std;

void positionCheck(Board playerBoard, int &startingPosition,
		   int treasureSize)
{

  for(int position = startingPosition;
      position < startingPosition + treasureSize; position++)
    {
      if(-1 < position && position < playerBoard.getSize())
	{
	  while(playerBoard.checkIfOccupied(position))
	    {
	      cout << "That position already holds treasure, we"
		   << " don't want to put all our eggs in one"
		   << " basket.\n"
		   << "Enter a new position.\n\n";
	      cin >> startingPosition;
	      startingPosition--;
	      position = startingPosition;
	    }
	} else
	{
	  cout << "Unless you want us to bury the treasure"
	       << " in the sea, that won't work.\n"
	       << "Enter a new position.\n\n";
	  cin >> startingPosition;
	  startingPosition--;
	  position = startingPosition;

	  /// About to be incremented at end of for loop,
	  /// must check the entered start position.
	  position--;
	}
    }
}
