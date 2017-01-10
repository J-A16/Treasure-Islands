#include "Treasure.h"

Treasure::Treasure(int size)
{
  this->size = size;
  completed = false;
  treasurePosition = new int[size];
  treasureTaken = new bool[size];

  for(int i = 0; i < size; i++)
    {
      treasurePosition[i] = 0;
      treasureTaken[i] = false;
    }
}

Treasure::Treasure(Treasure &obj)
{
  size = obj.size;
  completed = obj.completed;
  treasurePosition = new int[size];
  treasureTaken = new bool[size];

  for(int i = 0; i < size; i++)
    {
      treasurePosition[i] = obj.treasurePosition[i];
      treasureTaken[i] = obj.treasureTaken[i];
    }
}

Treasure::~Treasure()
{
  if(size > 0)
    {
    delete [] treasurePosition;
    delete [] treasureTaken;
    }
}

Treasure Treasure::operator=(const Treasure &right)
{
  if(size > 0)
    {
      delete [] treasurePosition;
      delete [] treasureTaken;
    }
  size = right.size;
  completed = right.completed;
  treasurePosition = new int[size];
  treasureTaken = new bool[size];

  for(int i = 0; i < size; i++)
    {
      treasurePosition[i] = right.treasurePosition[i];
      treasureTaken[i] = right.treasureTaken[i];
    }

  return *this;
}

void Treasure::setPosition(int startingPosition)
{
  for(int i = 0; i < size; i++)
    {
      treasurePosition[i] = startingPosition;
      startingPosition++;
    }
}

bool Treasure::checkForHit(int spot)
{
  for(int i = 0; i < size; i++)
    {
      if(treasurePosition[i] == spot)
	{
	  treasureTaken[i] = true;
	  return true;
	}
    }
  return false;
}

bool Treasure::checkIfCompleted()
{
  if(completed)
    {
      return true;
    }else
    {
      for(int i = 0; i < size; i++)
	{
	  if(treasureTaken[i] == false)
	    {
	      return false;
	    }
	}
      completed = true;
      return true;
    }
}

int Treasure::getSize()
{
  return size;
}
