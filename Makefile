# all: aux main
all: main
	
main:
	g++ 4a.cpp -o 4a
	g++ 71a.cpp -o 71a
	g++ 236a.cpp -o 236a
	g++ 282a.cpp -o 282a

4a:
	g++ 4a.cpp -o 4a

71a:
	g++ 71a.cpp -o 71a

236a:
	g++ 236a.cpp -o 236a

282a:
	g++ 282a.cpp -o 282a

# aux:
# 	g++ 4a_aux/ben.cpp -o ben
# 	g++ 4a_aux/[WIP]-decompose.cpp -o dec

clean:
	rm 4a 71a 236a 282a
