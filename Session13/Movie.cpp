#include "Movie.h"

void Movie::set_name (std::string name_val)
{
    name = name_val;
}
std::string Movie::get_name ()
{
    return name;
}

void Movie::set_rating (std::string rating_val)
{
    rating = rating_val;
}

std::string Movie::get_rating ()
{
    return rating;
}

void Movie::set_watched (int watched_val)
{
    watched = watched_val;
}

int Movie::get_watched ()
{
    return watched;
}