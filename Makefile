all:
\tgcc factorial/factorial.c -o factorial/factorial
\tgcc sum_ap/sum_ap.c -o sum_ap/sum_ap
\tgcc fibonacci/fibonacci_recursive.c -o fibonacci/fibonacci_recursive

clean:
\trm -f factorial/factorial sum_ap/sum_ap fibonacci/fibonacci_recursive
