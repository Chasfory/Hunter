/*
** EPITECH PROJECT, 2022
** My_hunter
** File description:
** loader_sound
*/

#include <stdlib.h>

#include "loader_sound.h"

int loader_sound_create(struct loader_sound *loader_sound)
{
    loader_sound->size = 0;
    loader_sound->sound = NULL;
    return 0;
}

void loader_sound_destroy(struct loader_sound *loader_sound)
{
    for (size_t i = 0; i < loader_sound->size; i++) {
        sound_destroy(loader_sound[i].sound);
    }
    free(loader_sound->sound);
}

int loader_sound_get(struct loader_sound *loader_sound, const char *name, sfMusic **sound)
{
    for (size_t i = 0; i < loader_sound->size; i++) {
        if (strcmp(loader_sound[i].sound->name, name) == 0) {
            *sound = loader_sound[i].sound->sound;
            return 0;
        }
    }
    loader_sound->size += 1;
    loader_sound->sound = realloc(loader_sound->sound, loader_sound->size * sizeof(loader_sound->sound));
    if (loader_sound->sound == NULL) {
        return -1;
    }
    if (sound_create(loader_sound[loader_sound->size - 1].sound, name) == -1) {
        return -1;
    }
    return 0;
}