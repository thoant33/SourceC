#ifndef _MOVIE_H
#define _MOVIE_H

#include <string>

class Movie
{
private:
    std::string name;   // the name of the movie
    std::string rating;   // the movie rating G,PG, PG-13, R
    int watched; 
public:
    void set_name (std::string name_val);
    std::string get_name ();
    void set_rating (std::string rating_val);
    std::string get_rating ();
    void set_watched (int watched_val);
    int get_watched ();
};

#endif // _MOVIE_H
