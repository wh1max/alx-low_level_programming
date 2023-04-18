#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
/**
 * dog_t - typedef for struct dog
*/
typedef struct dog dog_t;

/**
 * struct dog - initializes a variable of type struct dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: no return.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
