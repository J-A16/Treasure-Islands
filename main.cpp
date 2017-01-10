#include <cstdlib>
#include <iostream>
#include <ctime>

#include "Treasure.h"
#include "Board.h"
#include "automationPositionCheck.h"
#include "positionCheck.h"

using namespace std;

const int Board::BOARD_SIZE = 70;

int main()
{

  const int TREASURE_1_SIZE = 2, TREASURE_2_SIZE = 3,
            TREASURE_3_SIZE = 4, TREASURE_4_SIZE = 5,
            TREASURE_5_SIZE = 6;

  int startingPosition, choice;

  string automate;

  bool player1Wins = false, player2Wins = false;

  Treasure p1Treasure1(TREASURE_1_SIZE), p2Treasure1(TREASURE_1_SIZE),
           p1Treasure2(TREASURE_2_SIZE), p2Treasure2(TREASURE_2_SIZE),
           p1Treasure3(TREASURE_3_SIZE), p2Treasure3(TREASURE_3_SIZE),
           p1Treasure4(TREASURE_4_SIZE), p2Treasure4(TREASURE_4_SIZE),
           p1Treasure5(TREASURE_5_SIZE), p2Treasure5(TREASURE_5_SIZE);

  Board player1Board, player2Board;

  srand(time(0));



  cout << endl;
  cout << "Player 1\n\n"
       << "First Mate: \"Should the men bury the treasure randomly,\n"
       << "             \'aye\' or \'no\'?\" ";
  cin >> automate;

  while(!(automate == "Aye") && !(automate == "aye") &&
	!(automate == "Yes") && !(automate == "yes") &&
	!(automate == "No" ) && !(automate == "no" ))
    {

      cout << "First Mate: \"What is " << automate << "?\"\n\n"
	   << "            \"\'Aye\' or \'no\'?\" ";
      cin >> automate;
    }



  if(automate == "Aye" || automate == "aye" ||
     automate == "Yes" || automate == "yes")
    {
      startingPosition = rand() % player1Board.getSize();

      automationPositionCheck(player1Board, startingPosition,
			      p1Treasure1.getSize());

      p1Treasure1.setPosition(startingPosition);
      player1Board.buryTreasure(startingPosition, p1Treasure1.getSize());



      startingPosition = rand() % player1Board.getSize();

      automationPositionCheck(player1Board, startingPosition,
			      p1Treasure2.getSize());

      p1Treasure2.setPosition(startingPosition);
      player1Board.buryTreasure(startingPosition, p1Treasure2.getSize());



      startingPosition = rand() % player1Board.getSize();

      automationPositionCheck(player1Board, startingPosition,
			      p1Treasure3.getSize());

      p1Treasure3.setPosition(startingPosition);
      player1Board.buryTreasure(startingPosition, p1Treasure3.getSize());



      startingPosition = rand() % player1Board.getSize();

      automationPositionCheck(player1Board, startingPosition,
			      p1Treasure4.getSize());

      p1Treasure4.setPosition(startingPosition);
      player1Board.buryTreasure(startingPosition, p1Treasure4.getSize());



      startingPosition = rand() % player1Board.getSize();

      automationPositionCheck(player1Board, startingPosition,
			      p1Treasure5.getSize());

      p1Treasure5.setPosition(startingPosition);
      player1Board.buryTreasure(startingPosition, p1Treasure5.getSize());

    } else
    {

      cout << "First Mate: \"Where should we bury the "
	   << "first set of treasure chests,\n"
	   << "             which requires "
	   << p1Treasure1.getSize()
	   << " spaces, so there "
	   << "isn't too much in one spot?\n"
	   << "             Show us"
	   << " the location to start"
	   << " burying from and\n"
	   << "             we'll go from left to right.\"\n\n";

      cout << endl << endl;

      player1Board.displayTreasure();

      cout << endl << endl;


      cin >> startingPosition;
      startingPosition--;

      positionCheck(player1Board, startingPosition,
		    p1Treasure1.getSize());

      p1Treasure1.setPosition(startingPosition);
      player1Board.buryTreasure(startingPosition, p1Treasure1.getSize());

      cout << endl << endl;

      player1Board.displayTreasure();

      cout << endl << endl;



      cout << "First Mate: \"Where should we bury the second set,"
	   << " which requires "
	   << p1Treasure2.getSize() << " spaces?\"\n\n";
      cin >> startingPosition;
      startingPosition--;

      positionCheck(player1Board, startingPosition,
		    p1Treasure2.getSize());

      p1Treasure2.setPosition(startingPosition);
      player1Board.buryTreasure(startingPosition, p1Treasure2.getSize());

      cout << endl << endl;

      player1Board.displayTreasure();

      cout << endl << endl;



      cout << "First Mate: \"Where should we bury the third set,"
	   << " which requires "
	   << p1Treasure3.getSize() << " spaces?\"\n\n";
      cin >> startingPosition;
      startingPosition--;

      positionCheck(player1Board, startingPosition,
		    p1Treasure3.getSize());

      p1Treasure3.setPosition(startingPosition);
      player1Board.buryTreasure(startingPosition, p1Treasure3.getSize());

      cout << endl << endl;

      player1Board.displayTreasure();

      cout << endl << endl;



      cout << "First Mate: \"Where should we bury the fourth set,"
	   << " which requires "
	   << p1Treasure4.getSize() << " spaces?\"\n\n";
      cin >> startingPosition;
      startingPosition--;

      positionCheck(player1Board, startingPosition,
		    p1Treasure4.getSize());

      p1Treasure4.setPosition(startingPosition);
      player1Board.buryTreasure(startingPosition, p1Treasure4.getSize());

      cout << endl << endl;

      player1Board.displayTreasure();

      cout << endl << endl;



      cout << "First Mate: \"Where should we bury the fifth set,"
	   << " which requires "
	   << p1Treasure5.getSize() << " spaces?\"\n\n";
      cin >> startingPosition;
      startingPosition--;

      positionCheck(player1Board, startingPosition,
		    p1Treasure5.getSize());

      p1Treasure5.setPosition(startingPosition);
      player1Board.buryTreasure(startingPosition, p1Treasure5.getSize());

    }

  for(int i = 0; i < 25; i++)
    cout << endl;

    



  cout << endl;
  cout << "Player 2\n\n"
       << "First Mate: \"Should the men bury the treasure randomly,\n"
       << "             \'aye\' or \'no\'?\" ";
  cin >> automate;

  while(!(automate == "Aye") && !(automate == "aye") &&
	!(automate == "Yes") && !(automate == "yes") &&
	!(automate == "No" ) && !(automate == "no" ))
    {

      cout << "First Mate: \"What is " << automate << "?\"\n\n"
	   << "            \"\'Aye\' or \'no\'?\" ";
      cin >> automate;
    }



  if(automate == "Aye" || automate == "aye" ||
     automate == "Yes" || automate == "yes")
    {



      startingPosition = rand() % player2Board.getSize();

      automationPositionCheck(player2Board, startingPosition,
			      p2Treasure1.getSize());

      p2Treasure1.setPosition(startingPosition);
      player2Board.buryTreasure(startingPosition, p2Treasure1.getSize());



      startingPosition = rand() % player2Board.getSize();

      automationPositionCheck(player2Board, startingPosition,
			      p2Treasure2.getSize());

      p2Treasure2.setPosition(startingPosition);
      player2Board.buryTreasure(startingPosition, p2Treasure2.getSize());



      startingPosition = rand() % player2Board.getSize();

      automationPositionCheck(player2Board, startingPosition,
			      p2Treasure3.getSize());

      p2Treasure3.setPosition(startingPosition);
      player2Board.buryTreasure(startingPosition, p2Treasure3.getSize());



      startingPosition = rand() % player2Board.getSize();

      automationPositionCheck(player2Board, startingPosition,
			      p2Treasure4.getSize());

      p2Treasure4.setPosition(startingPosition);
      player2Board.buryTreasure(startingPosition, p2Treasure4.getSize());



      startingPosition = rand() % player2Board.getSize();

      automationPositionCheck(player2Board, startingPosition,
			      p2Treasure5.getSize());

      p2Treasure5.setPosition(startingPosition);
      player2Board.buryTreasure(startingPosition, p2Treasure5.getSize());

    } else
    {
      cout << "First Mate: \"Where should we bury the "
	   << "first set of treasure chests,\n"
	   << "             which requires "
	   << p2Treasure1.getSize()
	   << " spaces, so there "
	   << "isn't too much in one spot?\n"
	   << "             Show us"
	   << " the location to start"
	   << " burying from and\n"
	   << "             we'll go from left to right.\"\n\n";

      cout << endl << endl;

      player2Board.displayTreasure();

      cout << endl << endl;


      cin >> startingPosition;
      startingPosition--;

      positionCheck(player2Board, startingPosition,
		    p2Treasure1.getSize());

      p2Treasure1.setPosition(startingPosition);
      player2Board.buryTreasure(startingPosition, p2Treasure1.getSize());

      cout << endl << endl;

      player2Board.displayTreasure();

      cout << endl << endl;



      cout << "First Mate: \"Where should we bury the second set,"
	   << " which requires "
	   << p2Treasure2.getSize() << " spaces?\"\n\n";
      cin >> startingPosition;
      startingPosition--;

      positionCheck(player2Board, startingPosition,
		    p2Treasure2.getSize());

      p2Treasure2.setPosition(startingPosition);
      player2Board.buryTreasure(startingPosition, p2Treasure2.getSize());

      cout << endl << endl;

      player2Board.displayTreasure();

      cout << endl << endl;



      cout << "First Mate: \"Where should we bury the third set,"
	   << " which requires "
	   << p2Treasure3.getSize() << " spaces?\"\n\n";
      cin >> startingPosition;
      startingPosition--;

      positionCheck(player2Board, startingPosition,
		    p2Treasure3.getSize());

      p2Treasure3.setPosition(startingPosition);
      player2Board.buryTreasure(startingPosition, p2Treasure3.getSize());

      cout << endl << endl;

      player2Board.displayTreasure();

      cout << endl << endl;



      cout << "First Mate: \"Where should we bury the fourth set,"
	   << " which requires "
	   << p2Treasure4.getSize() << " spaces?\"\n\n";
      cin >> startingPosition;
      startingPosition--;

      positionCheck(player2Board, startingPosition,
		    p2Treasure4.getSize());

      p2Treasure4.setPosition(startingPosition);
      player2Board.buryTreasure(startingPosition, p2Treasure4.getSize());

      cout << endl << endl;

      player2Board.displayTreasure();

      cout << endl << endl;



      cout << "First Mate: \"Where should we bury the fifth set,"
	   << " which requires "
	   << p2Treasure5.getSize() << " spaces?\"\n\n";
      cin >> startingPosition;
      startingPosition--;

      positionCheck(player2Board, startingPosition,
		    p2Treasure5.getSize());

      p2Treasure5.setPosition(startingPosition);
      player2Board.buryTreasure(startingPosition, p2Treasure5.getSize());

    }

  for(int i = 0; i < 25; i++)
    cout << endl;
    


  do
  {
    cout << endl;
    cout << "Player 1\n\n";
    player2Board.displayDugSpots();
    cout << endl;
    cout << endl
	 << "First Mate: \"Where should we dig?\" ";
    cin >> choice;

    while(choice < 1 || 70 < choice)
      {
	cout << "First Mate: \"We can't dig in the ocean, Captain.\"\n"
	     << "            \"Where should we dig?\" ";
	cin >> choice;
      }

    while(player2Board.checkIfDug(choice-1))
      {

	cout << "First Mate: \"We already dug there, Captain.\"\n"
	     << "            \"Where should we dig?\" ";
	cin >> choice;
	while(choice < 1 || 70 < choice)
	  {
	    cout << "First Mate: \"We can't dig in the ocean, Captain.\"\n"
		 << "            \"Where should we dig?\" ";
	    cin >> choice;
	  }
      }



    choice--;

    if(player2Board.digForTreasure(choice))
      {
	cout << endl;
	player2Board.displayDugSpots();
	cout << endl;
	cout << endl;
	cout << "Player2: \"I'm getting a funny feeling, let's hurry\n"
	     << "          up so we can get back to the treasure.\" (HIT)\n";

	if (p2Treasure1.checkForHit(choice))
	  {
	    if (p2Treasure1.checkIfCompleted())
	      {
		cout << "Player2: \"I just KNOW our smallest set of treasure"
		     << " chests is gone\"\n(You've completely looted"
		     << " Player 2's smallest set of treasure chests.)\n"
		     << "First Mate: \"Oh boy, then we better hurry up.\"\n";
	      }
	  }else if (p2Treasure2.checkForHit(choice))
	  {
	    if (p2Treasure2.checkIfCompleted())
	      {
		cout << "Player2: \"I just KNOW our second smallest set of"
		     << " treasure chests is gone\"\n"
		     << "(You've completely looted Player 2's second"
		     << " smallest set of treasure chests.)\n"
		     << "First Mate: \"There was a decent amount of booty"
		     << " in there.\n             We better hurry up.\"\n";
	      }
	  }else if (p2Treasure3.checkForHit(choice))
	  {
	    if (p2Treasure3.checkIfCompleted())
	      {
		cout << "Player2: \"I just KNOW our medium sized set of"
		     << " treasure chests is gone\"\n"
		     << "(You've completely looted Player 2's medium"
		     << " sized set of treasure chests.)\n"
		     << "First Mate: \"We better not catch any Scallywags"
		     << " over there.\n             We better hurry up.\"\n";
	      }
	  }else if (p2Treasure4.checkForHit(choice))
	  {
	    if (p2Treasure4.checkIfCompleted())
	      {
		cout << "Player2: \"I just KNOW our second largest set of"
		     << " treasure chests is gone\"\n"
		     << "(You've completely looted Player 2's second"
		     << " largest set of treasure chests.)\n"
		     << "First Mate: \"Heave ho, men!"
		     << " We have to get over there.\"\n";
	      }
	  }else if (p2Treasure5.checkForHit(choice))
	  {
	    if (p2Treasure5.checkIfCompleted())
	      {
		cout << "Player2: \"I just KNOW our largest set of"
		     << " treasure chests is gone\"\n"
		     << "(You've completely looted Player 2's largest"
		     << " set of treasure chests.)\n"
		     << "First Mate: \"Whoever we find, we'll turn into"
		     << " shark bait.\"\n";
	      }
	  }

	if(p2Treasure1.checkIfCompleted() &&
	   p2Treasure2.checkIfCompleted() &&
	   p2Treasure3.checkIfCompleted() &&
	   p2Treasure4.checkIfCompleted() &&
	   p2Treasure5.checkIfCompleted())
	  {
	    cout << endl;
	    cout << "Player 1 Wins!\n";
	      player1Wins = true;
	  }

      }else
      {
	cout << endl;
	player2Board.displayDugSpots();
	cout << endl;
	cout << endl;
	cout << "Player2: \"I have the feeling our treasure is going\n"
	     << "          to be alright.\" (MISS)\n";

      }



    if (!player1Wins)
      {
	cout << endl << endl;
	cout << "Player 2\n\n";
	player1Board.displayDugSpots();
	cout << endl;
	cout << endl
	     << "First Mate: \"Where should we dig?\" ";
	cin >> choice;


	while(choice < 1 || 70 < choice)
	  {
	    cout << "First Mate: \"We can't dig in the ocean, Captain.\"\n"
		 << "            \"Where should we dig?\" ";
	    cin >> choice;
	  }

	while(player1Board.checkIfDug(choice-1))
	  {
	    cout << "First Mate: \"We already dug there, Captain.\"\n"
		 << "            \"Where should we dig?\" ";
	    cin >> choice;
	    while(choice < 1 || 70 < choice)
	      {
		cout << "First Mate: \"We can't dig in the ocean, Captain.\"\n"
		     << "            \"Where should we dig?\" ";
		cin >> choice;
	      }
	  }



	choice--;

	if(player1Board.digForTreasure(choice))
	  {
	    cout << endl;
	    player1Board.displayDugSpots();
	    cout << endl;
	    cout << endl;
	    cout << "Player1: \"I'm getting a funny feeling, let's hurry\n"
		 << "          up so we can get "
	         << "back to the treasure.\" (HIT)\n";

	    if (p1Treasure1.checkForHit(choice))
	      {
		if (p1Treasure1.checkIfCompleted())
		  {
		    cout << "Player1: \"I just KNOW our "
		         << "smallest set of treasure"
			 << " chests is gone\"\n(You've completely looted"
			 << " Player 1's smallest set of treasure chests.)\n"
			 << "First Mate: \"Oh boy, then we "
		         << "better hurry up.\"\n";
		  }
	      }else if (p1Treasure2.checkForHit(choice))
	      {
		if (p1Treasure2.checkIfCompleted())
		  {
		    cout << "Player1: \"I just KNOW our second smallest set of"
			 << " treasure chests is gone\"\n"
			 << "(You've completely looted Player 1's second"
			 << " smallest set of treasure chests.)\n"
			 << "First Mate: \"There was a decent amount of booty"
			 << " in there.\n             We better hurry up.\"\n";
		  }
	      }else if (p1Treasure3.checkForHit(choice))
	      {
		if (p1Treasure3.checkIfCompleted())
		  {
		    cout << "Player1: \"I just KNOW our medium sized set of"
			 << " treasure chests is gone\"\n"
			 << "(You've completely looted Player 1's medium"
			 << " sized set of treasure chests.)\n"
			 << "First Mate: \"We better not catch any Scallywags"
			 << " over there.\n        "
		         << "     We better hurry up.\"\n";
		  }
	      }else if (p1Treasure4.checkForHit(choice))
	      {
		if (p1Treasure4.checkIfCompleted())
		  {
		    cout << "Player1: \"I just KNOW our second largest set of"
			 << " treasure chests is gone\"\n"
			 << "(You've completely looted Player 1's second"
			 << " largest set of treasure chests.)\n"
			 << "First Mate: \"Heave ho, men!"
			 << " We have to get over there.\"\n";
		  }
	      }else if (p1Treasure5.checkForHit(choice))
	      {
		if (p1Treasure5.checkIfCompleted())
		  {
		    cout << "Player1: \"I just KNOW our largest set of"
			 << " treasure chests is gone\"\n"
			 << "(You've completely looted Player 1's largest"
			 << " set of treasure chests.)\n"
			 << "First Mate: \"Whoever we find, we'll turn into"
			 << " shark bait.\"\n";
		  }
	      }

	    if(p1Treasure1.checkIfCompleted() &&
	       p1Treasure2.checkIfCompleted() &&
	       p1Treasure3.checkIfCompleted() &&
	       p1Treasure4.checkIfCompleted() &&
	       p1Treasure5.checkIfCompleted())
	      {
		cout << endl;
		cout << "Player 2 Wins!\n";
		player2Wins = true;
	      }
	  }else
	  {
	    cout << endl;
	    player1Board.displayDugSpots();
	    cout << endl;
	    cout << endl;
	    cout << "Player1: \"I have the feeling our treasure is going\n"
		 << "          to be alright.\" (MISS)\n";

	  }
      }

  } while(!player1Wins && !player2Wins);

  return 0;

}
