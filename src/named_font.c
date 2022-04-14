/*
** EPITECH PROJECT, 2022
** My_hunter
** File description:
** named_font
*/

#include <string.h>

#include "named_font.h"

int named_font_create(struct named_font *named_font, const char *name)
{
    named_font->name = strdup(name);
    if (named_font->name == NULL) {
        return -1;
    }
    named_font->font = sfFont_createFromFile(named_font->name, NULL);
    if (named_font->font == NULL) {
        free(named_font->font);
        return -1;
    }
    return 0;
}

void named_font_destroy(struct named_font *named_font)
{
    free(named_font->name);
    sfFont_destroy(named_font->font);
}