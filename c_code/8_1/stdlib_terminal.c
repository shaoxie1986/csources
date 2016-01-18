/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
#include <unistd.h>
#include <stdio.h>
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
N_NIMCALL(void, write_15489)(FILE* f, NimStringDesc* s);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
STRING_LITERAL(TMP433, "\033[", 2);
STRING_LITERAL(TMP434, "\033[0m", 4);
NI gfg_179413;
NI gbg_179414;

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI)((*dest).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest).Sup.len += ((NI) 1);
}

N_NIMCALL(void, setstyle_179601)(FILE* f, NU8 style) {
	{
		NU8 s_179837;
		NI i_179851;
		s_179837 = 0;
		i_179851 = ((NI) 1);
		{
			while (1) {
				if (!(i_179851 <= ((NI) 8))) goto LA3;
				{
					NimStringDesc* LOC8;
					NimStringDesc* LOC9;
					if (!((style &(1U<<((NU)((((NU8) (i_179851))- 1))&7U)))!=0)) goto LA6;
					s_179837 = ((NU8) (i_179851));
					LOC8 = 0;
					LOC9 = 0;
					LOC9 = nimIntToStr(((NI) (s_179837)));
					LOC8 = rawNewString(LOC9->Sup.len + 3);
appendString(LOC8, ((NimStringDesc*) &TMP433));
appendString(LOC8, LOC9);
appendChar(LOC8, 109);
					write_15489(f, LOC8);
				}
				LA6: ;
				i_179851 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(void, resetattributes_179203)(FILE* f) {
	write_15489(f, ((NimStringDesc*) &TMP434));
}

N_NIMCALL(void, setforegroundcolor_180045)(FILE* f, NU8 fg, NIM_BOOL bright) {
	NimStringDesc* LOC5;
	NimStringDesc* LOC6;
	gfg_179413 = ((NI) (fg));
	{
		if (!bright) goto LA3;
		gfg_179413 += ((NI) 60);
	}
	LA3: ;
	LOC5 = 0;
	LOC6 = 0;
	LOC6 = nimIntToStr(gfg_179413);
	LOC5 = rawNewString(LOC6->Sup.len + 3);
appendString(LOC5, ((NimStringDesc*) &TMP433));
appendString(LOC5, LOC6);
appendChar(LOC5, 109);
	write_15489(f, LOC5);
}

N_NIMCALL(NIM_BOOL, isatty_180420)(FILE* f) {
	NIM_BOOL result;
	int LOC1;
	int LOC2;
	result = 0;
	LOC1 = 0;
	LOC1 = fileno(f);
	LOC2 = 0;
	LOC2 = isatty(LOC1);
	result = !((LOC2 == ((NI32) 0)));
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_terminalInit000)(void) {
	gfg_179413 = ((NI) 0);
	gbg_179414 = ((NI) 0);
}

NIM_EXTERNC N_NOINLINE(void, stdlib_terminalDatInit000)(void) {
}

