#include "Movie.h"
#include <string>


void movie::update_name(const std::string new_name) {
	name = new_name;
};
void movie::update_rating(const std::string new_rating) {
	rating = new_rating;
};

bool movie::increment_times_watched() {
	times_watched++;
	return true;
};
bool movie::decrement_times_watched() {
	times_watched--;
	return true;
};
bool movie::increment_times_watched(const int& multTimes) {
	times_watched += multTimes;
	return true;
};
bool movie::decrement_times_watched(const int& multTimes) {
	times_watched -= multTimes;
	return true;
};

std::string movie::return_name() const{
	return name;
};
std::string movie::return_rating() const{
	return rating;
};
int movie::return_watched_times() const{
	return times_watched;
};