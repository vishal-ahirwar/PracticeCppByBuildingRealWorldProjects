#ifndef __FD_H__
#define __FD_H__
//#define USE_C
class FD
{
public:
	FD(int fd=-1) :_fd{ fd } {};
	~FD();
	int get()const;
	void close();
	bool is_valid();
	operator bool()const;
private:
	int	_fd{};
};
#endif