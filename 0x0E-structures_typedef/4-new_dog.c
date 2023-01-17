#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - checks the length of a string
 * @str: string to be analyzed
 * Return: length of string
 */

int _strlen(char *str)
{
	int len = 0;

	while (str[len])
		len++;
	return (len);
}

/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner name
 * Return: pointer to new struct, or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int name_len, owner_len, i;
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}

	name_len = _strlen(name);
	owner_len = _strlen(owner);

	dog->name = malloc(sizeof(dog->name) * name_len);
	if (dog->name == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < name_len; i++)
		dog->name[i] = name[i];

	dog->age = age;

	dog->owner = malloc(sizeof(dog->owner) * owner_len);
	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < owner_len; i++)
		dog->owner[i] = owner[i];

	return (dog);
}
