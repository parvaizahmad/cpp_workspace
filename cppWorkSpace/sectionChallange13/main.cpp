#include <iostream>
#include "movies.h"

int main(int argc, char **argv)
{
    Movies movie;
    movie.display();
    movie.add_movie("StarWars", "PG-13", 1);
    movie.add_movie("StarWars", "PG-13", 1);
    movie.display();
    movie.increment_watched("StarWars");
    movie.display();
    return 0;
}
