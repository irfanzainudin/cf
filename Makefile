# all: aux main
all: main
	
main:
	g++ 4a.cpp -o 4a
	g++ 71a.cpp -o 71a

# aux:
# 	g++ 4a_aux/ben.cpp -o ben
# 	g++ 4a_aux/[WIP]-decompose.cpp -o dec

clean:
	rm 4a
