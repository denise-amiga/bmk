#include <stdio.h>

/*
#include <sys/wait.h>
#include <errno.h>

int bmx_waitpid(pid_t pid) {

	int status;
	pid_t p = waitpid(pid, &status, WUNTRACED);
	
	if (p > 0) {
		if (WIFEXITED(status)) {
			return WEXITSTATUS(status);
		}
		if (WIFSIGNALED(status)) {
			return WTERMSIG(status);
		}
	} else {
		return errno * -1;
	}
	return -999;
}
*/
int bmx_system(const char * c) {
	return system(c);
}
