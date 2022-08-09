#include <X11/X.h>
#include <X11/Xlib.h>
#include <GL/glx.h>
#include <iostream>
#include <sstream>
#include <iterator>
#include <algorithm>

int main()
{
	auto display = XOpenDisplay(NULL);
	const char* exts = glXQueryExtensionsString(display, DefaultScreen(display));

	std::istringstream iss{exts};

	copy(std::istream_iterator<std::string>(iss),
	     std::istream_iterator<std::string>(),
	     std::ostream_iterator<std::string>(std::cout, "\n"));

	return 0;
}
