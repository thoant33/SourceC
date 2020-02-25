#ifndef _MOVIES_H
#define _MOVIES_H

#include <Movie.h>
#include <string>
#include <vector>

class Movies
{
private:
    std::vector<Movie> movies;
public:
    void display();
    bool add_movie(std::string name,std::string rating,int watched);
    bool increment_watched(std::string name);
};

#endif // _MOVIES_H
