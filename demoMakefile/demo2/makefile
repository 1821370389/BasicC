#自定义变量
OBJ = main.o add.o sub.o div.o mul.o
TARGET = main

#使用变量:$(变量名)
$(TARGET): $(OBJ)
	gcc $^ -o $@


add.o: add.c
	gcc -c $^ -o $@
sub.o:sub.c
	gcc -c $^ -o $@
div.o:div.c
	gcc -c $^ -o $@
mul.o:mul.c
	gcc -c $^ -o $@

clean:
	@rm -rf  *.o $@