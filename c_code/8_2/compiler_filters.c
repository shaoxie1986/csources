/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <stdio.h>
typedef struct tnode170659 tnode170659;
typedef struct tlineinfo135509 tlineinfo135509;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct ttype170693 ttype170693;
typedef struct tsym170689 tsym170689;
typedef struct tident139017 tident139017;
typedef struct tnodeseq170653 tnodeseq170653;
typedef struct tllstream160204 tllstream160204;
typedef struct tidobj139011 tidobj139011;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq170691 ttypeseq170691;
typedef struct tloc170673 tloc170673;
typedef struct trope120007 trope120007;
typedef struct tscope170683 tscope170683;
typedef struct TY170786 TY170786;
typedef struct tinstantiation170679 tinstantiation170679;
typedef struct tstrtable170663 tstrtable170663;
typedef struct tsymseq170661 tsymseq170661;
typedef struct tlib170677 tlib170677;
typedef struct TY170775 TY170775;
typedef struct tlistentry108014 tlistentry108014;
struct tlineinfo135509 {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
};
struct tnode170659 {
ttype170693* Typ;
tlineinfo135509 Info;
NU16 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym170689* Sym;
} S4;
struct {tident139017* Ident;
} S5;
struct {tnodeseq170653* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
typedef NU8 TY170865[20];
typedef N_NIMCALL_PTR(void, TY889) (void* p, NI op);
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY889 marker;
};
struct TNimObject {
TNimType* m_type;
};
struct tidobj139011 {
  TNimObject Sup;
NI Id;
};
struct tloc170673 {
NU8 K;
NU8 S;
NU8 Flags;
ttype170693* T;
trope120007* R;
trope120007* Heaproot;
NI A;
};
struct ttype170693 {
  tidobj139011 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq170691* Sons;
tnode170659* N;
tsym170689* Destructor;
tsym170689* Owner;
tsym170689* Sym;
NI64 Size;
NI Align;
tloc170673 Loc;
};
struct tstrtable170663 {
NI Counter;
tsymseq170661* Data;
};
struct tsym170689 {
  tidobj139011 Sup;
NU8 Kind;
union {
struct {ttypeseq170691* Typeinstcache;
tscope170683* Typscope;
} S1;
struct {TY170786* Procinstcache;
tscope170683* Scope;
} S2;
struct {TY170786* Usedgenerics;
tstrtable170663 Tab;
} S3;
} kindU;
NU16 Magic;
ttype170693* Typ;
tident139017* Name;
tlineinfo135509 Info;
tsym170689* Owner;
NU32 Flags;
tnode170659* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc170673 Loc;
tlib170677* Annex;
tnode170659* Constraint;
};
struct tident139017 {
  tidobj139011 Sup;
NimStringDesc* S;
tident139017* Next;
NI H;
};
struct tllstream160204 {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct trope120007 {
  TNimObject Sup;
trope120007* Left;
trope120007* Right;
NI Length;
NimStringDesc* Data;
};
struct tscope170683 {
NI Depthlevel;
tstrtable170663 Symbols;
tnodeseq170653* Usingsyms;
tscope170683* Parent;
};
struct tinstantiation170679 {
tsym170689* Sym;
ttypeseq170691* Concretetypes;
TY170775* Usedby;
};
struct tlistentry108014 {
  TNimObject Sup;
tlistentry108014* Prev;
tlistentry108014* Next;
};
struct tlib170677 {
  tlistentry108014 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope120007* Name;
tnode170659* Path;
};
struct tnodeseq170653 {
  TGenericSeq Sup;
  tnode170659* data[SEQ_DECL_SIZE];
};
struct ttypeseq170691 {
  TGenericSeq Sup;
  ttype170693* data[SEQ_DECL_SIZE];
};
struct TY170786 {
  TGenericSeq Sup;
  tinstantiation170679* data[SEQ_DECL_SIZE];
};
struct tsymseq170661 {
  TGenericSeq Sup;
  tsym170689* data[SEQ_DECL_SIZE];
};
struct TY170775 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, invalidpragma_194036)(tnode170659* n);
N_NIMCALL(void, localerror_137349)(tlineinfo135509 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, rendertree_188048)(tnode170659* n, NU8 renderflags);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(tnode170659*, getarg_194042)(tnode170659* n, NimStringDesc* name, NI pos);
static N_INLINE(NI, sonslen_171022)(tnode170659* n);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NIM_BOOL, identeq_139456)(tident139017* id, NimStringDesc* name);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(NIM_CHAR, chararg_194014)(tnode170659* n, NimStringDesc* name, NI pos, NIM_CHAR default_194019);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(NimStringDesc*, strarg_194021)(tnode170659* n, NimStringDesc* name, NI pos, NimStringDesc* default_194026);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NIM_BOOL, boolarg_194028)(tnode170659* n, NimStringDesc* name, NI pos, NIM_BOOL default_194033);
N_NIMCALL(tllstream160204*, filterstrip_194008)(tllstream160204* stdin_194010, NimStringDesc* filename, tnode170659* call);
N_NIMCALL(tllstream160204*, llstreamopen_160218)(NimStringDesc* data);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, llstreamreadline_160248)(tllstream160204* s, NimStringDesc** line);
N_NIMCALL(NimStringDesc*, nsuStrip)(NimStringDesc* s, NIM_BOOL leading, NIM_BOOL trailing);
N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* s, NimStringDesc* prefix);
N_NIMCALL(void, llstreamwriteln_160274)(tllstream160204* s, NimStringDesc* data);
N_NIMCALL(void, llstreamclose_160238)(tllstream160204* s);
N_NIMCALL(tllstream160204*, filterreplace_194002)(tllstream160204* stdin_194004, NimStringDesc* filename, tnode170659* call);
N_NIMCALL(NimStringDesc*, nsuReplaceStr)(NimStringDesc* s, NimStringDesc* sub, NimStringDesc* by);
static NIM_CONST TY170865 TMP2577 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP2578, "sons", 4);
static NIM_CONST TY170865 TMP2580 = {
0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP2581, "ident", 5);
static NIM_CONST TY170865 TMP2582 = {
0xE0, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP2583, "intVal", 6);
static NIM_CONST TY170865 TMP2584 = {
0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP2585, "strVal", 6);
STRING_LITERAL(TMP2586, "true", 4);
STRING_LITERAL(TMP2587, "false", 5);
STRING_LITERAL(TMP2588, "startswith", 10);
STRING_LITERAL(TMP2589, "", 0);
STRING_LITERAL(TMP2590, "leading", 7);
STRING_LITERAL(TMP2591, "trailing", 8);
STRING_LITERAL(TMP2593, "sub", 3);
STRING_LITERAL(TMP2594, "by", 2);
extern TFrame* frameptr_12037;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12037;
	frameptr_12037 = s;
}
static N_INLINE(void, popFrame)(void) {
	frameptr_12037 = (*frameptr_12037).prev;
}
N_NIMCALL(void, invalidpragma_194036)(tnode170659* n) {
	NimStringDesc* LOC1;
	nimfr("invalidPragma", "filters.nim")
	nimln(25, "filters.nim");
	nimln(25, "filters.nim");
	LOC1 = 0;
	LOC1 = rendertree_188048(n, 4);
	localerror_137349((*n).Info, ((NU16) 163), LOC1);	popFrame();
}
static N_INLINE(NI, sonslen_171022)(tnode170659* n) {
	NI result;
	nimfr("sonsLen", "ast.nim")
	result = 0;
	nimln(1209, "ast.nim");
	{
		nimln(1209, "ast.nim");
		if (((TMP2577[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2578));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(1209, "ast.nim");
		result = 0;
	}	goto LA1;
	LA3: ;
	{
		nimln(1210, "ast.nim");
		nimln(1210, "ast.nim");
		if (((TMP2577[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2578));
		result = (*n).kindU.S6.Sons->Sup.len;
	}	LA1: ;
	popFrame();
	return result;
}
static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ (NI)((NU64) ~(b))));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}	LA5: ;
	raiseOverflow();	BeforeRet: ;	return result;
}
static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ b));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}	LA5: ;
	raiseOverflow();	BeforeRet: ;	return result;
}
N_NIMCALL(tnode170659*, getarg_194042)(tnode170659* n, NimStringDesc* name, NI pos) {
	tnode170659* result;
	NI i_194068;
	NI HEX3Atmp_194184;
	NI LOC5;
	NI TMP2579;
	NI res_194186;
	nimfr("getArg", "filters.nim")
	result = 0;
	nimln(28, "filters.nim");
	result = NIM_NIL;
	nimln(29, "filters.nim");
	{
		nimln(730, "system.nim");
		if (!((*n).Kind >= ((NU8) 1) && (*n).Kind <= ((NU8) 23))) goto LA3;
		nimln(29, "filters.nim");
		goto BeforeRet;
	}	LA3: ;
	i_194068 = 0;
	HEX3Atmp_194184 = 0;
	nimln(30, "filters.nim");
	nimln(30, "filters.nim");
	nimln(30, "filters.nim");
	LOC5 = 0;
	LOC5 = sonslen_171022(n);
	TMP2579 = subInt(LOC5, 1);
	HEX3Atmp_194184 = (NI64)(TMP2579);
	nimln(1301, "system.nim");
	res_194186 = 1;
	nimln(1302, "system.nim");
	while (1) {
		nimln(1302, "system.nim");
		if (!(res_194186 <= HEX3Atmp_194184)) goto LA6;
		nimln(1301, "system.nim");
		i_194068 = res_194186;
		nimln(31, "filters.nim");
		{
			nimln(31, "filters.nim");
			if (((TMP2577[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2578));
			if ((NU)(i_194068) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			if (!((*(*n).kindU.S6.Sons->data[i_194068]).Kind == ((NU8) 33))) goto LA9;
			nimln(32, "filters.nim");
			{
				nimln(698, "system.nim");
				nimln(698, "system.nim");
				if (((TMP2577[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2578));
				if ((NU)(i_194068) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
				if (((TMP2577[(*(*n).kindU.S6.Sons->data[i_194068]).Kind/8] &(1<<((*(*n).kindU.S6.Sons->data[i_194068]).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2578));
				if ((NU)(0) >= (NU)((*(*n).kindU.S6.Sons->data[i_194068]).kindU.S6.Sons->Sup.len)) raiseIndexError();
				if (!!(((*(*(*n).kindU.S6.Sons->data[i_194068]).kindU.S6.Sons->data[0]).Kind == ((NU8) 2)))) goto LA13;
				nimln(32, "filters.nim");
				invalidpragma_194036(n);			}			LA13: ;
			nimln(33, "filters.nim");
			{
				NIM_BOOL LOC17;
				nimln(33, "filters.nim");
				if (((TMP2577[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2578));
				if ((NU)(i_194068) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
				if (((TMP2577[(*(*n).kindU.S6.Sons->data[i_194068]).Kind/8] &(1<<((*(*n).kindU.S6.Sons->data[i_194068]).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2578));
				if ((NU)(0) >= (NU)((*(*n).kindU.S6.Sons->data[i_194068]).kindU.S6.Sons->Sup.len)) raiseIndexError();
				if (!(((TMP2580[(*(*(*n).kindU.S6.Sons->data[i_194068]).kindU.S6.Sons->data[0]).Kind/8] &(1<<((*(*(*n).kindU.S6.Sons->data[i_194068]).kindU.S6.Sons->data[0]).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP2581));
				LOC17 = 0;
				LOC17 = identeq_139456((*(*(*n).kindU.S6.Sons->data[i_194068]).kindU.S6.Sons->data[0]).kindU.S5.Ident, name);
				if (!LOC17) goto LA18;
				nimln(34, "filters.nim");
				nimln(34, "filters.nim");
				if (((TMP2577[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2578));
				if ((NU)(i_194068) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
				if (((TMP2577[(*(*n).kindU.S6.Sons->data[i_194068]).Kind/8] &(1<<((*(*n).kindU.S6.Sons->data[i_194068]).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2578));
				if ((NU)(1) >= (NU)((*(*n).kindU.S6.Sons->data[i_194068]).kindU.S6.Sons->Sup.len)) raiseIndexError();
				result = (*(*n).kindU.S6.Sons->data[i_194068]).kindU.S6.Sons->data[1];
				goto BeforeRet;
			}			LA18: ;
		}		goto LA7;
		LA9: ;
		{
			nimln(35, "filters.nim");
			if (!(i_194068 == pos)) goto LA21;
			nimln(36, "filters.nim");
			nimln(36, "filters.nim");
			if (((TMP2577[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP2578));
			if ((NU)(i_194068) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			result = (*n).kindU.S6.Sons->data[i_194068];
			goto BeforeRet;
		}		goto LA7;
		LA21: ;
		LA7: ;
		nimln(1304, "system.nim");
		res_194186 = addInt(res_194186, 1);
	} LA6: ;
	BeforeRet: ;	popFrame();
	return result;
}
static N_INLINE(NI, chckRange)(NI i, NI a, NI b) {
	NI result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (a <= i);
		if (!(LOC3)) goto LA4;
		LOC3 = (i <= b);
		LA4: ;
		if (!LOC3) goto LA5;
		result = i;
		goto BeforeRet;
	}	goto LA1;
	LA5: ;
	{
		raiseRangeError(((NI64) (i)));	}	LA1: ;
	BeforeRet: ;	return result;
}
N_NIMCALL(NIM_CHAR, chararg_194014)(tnode170659* n, NimStringDesc* name, NI pos, NIM_CHAR default_194019) {
	NIM_CHAR result;
	tnode170659* x;
	nimfr("charArg", "filters.nim")
	result = 0;
	nimln(39, "filters.nim");
	x = getarg_194042(n, name, pos);
	nimln(40, "filters.nim");
	{
		nimln(40, "filters.nim");
		if (!(x == NIM_NIL)) goto LA3;
		nimln(40, "filters.nim");
		result = default_194019;
	}	goto LA1;
	LA3: ;
	{
		nimln(41, "filters.nim");
		if (!((*x).Kind == ((NU8) 5))) goto LA6;
		nimln(41, "filters.nim");
		nimln(41, "filters.nim");
		if (!(((TMP2582[(*x).Kind/8] &(1<<((*x).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP2583));
		result = ((NIM_CHAR) (((NI)chckRange(((NI) ((*x).kindU.S1.Intval)), 0, 255))));
	}	goto LA1;
	LA6: ;
	{
		nimln(42, "filters.nim");
		invalidpragma_194036(n);	}	LA1: ;
	popFrame();
	return result;
}
N_NIMCALL(NimStringDesc*, strarg_194021)(tnode170659* n, NimStringDesc* name, NI pos, NimStringDesc* default_194026) {
	NimStringDesc* result;
	tnode170659* x;
	nimfr("strArg", "filters.nim")
	result = 0;
	nimln(45, "filters.nim");
	x = getarg_194042(n, name, pos);
	nimln(46, "filters.nim");
	{
		nimln(46, "filters.nim");
		if (!(x == NIM_NIL)) goto LA3;
		nimln(46, "filters.nim");
		result = copyString(default_194026);
	}	goto LA1;
	LA3: ;
	{
		nimln(730, "system.nim");
		if (!((*x).Kind >= ((NU8) 20) && (*x).Kind <= ((NU8) 22))) goto LA6;
		nimln(47, "filters.nim");
		if (!(((TMP2584[(*x).Kind/8] &(1<<((*x).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP2585));
		result = copyString((*x).kindU.S3.Strval);
	}	goto LA1;
	LA6: ;
	{
		nimln(48, "filters.nim");
		invalidpragma_194036(n);	}	LA1: ;
	popFrame();
	return result;
}
N_NIMCALL(NIM_BOOL, boolarg_194028)(tnode170659* n, NimStringDesc* name, NI pos, NIM_BOOL default_194033) {
	NIM_BOOL result;
	tnode170659* x;
	nimfr("boolArg", "filters.nim")
	result = 0;
	nimln(51, "filters.nim");
	x = getarg_194042(n, name, pos);
	nimln(52, "filters.nim");
	{
		nimln(52, "filters.nim");
		if (!(x == NIM_NIL)) goto LA3;
		nimln(52, "filters.nim");
		result = default_194033;
	}	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		nimln(53, "filters.nim");
		LOC6 = 0;
		nimln(53, "filters.nim");
		LOC6 = ((*x).Kind == ((NU8) 2));
		if (!(LOC6)) goto LA7;
		nimln(53, "filters.nim");
		if (!(((TMP2580[(*x).Kind/8] &(1<<((*x).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP2581));
		LOC6 = identeq_139456((*x).kindU.S5.Ident, ((NimStringDesc*) &TMP2586));
		LA7: ;
		if (!LOC6) goto LA8;
		nimln(53, "filters.nim");
		result = NIM_TRUE;
	}	goto LA1;
	LA8: ;
	{
		NIM_BOOL LOC11;
		nimln(54, "filters.nim");
		LOC11 = 0;
		nimln(54, "filters.nim");
		LOC11 = ((*x).Kind == ((NU8) 2));
		if (!(LOC11)) goto LA12;
		nimln(54, "filters.nim");
		if (!(((TMP2580[(*x).Kind/8] &(1<<((*x).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP2581));
		LOC11 = identeq_139456((*x).kindU.S5.Ident, ((NimStringDesc*) &TMP2587));
		LA12: ;
		if (!LOC11) goto LA13;
		nimln(54, "filters.nim");
		result = NIM_FALSE;
	}	goto LA1;
	LA13: ;
	{
		nimln(55, "filters.nim");
		invalidpragma_194036(n);	}	LA1: ;
	popFrame();
	return result;
}
N_NIMCALL(tllstream160204*, filterstrip_194008)(tllstream160204* stdin_194010, NimStringDesc* filename, tnode170659* call) {
	tllstream160204* result;
	NimStringDesc* pattern;
	NIM_BOOL leading;
	NIM_BOOL trailing;
	NimStringDesc* line;
	nimfr("filterStrip", "filters.nim")
	result = 0;
	nimln(58, "filters.nim");
	pattern = strarg_194021(call, ((NimStringDesc*) &TMP2588), 1, ((NimStringDesc*) &TMP2589));
	nimln(59, "filters.nim");
	leading = boolarg_194028(call, ((NimStringDesc*) &TMP2590), 2, NIM_TRUE);
	nimln(60, "filters.nim");
	trailing = boolarg_194028(call, ((NimStringDesc*) &TMP2591), 3, NIM_TRUE);
	nimln(61, "filters.nim");
	result = llstreamopen_160218(((NimStringDesc*) &TMP2589));
	nimln(62, "filters.nim");
	nimln(62, "filters.nim");
	line = rawNewString(80);
	nimln(63, "filters.nim");
	while (1) {
		NIM_BOOL LOC2;
		NimStringDesc* stripped;
		nimln(63, "filters.nim");
		LOC2 = 0;
		LOC2 = llstreamreadline_160248(stdin_194010, &line);
		if (!LOC2) goto LA1;
		nimln(64, "filters.nim");
		stripped = nsuStrip(line, leading, trailing);
		nimln(65, "filters.nim");
		{
			NIM_BOOL LOC5;
			nimln(65, "filters.nim");
			LOC5 = 0;
			nimln(65, "filters.nim");
			nimln(65, "filters.nim");
			LOC5 = (pattern->Sup.len == 0);
			if (LOC5) goto LA6;
			nimln(65, "filters.nim");
			LOC5 = nsuStartsWith(stripped, pattern);
			LA6: ;
			if (!LOC5) goto LA7;
			nimln(66, "filters.nim");
			llstreamwriteln_160274(result, stripped);		}		goto LA3;
		LA7: ;
		{
			nimln(68, "filters.nim");
			llstreamwriteln_160274(result, line);		}		LA3: ;
	} LA1: ;
	nimln(69, "filters.nim");
	llstreamclose_160238(stdin_194010);	popFrame();
	return result;
}
N_NIMCALL(tllstream160204*, filterreplace_194002)(tllstream160204* stdin_194004, NimStringDesc* filename, tnode170659* call) {
	tllstream160204* result;
	NimStringDesc* sub;
	NimStringDesc* by;
	NimStringDesc* line;
	nimfr("filterReplace", "filters.nim")
	result = 0;
	nimln(72, "filters.nim");
	sub = strarg_194021(call, ((NimStringDesc*) &TMP2593), 1, ((NimStringDesc*) &TMP2589));
	nimln(73, "filters.nim");
	{
		nimln(73, "filters.nim");
		nimln(73, "filters.nim");
		if (!(sub->Sup.len == 0)) goto LA3;
		nimln(73, "filters.nim");
		invalidpragma_194036(call);	}	LA3: ;
	nimln(74, "filters.nim");
	by = strarg_194021(call, ((NimStringDesc*) &TMP2594), 2, ((NimStringDesc*) &TMP2589));
	nimln(75, "filters.nim");
	result = llstreamopen_160218(((NimStringDesc*) &TMP2589));
	nimln(76, "filters.nim");
	nimln(76, "filters.nim");
	line = rawNewString(80);
	nimln(77, "filters.nim");
	while (1) {
		NIM_BOOL LOC6;
		NimStringDesc* LOC7;
		nimln(77, "filters.nim");
		LOC6 = 0;
		LOC6 = llstreamreadline_160248(stdin_194004, &line);
		if (!LOC6) goto LA5;
		nimln(78, "filters.nim");
		nimln(78, "filters.nim");
		LOC7 = 0;
		LOC7 = nsuReplaceStr(line, sub, by);
		llstreamwriteln_160274(result, LOC7);	} LA5: ;
	nimln(79, "filters.nim");
	llstreamclose_160238(stdin_194004);	popFrame();
	return result;
}N_NOINLINE(void, compilerfiltersInit)(void) {
	nimfr("filters", "filters.nim")
	popFrame();
}

N_NOINLINE(void, compilerfiltersDatInit)(void) {
}
