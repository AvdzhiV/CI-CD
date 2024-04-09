CC = gcc
CFLAGS = -Wall -Werror -Wextra
TARGET = s21_cat

all: final 

final: s21_cat

s21_cat: s21_cat.o s21_cat_func.o
		$(CC) $(CFLAGS) -o $(TARGET) s21_cat.o s21_cat_func.o


s21_cat.o: 
	$(CC) $(CFLAGS) -c s21_cat.c

s21_cat_func.o:
		$(CC) $(CFLAGS) -c s21_cat_func.c

test: 
	chmod +x test/cat_test.sh
	./test/cat_test.sh

clean:
	rm *.o

rebuild: clean all



