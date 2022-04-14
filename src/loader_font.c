/*
** EPITECH PROJECT, 2022
** My_hunter
** File description:
** loader_font
*/

#include "loader_font.h"

int loader_font_create(struct loader_font *loader_font)
{
    loader_font->size = 0;
    loader_font->named_font = NULL;
    return 0;
}

void loader_font_destroy(struct loader_font *loader_font)
{
    for (size_t i = 0; i < loader_font->size; i++) {
        font_destroy(loader_font[i].named_font);
    }
    free(loader_font->named_font);
}

int loader_font_get(struct loader_font *loader_font, const char *name, sfFont **font)
{
    for (size_t i = 0; i < loader_font->size; i++) {
        if (strcmp(loader_font[i].named_font->name, name) == 0) {
            *font = loader_font[i].named_font->sound;
            return 0;
        }
    }
    loader_font->size += 1;
    loader_font->named_font = realloc(loader_font->named_font, loader_font->size * sizeof(loader_font->named_font));
    if (loader_font->named_font == NULL) {
        return -1;
    }
    if (font_create(loader_font[loader_fond->size - 1].named_font, name) == -1) {
        return -1;
    }
    return 0;
}