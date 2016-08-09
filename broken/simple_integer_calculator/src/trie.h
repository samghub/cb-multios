/*

Author: Dustin Fraze <df@cromulence.co>

Copyright (c) 2015 Cromulence LLC

Permission is hereby granted, cgc_free of charge, to any person obtaining a copy
of this software cgc_and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, cgc_and/or sell
copies of the Software, cgc_and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice cgc_and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.

*/

#ifndef _TRIE_H
#define _TRIE_H

typedef struct _trie {
	struct _trie * children;
	struct _trie * next;
	char tag;
	char *value;
} cgc_trie;

cgc_trie * cgc_initTrie();
void cgc_insertInTrie(cgc_trie *root, char *key, void * value);
cgc_trie * cgc_findInTrie(cgc_trie *root, char * key);

#endif