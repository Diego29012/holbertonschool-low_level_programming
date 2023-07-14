#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* init_dog - initializes a dog structure
* @d: pointer to the struct
* @name: dog's name
* @age: dog's age
* @owner: the owner of the dog
**/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
	}
}

