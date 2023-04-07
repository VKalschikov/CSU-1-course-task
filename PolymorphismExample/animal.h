#ifndef ANIMAL_H_
#define ANIMAL_H_

typedef struct _animal_vtable {
	const char* (*sound) (void);
} AnimalVTable;
	

typedef struct _animal{

	const AnimalVTable* vtable;
	const char* name;
} Animal;



static inline const char* animal_sound(Animal* animal){
	return animal -> vtable -> sound ();
}

extern const AnimalVTable CAT[], DOG[];

#endif 
