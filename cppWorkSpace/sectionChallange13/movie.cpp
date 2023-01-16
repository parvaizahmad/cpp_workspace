#include "movie.h"

Movie::Movie(std::string name, std::string rating, int watch_count)
:name(name),rating(rating),watch_count(watch_count)
{
}

Movie::Movie(const Movie &source)
:Movie{source.name, source.rating, source.watch_count}
{
}
Movie::~Movie()
{
}

void Movie::set_name(std::string name)
{
    this->name = name;
}
std::string Movie::get_name(void) const
{
    return this->name;
}
void Movie::set_rating(std::string rating)
{
    this->rating = rating;
}
std::string Movie::get_rating(void) const
{
    return this->rating;
}
void Movie::set_watch_count(int count)
{
    this->watch_count = count;
}
int Movie::get_watch_count(void)
{
    return this->watch_count;
}
void Movie::display(void) const
{
    std::cout << this->name << "," << this->rating << "," << this->watch_count << std::endl; 
}
