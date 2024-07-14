all: aux main
	
main:
	g++ 4a.cpp -o 4a

aux:
	g++ 4a_aux/ben.cpp -o ben
	g++ 4a_aux/[WIP]-decompose.cpp -o dec

clean:
	rm 4a ben dec
