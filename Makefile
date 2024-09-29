# all: aux main
all: main
	
main:
	g++ 4a.cpp -o 4a
	g++ 71a.cpp -o 71a
	g++ 236a.cpp -o 236a
	g++ 281a.cpp -o 281a
	g++ 282a.cpp -o 282a

4a:
	g++ 4a.cpp -o 4a

71a:
	g++ 71a.cpp -o 71a

236a:
	g++ 236a.cpp -o 236a

281a:
	g++ 281a.cpp -o 281a

282a:
	g++ 282a.cpp -o 282a

617a:
	g++ 617a.cpp -o 617a

791a:
	g++ 791a.cpp -o 791a

# aux:
# 	g++ 4a_aux/ben.cpp -o ben
# 	g++ 4a_aux/[WIP]-decompose.cpp -o dec

clean:
	rm 4a 71a 236a 281a 282a 617a 791a
