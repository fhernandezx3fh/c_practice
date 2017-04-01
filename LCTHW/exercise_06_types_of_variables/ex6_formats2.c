#include <stdio.h>

int main(int argc, char *argv[])
{

	printf("\n Result: %d%c%f", 12, 'a', 2.3);   //Result:12a2.3   
	printf("\n Result: %d %c %f", 12, 'a', 2.3);   //Result:12 a 2.3   
	printf("\n Result: %d\t%c\t%f", 12, 'a', 2.3);   //Result:12 a 2.3   
	printf("\n Result: %d\t%c\t%6.2f", 12, 'a',      245.37154);   
	//Result:12 a 245.37   
	printf("\n Result: %5d \t %x \t %#x", 234,      234, 234);   
	//Result: 234 EA 0xEA   
	printf("\n The number is %6d", 12);   //Result: The number is 12   
	printf("\n The number is %2d", 1234);   //Result: The number is 1234   
	printf("\n The number is %6d", 1234);   //Result: The number is 1234   
	printf("\n The number is %-6d", 1234);   
	//Result: The number is 1234__ // 2 _ indicates 2      white space   
	printf("\n The number is %06d", 1234);   //Result: The number is 001234   
	printf("\n The price of this item is %09.2f      rupees", 123.456);   
	//Result: The price of this item is 00123.45 rupees   
	printf("\n This is \'so\' beautiful");   //Result: This is 'so' beautiful   
	printf("\n This is \"so\" beautiful");   //Result: This is "so" beautiful   
	printf("\n This is \\ so beautiful ");   //Result: This is \ so beautiful   
	printf("\n a = |%-+7.2f| b = %0+7.2f c = %-0+8.2f\n", 1.2, 1.2, 1.2);   
	//Result: a = +1.20     b = 0001.20 c = 1.20
	printf("This is a percent sign: %%.\n");
	//Result: This is a percent sign: %.

return 0;
}
