/*
** EPITECH PROJECT, 2022
** My_hunter
** File description:
** menu
*/

#ifndef MENU_H_
#define MENU_H_

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>

typedef struct menu_s {
    sfIntRect rect;
    sfVector2f position;
    sfVector2f scale;
    const char *texture;
} menu_t;

#endif /* !MENU_H_ */
