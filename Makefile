hihi:  
	echo "ahihi"
test : test.o	
	cc test.o -o test
test.o: test.c
	cc -c test.c -o test.o

clean: 
	rm -f *.o
