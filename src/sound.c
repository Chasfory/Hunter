/*
** EPITECH PROJECT, 2022
** My_hunter
** File description:
** sound
*/

#include <string.h>

#include "sounds.h"

int sound_create(struct sound *sound, const char *name)
{
    sound->name = strdup(name);
    if (sound->name == NULL) {
        return -1;
    }
    sound->music = sfMusic_createFromFile(sound->name);
    sfMusic_setVolume(sound->music, 1);
}

void sound_destroy(struct sound *sound)
{
    free(sound->name);
    sfMusic_destroy(sound->music);
}