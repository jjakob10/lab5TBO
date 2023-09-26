#!/bin/bash

echo "Executando o script..."
echo "Nearly_sorted..."
time ./main < in/nearly_sorted/100000.txt 100000
time ./main < in/nearly_sorted/1000000.txt 1000000
time ./main < in/nearly_sorted/10000000.txt 10000000
echo ""
echo "Reversed_sorted..."
time ./main < in/reverse_sorted/100000.txt 100000
time ./main < in/reverse_sorted/1000000.txt 1000000
time ./main < in/reverse_sorted/10000000.txt 10000000
echo ""
echo "Sorted..."
time ./main < in/sorted/100000.txt 100000
time ./main < in/sorted/1000000.txt 1000000
time ./main < in/sorted/10000000.txt 10000000
echo ""
echo "Rand..."
time ./main < in/unif_rand/100000.txt 100000
time ./main < in/unif_rand/1000000.txt 1000000
time ./main < in/unif_rand/10000000.txt 10000000

echo "Script concluído."
