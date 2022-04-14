/*
** EPITECH PROJECT, 2022
** My_hunter
** File description:
** loader_texture
*/

#ifndef LOADER_TEXTURE_H_
#define LOADER_TEXTURE_H_

    #include "named_texture.h"

struct loader_texture {
    named_texture *named_textures;
    size_t size;
};

int loader_texture_create(struct loader_texture *loader_texture);
void loader_texture_destroy(struct loader_texture *loader_texture);
int loader_texture_get(struct loader_texture *loader_texture, const char *name, sfTexture **texture);

#endif /* !LOADER_TEXTURE_H_ */