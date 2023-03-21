#ifndef _MAIN_H
#define _MAIN_H

/**
 * struct dog - dog attribute
 * @name:name of dog
 * @age:age of dog
 * @owner:owner of dog
 * Description:the attribute dog
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for dog structur
*/

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
