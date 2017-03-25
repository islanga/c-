// Nesting the structures
#include <iostream>
#include <string>
using namespace std;

struct movies_t {
	string title;
	int year;
};

struct friend_t {
	string name;
	string email;
	movies_t favorite_movie;
} charlie, maria;

friend_t * pfriends = &charlie;