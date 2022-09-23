pet_lab: pet.o driver.o
	g++ -o pet_lab pet.o driver.o

driver.o: driver.cpp
	g++ -c driver.cpp

pet.o: pet.cpp pet.h
	g++ -c pet.cpp

clean: 
	rm *.o pet_lab
