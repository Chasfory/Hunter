/*
** EPITECH PROJECT, 2022
** My_hunter
** File description:
** loader_font
*/

#ifndef LOADER_FONT_H_
#define LOADER_FONT_H_

    #include "named_font.h"

struct loader_font {
    named_font *named_font;
    size_t size;
};

int loader_font_create(struct loader_font *loader_font);
void loader_font_destroy(struct loader_font *loader_font);
int loader_font_get(struct loader_font *loader_font, const char *name, sfFont **font);

#endif /* !LOADER_FONT_H_ *