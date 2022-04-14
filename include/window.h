/*
** EPITECH PROJECT, 2022
** My_hunter
** File description:
** window
*/

#ifndef WINDOW_H_
#define WINDOW_H_

    #include <stdint.h>
    #include <SFML/Graphics.h>

struct window {
    char *name;
    uint32_t fps;
    sfRenderWindow *window;
};

int window_create(struct window *window, const char *name, uint32_t fps, sfVector2u size);
void window_destroy(struct window *window);

#endif /* !WINDOW_H_ */