/*
** EPITECH PROJECT, 2022
** My_hunter
** File description:
** named_texture
*/

#include <string.h>

#include "named_texture.h"

int named_texture_create(struct named_texture *named_texture, const char *name)
{
    named_texture->name = strdup(name);
    if (named_texture->name == NULL) {
        return -1;
    }
    named_texture->texture = sfTexture_createFromFile(named_texture->name, NULL);
    if (named_texture->texture == NULL) {
        free(named_texture->texture);
        return -1;
    }
    return 0;
}

void named_texture_destroy(struct named_texture *named_texture)
{
    free(named_texture->name);
    sfTexture_destroy(named_texture->texture);
}