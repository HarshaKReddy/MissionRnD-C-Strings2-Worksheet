/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){
int i = 0;
	char *p, *q, *temp, *a;
	p = str;
	if (str == NULL)
		return NULL;	
	while (1)
	{
		q = p;
		if (*p != ' ' && *p)
			p++;
		else if (*p == '\0')
			break;
		p++;

	}

	a = (char*)calloc(p - q, sizeof(char));
	while (*q)
		a[i++] = *(q++);
	a[i] = '\0';
	return a;
}
