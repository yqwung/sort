obj = main.o bubblesort.o selectionsort.o insertionsort.o shellsort.o

sort : $(obj)
	gcc -o sort $(obj)
    
$(obj) : bubblesort.h selectionsort.h insertionsort.h shellsort.h

main.o : main.c
bubblesort.o : bubblesort.c
selectionsort.o : selectionsort.c
insertionsort.o : insertionsort.c
shellsort.o : shellsort.c

clean :
	rm sort $(obj)