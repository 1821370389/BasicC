# 动态库编译
OBJ=$(patsubst %.c, %.o, $(wildcard ./*.c))
TARGET=libSoMyAdd.so

#使用变量:$(变量名)
$(TARGET): $(OBJ)
	gcc -shared -fPIC $^ -o  $@
# 发布
	cp $(TARGET) /usr/lib/

%.o:%.c
	gcc -c $^ -o $@

clean:
	rm $(OBJ) $(TARGET)
	rm /usr/lib/$(TARGET)
