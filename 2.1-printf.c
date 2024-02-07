// Syntax:
// printf(<text>, <v1>, <v2>, ..., <vN>);

// Use:
// 0, 1 or N variables

// Format specifiers:

// d or i	=> Decimal based integer numbers								X		=> Hexadecimal based integer numbers
// f		=> Float point numbers											e		=> Scientific notation numbers
// c		=> Alphanumeric characters										s		=> Alphanumeric characters sequence
// .<num>	=> Specifies how many digits will be shown after the comma (,)

// Escape sequences: printf()

// \a		=> Beep sound, default system alarm sound		\b		=> Backspace
// \n		=> Breakline									\t		=> Horizontal tabulation (TAB)
// \r		=> Returns to the beginning of the line			\0		=> Null character
// \v		=> Vertical tabulation

// \\		=> \ Character													\'		=> ' Character
// \"		=> " Character													\?		=> ? Character
// \123		=> Character related to the code 123 in octal (ASCII)			\%%		=> % character
// X12		=> Character related to the code 12 in hexadecimal (ASCII)

#include <stdio.h>

int main(){
	printf("Hello, how are you?\n");
	printf("Integer value: %d.\n", 10);
	printf("Float value: %f. \n", 3.141559265);
	printf("Float value with 2 decimal digits: %.2f. \n", 3.141559265);
	printf("Text Data: %c.\n", 'a');
	printf("Text Data: %s.\n", "testing");
}
