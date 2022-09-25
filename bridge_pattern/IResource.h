#pragma once
#include <iostream>
#include "Artist.h"

class IResource
{
public:
	virtual std::string snippet() = 0;

	virtual std::string title() = 0;

	virtual std::string image() = 0;

	virtual std::string url() = 0;

};

class ArtistResource: public IResource
{
	Artist& art;
public:
	ArtistResource(Artist& a) : art(a) {}


	std::string snippet() {
		return art.snippet();
	}

	std::string title() {
		return art.title();
	}

	std::string image() {
		return art.image();
	}

	std::string url() {
		return art.url();
	}



};


