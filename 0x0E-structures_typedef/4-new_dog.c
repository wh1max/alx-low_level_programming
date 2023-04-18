#include "dog.h"
/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: struct dog.
 * if fails, returns NULL.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d_dog;
	int i, dname, downer;

	d_dog = malloc(sizeof(*d_dog));
	if (d_dog == NULL || !(name) || !(owner))
	{
		free(d_dog);
		return (NULL);
	}

	for (dname = 0; name[dname]; dname++)
		;
	for (downer = 0; owner[downer]; downer++)
		;

	d_dog->name = malloc(dname + 1);
	d_dog->owner = malloc(downer + 1);

	if (!d_dog->name || !(d_dog->owner))
	{
		free(d_dog->owner);
		free(d_dog->name);
		free(d_dog);
		return (NULL);
	}

	for (i = 0; i < dname; i++)
		d_dog->name[i] = name[i];
	d_dog->name[i] = '\0';

	d_dog->age = age;

	for (i = 0; i < downer; i++)
		d_dog->owner[i] = owner[i];
	d_dog->owner[i] = '\0';

	return (d_dog);
}
