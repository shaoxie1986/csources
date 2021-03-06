/* Generated by Nim Compiler v0.17.2 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef powerpc
#undef unix
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_OptParser_fe5bDDfRbVwQIuUOouExnA tyObject_OptParser_fe5bDDfRbVwQIuUOouExnA;
typedef struct RootObj RootObj;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef NU8 tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc_ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef NU8 tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct RootObj {
TNimType* m_type;
};
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 tyEnum_CmdLineKind_XkdXq9atxjiuhkFFh0XYrSA;
struct tyObject_OptParser_fe5bDDfRbVwQIuUOouExnA {
  RootObj Sup;
NimStringDesc* cmd;
NI pos;
NIM_BOOL inShortState;
tyEnum_CmdLineKind_XkdXq9atxjiuhkFFh0XYrSA kind;
NimStringDesc* key;
NimStringDesc* val;
};
typedef NU8 tySet_tyChar_nmiMWKVIe46vacnhAFrQvw[32];
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NI, nosparamCount)(void);
N_NIMCALL(NimStringDesc*, quote_yY2O2tPIqumYuvhyVZH8Zg)(NimStringDesc* s);
N_NIMCALL(NI, nsuFindCharSet)(NimStringDesc* s, tySet_tyChar_nmiMWKVIe46vacnhAFrQvw chars, NI start, NI last);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NI, parseWord_JAw9bP8tjPXKSullchoBwUA)(NimStringDesc* s, NI i, NimStringDesc** w, tySet_tyChar_nmiMWKVIe46vacnhAFrQvw delim);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size);
N_NIMCALL(NimStringDesc*, nosparamStr)(NI i);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newLen);
N_NIMCALL(void, handleShortOption_7aIl9cJUX5tPqtQBG33k9aMg)(tyObject_OptParser_fe5bDDfRbVwQIuUOouExnA* p);
N_NIMCALL(NimStringDesc*, nsuStrip)(NimStringDesc* s, NIM_BOOL leading, NIM_BOOL trailing, tySet_tyChar_nmiMWKVIe46vacnhAFrQvw chars);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
extern TNimType NTI_13RNkKqUOX1TtorOUlKtqA_;
TNimType NTI_fe5bDDfRbVwQIuUOouExnA_;
extern TNimType NTI_77mFvmsOLKik79ci2hXkHEg_;
extern TNimType NTI_rR5Bzr1D5krxoo1NcNyeMA_;
extern TNimType NTI_VaVACK0bpYmqIQ0mKcHfQQ_;
TNimType NTI_XkdXq9atxjiuhkFFh0XYrSA_;
STRING_LITERAL(TM_GYgvYKeHVTEls0AcywABHQ_6, "", 0);
static NIM_CONST tySet_tyChar_nmiMWKVIe46vacnhAFrQvw TM_GYgvYKeHVTEls0AcywABHQ_7 = {
0x00, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
static NIM_CONST tySet_tyChar_nmiMWKVIe46vacnhAFrQvw TM_GYgvYKeHVTEls0AcywABHQ_8 = {
0x01, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x24,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TM_GYgvYKeHVTEls0AcywABHQ_9, "", 0);
static NIM_CONST tySet_tyChar_nmiMWKVIe46vacnhAFrQvw TM_GYgvYKeHVTEls0AcywABHQ_10 = {
0x01, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
static NIM_CONST tySet_tyChar_nmiMWKVIe46vacnhAFrQvw TM_GYgvYKeHVTEls0AcywABHQ_11 = {
0x00, 0x3E, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;

N_NIMCALL(NI, parseWord_JAw9bP8tjPXKSullchoBwUA)(NimStringDesc* s, NI i, NimStringDesc** w, tySet_tyChar_nmiMWKVIe46vacnhAFrQvw delim) {
	NI result;
	result = (NI)0;
	result = i;
	{
		if (!((NU8)(s->data[result]) == (NU8)(34))) goto LA3_;
		result += ((NI) 1);
		{
			while (1) {
				if (!!((((NU8)(s->data[result])) == ((NU8)(0)) || ((NU8)(s->data[result])) == ((NU8)(34))))) goto LA6;
				(*w) = addChar((*w), s->data[result]);
				result += ((NI) 1);
			} LA6: ;
		}
		{
			if (!((NU8)(s->data[result]) == (NU8)(34))) goto LA9_;
			result += ((NI) 1);
		}
		LA9_: ;
	}
	goto LA1_;
	LA3_: ;
	{
		{
			while (1) {
				if (!!(((delim[(NU)(((NU8)(s->data[result])))>>3] &(1U<<((NU)(((NU8)(s->data[result])))&7U)))!=0))) goto LA13;
				(*w) = addChar((*w), s->data[result]);
				result += ((NI) 1);
			} LA13: ;
		}
	}
	LA1_: ;
	return result;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI)((*dest).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest).Sup.len += ((NI) 1);
}

static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	copyMem_E1xtACub5WcDa3vbrIXbwgsystem(((void*) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, quote_yY2O2tPIqumYuvhyVZH8Zg)(NimStringDesc* s) {
	NimStringDesc* result;
	result = (NimStringDesc*)0;
	{
		NIM_BOOL T3_;
		NI T4_;
		T3_ = (NIM_BOOL)0;
		T4_ = (NI)0;
		T4_ = nsuFindCharSet(s, TM_GYgvYKeHVTEls0AcywABHQ_7, ((NI) 0), ((NI) 0));
		T3_ = (((NI) 0) <= T4_);
		if (!(T3_)) goto LA5_;
		T3_ = !(((NU8)(s->data[((NI) 0)]) == (NU8)(34)));
		LA5_: ;
		if (!T3_) goto LA6_;
		{
			NI i;
			if (!((NU8)(s->data[((NI) 0)]) == (NU8)(45))) goto LA10_;
			result = rawNewString(((NI) ((s ? s->Sup.len : 0))));
			i = parseWord_JAw9bP8tjPXKSullchoBwUA(s, ((NI) 0), (&result), TM_GYgvYKeHVTEls0AcywABHQ_8);
			{
				if (!(((NU8)(s->data[i])) == ((NU8)(58)) || ((NU8)(s->data[i])) == ((NU8)(61)))) goto LA14_;
				result = addChar(result, s->data[i]);
				i += ((NI) 1);
			}
			LA14_: ;
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
		goto LA8_;
		LA10_: ;
		{
			NimStringDesc* T19_;
			T19_ = (NimStringDesc*)0;
			T19_ = rawNewString(s->Sup.len + 2);
appendChar(T19_, 34);
appendString(T19_, s);
appendChar(T19_, 34);
			result = T19_;
		}
		LA8_: ;
	}
	goto LA1_;
	LA6_: ;
	{
		result = copyString(s);
	}
	LA1_: ;
	return result;
}

N_NIMCALL(void, initOptParser_xt25Cv9cQqaNt3Mscl7nHFA)(NimStringDesc* cmdline, tyObject_OptParser_fe5bDDfRbVwQIuUOouExnA* Result) {
	(*Result).pos = ((NI) 0);
	(*Result).inShortState = NIM_FALSE;
	{
		if (!!(((cmdline) && (cmdline)->Sup.len == 0))) goto LA3_;
		unsureAsgnRef((void**) (&(*Result).cmd), copyString(cmdline));
	}
	goto LA1_;
	LA3_: ;
	{
		unsureAsgnRef((void**) (&(*Result).cmd), copyString(((NimStringDesc*) &TM_GYgvYKeHVTEls0AcywABHQ_6)));
		{
			NI i;
			NI colontmp_;
			NI res;
			i = (NI)0;
			colontmp_ = (NI)0;
			colontmp_ = nosparamCount();
			res = ((NI) 1);
			{
				while (1) {
					NimStringDesc* T9_;
					NimStringDesc* T10_;
					if (!(res <= colontmp_)) goto LA8;
					i = res;
					T9_ = (NimStringDesc*)0;
					T9_ = nosparamStr(i);
					T10_ = (NimStringDesc*)0;
					T10_ = quote_yY2O2tPIqumYuvhyVZH8Zg(T9_);
					(*Result).cmd = resizeString((*Result).cmd, T10_->Sup.len + 0);
appendString((*Result).cmd, T10_);
					(*Result).cmd = addChar((*Result).cmd, 32);
					res += ((NI) 1);
				} LA8: ;
			}
		}
	}
	LA1_: ;
	(*Result).kind = ((tyEnum_CmdLineKind_XkdXq9atxjiuhkFFh0XYrSA) 0);
	unsureAsgnRef((void**) (&(*Result).key), copyString(((NimStringDesc*) &TM_GYgvYKeHVTEls0AcywABHQ_9)));
	unsureAsgnRef((void**) (&(*Result).val), copyString(((NimStringDesc*) &TM_GYgvYKeHVTEls0AcywABHQ_9)));
}

N_NIMCALL(void, handleShortOption_7aIl9cJUX5tPqtQBG33k9aMg)(tyObject_OptParser_fe5bDDfRbVwQIuUOouExnA* p) {
	NI i;
	i = (*p).pos;
	(*p).kind = ((tyEnum_CmdLineKind_XkdXq9atxjiuhkFFh0XYrSA) 3);
	(*p).key = addChar((*p).key, (*p).cmd->data[i]);
	i += ((NI) 1);
	(*p).inShortState = NIM_TRUE;
	{
		while (1) {
			if (!(((NU8)((*p).cmd->data[i])) == ((NU8)(9)) || ((NU8)((*p).cmd->data[i])) == ((NU8)(32)))) goto LA2;
			i += ((NI) 1);
			(*p).inShortState = NIM_FALSE;
		} LA2: ;
	}
	{
		if (!(((NU8)((*p).cmd->data[i])) == ((NU8)(58)) || ((NU8)((*p).cmd->data[i])) == ((NU8)(61)))) goto LA5_;
		i += ((NI) 1);
		(*p).inShortState = NIM_FALSE;
		{
			while (1) {
				if (!(((NU8)((*p).cmd->data[i])) == ((NU8)(9)) || ((NU8)((*p).cmd->data[i])) == ((NU8)(32)))) goto LA8;
				i += ((NI) 1);
			} LA8: ;
		}
		i = parseWord_JAw9bP8tjPXKSullchoBwUA((*p).cmd, i, (&(*p).val), TM_GYgvYKeHVTEls0AcywABHQ_10);
	}
	LA5_: ;
	{
		if (!((NU8)((*p).cmd->data[i]) == (NU8)(0))) goto LA11_;
		(*p).inShortState = NIM_FALSE;
	}
	LA11_: ;
	(*p).pos = i;
}

N_NIMCALL(void, nponext)(tyObject_OptParser_fe5bDDfRbVwQIuUOouExnA* p) {
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
		if (!(*p).inShortState) goto LA5_;
		handleShortOption_7aIl9cJUX5tPqtQBG33k9aMg(p);
		goto BeforeRet_;
	}
	LA5_: ;
	switch (((NU8)((*p).cmd->data[i]))) {
	case 0:
	{
		(*p).kind = ((tyEnum_CmdLineKind_XkdXq9atxjiuhkFFh0XYrSA) 0);
	}
	break;
	case 45:
	{
		i += ((NI) 1);
		{
			if (!((NU8)((*p).cmd->data[i]) == (NU8)(45))) goto LA11_;
			(*p).kind = ((tyEnum_CmdLineKind_XkdXq9atxjiuhkFFh0XYrSA) 2);
			i += ((NI) 1);
			i = parseWord_JAw9bP8tjPXKSullchoBwUA((*p).cmd, i, (&(*p).key), TM_GYgvYKeHVTEls0AcywABHQ_8);
			{
				while (1) {
					if (!(((NU8)((*p).cmd->data[i])) == ((NU8)(9)) || ((NU8)((*p).cmd->data[i])) == ((NU8)(32)))) goto LA14;
					i += ((NI) 1);
				} LA14: ;
			}
			{
				if (!(((NU8)((*p).cmd->data[i])) == ((NU8)(58)) || ((NU8)((*p).cmd->data[i])) == ((NU8)(61)))) goto LA17_;
				i += ((NI) 1);
				{
					while (1) {
						if (!(((NU8)((*p).cmd->data[i])) == ((NU8)(9)) || ((NU8)((*p).cmd->data[i])) == ((NU8)(32)))) goto LA20;
						i += ((NI) 1);
					} LA20: ;
				}
				(*p).pos = parseWord_JAw9bP8tjPXKSullchoBwUA((*p).cmd, i, (&(*p).val), TM_GYgvYKeHVTEls0AcywABHQ_10);
			}
			goto LA15_;
			LA17_: ;
			{
				(*p).pos = i;
			}
			LA15_: ;
		}
		goto LA9_;
		LA11_: ;
		{
			(*p).pos = i;
			handleShortOption_7aIl9cJUX5tPqtQBG33k9aMg(p);
		}
		LA9_: ;
	}
	break;
	default:
	{
		(*p).kind = ((tyEnum_CmdLineKind_XkdXq9atxjiuhkFFh0XYrSA) 1);
		(*p).pos = parseWord_JAw9bP8tjPXKSullchoBwUA((*p).cmd, i, (&(*p).key), TM_GYgvYKeHVTEls0AcywABHQ_10);
	}
	break;
	}
	}BeforeRet_: ;
}

N_NIMCALL(NimStringDesc*, npocmdLineRest)(tyObject_OptParser_fe5bDDfRbVwQIuUOouExnA* p) {
	NimStringDesc* result;
	NimStringDesc* T1_;
	result = (NimStringDesc*)0;
	T1_ = (NimStringDesc*)0;
	T1_ = copyStrLast((*p).cmd, (*p).pos, (NI)(((*p).cmd ? (*p).cmd->Sup.len : 0) - ((NI) 1)));
	result = nsuStrip(T1_, NIM_TRUE, NIM_TRUE, TM_GYgvYKeHVTEls0AcywABHQ_11);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_parseoptInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_parseoptDatInit000)(void) {
static TNimNode* TM_GYgvYKeHVTEls0AcywABHQ_2[6];
static TNimNode* TM_GYgvYKeHVTEls0AcywABHQ_3[4];
NI TM_GYgvYKeHVTEls0AcywABHQ_5;
static char* NIM_CONST TM_GYgvYKeHVTEls0AcywABHQ_4[4] = {
"cmdEnd", 
"cmdArgument", 
"cmdLongOption", 
"cmdShortOption"};
static TNimNode TM_GYgvYKeHVTEls0AcywABHQ_0[12];
NTI_fe5bDDfRbVwQIuUOouExnA_.size = sizeof(tyObject_OptParser_fe5bDDfRbVwQIuUOouExnA);
NTI_fe5bDDfRbVwQIuUOouExnA_.kind = 17;
NTI_fe5bDDfRbVwQIuUOouExnA_.base = (&NTI_13RNkKqUOX1TtorOUlKtqA_);
TM_GYgvYKeHVTEls0AcywABHQ_2[0] = &TM_GYgvYKeHVTEls0AcywABHQ_0[1];
TM_GYgvYKeHVTEls0AcywABHQ_0[1].kind = 1;
TM_GYgvYKeHVTEls0AcywABHQ_0[1].offset = offsetof(tyObject_OptParser_fe5bDDfRbVwQIuUOouExnA, cmd);
TM_GYgvYKeHVTEls0AcywABHQ_0[1].typ = (&NTI_77mFvmsOLKik79ci2hXkHEg_);
TM_GYgvYKeHVTEls0AcywABHQ_0[1].name = "cmd";
TM_GYgvYKeHVTEls0AcywABHQ_2[1] = &TM_GYgvYKeHVTEls0AcywABHQ_0[2];
TM_GYgvYKeHVTEls0AcywABHQ_0[2].kind = 1;
TM_GYgvYKeHVTEls0AcywABHQ_0[2].offset = offsetof(tyObject_OptParser_fe5bDDfRbVwQIuUOouExnA, pos);
TM_GYgvYKeHVTEls0AcywABHQ_0[2].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_GYgvYKeHVTEls0AcywABHQ_0[2].name = "pos";
TM_GYgvYKeHVTEls0AcywABHQ_2[2] = &TM_GYgvYKeHVTEls0AcywABHQ_0[3];
TM_GYgvYKeHVTEls0AcywABHQ_0[3].kind = 1;
TM_GYgvYKeHVTEls0AcywABHQ_0[3].offset = offsetof(tyObject_OptParser_fe5bDDfRbVwQIuUOouExnA, inShortState);
TM_GYgvYKeHVTEls0AcywABHQ_0[3].typ = (&NTI_VaVACK0bpYmqIQ0mKcHfQQ_);
TM_GYgvYKeHVTEls0AcywABHQ_0[3].name = "inShortState";
TM_GYgvYKeHVTEls0AcywABHQ_2[3] = &TM_GYgvYKeHVTEls0AcywABHQ_0[4];
NTI_XkdXq9atxjiuhkFFh0XYrSA_.size = sizeof(tyEnum_CmdLineKind_XkdXq9atxjiuhkFFh0XYrSA);
NTI_XkdXq9atxjiuhkFFh0XYrSA_.kind = 14;
NTI_XkdXq9atxjiuhkFFh0XYrSA_.base = 0;
NTI_XkdXq9atxjiuhkFFh0XYrSA_.flags = 3;
for (TM_GYgvYKeHVTEls0AcywABHQ_5 = 0; TM_GYgvYKeHVTEls0AcywABHQ_5 < 4; TM_GYgvYKeHVTEls0AcywABHQ_5++) {
TM_GYgvYKeHVTEls0AcywABHQ_0[TM_GYgvYKeHVTEls0AcywABHQ_5+5].kind = 1;
TM_GYgvYKeHVTEls0AcywABHQ_0[TM_GYgvYKeHVTEls0AcywABHQ_5+5].offset = TM_GYgvYKeHVTEls0AcywABHQ_5;
TM_GYgvYKeHVTEls0AcywABHQ_0[TM_GYgvYKeHVTEls0AcywABHQ_5+5].name = TM_GYgvYKeHVTEls0AcywABHQ_4[TM_GYgvYKeHVTEls0AcywABHQ_5];
TM_GYgvYKeHVTEls0AcywABHQ_3[TM_GYgvYKeHVTEls0AcywABHQ_5] = &TM_GYgvYKeHVTEls0AcywABHQ_0[TM_GYgvYKeHVTEls0AcywABHQ_5+5];
}
TM_GYgvYKeHVTEls0AcywABHQ_0[9].len = 4; TM_GYgvYKeHVTEls0AcywABHQ_0[9].kind = 2; TM_GYgvYKeHVTEls0AcywABHQ_0[9].sons = &TM_GYgvYKeHVTEls0AcywABHQ_3[0];
NTI_XkdXq9atxjiuhkFFh0XYrSA_.node = &TM_GYgvYKeHVTEls0AcywABHQ_0[9];
TM_GYgvYKeHVTEls0AcywABHQ_0[4].kind = 1;
TM_GYgvYKeHVTEls0AcywABHQ_0[4].offset = offsetof(tyObject_OptParser_fe5bDDfRbVwQIuUOouExnA, kind);
TM_GYgvYKeHVTEls0AcywABHQ_0[4].typ = (&NTI_XkdXq9atxjiuhkFFh0XYrSA_);
TM_GYgvYKeHVTEls0AcywABHQ_0[4].name = "kind";
TM_GYgvYKeHVTEls0AcywABHQ_2[4] = &TM_GYgvYKeHVTEls0AcywABHQ_0[10];
TM_GYgvYKeHVTEls0AcywABHQ_0[10].kind = 1;
TM_GYgvYKeHVTEls0AcywABHQ_0[10].offset = offsetof(tyObject_OptParser_fe5bDDfRbVwQIuUOouExnA, key);
TM_GYgvYKeHVTEls0AcywABHQ_0[10].typ = (&NTI_77mFvmsOLKik79ci2hXkHEg_);
TM_GYgvYKeHVTEls0AcywABHQ_0[10].name = "key";
TM_GYgvYKeHVTEls0AcywABHQ_2[5] = &TM_GYgvYKeHVTEls0AcywABHQ_0[11];
TM_GYgvYKeHVTEls0AcywABHQ_0[11].kind = 1;
TM_GYgvYKeHVTEls0AcywABHQ_0[11].offset = offsetof(tyObject_OptParser_fe5bDDfRbVwQIuUOouExnA, val);
TM_GYgvYKeHVTEls0AcywABHQ_0[11].typ = (&NTI_77mFvmsOLKik79ci2hXkHEg_);
TM_GYgvYKeHVTEls0AcywABHQ_0[11].name = "val";
TM_GYgvYKeHVTEls0AcywABHQ_0[0].len = 6; TM_GYgvYKeHVTEls0AcywABHQ_0[0].kind = 2; TM_GYgvYKeHVTEls0AcywABHQ_0[0].sons = &TM_GYgvYKeHVTEls0AcywABHQ_2[0];
NTI_fe5bDDfRbVwQIuUOouExnA_.node = &TM_GYgvYKeHVTEls0AcywABHQ_0[0];
}

