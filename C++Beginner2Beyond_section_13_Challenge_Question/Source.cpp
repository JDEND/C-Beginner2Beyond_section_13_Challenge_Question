#include <iostream>
#include "Movie.h"
#include "Movies.h"

using std::cin;
using std::cout;
using std::endl;

int main() {

	movies mov1;

	mov1.add_movie("Bee Movie", "PG", 888888);
	mov1.add_movie("No children allowed", "NC-17", 8);
	mov1.add_movie("Aww naw", "G", 7111);
	mov1.display();
	cout << endl;
	mov1.increment_watched("Aww naw", 73);
	mov1.display();
	cout << endl;
	mov1.decrement_watched("Bee Movie", 888887);
	mov1.display();
	cout << endl;
	mov1.remove_movie("No children allowed");
	mov1.display();
}