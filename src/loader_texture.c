/*
** EPITECH PROJECT, 2022
** My_hunter
** File description:
** loader_texture
*/

#include <stdlib.h>

#include "loader_texture.h"

int loader_texture_create(struct loader_texture *loader_texture)
{
    loader_texture->size = 0;
    loader_texture->named_textures = NULL;
    return 0;
}

void loader_texture_destroy(struct loader_texture *loader_texture)
{
    for (size_t i = 0; i < loader_texture->size; i++) {
        named_texture_destroy(loader_texture[i].named_textures);
    }
    free(loader_texture->named_textures);
}

int loader_texture_get(struct loader_texture *loader_texture, const char *name, sfTexture **texture)
{
    for (size_t i = 0; i < loader_texture->size; i++) {
        if (strcmp(loader_texture[i].named_textures->name, name) == 0) {
            *texture = loader_texture[i].named_textures->texture;
            return 0;
        }
    }
    loader_texture->size += 1;
    loader_texture->named_textures = realloc(loader_texture->named_textures, loader_texture->size * sizeof(loader_texture->named_textures));
    if (loader_texture->named_textures == NULL) {
        return -1;
    }
    if (named_texture_create(loader_texture[loader_texture->size - 1].named_textures, name) == -1) {
        return -1;
    }
    return 0;
}