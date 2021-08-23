#include <iostream>
#include <csignal>
#include <unsitd.h>

using namespace std;

void signalHandler(int signum)
{
	cout << "Interrupt signal (" << signum << ") received.\n" ;
	exit(signum);
}

int main(int argc, char const *argv[])
{
	signal(SIGINT,signalHandler);
	sleep(1);
	return 0;
}