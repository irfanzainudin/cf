# all: aux main
all: main
	
main:
	g++ 4a.cpp -o 4a
	g++ 59a.cpp -o 59a
	g++ 71a.cpp -o 71a
	# g++ 112a.cpp -o 112a
	g++ 236a.cpp -o 236a
	g++ 281a.cpp -o 281a
	g++ 282a.cpp -o 282a
	g++ 546a.cpp -o 546a
	g++ 617a.cpp -o 617a
	g++ 791a.cpp -o 791a

4a:
	g++ 4a.cpp -o 4a

59a:
	g++ 59a.cpp -o 59a

71a:
	g++ 71a.cpp -o 71a

112a:
	g++ 112a.cpp -o 112a

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
	rm 4a 59a 71a 112a 236a 281a 282a 546a 617a 791a
