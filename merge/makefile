m1:
	gcc -Wall -g -o main item.c merge_sort.c main.c

m2:
	gcc -Wall -g -o main item.c merge_sort_cutoff.c main.c

m3:
	gcc -Wall -g -o main item.c merge_sort_skip.c main.c

m4:
	gcc -Wall -g -o main item.c merge_cut_skip.c main.c

m5:
	gcc -Wall -g -o main item.c merge_sort_bottomup.c main.c

m6:
	gcc -Wall -g -o main item.c merge_bottomup_cut.c main.c

m7:
	gcc -Wall -g -o main item.c merge_bottomup_skip.c main.c

m8:
	gcc -Wall -g -o main item.c merge_bottomup_cutskip.c main.c

clean:
	rm -f main

run:
	time ./main < in/unif_rand/100000.txt
