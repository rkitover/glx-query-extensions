
all:
	$(CXX) glx-query-extensions.cxx -o glx-query-extensions -lX11 -lGL

clean:
	rm glx-query-extensions
