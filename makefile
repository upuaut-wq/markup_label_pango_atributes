all: exe_arq

exe_arq: main.o frame.o
	g++ -o exe_arq main.o frame.o `pkg-config gtkmm-3.0 --cflags --libs`

main.o: main.cpp frame.h
	g++ -o main.o main.cpp -c `pkg-config gtkmm-3.0 --cflags --libs`

frame.o: frame.cpp 
	g++ -o frame.o frame.cpp -c `pkg-config gtkmm-3.0 --cflags --libs`
