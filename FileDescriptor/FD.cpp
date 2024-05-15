#include "FD.h"
int FD::get()const
{
	return _fd;
};
FD::~FD()
{
	close();
};
void FD::close()
{
	if (_fd != -1)
	{
		::close(_fd);
		_fd = -1;
	}
};
bool FD::is_valid()
{
	return _fd != -1;
};
FD::operator bool()const
{
	return _fd != -1;
}