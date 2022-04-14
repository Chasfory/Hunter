/*
** EPITECH PROJECT, 2022
** My_hunter
** File description:
** window
*/

#include <string.h>

#include "window.h"

int window_create(struct window *window, const char *name, uint32_t fps,
                    sfVector2u size)
{
    sfVideoMode mode;

    window->name = strdup(name);
    if (window->name == NULL) {
        return -1;
    }
    window->fps = fps;
    mode.width = size.x;
    mode.height = size.y;
    mode.bitsPerPixel = __CHAR_BIT__ * 4;
    window->window = sfRenderWindow_create(mode, window->name,
                                            sfDefaultStyle, NULL);
    if (window->window == NULL) {
        free(window->window);
        return -1;
    }
    return 0;
}

void window_destroy(struct window *window)
{
    free(window->name);
    sfRenderWindow_destroy(window->window);
}