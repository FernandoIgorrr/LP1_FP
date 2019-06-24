PROG	= main
CC		= g++
FLAGS	= -O0 -g -Wall
OBJS	= main.o command.class.o dados.class.o animal.class.o funcionario.class.o anfibio.class.o ave.class.o mamifero.class.o reptil.class.o veterinario.class.o tratador.class.o data.struct.o

$(PROG):$(OBJS)
	$(CC) -o $(PROG) $(OBJS)
main.o:
	$(CC) $(FLAGS) -c main.cpp

command.class.o: _classes/command.class.h
	$(CC) $(FLAGS) -c _classes/command.class.cpp

dados.class.o: _classes/dados.class.h
	$(CC) $(FLAGS) -c _classes/dados.class.cpp

animal.class.o: _classes/animal.class.h
	$(CC) $(FLAGS) -c _classes/animal.class.cpp
funcionario.class.o: _classes/funcionario.class.cpp
	$(CC) $(FLAGS) -c _classes/funcionario.class.cpp

anfibio.class.o: _classes/anfibio.class.h
	$(CC) $(FLAGS) -c _classes/anfibio.class.cpp
ave.class.o: _classes/ave.class.h
	$(CC) $(FLAGS) -c _classes/ave.class.cpp
mamifero.class.o: _classes/mamifero.class.h
	$(CC) $(FLAGS) -c _classes/mamifero.class.cpp
reptil.class.o: _classes/reptil.class.cpp
	$(CC) $(FLAGS) -c _classes/reptil.class.cpp

veterinario.class.o: _classes/veterinario.class.cpp
	$(CC) $(FLAGS) -c _classes/veterinario.class.cpp
tratador.class.o: _classes/tratador.class.cpp
	$(CC) $(FLAGS) -c _classes/tratador.class.cpp

data.struct.o: _structs/data.struct.cpp
	$(CC) $(FLAGS) -c _structs/data.struct.cpp


cls:
	rm -f $(PROG) $(OBJS)
