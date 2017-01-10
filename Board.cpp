#include <iostream>

#include "Board.h"

using namespace std;

Board::Board()
{

  treasureLocated = new bool[BOARD_SIZE];
  spotsDugForTreasure = new bool[BOARD_SIZE];
  viewOfDugSpots = new char[BOARD_SIZE];

  for(int i = 0; i < BOARD_SIZE; i++)
    {
      treasureLocated[i] = false;
      spotsDugForTreasure[i] = false;
      viewOfDugSpots[i] = ' ';
    }
}

Board::Board(Board &obj)
{
  treasureLocated = new bool[BOARD_SIZE];
  spotsDugForTreasure = new bool[BOARD_SIZE];
  viewOfDugSpots = new char[BOARD_SIZE];

  for(int i = 0; i < BOARD_SIZE; i++)
    {
      treasureLocated[i] = obj.treasureLocated[i];
      spotsDugForTreasure[i] = obj.spotsDugForTreasure[i];
      viewOfDugSpots[i] = obj.viewOfDugSpots[i];
    }
}

Board::~Board()
{
  if(BOARD_SIZE > 0)
    {
      delete [] treasureLocated;
      delete [] spotsDugForTreasure;
      delete [] viewOfDugSpots;
    }
}

Board Board::operator=(const Board &right)
{
  if(BOARD_SIZE > 0)
    {
      delete [] treasureLocated;
      delete [] spotsDugForTreasure;
      delete [] viewOfDugSpots;
    }

  treasureLocated = new bool[BOARD_SIZE];
  spotsDugForTreasure = new bool[BOARD_SIZE];
  viewOfDugSpots = new char[BOARD_SIZE];

  for(int i = 0; i < BOARD_SIZE; i++)
    {
      treasureLocated[i] = right.treasureLocated[i];
      spotsDugForTreasure[i] = right.spotsDugForTreasure[i];
      viewOfDugSpots[i] = right.viewOfDugSpots[i];
    }

  return *this;
}

int Board::getSize()
{
  return BOARD_SIZE;
}

void Board::buryTreasure(int startingPosition, int size)
{
  for(int i = 0; i < size; i++)
    {
      treasureLocated[startingPosition] = true;
      startingPosition++;
    }
}

bool Board::checkIfOccupied(int spot)
{
  if(treasureLocated[spot])
    {
      return true;
    }
  return false;
}

bool Board::digForTreasure(int spot)
{
  spotsDugForTreasure[spot] = true;
  if(treasureLocated[spot])
    {
      viewOfDugSpots[spot] = '$';
      return true;
    }
  viewOfDugSpots[spot] = 'O';
  return false;
}

bool Board::checkIfDug(int spot)
{
  if(spotsDugForTreasure[spot])
    {
      return true;
    }
  return false;
}

void Board::displayTreasure()
{
  int j = 1;
  cout << "|";
  for(int i = 0; i < BOARD_SIZE; i++)
    {
      if(treasureLocated[i])
	cout << "$";
      else
	cout << " ";
    }
  cout << "|";
  cout << endl;
  cout << " ";

    for(int k = 1; k <= BOARD_SIZE; k++)
      if(k % 10 == 0)
	{
	  cout << j;
	  j++;
	} else
	{
	  cout << k % 10;
	}
    cout << endl;
    cout << " ";

    for(int k = 1; k <= BOARD_SIZE; k++)
      if(k % 10 == 0)
	{
	  cout << 0;
	} else
	{
	  cout << " ";
	}
}

void Board::displayDugSpots()
{
  int j = 1;
  cout << "|";
  for(int i = 0; i < BOARD_SIZE; i++)
    {
      cout << viewOfDugSpots[i];
    }
  cout << "|";
  cout << endl;
  cout << " ";

    for(int k = 1; k <= BOARD_SIZE; k++)
      if(k % 10 == 0)
	{
	  cout << j;
	  j++;
	} else
	{
	  cout << k % 10;
	}
    cout << endl;
    cout << " ";

    for(int k = 1; k <= BOARD_SIZE; k++)
      if(k % 10 == 0)
	{
	  cout << 0;
	} else
	{
	  cout << " ";
	}
}
