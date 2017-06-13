#ifndef DOG_H
#define DOG_H
/**
 * struct dog - defines new structure for dog
 * @name: string for name of dog
 * @age: age of dog
 * @owner: string for owner of dog
 */
typedef struct dog
{
	char *name
	float age
	char *owner
} my_dog;
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
