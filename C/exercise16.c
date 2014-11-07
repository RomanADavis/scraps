#include <stdio.h>						// Input and output
#include <assert.h>						// Assertions, error messages basically
#include <stdlib.h>						// The standard library, gives
#include <string.h>						// String manip, strdup

struct Person { 						// struct named person
	char *name;							// that has to recieve parameters for name
	int age;							// age
	int height;							//height and
	int weight;							//weight. Might be a hacky way to work
};										// around for multi type arrays

// Looks like a method for the struct, takes these parameter, returns a struct with values
// for who
struct Person *Person_create(char *name, int age, int height, int weight)
{
	struct Person *who = malloc(sizeof(struct Person)); // Gets a slice of memory just this
	assert(who != NULL);							// size. Makes sure who can't be null.
	
	who->name = strdup(name);// strdup duplicates a string and returns a pointer. why? 
	who->age = age;
	who->height = height;
	who->weight = weight;
	
	return who;				// return who, which is fed into person to make a person. I think.
}

// destroys a person
void Person_destroy(struct Person *who)	// destroy takes a person 
{
	assert(who != NULL); // that has a who
	
	free(who->name);// name doesn't take memory any more. This is garbage collection,
	free(who);// isn't it?
}

void Person_print(struct Person *who) // Prints out the parameters/ arguments of person
{
	printf("Name: %s\n", who->name);// gets name from who and prints it
	printf("\tAge: %d\n", who->age);
	printf("\tHeight: %d\n", who->height);
	printf("\tWeight: %d\n", who->weight);
}
// main function, which takes arguments from CLI
int main(int argc, char *argv[])
{
	// maketwo people structures
	struct Person *frank = Person_create( // makes a person frank
		"Frank Blank", 20, 72, 180);// with arguments that feed into frank
		
	struct Person *joe = Person_create(
		"Joe Alex", 32, 64, 140);
		
	// print them out and where they are in memory
	printf("Joe is at memory location %p:\n", joe); // gives the memloc with %p formatter
	Person_print(joe); // Prints joe
	
	printf("Frank is at memory location %p:\n", frank);
	Person_print(frank);
	
	// make everyone 20 years old and print them again
	joe->age += 20;// Changes joe. Note joe instead of who. That's interesting.
	joe->height += 2;
	joe->weight += 40;
	Person_print(joe);
	
	frank->age += 20;
	frank->weight += 20;
	Person_print(frank);
	
	// destroy them both so we clean up
	Person_destroy(joe); // "destroys" who. I think it's mostly to free to strings we copied
	Person_destroy(frank);// with strdup
	
	return 0; // If we got here, everything is okay, and the OS takes control.
}
