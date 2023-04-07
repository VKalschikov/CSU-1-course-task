#include "animal.h"

static const char * sound(){
	return "Awh";
}

const AnimalVTable DOG[] = {{sound}};
