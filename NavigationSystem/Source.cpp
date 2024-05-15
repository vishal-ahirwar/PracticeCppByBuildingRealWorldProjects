#include"Route.h"
int main()
{
	Route route;
	route.add_stop("Bhopal");
	route.add_stop("Chhatarpur");
	route.add_stop("Indore");
	route.current_stop();
	route.next_stop();
	route.next_stop();
	route.next_stop();
	route.next_stop();
	route.prev_stop();
	route.prev_stop();
	route.current_stop();
	return 0;
};