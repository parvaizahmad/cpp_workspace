#ifndef MOVIES_H
#define MOVIES_H
#include <iostream>
#include <vector>
#include <string>
#include "movie.h"

class Movies
{
private:
    std::vector<Movie> movies_list;
public:
    Movies();
    ~Movies();
    bool add_movie(std::string name, std::string rating, int watched);
    bool increment_watched(std::string name);
    void display(void);
    

};

#endif // MOVIES_H
