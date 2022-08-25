#include <iostream>
#include "Movies.h"

void movies::add_movie(std::string name, std::string rating, int watched_times) {
	my_movies.push_back(movie(name, rating, watched_times));
};
void movies::remove_movie(const std::string remove_name) {
	for (int i = 0; i < my_movies.size(); i++)
		if (my_movies[i].return_name() == remove_name)
				my_movies.erase(my_movies.begin()+i);
};

void movies::increment_watched(const std::string name, const int amount) {
		for (int i = 0; i < my_movies.size(); i++)
			if (my_movies[i].return_name() == name)
				my_movies[i].increment_times_watched(amount);
};
void movies::decrement_watched(const std::string name, const int amount) {
	for (int i = 0; i < my_movies.size(); i++)
		if (my_movies[i].return_name() == name)
			my_movies[i].decrement_times_watched(amount);
};

void movies::display() const {
	for (auto i : my_movies)
	{
		std::cout << "Name: " << i.return_name() << std::endl
			<< "Rating: " << i.return_rating() << std::endl
			<< "Times Watched: " << i.return_watched_times() << std::endl
			<< "------------------------------------" << std::endl;

	}
};