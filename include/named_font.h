/*
** EPITECH PROJECT, 2022
** My_hunter
** File description:
** named_font
*/

#ifndef NAMED_FONT_H_
#define NAMED_FONT_H_

    #include <SFML/Graphics.h>

struct named_font {
    sfFont *font;
    char *name;
};

int named_font_create(struct named_font *named_font, const char *name);
void named_font_destroy(struct named_font *named_font);

#endif /* !NAMED_FONT_H_ */