#include <string>
#include <vector>
#include "Movie.h"

#ifndef MOVIES_H
#define MOVIES_H

class movies {
private:
	std::vector<movie> my_movies;
public:
	movies() {};
	~movies(){};

	void add_movie(std::string name, std::string rating, int watched_times);
	void remove_movie(const std::string remove_name);

	void increment_watched(const std::string name, const int amount);
	void decrement_watched(const std::string name, const int amount);

	void display() const;

};

#endif // !MOVIES_H
