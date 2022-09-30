#include "Leetcode.h"
#include "Stack.h"

int main(int argc, char **argv)
{
	//printf("romanToInt(char *s) = %d\n", romanToInt("III"));
	//printf("romanToInt(char *s) = %d\n", romanToInt("MCMXCIV"));
	//char n1[6] = "rahul";
	//char n2[10] = "chaudhary";
	//flip_word_without_len(n1);
	//printf("flip = %s\n", n1);

	//flip_word_without_len(n2);
	//printf("flip = %s\n", n2);
	//char n[30] = "rahul chaudhary is a good boy";
	//char n[10] = "hehhhhhhe";
	//reverseWords(n);
	//printf("%s\n", n);
	//printf("%d\n", modules(18));

	stack_t* stack = create_stack();
	int* t = NULL;
	for (int i = 1; i <= 10; i++)
	{
		t = (int*) malloc(sizeof(int));
		*t = i;
		append(t, stack);
	}
	print_stack(stack);

	return EXIT_SUCCESS;
}