#include <string>

#ifndef MOVIE_H
#define MOVIE_H


class movie {
private:
	std::string name;
	std::string rating;
	int times_watched;
public:
	movie() : name(" "), rating(" "), times_watched(0) {};
	movie(std::string name, std::string rating, int watched_times) : name(name), rating(rating), times_watched(watched_times) {};
	~movie(){};

	void update_name(const std::string new_name);
	void update_rating(const std::string new_rating);
	

	bool increment_times_watched();
	bool decrement_times_watched();
	bool increment_times_watched(const int& multTimes);
	bool decrement_times_watched(const int& multTimes);

	std::string return_name() const;
	std::string return_rating() const;
	int return_watched_times() const;
};


#endif // !MOVIE_H
