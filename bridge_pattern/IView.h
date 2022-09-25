#pragma once
#include "IResource.h"
#include <iostream>
class IView
{
protected:
	IResource& resource;
public:
	IView(IResource& res) :resource(res) {}

	virtual std::string show() = 0;


};

class LongView : public IView
{
public:
	LongView(IResource& res) :IView(res) {}

	std::string show() {
		return resource.snippet();
	}

};

class TitleView : public IView
{
public:
	TitleView(IResource& res) :IView(res) {}

	std::string show() {
		return resource.title();
	}

};

class ImageView : public IView
{
public:
	ImageView(IResource& res) :IView(res) {}

	std::string show() {
		return resource.image();
	}

};