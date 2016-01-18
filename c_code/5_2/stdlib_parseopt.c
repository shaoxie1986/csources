/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Optparser199205 Optparser199205;
typedef struct TNimObject TNimObject;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
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
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Optparser199205  {
  TNimObject Sup;
NimStringDesc* cmd;
NI pos;
NIM_BOOL inshortstate;
NU8 kind;
NimStringDesc* key;
NimStringDesc* val;
};
typedef NU8 TY202404[32];
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NI, paramcount_131426)(void);
N_NIMCALL(NimStringDesc*, quote_199287)(NimStringDesc* s);
N_NIMCALL(NI, nsuFindCharSet)(NimStringDesc* s, TY202404 chars, NI start);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NI, parseword_199218)(NimStringDesc* s, NI i, NimStringDesc** w, TY202404 delim);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, paramstr_131407)(NI i);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(void, handleshortoption_199401)(Optparser199205* p);
N_NIMCALL(NimStringDesc*, nsuStrip)(NimStringDesc* s, NIM_BOOL leading, NIM_BOOL trailing, TY202404 chars);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_79810, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
STRING_LITERAL(TMP1665, "", 0);
static NIM_CONST TY202404 TMP1666 = {
0x00, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
static NIM_CONST TY202404 TMP1667 = {
0x01, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x24,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP1668, "", 0);
static NIM_CONST TY202404 TMP1669 = {
0x01, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
static NIM_CONST TY202404 TMP1674 = {
0x00, 0x3E, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
extern TNimType NTI3608; /* RootObj */
TNimType NTI199205; /* OptParser */
extern TNimType NTI138; /* string */
extern TNimType NTI104; /* int */
extern TNimType NTI130; /* bool */
TNimType NTI199203; /* CmdLineKind */

N_NIMCALL(NI, parseword_199218)(NimStringDesc* s, NI i, NimStringDesc** w, TY202404 delim) {
	NI result;
	result = 0;
	result = i;
	{
		if (!((NU8)(s->data[result]) == (NU8)(34))) goto LA3;
		result += ((NI) 1);
		{
			while (1) {
				if (!!((((NU8)(s->data[result])) == ((NU8)(0)) || ((NU8)(s->data[result])) == ((NU8)(34))))) goto LA6;
				(*w) = addChar((*w), s->data[result]);
				result += ((NI) 1);
			} LA6: ;
		}
		{
			if (!((NU8)(s->data[result]) == (NU8)(34))) goto LA9;
			result += ((NI) 1);
		}
		LA9: ;
	}
	goto LA1;
	LA3: ;
	{
		{
			while (1) {
				if (!!(((delim[(NU)(((NU8)(s->data[result])))>>3] &(1U<<((NU)(((NU8)(s->data[result])))&7U)))!=0))) goto LA13;
				(*w) = addChar((*w), s->data[result]);
				result += ((NI) 1);
			} LA13: ;
		}
	}
	LA1: ;
	return result;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI)((*dest).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest).Sup.len += ((NI) 1);
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, quote_199287)(NimStringDesc* s) {
	NimStringDesc* result;
	result = 0;
	{
		NIM_BOOL LOC3;
		NI LOC4;
		LOC3 = 0;
		LOC4 = 0;
		LOC4 = nsuFindCharSet(s, TMP1666, ((NI) 0));
		LOC3 = (((NI) 0) <= LOC4);
		if (!(LOC3)) goto LA5;
		LOC3 = !(((NU8)(s->data[((NI) 0)]) == (NU8)(34)));
		LA5: ;
		if (!LOC3) goto LA6;
		{
			NI i;
			if (!((NU8)(s->data[((NI) 0)]) == (NU8)(45))) goto LA10;
			result = rawNewString(((NI) ((s ? s->Sup.len : 0))));
			i = parseword_199218(s, ((NI) 0), (&result), TMP1667);
			{
				if (!(((NU8)(s->data[i])) == ((NU8)(58)) || ((NU8)(s->data[i])) == ((NU8)(61)))) goto LA14;
				result = addChar(result, s->data[i]);
				i += ((NI) 1);
			}
			LA14: ;
			result = addChar(result, 34);
			{
				while (1) {
					if (!(i < (s ? s->Sup.len : 0))) goto LA17;
					result = addChar(result, s->data[i]);
					i += ((NI) 1);
				} LA17: ;
			}
			result = addChar(result, 34);
		}
		goto LA8;
		LA10: ;
		{
			NimStringDesc* LOC19;
			LOC19 = 0;
			LOC19 = rawNewString(s->Sup.len + 2);
appendChar(LOC19, 34);
appendString(LOC19, s);
appendChar(LOC19, 34);
			result = LOC19;
		}
		LA8: ;
	}
	goto LA1;
	LA6: ;
	{
		result = copyString(s);
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, initoptparser_199325)(NimStringDesc* cmdline, Optparser199205* Result) {
	(*Result).pos = ((NI) 0);
	(*Result).inshortstate = NIM_FALSE;
	{
		if (!!(((cmdline) && (cmdline)->Sup.len == 0))) goto LA3;
		unsureAsgnRef((void**) (&(*Result).cmd), copyString(cmdline));
	}
	goto LA1;
	LA3: ;
	{
		unsureAsgnRef((void**) (&(*Result).cmd), copyString(((NimStringDesc*) &TMP1665)));
		{
			NI i_199340;
			NI HEX3Atmp_199343;
			NI res_199346;
			i_199340 = 0;
			HEX3Atmp_199343 = 0;
			HEX3Atmp_199343 = paramcount_131426();
			res_199346 = ((NI) 1);
			{
				while (1) {
					NimStringDesc* LOC9;
					NimStringDesc* LOC10;
					if (!(res_199346 <= HEX3Atmp_199343)) goto LA8;
					i_199340 = res_199346;
					LOC9 = 0;
					LOC9 = paramstr_131407(i_199340);
					LOC10 = 0;
					LOC10 = quote_199287(LOC9);
					(*Result).cmd = resizeString((*Result).cmd, LOC10->Sup.len + 0);
appendString((*Result).cmd, LOC10);
					(*Result).cmd = addChar((*Result).cmd, 32);
					res_199346 += ((NI) 1);
				} LA8: ;
			}
		}
	}
	LA1: ;
	(*Result).kind = ((NU8) 0);
	unsureAsgnRef((void**) (&(*Result).key), copyString(((NimStringDesc*) &TMP1668)));
	unsureAsgnRef((void**) (&(*Result).val), copyString(((NimStringDesc*) &TMP1668)));
}

N_NIMCALL(void, handleshortoption_199401)(Optparser199205* p) {
	NI i;
	i = (*p).pos;
	(*p).kind = ((NU8) 3);
	(*p).key = addChar((*p).key, (*p).cmd->data[i]);
	i += ((NI) 1);
	(*p).inshortstate = NIM_TRUE;
	{
		while (1) {
			if (!(((NU8)((*p).cmd->data[i])) == ((NU8)(9)) || ((NU8)((*p).cmd->data[i])) == ((NU8)(32)))) goto LA2;
			i += ((NI) 1);
			(*p).inshortstate = NIM_FALSE;
		} LA2: ;
	}
	{
		if (!(((NU8)((*p).cmd->data[i])) == ((NU8)(58)) || ((NU8)((*p).cmd->data[i])) == ((NU8)(61)))) goto LA5;
		i += ((NI) 1);
		(*p).inshortstate = NIM_FALSE;
		{
			while (1) {
				if (!(((NU8)((*p).cmd->data[i])) == ((NU8)(9)) || ((NU8)((*p).cmd->data[i])) == ((NU8)(32)))) goto LA8;
				i += ((NI) 1);
			} LA8: ;
		}
		i = parseword_199218((*p).cmd, i, (&(*p).val), TMP1669);
	}
	LA5: ;
	{
		if (!((NU8)((*p).cmd->data[i]) == (NU8)(0))) goto LA11;
		(*p).inshortstate = NIM_FALSE;
	}
	LA11: ;
	(*p).pos = i;
}

N_NIMCALL(void, nponext)(Optparser199205* p) {
	NI i;
{	i = (*p).pos;
	{
		while (1) {
			if (!(((NU8)((*p).cmd->data[i])) == ((NU8)(9)) || ((NU8)((*p).cmd->data[i])) == ((NU8)(32)))) goto LA2;
			i += ((NI) 1);
		} LA2: ;
	}
	(*p).pos = i;
	(*p).key = setLengthStr((*p).key, ((NI) 0));
	(*p).val = setLengthStr((*p).val, ((NI) 0));
	{
		if (!(*p).inshortstate) goto LA5;
		handleshortoption_199401(p);
		goto BeforeRet;
	}
	LA5: ;
	switch (((NU8)((*p).cmd->data[i]))) {
	case 0:
	{
		(*p).kind = ((NU8) 0);
	}
	break;
	case 45:
	{
		i += ((NI) 1);
		{
			if (!((NU8)((*p).cmd->data[i]) == (NU8)(45))) goto LA11;
			(*p).kind = ((NU8) 2);
			i += ((NI) 1);
			i = parseword_199218((*p).cmd, i, (&(*p).key), TMP1667);
			{
				while (1) {
					if (!(((NU8)((*p).cmd->data[i])) == ((NU8)(9)) || ((NU8)((*p).cmd->data[i])) == ((NU8)(32)))) goto LA14;
					i += ((NI) 1);
				} LA14: ;
			}
			{
				if (!(((NU8)((*p).cmd->data[i])) == ((NU8)(58)) || ((NU8)((*p).cmd->data[i])) == ((NU8)(61)))) goto LA17;
				i += ((NI) 1);
				{
					while (1) {
						if (!(((NU8)((*p).cmd->data[i])) == ((NU8)(9)) || ((NU8)((*p).cmd->data[i])) == ((NU8)(32)))) goto LA20;
						i += ((NI) 1);
					} LA20: ;
				}
				(*p).pos = parseword_199218((*p).cmd, i, (&(*p).val), TMP1669);
			}
			goto LA15;
			LA17: ;
			{
				(*p).pos = i;
			}
			LA15: ;
		}
		goto LA9;
		LA11: ;
		{
			(*p).pos = i;
			handleshortoption_199401(p);
		}
		LA9: ;
	}
	break;
	default:
	{
		(*p).kind = ((NU8) 1);
		(*p).pos = parseword_199218((*p).cmd, i, (&(*p).key), TMP1669);
	}
	break;
	}
	}BeforeRet: ;
}

N_NIMCALL(NimStringDesc*, npocmdLineRest)(Optparser199205* p) {
	NimStringDesc* result;
	NimStringDesc* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = copyStrLast((*p).cmd, (*p).pos, (NI)(((*p).cmd ? (*p).cmd->Sup.len : 0) - ((NI) 1)));
	result = nsuStrip(LOC1, NIM_TRUE, NIM_TRUE, TMP1674);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_parseoptInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_parseoptDatInit000)(void) {
static TNimNode* TMP1661[6];
static TNimNode* TMP1662[4];
NI TMP1664;
static char* NIM_CONST TMP1663[4] = {
"cmdEnd", 
"cmdArgument", 
"cmdLongOption", 
"cmdShortOption"};
static TNimNode TMP788[12];
NTI199205.size = sizeof(Optparser199205);
NTI199205.kind = 17;
NTI199205.base = (&NTI3608);
TMP1661[0] = &TMP788[1];
TMP788[1].kind = 1;
TMP788[1].offset = offsetof(Optparser199205, cmd);
TMP788[1].typ = (&NTI138);
TMP788[1].name = "cmd";
TMP1661[1] = &TMP788[2];
TMP788[2].kind = 1;
TMP788[2].offset = offsetof(Optparser199205, pos);
TMP788[2].typ = (&NTI104);
TMP788[2].name = "pos";
TMP1661[2] = &TMP788[3];
TMP788[3].kind = 1;
TMP788[3].offset = offsetof(Optparser199205, inshortstate);
TMP788[3].typ = (&NTI130);
TMP788[3].name = "inShortState";
TMP1661[3] = &TMP788[4];
NTI199203.size = sizeof(NU8);
NTI199203.kind = 14;
NTI199203.base = 0;
NTI199203.flags = 3;
for (TMP1664 = 0; TMP1664 < 4; TMP1664++) {
TMP788[TMP1664+5].kind = 1;
TMP788[TMP1664+5].offset = TMP1664;
TMP788[TMP1664+5].name = TMP1663[TMP1664];
TMP1662[TMP1664] = &TMP788[TMP1664+5];
}
TMP788[9].len = 4; TMP788[9].kind = 2; TMP788[9].sons = &TMP1662[0];
NTI199203.node = &TMP788[9];
TMP788[4].kind = 1;
TMP788[4].offset = offsetof(Optparser199205, kind);
TMP788[4].typ = (&NTI199203);
TMP788[4].name = "kind";
TMP1661[4] = &TMP788[10];
TMP788[10].kind = 1;
TMP788[10].offset = offsetof(Optparser199205, key);
TMP788[10].typ = (&NTI138);
TMP788[10].name = "key";
TMP1661[5] = &TMP788[11];
TMP788[11].kind = 1;
TMP788[11].offset = offsetof(Optparser199205, val);
TMP788[11].typ = (&NTI138);
TMP788[11].name = "val";
TMP788[0].len = 6; TMP788[0].kind = 2; TMP788[0].sons = &TMP1661[0];
NTI199205.node = &TMP788[0];
}

