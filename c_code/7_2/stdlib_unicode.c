/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);

N_NIMCALL(NimStringDesc*, nuctoUTF8)(NI c) {
	NimStringDesc* result;
	NI i;
	result = 0;
	i = c;
	{
		if (!((NU64)(i) <= (NU64)(((NI) 127)))) goto LA3;
		result = mnewString(((NI) 1));
		result->data[((NI) 0)] = ((NIM_CHAR) (((NI) (i))));
	}
	goto LA1;
	LA3: ;
	{
		if (!((NU64)(i) <= (NU64)(((NI) 2047)))) goto LA6;
		result = mnewString(((NI) 2));
		result->data[((NI) 0)] = ((NIM_CHAR) (((NI) ((NI)((NI)((NU64)(i) >> (NU64)(((NI) 6))) | ((NI) 192))))));
		result->data[((NI) 1)] = ((NIM_CHAR) (((NI) ((NI)(((NI) ((NI)(i & ((NI) 63)))) | ((NI) 128))))));
	}
	goto LA1;
	LA6: ;
	{
		if (!((NU64)(i) <= (NU64)(((NI) 65535)))) goto LA9;
		result = mnewString(((NI) 3));
		result->data[((NI) 0)] = ((NIM_CHAR) (((NI) ((NI)((NI)((NU64)(i) >> (NU64)(((NI) 12))) | ((NI) 224))))));
		result->data[((NI) 1)] = ((NIM_CHAR) (((NI) ((NI)(((NI) ((NI)((NI)((NU64)(i) >> (NU64)(((NI) 6))) & ((NI) 63)))) | ((NI) 128))))));
		result->data[((NI) 2)] = ((NIM_CHAR) (((NI) ((NI)(((NI) ((NI)(i & ((NI) 63)))) | ((NI) 128))))));
	}
	goto LA1;
	LA9: ;
	{
		if (!((NU64)(i) <= (NU64)(((NI) 2097151)))) goto LA12;
		result = mnewString(((NI) 4));
		result->data[((NI) 0)] = ((NIM_CHAR) (((NI) ((NI)((NI)((NU64)(i) >> (NU64)(((NI) 18))) | ((NI) 240))))));
		result->data[((NI) 1)] = ((NIM_CHAR) (((NI) ((NI)(((NI) ((NI)((NI)((NU64)(i) >> (NU64)(((NI) 12))) & ((NI) 63)))) | ((NI) 128))))));
		result->data[((NI) 2)] = ((NIM_CHAR) (((NI) ((NI)(((NI) ((NI)((NI)((NU64)(i) >> (NU64)(((NI) 6))) & ((NI) 63)))) | ((NI) 128))))));
		result->data[((NI) 3)] = ((NIM_CHAR) (((NI) ((NI)(((NI) ((NI)(i & ((NI) 63)))) | ((NI) 128))))));
	}
	goto LA1;
	LA12: ;
	{
		if (!((NU64)(i) <= (NU64)(((NI) 67108863)))) goto LA15;
		result = mnewString(((NI) 5));
		result->data[((NI) 0)] = ((NIM_CHAR) (((NI) ((NI)((NI)((NU64)(i) >> (NU64)(((NI) 24))) | ((NI) 248))))));
		result->data[((NI) 1)] = ((NIM_CHAR) (((NI) ((NI)(((NI) ((NI)((NI)((NU64)(i) >> (NU64)(((NI) 18))) & ((NI) 63)))) | ((NI) 128))))));
		result->data[((NI) 2)] = ((NIM_CHAR) (((NI) ((NI)(((NI) ((NI)((NI)((NU64)(i) >> (NU64)(((NI) 12))) & ((NI) 63)))) | ((NI) 128))))));
		result->data[((NI) 3)] = ((NIM_CHAR) (((NI) ((NI)(((NI) ((NI)((NI)((NU64)(i) >> (NU64)(((NI) 6))) & ((NI) 63)))) | ((NI) 128))))));
		result->data[((NI) 4)] = ((NIM_CHAR) (((NI) ((NI)(((NI) ((NI)(i & ((NI) 63)))) | ((NI) 128))))));
	}
	goto LA1;
	LA15: ;
	{
		if (!((NU64)(i) <= (NU64)(((NI) 2147483647)))) goto LA18;
		result = mnewString(((NI) 6));
		result->data[((NI) 0)] = ((NIM_CHAR) (((NI) ((NI)((NI)((NU64)(i) >> (NU64)(((NI) 30))) | ((NI) 252))))));
		result->data[((NI) 1)] = ((NIM_CHAR) (((NI) ((NI)(((NI) ((NI)((NI)((NU64)(i) >> (NU64)(((NI) 24))) & ((NI) 63)))) | ((NI) 128))))));
		result->data[((NI) 2)] = ((NIM_CHAR) (((NI) ((NI)(((NI) ((NI)((NI)((NU64)(i) >> (NU64)(((NI) 18))) & ((NI) 63)))) | ((NI) 128))))));
		result->data[((NI) 3)] = ((NIM_CHAR) (((NI) ((NI)(((NI) ((NI)((NI)((NU64)(i) >> (NU64)(((NI) 12))) & ((NI) 63)))) | ((NI) 128))))));
		result->data[((NI) 4)] = ((NIM_CHAR) (((NI) ((NI)(((NI) ((NI)((NI)((NU64)(i) >> (NU64)(((NI) 6))) & ((NI) 63)))) | ((NI) 128))))));
		result->data[((NI) 5)] = ((NIM_CHAR) (((NI) ((NI)(((NI) ((NI)(i & ((NI) 63)))) | ((NI) 128))))));
	}
	goto LA1;
	LA18: ;
	{
	}
	LA1: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_unicodeInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_unicodeDatInit000)(void) {
}

