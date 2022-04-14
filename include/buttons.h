/*
** EPITECH PROJECT, 2022
** My_hunter
** File description:
** buttons
*/

#ifndef BUTTONS_H_
#define BUTTONS_H_

    #include <SFML/Graphics.h>

enum states {
    hovered,
    cliqued,
    none
};

struct button {
    sfSprite *sprite;
    sfIntRect rect;
    enum states status;
};

#endif /* !BUTTONS_H_ */