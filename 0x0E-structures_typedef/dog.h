#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
*struct dog - a new type of data
*representinfdgfdgsg a dog
*@name: name of doggdsfgfdsg
*@age: age of doggdfsgfgdf
*@owner: owner's namedfsgdfsgds
*/

struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif


