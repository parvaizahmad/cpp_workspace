#include "movies.h"

Movies::Movies()
{
}

Movies::~Movies()
{
}

bool Movies::add_movie(std::string name, std::string rating, int watched) {
    if(movies_list.size() == 0) {
        Movie temp_movie(name, rating, watched);
        movies_list.push_back(temp_movie);
        std::cout << "Movie added to the list" << std::endl;
        return true; 
    }
    else {
        for (auto it : movies_list) {
            if (it.get_name() == name) {
                std::cout << "Movie already exist" << std::endl;
                return false;
            }
            else {
                Movie temp_movie(name, rating, watched);
                movies_list.push_back(temp_movie);
                std::cout << "Movie added to the list" << std::endl;
                return true;
            }
        }
    }
    return true;
}

bool Movies::increment_watched(std::string name){
    if(movies_list.size() == 0) {
        std::cout << "Movie list is empty" << std::endl;
    }
    for (auto& it : movies_list) {
        if (it.get_name() == name) {
            int temp_count = it.get_watch_count();
            it.set_watch_count(++temp_count);
            std::cout << "Watch incremented." << std::endl;
            return true;
        }
        else {
            std::cout << "Count increment failed. Check movie name." << std::endl;
            return false;
        }
    }
    return true;
}

void Movies::display(void) {
    if(movies_list.size() == 0) {
        std::cout << "Movie list is empty" << std::endl;
    }
    else {
        for(auto it : this->movies_list) {
            std::cout << it.get_name() << ", " << it.get_rating() << ", " << it.get_watch_count() << std::endl; 
        }
    }
    
}

