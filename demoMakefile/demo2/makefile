#自定义变量
# OBJ = main.o add.o sub.o div.o mul.o
OBJ = $(patsubst %.c, %.o, $(wildcard ./*.c))
TARGET = main

#使用变量:$(变量名)
$(TARGET): $(OBJ) $(LIBS) -L$(LDFLA)
	gcc $^ -o $@

%.o: %.c
	gcc -c $^ -o $@

# # 伪目标/伪文件
.PHONY: clean

clean:
	@rm -rf  *.o $(TARGET)

show:
#显示当前目录所以.c文件
	@echo $(wildcard ./*c)
#显示当前目录所有.c文件并用.o替换.c
	@echo $(patsubst %.c, %.o, $(wildcard ./*.c))
	
