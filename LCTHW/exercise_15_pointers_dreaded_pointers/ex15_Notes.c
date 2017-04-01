#include <stdio.h>

int main(int argc, char *argv[])
{
	// create two arrays we care about
	int ages[] = {23, 43, 12, 89, 2};
	char *names[] = {
		"Alan", "Frank",
		"Mary", "John", "Lisa"
	};
	
	// safely get the sizes of all ages
	int count = sizeof(ages) / sizeof(int);
	int i = 0;

	// first way of using indexing
	for(i = 0; i < count; i++) {
		printf("%s has %d years alive.\n",
			names[i], ages[i]);
	}

	printf("---\n");

	// setup the pointers to the start of the arrays
	int *cur_age = ages;
	char **cur_name = names;

	// second way using pointers
	for(i = 0; i < count; i++) {
		printf("%s is %d years old.\n",
				*(cur_name+i), *(cur_age+i));
	}

	printf("---\n");

	// third way, pointers are just arrays
	for(i = 0; i < count; i++) {
		printf("%s is %d years old again.\n",
				cur_name[i], cur_age[i]);
	}

	printf("---\n");

	// fourth way with pointers in a stupid complex way
	for(cur_name = names, cur_age = ages;
			(cur_age - ages) < count;
			cur_name++, cur_age++)
	{
		printf("%s lived %d years so far.\n",
			*cur_name, *cur_age);
	}


	return 0;
}
/*
Before explaining how pointers work, let's break this program down line-by-line so you get an idea of what's going on. As you go through this detailed description, try to answer the questions for yourself on a piece of paper, then see if what you guessed was going on matches my description of pointers later.

ex15.c:6-10
Create two arrays, ages storing some int data, and names storing an array of strings.
ex15.c:12-13
Some variables for our for-loops later.
ex15.c:16-19
You know this is just looping through the two arrays and printing how old each person is. This is using i to index into the array.
ex15.c:24
Create a pointer that points at ages. Notice the use of int * to create a "pointer to integer" type of pointer. That's similar to char *, which is a "pointer to char", and a string is an array of chars. Seeing the similarity yet?
ex15.c:25
Create a pointer that points at names. A char * is already a "pointer to char", so that's just a string. You however need 2 levels, since names is 2-dimensional, that means you need char ** for a "pointer to (a pointer to char)" type. Study that too, explain it to yourself.
ex15.c:28-31
Loop through ages and names but instead use the pointers plus an offset of i. Writing *(cur_name+i) is the same as writing name[i], and you read it as "the value of (pointer cur_name plus i)".
ex15.c:35-39
This shows how the syntax to access an element of an array is the same for a pointer and an array.
ex15.c:44-50
Another admittedly insane loop that does the same thing as the other two, but instead it uses various pointer arithmetic methods:

ex15.c:44
Initialize our for-loop by setting cur_name and cur_age to the beginning of the names and ages arrays.
ex15.c:45
The test portion of the for-loop then compares the distance of the pointer cur_age from the start of ages. Why does that work?
ex15.c:46
The increment part of the for-loop then increments both cur_name and cur_age so that they point at the next element of the name and age arrays.
ex15.c:48-49
The pointers cur_name and cur_age are now pointing at one element of the arrays they work on, and we can print them out using just *cur_name and *cur_age, which means "the value of wherever cur_name is pointing". */
