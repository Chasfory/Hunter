/*
** EPITECH PROJECT, 2022
** My_hunter
** File description:
** loader_sound
*/

#ifndef LOADER_SOUND_H_
#define LOADER_SOUND_H_

    #include "sounds.h"

struct loader_sound {
    sound *sound;
    size_t size;
};

int loader_sound_create(struct loader_sound *loader_sound);
void loader_sound_destroy(struct loader_sound *loader_sound);
int loader_sound_get(struct loader_sound *loader_sound, const char *name, sfMusic **sound);

#endif /* !LOADER_SOUND_H_ */