#include "animal.h"

static const char * sound(){
	return "Meow";
}

const AnimalVTable CAT[] = {{sound}};
