// OOP Practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Movies.h"

void increment_watched(Movies& Movies, std::string name);
void add_movie(Movies& Movies, std::string name, std::string rating, int watched);

void increment_watched(Movies& Movies, std::string name)
{
    if (Movies.increment_watched(name)) {
        std::cout << "Watched incremented" << std::endl;
    }
    else {
        std::cout << "Not found" << std::endl;
    }
}

void add_movie(Movies& Movies, std::string name, std::string rating, int watched)
{
    if (Movies.add_movie(name, rating, watched))
        std::cout << name << " added" << std::endl;
    else
        std::cout << name << " is already there" << std::endl;
}

int main()
{
    Movies my_movies;

    my_movies.display();

    add_movie(my_movies, "Big", "PG-13", 2);
    add_movie(my_movies, "Star Wars", "PG", 5);
    add_movie(my_movies, "Cinderella", "PG", 3);

    my_movies.display();

    increment_watched(my_movies, "Big");

    add_movie(my_movies, "Big", "PG", 3);

    my_movies.display();
    return 0;
}