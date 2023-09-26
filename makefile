m1:
	gcc -Wall -g -o main item.c qsort/qsort.c main.c

m2:
	gcc -Wall -g -o main item.c qsort/qsort_cut.c main.c

m3:
	gcc -Wall -g -o main item.c qsort/qsort_med.c main.c

clean:
	rm -f main

run:
	time ./main < in/sorted/100000.txt 100000
