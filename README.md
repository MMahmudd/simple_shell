DESCRIPTION
A simple shell written in C called -hsh-

This is a simple UNIX command interpreter based on bash and Sh.

Overview
hsh is a sh-compatible command language interpreter that executes commands read from the standard input or from a file.

Invocation
Usage: hsh hsh is started with the standard input connected to the terminal. To start, compile all .c located in this repository by using this command:

gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
./hsh
hsh is allowed to be invoked interactively and non-interactively. If hsh is invoked with standard input not connected to a terminal, it reads and executes received commands in order.

Example:

$ echo "echo 'julien'" | ./hsh
'julien'
$
When hsh is invoked with standard input connected to a terminal (determined by isatty(3), the interactive mode is opened. hsh Will be using the following prompt ^-^ .

Example:

$./hsh

Pre-requisites
Authorized functions and macros:
access (man 2 access)
chdir (man 2 chdir)
close (man 2 close)
closedir (man 3 closedir)
execve (man 2 execve)
exit (man 3 exit)
_exit (man 2 _exit)
fflush (man 3 fflush)
fork (man 2 fork)
free (man 3 free)
getcwd (man 3 getcwd)
getline (man 3 getline)
isatty (man 3 isatty)
kill (man 2 kill)
malloc (man 3 malloc)
open (man 2 open)
opendir (man 3 opendir)
perror (man 3 perror)
read (man 2 read)
readdir (man 3 readdir)
signal (man 2 signal)
stat (__xstat) (man 2 stat)
lstat (__lxstat) (man 2 lstat)
fstat (__fxstat) (man 2 fstat)
strtok (man 3 strtok)
wait (man 2 wait)
waitpid (man 2 waitpid)
wait3 (man 2 wait3)
wait4 (man 2 wait4)
write (man 2 write)^-^
