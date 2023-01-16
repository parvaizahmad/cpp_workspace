#ifndef MOVIE_H
#define MOVIE_H
#include <string>
#include <iostream>
class Movie
{
private:
    std::string name {};
    std::string rating {};
    int watch_count {};
public:    
    Movie(std::string name, std::string rating, int watch_count);
    Movie(const Movie &source);
    ~Movie();
    void set_name(std::string name);
    std::string get_name(void) const;
    void set_rating(std::string rating);
    std::string get_rating(void) const;
    void set_watch_count(int count);
    int get_watch_count(void);
    void display(void) const;
};

#endif // MOVIE_H
