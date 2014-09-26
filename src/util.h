/*
 * util.h
 *
 *  Created on: 18 Jul 2014
 *      Author: Jakob Frielingsdorf
 */

#ifndef UTIL_H_
#define UTIL_H_

#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

#ifndef LINE_MAX
#define LINE_MAX 2048
#endif

void * xmalloc(size_t size);
void * xrealloc(void *ptr, size_t size);

void ffatal(const char * format, ...);

/** Initialises the output stream. Default is stdout */
void init_out(const char* filename);
/** Closes the file pointer to the output stream, if it is not stdout */
void close_out();
/** Writes to the output stream */
void outf(const char* format, ...);
// output data

char * xstrchrnul(char *s, int c);

#endif /* UTIL_H_ */
