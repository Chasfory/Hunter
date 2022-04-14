/*
** EPITECH PROJECT, 2022
** My_hunter
** File description:
** named_texture
*/

#ifndef NAMED_TEXTURE_H_
#define NAMED_TEXTURE_H_

    #include <SFML/Graphics.h>

struct named_texture {
    sfTexture *texture;
    char *name;
};

int named_texture_create(struct named_texture *named_texture, const char *name);
void named_texture_destroy(struct named_texture *named_texture);

#endif /* !NAMED_TEXTURE_H_ */