#include <stdlib.h>
#include "dog.h"

/**
 * _strlen -a function that  returns the length of a string
 * @s:the string to be  evalauted
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int dog;

	dog = 0;

	while (s[dog] != '\0')
	{
		dog++;
	}

	return (dog);
}

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int poppy, dog;

	poppy = 0;
dog = 0;

	while (src[poppy] != '\0')
	{
		poppy++;
	}

	for (; dog < poppy; dog++)
	{
		dest[dog] = src[dog];
	}
	dest[dog] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int sal;
	int sall;

	sal = _strlen(name);
	sall = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (sal + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (sall + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}

