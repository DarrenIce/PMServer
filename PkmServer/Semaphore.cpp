#include "Semaphore.h"


CSemaphore::CSemaphore(int init)
{
	value = init;
}
CSemaphore::CSemaphore()
{
	value = 1;
}
void CSemaphore::wait()
{
	std::unique_lock<std::mutex> lock(mutex);
	while (value < 1) {
		cv.wait(lock);
	}
	value--;
}
void CSemaphore::signal()
{
	value++;
	cv.notify_one();
}