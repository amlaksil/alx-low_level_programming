#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - creates a new dog
 * @name: char pointer holds the name of new dog
 * @age: age of new dog
 * @owner: char pointer holds the owner of the dog
 *
 * Return: pointer p;
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	int nameLen = 0, ownerLen = 0, i;

	p = malloc(sizeof(dog_t *));
	if (p == NULL)
		return (NULL);
	for (nameLen = 0; name[nameLen] != '\0';)
		nameLen++;
	for (ownerLen = 0; owner[ownerLen] != '\0';)
		ownerLen++;
	p->name = malloc((nameLen + 1) * sizeof(p->name));
	printf("the sizeof(p->name) = %lu\n", sizeof(p->name));
	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < nameLen; i++)
		p->name[i] = name[i];
	p->name[i] = '\0';
	p->age = age;
	p->owner = malloc((ownerLen + 1) * sizeof(p->owner));
	if (p->owner == NULL)
	{
		free(p->name);
		free(p);
		return (NULL);
	}
	for (i = 0; i < ownerLen; i++)
		p->owner[i] = owner[i];
	p->owner[i] = '\0';

	return (p);
}
