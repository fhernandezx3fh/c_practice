#include <stdio.h>

void printstrstat(char str[])
{
	printf("&name: %p\nname: %s\nsize: %ld\n", str, str, (sizeof(str)));
	str[0] = 'F';
}

void printintstat(int num[])
{
	printf("&name: %p\nnum: %d\nsize: %ld\n", num, num[0], (sizeof(num)));
}

int main(int argc, char *argv[])
{
    char name[] = "fernando hernandez";
	int numbers[] = {156, 2, 64};

	printf("&name: %p\nname: %s\nsize: %ld\n", &name, name, (sizeof(name)));
	printstrstat(name);

	printintstat(numbers);

	printf("name: %s\n", name);

    return 0;
}
