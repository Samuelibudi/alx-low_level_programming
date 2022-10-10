#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog.
 * @d: struct dog.
 * @name: Dog name.
 * @age: age of dog.
 * @owner: Dog owner.
 * Return: nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
