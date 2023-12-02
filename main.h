#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>

void parse_line(char *buffer, char *argv[]);
void execute_command(char *argv[], int *status);
char *find_in_path(char *cmd);
ssize_t get_line(char *buffer, size_t *buffsize);
int check_exit(char *argv[]);
int check_executable(char *argv[]);
void print_env(void);
int check_env(char *argv[]);
#endif
