#include "Leetcode.h"

int romanToInt(char *s)
{
	int sum = 0;
	if (s)
	{
		while (*s != '\0')
		{
			char current = *s;
			char next;

			if (*(s + 1) == '\0')
			{
				next = '\0';
			}
			else
			{
				next = *(s + 1);
			}
			if (is_current_roman_char_small_than_next(current, next))
			{
				sum += (get_num_value_for_roman_character(next) - get_num_value_for_roman_character(current));
				s++;
			}
			else
			{
				sum += get_num_value_for_roman_character(current);
			}
			s++;
		}
	}
	return sum;
}

char *reverseWords(char *s)
{
	// char n[30] = "rahul chaudhary is a good boy";
	int size = strlen(s);
	char output[size + 1]; // Output

	char BUFFER[100];

	int index = 0;
	int counter = 0;
	int bindex = 0;

	while (*(s + index) != '\0')
	{
		if (*(s + index) == ' ')
		{
			if (bindex > 0)
				BUFFER[counter++] = ' ';
			BUFFER[counter] = '\0';
			flip_word_without_len(BUFFER);
			for (int i = 0; i < buffer_len(BUFFER); i++)
			{
				output[bindex] = BUFFER[i];
				++bindex;
			}
			counter = 0;
		}
		else
		{
			BUFFER[counter++] = *(s + index);
		}
		index++;
	}
	BUFFER[counter++] = ' ';
	BUFFER[counter] = '\0';
	flip_word_without_len(BUFFER);
	for (int i = 0; i < buffer_len(BUFFER); i++)
	{
		output[bindex] = BUFFER[i];
		bindex++;
	}
	output[bindex] = '\0';
	for (int i = 0; i < size; i++)
	{
		*(s + i) = *(output + i);
	}
	return s;
}

struct ListNode
{
	int val;
	struct ListNode *next;
};

int modules(int num)
{
	return num % 10;
}

struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2)
{
	return NULL;
}