#ifndef DOG_H
#define DOG_H

/**
 * struct dog - define a struct of dog
 * @name: name of the dog
 * @age: age of dog
 * @owner: owner of dog
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
