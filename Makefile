PROG	= main
CC		= g++
FLAGS	= -O0 -g -Wall
OBJS	= main.o animal.class.o anfibio.class.o ave.class.o mamifero.class.o reptil.class.o

$(PROG):$(OBJS)
	$(CC) -o $(PROG) $(OBJS)
main.o:
	$(CC) $(FLAGS) -c main.cpp
animal.class.o: _classes/animal.class.h
	$(CC) $(FLAGS) -c _classes/animal.class.cpp
anfibio.class.o: _classes/anfibio.class.h
	$(CC) $(FLAGS) -c _classes/anfibio.class.cpp
ave.class.o: _classes/ave.class.h
	$(CC) $(FLAGS) -c _classes/ave.class.cpp
mamifero.class.o: _classes/mamifero.class.h
	$(CC) $(FLAGS) -c _classes/mamifero.class.cpp
reptil.class.o: _classes/reptil.class.cpp
	$(CC) $(FLGAS) -c _classes/reptil.class.cpp

cls:
	rm -f $(PROG) $(OBJS)
