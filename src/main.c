/*
** EPITECH PROJECT, 2022
** My_hunter
** File description:
** main
*/

int main(int ac, char **av, char **env)
{
    if (env == NULL) {
        return 84;
    } else if (ac == 1) {
        start_menu();
    } else {
        return 84;
    }
    return 0;
}