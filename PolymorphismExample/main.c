#include <stdio.h>
#include "animal.h"

int main(){
	Animal cat = {CAT,"Oleg"};
	Animal dog = {DOG, "Vovan"};

	printf("%s says %s\n", cat.name, animal_sound(&cat));
	printf("%s says %s\n", dog.name, animal_sound(&dog));

	return 0;
}
