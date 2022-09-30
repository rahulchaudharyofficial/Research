#pragma once
#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#include "research_error.h"

int get_num_value_for_roman_character(char s);
bool is_current_roman_char_small_than_next(char, char);

void flip_word(char*);
void flip_word_without_len(char*);
int buffer_len(char*);