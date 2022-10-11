# include <iostream>
# include <time.h>
# include "view/view.h"

int main()
{
    auto game = game::get_instance();
    game->run();

    return 0;
}