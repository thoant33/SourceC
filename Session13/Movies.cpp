#include <iostream>
#include "Movies.h"
#include <Movie.h>

using namespace std;

void Movies::display()
{
    if(movies.size() == 0){
        cout << "\nSorry, no movies to display.\n" << endl;
    }else{
        cout << "\n--------------------------------------" << endl;
        for(size_t i {0}; i< movies.size(); i++){
            cout << "" << movies[i].get_name() << ",";
            cout << " " << movies[i].get_rating() << ",";
            cout << " " << movies[i].get_watched() << ",";
            cout << endl;
        }
        cout << "--------------------------------------\n" << endl;
    }
}

bool Movies::add_movie(std::string name,std::string rating,int watched)
{
    // check name duplicate in array
    bool is_name_duplicate = false;
    for(size_t i {0}; i< movies.size(); i++){
        if(movies[i].get_name() == name){
            is_name_duplicate = true;
            break;
        }
    }
    
    // add movie in array
    if(is_name_duplicate){
        return false;
    }else{
        Movie move_temp;
        move_temp.set_name(name);
        move_temp.set_rating(rating);
        move_temp.set_watched(watched);

        movies.push_back(move_temp);

        return true;
    }
}

bool Movies::increment_watched(std::string name)
{
    for(size_t i {0}; i< movies.size(); i++){
        if(movies[i].get_name() == name){
            int watched_old = movies[i].get_watched();
            movies[i].set_watched(++watched_old);
            return true;
            break;
        }
    }
    
    return false;
}

