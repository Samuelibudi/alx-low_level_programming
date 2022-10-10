#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function creates new dog.
 * @name: Dog name.
 * @age: Dog age.
 * @owner: Dog owner.
 * Return: struct dog else returns null.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogy;
	int i, sname, sowner;

	dogy = malloc(sizeof(*dogy));
	if (dogy == NULL || !(name) || !(owner))
	{
		free(dogy);
		return (NULL);
	}

	for (sname = 0; name[sname]; sname++)
		;
	for (sowner = 0; owner[sowner]; sowner++)
		;

	dogy->name = malloc(sname + 1);
	dogy->owner = malloc(sowner + 1);

	if (!(dogy->name) || !(dogy->owner))
	{
		free(dogy->owner);
		free(dogy->name);
		free(dogy);
		return (NULL);
	}

	for (i = 0; i < sname; i++)
		dogy->name[i] = name[i];
	dogy->name[i] = '\0';

	dogy->age = age;

	for (i = 0; i < sowner; i++)
		dogy->owner[i] = owner[i];
	dogy->owner[i] = '\0';

	return (dogy);
}
