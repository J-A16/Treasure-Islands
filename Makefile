objects = main.o automationPositionCheck.o positionCheck.o Treasure.o Board.o

TreasureIslands: $(objects)
	g++ -Wall $(objects) -o TreasureIslands

main.o: main.cpp automationPositionCheck.h positionCheck.h Treasure.h Board.h
	g++ -Wall -c main.cpp

automationPositionCheck.o: automationPositionCheck.cpp\
automationPositionCheck.h Board.h
	g++ -Wall -c automationPositionCheck.cpp

positionCheck.o: positionCheck.cpp positionCheck.h Board.h
	g++ -Wall -c positionCheck.cpp

Treasure.o: Treasure.cpp Treasure.h
	g++ -Wall -c Treasure.cpp

Board.o: Board.cpp Board.h
	g++ -Wall -c Board.cpp

.PHONY: clean

clean:
	-rm $(objects) *~
