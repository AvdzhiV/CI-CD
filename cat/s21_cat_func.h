#ifndef S21_CAT_FUNC_H
#define S21_CAT_FUNC_H

#include <stdio.h>

#define MAX_LINE 1024

struct flag {
  char name;
  int val;
  void (*func)(FILE *);
};

void s21_cat(FILE *fp);
void s21_cat_b(FILE *fp);
void s21_cat_e(FILE *fp);
void s21_cat_n(FILE *fp);
void s21_cat_s(FILE *fp);
void s21_cat_t(FILE *fp);
void s21_cat_E(FILE *fp);
void s21_cat_T(FILE *fp);
#endif