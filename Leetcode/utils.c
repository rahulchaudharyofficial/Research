#include "utils.h"

int get_num_value_for_roman_character(char s)
{
	int sum = 0;
	switch (s)
	{
	case 'I':
		sum = 1;
		break;
	case 'V':
		sum = 5;
		break;
	case 'X':
		sum = 10;
		break;
	case 'L':
		sum = 50;
		break;
	case 'C':
		sum = 100;
		break;
	case 'D':
		sum = 500;
		break;
	case 'M':
		sum = 1000;
		break;
	default:
		break;
	}
	return sum;
}


bool is_current_roman_char_small_than_next(char current, char next)
{
	bool result = false;
	if (next == '\0')
	{
		return result;
	}

	if (current == 'I' && (next == 'V' || next == 'X' || next == 'L' || next == 'C' || next == 'D' || next == 'M'))
	{
		result = true;
	}
	
	if (current == 'V' && (next == 'X' || next == 'L' || next == 'C' || next == 'D' || next == 'M'))
	{
		result = true;
	}

	if (current == 'X' && (next == 'L' || next == 'C' || next == 'D' || next == 'M'))
	{
		result = true;
	}

	if (current == 'L' && (next == 'C' || next == 'D' || next == 'M'))
	{
		result = true;
	}

	if (current == 'C' && (next == 'D' || next == 'M'))
	{
		result = true;
	}

	if (current == 'D' && next == 'M')
	{
		result = true;
	}
	return result;
}

void flip_word(char* s)
{
	if (s)
	{
		int len = strlen(s); //get the length of the string
		int i, j;
		for (i = 0, j = len - 1; i < j; i++, j--) {
			char t = s[i];
			s[i] = s[j];
			s[j] = t;
		}
	}
}
int buffer_len(char *buffer)
{
	int res = 0;

	if (buffer)
	{
		while (*buffer != '\0')
		{
			res++;
			buffer++;
		}
	}

	return res;
}
void flip_word_without_len(char* s)
{
	int len = buffer_len(s);
	if (len > 0)
	{
		int i, j;
		for (i = 0, j = len - 1; i < j; i++, j--) {
			char t = s[i];
			s[i] = s[j];
			s[j] = t;
		}
	}
}