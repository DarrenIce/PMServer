#pragma once
#include <thread>
#include <mutex>
#include <condition_variable>

class CSemaphore {
private:
	std::condition_variable cv;
	std::mutex mutex;
	int value;
public:
	CSemaphore();
	CSemaphore(int init);
	void wait();
	void signal();
};
