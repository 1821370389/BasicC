# 动态库编译
OBJ=$(patsubst %.c, %.o, $(wildcard ./*.c))
TARGET=libaMyAdd.a

#使用变量:$(变量名)
$(TARGET): $(OBJ)
	$(AR) -r $(TARGET) $^
%.o:%.c
	gcc -c $^ -o $@

clean:
	rm $(OBJ) $(TARGET)
