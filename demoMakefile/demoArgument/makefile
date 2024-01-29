#自定义变量
OBJ = $(patsubst %.c, %.o, $(wildcard ./*.c))
TARGET = demomain

#使用变量:$(变量名)
$(TARGET): $(OBJ)
	gcc $^ -o $@

%.o: %.c
	gcc -c $^ -o $@

# # 伪目标/伪文件
.PHONY: clean

PATHS:=/tmp/29min/
BIN:=/usr/local/bin

install: $(TARGET)
	@if [ -d $(PATHS) ];					\
	then echo $(PATHS) exist;				\
	else									\
		mkdir $(PATHS);						\
		cp $(TARGET) $(PATHS);				\
		ln -sv $(PATHS)$(TARGET) $(BIN);	\
	fi

clean:
	@rm -rf *.o $(TARGET) 
	@rm -rf $(PATHS)
	@rm -rf $(BIN)

show:
#显示当前目录所有.c文件
	@echo $(wildcard ./*.c)
#显示当前目录所有.c文件并用.o替换.c
	@echo $(patsubst %.c, %.o, $(wildcard ./*.c))
