#include <stdlib.h>
#include "dog.h"

/**
 * _strcpy - function copy a string
 * @str: string to copy
 * Return: pointer
 */
char *_strcpy(char *str)
{
	int len;
	char *ptr;

	for (len = 0; str[len]; len += 1)
		;
	ptr = malloc(len + 1);
	if (ptr)
	{
		for (; len >= 0; len -= 1)
			ptr[len] = str[len];
	}
	return (ptr);
}

/**
 * new_dog - creates a new dog struct
 * @name: name of dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: dog struct or Null
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(*ptr));
	if (ptr == NULL)
		return (NULL);
	ptr->name = _strcpy(name);
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->age = age;
	ptr->owner = _strcpy(owner);
	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
