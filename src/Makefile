CC=g++

all: hw05

hw05: billType.h billType.o dateType.h dateType.o personType.h personType.o doctorType.h doctorType.o patientType.h patientType.o
	$(CC) hw05.cpp -o hw05 billType.o dateType.o personType.o doctorType.o patientType.o

billType.o: billType.h billType.cpp
	$(CC) -c billType.cpp -o billType.o

dateType.o: dateType.h dateType.cpp
	$(CC) -c dateType.cpp -o dateType.o

personType.o: personType.h personType.cpp
	$(CC) -c personType.cpp -o personType.o

doctorType.o: doctorType.h doctorType.cpp
	$(CC) -c doctorType.cpp -o doctorType.o

patientType.o: patientType.h patientType.cpp
	$(CC) -c patientType.cpp -o patientType.o

clean:
	rm -f *.o all
