#ifndef PARSE_H
#define PARSE_H
char ** parse_args(char * line, char * delim);
void print_args(char ** a);
int count_tokens(char * line, char delim);
char * trim(char * line);
#endif
