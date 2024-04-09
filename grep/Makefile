CC = gcc
CFLAGS = -Wall -Werror -Wextra
TARGET = s21_grep

all: final 

final: s21_grep

s21_grep: s21_grep.o s21_grep_func.o
		$(CC) $(CFLAGS) -o $(TARGET) s21_grep.o s21_grep_func.o


s21_grep.o: 
	$(CC) $(CFLAGS) -c s21_grep.c

s21_grep_func.o:
		$(CC) $(CFLAGS) -c s21_grep_func.c

test: 
	chmod +x test/grep_test.sh
	./test/grep_test.sh

clean:
	rm *.o

rebuild: clean all