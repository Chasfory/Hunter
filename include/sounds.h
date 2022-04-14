/*
** EPITECH PROJECT, 2022
** My_hunter
** File description:
** sounds
*/

#ifndef SOUNDS_H_
#define SOUNDS_H_

    #include <SFML/Audio.h>

struct sound {
    sfMusic *music;
    char *name;
    bool status;
};

int sound_create(struct sound *sound, const char *name);
void sound_destroy(struct sound *sound);

#endif /* !SOUNDS_H_ */