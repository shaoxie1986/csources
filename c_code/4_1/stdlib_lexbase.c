/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Baselexer265009 Baselexer265009;
typedef struct TNimObject TNimObject;
typedef struct Streamobj144418 Streamobj144418;
typedef N_NIMCALL_PTR(void, TY3489) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3494) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3489 marker;
TY3494 deepcopy;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  TNimObject  {
TNimType* m_type;
};
typedef NU8 TY202404[32];
struct  Baselexer265009  {
  TNimObject Sup;
NI bufpos;
NCSTRING buf;
NI buflen;
Streamobj144418* input;
NI linenumber;
NI sentinel;
NI linestart;
TY202404 refillchars;
};
typedef N_NIMCALL_PTR(void, TY144419) (Streamobj144418* s);
typedef N_NIMCALL_PTR(NIM_BOOL, TY144423) (Streamobj144418* s);
typedef N_NIMCALL_PTR(void, TY144427) (Streamobj144418* s, NI pos);
typedef N_NIMCALL_PTR(NI, TY144432) (Streamobj144418* s);
typedef N_NIMCALL_PTR(NI, TY144436) (Streamobj144418* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(NI, TY144442) (Streamobj144418* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY144448) (Streamobj144418* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY144454) (Streamobj144418* s);
struct  Streamobj144418  {
  TNimObject Sup;
TY144419 closeimpl;
TY144423 atendimpl;
TY144427 setpositionimpl;
TY144432 getpositionimpl;
TY144436 readdataimpl;
TY144442 peekdataimpl;
TY144448 writedataimpl;
TY144454 flushimpl;
};
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NOCONV(void*, alloc_7401)(NI size);
N_NIMCALL(void, fillbuffer_265201)(Baselexer265009* L);
N_NIMCALL(NI, readdata_144511)(Streamobj144418* s, void* buffer, NI buflen);
N_NOCONV(void*, realloc_7433)(void* p, NI newsize);
N_NIMCALL(void, skiputf8bom_267201)(Baselexer265009* L);
N_NOCONV(void, dealloc_7448)(void* p);
N_NIMCALL(void, close_144470)(Streamobj144418* s);
N_NIMCALL(NI, fillbaselexer_266409)(Baselexer265009* L, NI pos);
extern TNimType NTI3608; /* RootObj */
TNimType NTI265009; /* BaseLexer */
extern TNimType NTI104; /* int */
extern TNimType NTI140; /* cstring */
extern TNimType NTI144416; /* Stream */
extern TNimType NTI202404; /* set[char] */

N_NIMCALL(void, fillbuffer_265201)(Baselexer265009* L) {
	NI charsread;
	NI tocopy;
	NI s;
	NI oldbuflen;
	NI LOC5;
	charsread = 0;
	tocopy = 0;
	s = 0;
	oldbuflen = 0;
	tocopy = (NI)((NI)((*L).buflen - (*L).sentinel) - ((NI) 1));
	{
		if (!(((NI) 0) < tocopy)) goto LA3;
		memmove(((void*) ((*L).buf)), ((void*) ((&(*L).buf[(NI)((*L).sentinel + ((NI) 1))]))), ((NI) ((NI)(tocopy * ((NI) 1)))));
	}
	LA3: ;
	LOC5 = 0;
	LOC5 = readdata_144511((*L).input, ((void*) ((&(*L).buf[tocopy]))), (NI)((NI)((*L).sentinel + ((NI) 1)) * ((NI) 1)));
	charsread = (NI)(LOC5 / ((NI) 1));
	s = (NI)(tocopy + charsread);
	{
		if (!(charsread < (NI)((*L).sentinel + ((NI) 1)))) goto LA8;
		(*L).buf[s] = 0;
		(*L).sentinel = s;
	}
	goto LA6;
	LA8: ;
	{
		s -= ((NI) 1);
		{
			while (1) {
				{
					while (1) {
						NIM_BOOL LOC15;
						LOC15 = 0;
						LOC15 = (((NI) 0) <= s);
						if (!(LOC15)) goto LA16;
						LOC15 = !((((*L).refillchars[(NU)(((NU8)((*L).buf[s])))>>3] &(1U<<((NU)(((NU8)((*L).buf[s])))&7U)))!=0));
						LA16: ;
						if (!LOC15) goto LA14;
						s -= ((NI) 1);
					} LA14: ;
				}
				{
					if (!(((NI) 0) <= s)) goto LA19;
					(*L).sentinel = s;
					goto LA11;
				}
				goto LA17;
				LA19: ;
				{
					void* LOC22;
					NI LOC23;
					oldbuflen = (*L).buflen;
					(*L).buflen = (NI)((*L).buflen * ((NI) 2));
					LOC22 = 0;
					LOC22 = realloc_7433(((void*) ((*L).buf)), ((NI) ((NI)((*L).buflen * ((NI) 1)))));
					(*L).buf = ((NCSTRING) (LOC22));
					LOC23 = 0;
					LOC23 = readdata_144511((*L).input, ((void*) ((&(*L).buf[oldbuflen]))), (NI)(oldbuflen * ((NI) 1)));
					charsread = (NI)(LOC23 / ((NI) 1));
					{
						if (!(charsread < oldbuflen)) goto LA26;
						(*L).buf[(NI)(oldbuflen + charsread)] = 0;
						(*L).sentinel = (NI)(oldbuflen + charsread);
						goto LA11;
					}
					LA26: ;
					s = (NI)((*L).buflen - ((NI) 1));
				}
				LA17: ;
			}
		} LA11: ;
	}
	LA6: ;
}

N_NIMCALL(void, skiputf8bom_267201)(Baselexer265009* L) {
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		LOC3 = 0;
		LOC4 = 0;
		LOC4 = ((NU8)((*L).buf[((NI) 0)]) == (NU8)(239));
		if (!(LOC4)) goto LA5;
		LOC4 = ((NU8)((*L).buf[((NI) 1)]) == (NU8)(187));
		LA5: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA6;
		LOC3 = ((NU8)((*L).buf[((NI) 2)]) == (NU8)(191));
		LA6: ;
		if (!LOC3) goto LA7;
		(*L).bufpos += ((NI) 3);
		(*L).linestart += ((NI) 3);
	}
	LA7: ;
}

N_NIMCALL(void, open_267223)(Baselexer265009* L, Streamobj144418* input, NI buflen, TY202404 refillchars) {
	void* LOC1;
	unsureAsgnRef((void**) (&(*L).input), input);
	(*L).bufpos = ((NI) 0);
	(*L).buflen = buflen;
	memcpy((void*)(*L).refillchars, (NIM_CONST void*)refillchars, 32);
	LOC1 = 0;
	LOC1 = alloc_7401(((NI) ((NI)(buflen * ((NI) 1)))));
	(*L).buf = ((NCSTRING) (LOC1));
	(*L).sentinel = (NI)(buflen - ((NI) 1));
	(*L).linestart = ((NI) 0);
	(*L).linenumber = ((NI) 1);
	fillbuffer_265201(L);
	skiputf8bom_267201(L);
}

N_NIMCALL(void, close_265022)(Baselexer265009* L) {
	dealloc_7448(((void*) ((*L).buf)));
	close_144470((*L).input);
}

N_NIMCALL(NI, fillbaselexer_266409)(Baselexer265009* L, NI pos) {
	NI result;
	result = 0;
	{
		if (!(pos < (*L).sentinel)) goto LA3;
		result = (NI)(pos + ((NI) 1));
	}
	goto LA1;
	LA3: ;
	{
		fillbuffer_265201(L);
		(*L).bufpos = ((NI) 0);
		result = ((NI) 0);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NI, handlecr_266601)(Baselexer265009* L, NI pos) {
	NI result;
	result = 0;
	(*L).linenumber += ((NI) 1);
	result = fillbaselexer_266409(L, pos);
	{
		if (!((NU8)((*L).buf[result]) == (NU8)(10))) goto LA3;
		result = fillbaselexer_266409(L, result);
	}
	LA3: ;
	(*L).linestart = result;
	return result;
}

N_NIMCALL(NI, handlelf_266810)(Baselexer265009* L, NI pos) {
	NI result;
	result = 0;
	(*L).linenumber += ((NI) 1);
	result = fillbaselexer_266409(L, pos);
	(*L).linestart = result;
	return result;
}

N_NIMCALL(NI, getcolnumber_267802)(Baselexer265009* L, NI pos) {
	NI result;
	result = 0;
	result = ((NI)(pos - (*L).linestart) > 0? ((NI)(pos - (*L).linestart)) : -((NI)(pos - (*L).linestart)));
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_lexbaseInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_lexbaseDatInit000)(void) {
static TNimNode* TMP2826[8];
static TNimNode TMP941[9];
NTI265009.size = sizeof(Baselexer265009);
NTI265009.kind = 17;
NTI265009.base = (&NTI3608);
TMP2826[0] = &TMP941[1];
TMP941[1].kind = 1;
TMP941[1].offset = offsetof(Baselexer265009, bufpos);
TMP941[1].typ = (&NTI104);
TMP941[1].name = "bufpos";
TMP2826[1] = &TMP941[2];
TMP941[2].kind = 1;
TMP941[2].offset = offsetof(Baselexer265009, buf);
TMP941[2].typ = (&NTI140);
TMP941[2].name = "buf";
TMP2826[2] = &TMP941[3];
TMP941[3].kind = 1;
TMP941[3].offset = offsetof(Baselexer265009, buflen);
TMP941[3].typ = (&NTI104);
TMP941[3].name = "bufLen";
TMP2826[3] = &TMP941[4];
TMP941[4].kind = 1;
TMP941[4].offset = offsetof(Baselexer265009, input);
TMP941[4].typ = (&NTI144416);
TMP941[4].name = "input";
TMP2826[4] = &TMP941[5];
TMP941[5].kind = 1;
TMP941[5].offset = offsetof(Baselexer265009, linenumber);
TMP941[5].typ = (&NTI104);
TMP941[5].name = "lineNumber";
TMP2826[5] = &TMP941[6];
TMP941[6].kind = 1;
TMP941[6].offset = offsetof(Baselexer265009, sentinel);
TMP941[6].typ = (&NTI104);
TMP941[6].name = "sentinel";
TMP2826[6] = &TMP941[7];
TMP941[7].kind = 1;
TMP941[7].offset = offsetof(Baselexer265009, linestart);
TMP941[7].typ = (&NTI104);
TMP941[7].name = "lineStart";
TMP2826[7] = &TMP941[8];
TMP941[8].kind = 1;
TMP941[8].offset = offsetof(Baselexer265009, refillchars);
TMP941[8].typ = (&NTI202404);
TMP941[8].name = "refillChars";
TMP941[0].len = 8; TMP941[0].kind = 2; TMP941[0].sons = &TMP2826[0];
NTI265009.node = &TMP941[0];
}

