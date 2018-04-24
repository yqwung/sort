obj = main.o bubblesort.o 

sort : $(obj)
	gcc -o sort $(obj)
    
$(obj) : bubblesort.h 

main.o : main.c
bubblesort.o : bubblesort.c

clean :
	rm sort $(obj)