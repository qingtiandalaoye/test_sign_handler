This is a example of how to gracefully kill a c++ process.


1. SIGINT：
On POSIX-compliant platforms, SIGINT is the signal sent to a process by its controlling terminal when a user wishes to interrupt the process. SIGINT is sent when the user on the process' controlling terminal presses the interrupt the running process key — typically Control-C, but on some systems, the "delete" character or "break" key.

2. SIGTERM：
SIGTERM is the default signal sent to a process by the kill or killall commands. It causes the termination of a process, but unlike the SIGKILL signal, it can be caught and interpreted (or ignored) by the process. Therefore, SIGTERM is akin to asking a process to terminate nicely, allowing cleanup and closure of files. For this reason, on many Unix systems during shutdown, init issues SIGTERM to all processes that are not essential to powering off, waits a few seconds, and then issues SIGKILL to forcibly terminate any such processes that remain.

3. SIGKILL：
On POSIX-compliant platforms, SIGKILL is the signal sent to a process to cause it to terminate immediately. When sent to a program, SIGKILL causes it to terminate immediately. In contrast to SIGTERM and SIGINT, this signal cannot be caught or ignored, and the receiving process cannot perform any clean-up upon receiving this signal.





