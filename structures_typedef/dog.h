#ifndef DOG
#define DOG
/**
 * struct dog - structure
 * @name: name
 * @age: age
 * @owner: owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif /*DOG*/

void init_dog(struct dog *d, char *name, float age, char *owner);