#pragma once
#include <iostream>
class Artist
{
	std::string snip = "artist_snippet";
public:
	std::string snippet() {
		return snip;
	}

	std::string title() {
		return "artist_title";
	}

	std::string image() {
		return "artist_image";
	}

	std::string url() {
		return "artist_url";
	}
};

