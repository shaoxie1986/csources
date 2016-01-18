/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct Tnode213790 Tnode213790;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Ttype213828 Ttype213828;
typedef struct Tlineinfo181337 Tlineinfo181337;
typedef struct Tsym213822 Tsym213822;
typedef struct Tident188012 Tident188012;
typedef struct Tnodeseq213784 Tnodeseq213784;
typedef struct Tidobj188006 Tidobj188006;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq213824 Ttypeseq213824;
typedef struct Tscope213816 Tscope213816;
typedef struct TY213925 TY213925;
typedef struct Tstrtable213794 Tstrtable213794;
typedef struct Tsymseq213792 Tsymseq213792;
typedef struct Tloc213804 Tloc213804;
typedef struct Ropeobj168006 Ropeobj168006;
typedef struct Tlib213808 Tlib213808;
typedef struct Cell47704 Cell47704;
typedef struct Cellseq47720 Cellseq47720;
typedef struct Gcheap50018 Gcheap50018;
typedef struct Gcstack50016 Gcstack50016;
typedef struct Cellset47716 Cellset47716;
typedef struct Pagedesc47712 Pagedesc47712;
typedef struct Memregion29888 Memregion29888;
typedef struct Smallchunk29840 Smallchunk29840;
typedef struct Llchunk29882 Llchunk29882;
typedef struct Bigchunk29842 Bigchunk29842;
typedef struct Intset29814 Intset29814;
typedef struct Trunk29810 Trunk29810;
typedef struct Avlnode29886 Avlnode29886;
typedef struct Gcstat50014 Gcstat50014;
typedef struct TY88887 TY88887;
typedef struct Tinstantiation213812 Tinstantiation213812;
typedef struct Tlistentry135010 Tlistentry135010;
typedef struct Basechunk29838 Basechunk29838;
typedef struct Freecell29830 Freecell29830;
typedef struct TY213913 TY213913;
typedef NIM_BOOL TY286048[65];
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tlineinfo181337  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tnode213790  {
Ttype213828* typ;
Tlineinfo181337 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym213822* sym;
} S4;
struct {Tident188012* ident;
} S5;
struct {Tnodeseq213784* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
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
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj188006  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable213794  {
NI counter;
Tsymseq213792* data;
};
struct  Tloc213804  {
NU8 k;
NU8 s;
NU16 flags;
Ttype213828* t;
Ropeobj168006* r;
Ropeobj168006* heaproot;
};
struct  Tsym213822  {
  Tidobj188006 Sup;
NU8 kind;
union{
struct {Ttypeseq213824* typeinstcache;
Tscope213816* typscope;
} S1;
struct {TY213925* procinstcache;
Tsym213822* gcunsafetyreason;
} S2;
struct {TY213925* usedgenerics;
Tstrtable213794 tab;
} S3;
struct {Tsym213822* guard;
NI bitsize;
} S4;
} kindU;
NU8 magic;
Ttype213828* typ;
Tident188012* name;
Tlineinfo181337 info;
Tsym213822* owner;
NU32 flags;
Tnode213790* ast;
NU32 options;
NI position;
NI offset;
Tloc213804 loc;
Tlib213808* annex;
Tnode213790* constraint;
};
struct  Ttype213828  {
  Tidobj188006 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq213824* sons;
Tnode213790* n;
Tsym213822* owner;
Tsym213822* sym;
Tsym213822* destructor;
Tsym213822* deepcopy;
Tsym213822* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc213804 loc;
};
struct  Cell47704  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47720  {
NI len;
NI cap;
Cell47704** d;
};
struct  Cellset47716  {
NI counter;
NI max;
Pagedesc47712* head;
Pagedesc47712** data;
};
typedef Smallchunk29840* TY29903[512];
typedef Trunk29810* Trunkbuckets29812[256];
struct  Intset29814  {
Trunkbuckets29812 data;
};
struct  Memregion29888  {
NI minlargeobj;
NI maxlargeobj;
TY29903 freesmallchunks;
Llchunk29882* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29842* freechunkslist;
Intset29814 chunkstarts;
Avlnode29886* root;
Avlnode29886* deleted;
Avlnode29886* last;
Avlnode29886* freeavlnodes;
};
struct  Gcstat50014  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Gcheap50018  {
Gcstack50016* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47720 zct;
Cellseq47720 decstack;
Cellset47716 cycleroots;
Cellseq47720 tempstack;
NI recgclock;
Memregion29888 region;
Gcstat50014 stat;
};
struct  Tident188012  {
  Tidobj188006 Sup;
NimStringDesc* s;
Tident188012* next;
NI h;
};
struct TY88887 {
NimStringDesc* Field0;
NI Field1;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Tscope213816  {
NI depthlevel;
Tstrtable213794 symbols;
Tnodeseq213784* usingsyms;
Tscope213816* parent;
};
struct  Ropeobj168006  {
  TNimObject Sup;
Ropeobj168006* left;
Ropeobj168006* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry135010  {
  TNimObject Sup;
Tlistentry135010* prev;
Tlistentry135010* next;
};
struct  Tlib213808  {
  Tlistentry135010 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj168006* name;
Tnode213790* path;
};
struct  Gcstack50016  {
Gcstack50016* prev;
Gcstack50016* next;
void* starts;
void* pos;
NI maxstacksize;
};
typedef NI TY29819[8];
struct  Pagedesc47712  {
Pagedesc47712* next;
NI key;
TY29819 bits;
};
struct  Basechunk29838  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29840  {
  Basechunk29838 Sup;
Smallchunk29840* next;
Smallchunk29840* prev;
Freecell29830* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29882  {
NI size;
NI acc;
Llchunk29882* next;
};
struct  Bigchunk29842  {
  Basechunk29838 Sup;
Bigchunk29842* next;
Bigchunk29842* prev;
NI align;
NF data;
};
struct  Trunk29810  {
Trunk29810* next;
NI key;
TY29819 bits;
};
typedef Avlnode29886* TY29893[2];
struct  Avlnode29886  {
TY29893 link;
NI key;
NI upperbound;
NI level;
};
struct  Tinstantiation213812  {
Tsym213822* sym;
Ttypeseq213824* concretetypes;
TY213913* usedby;
NI compilesid;
};
struct  Freecell29830  {
Freecell29830* next;
NI zerofield;
};
struct Tnodeseq213784 {
  TGenericSeq Sup;
  Tnode213790* data[SEQ_DECL_SIZE];
};
struct Ttypeseq213824 {
  TGenericSeq Sup;
  Ttype213828* data[SEQ_DECL_SIZE];
};
struct TY213925 {
  TGenericSeq Sup;
  Tinstantiation213812* data[SEQ_DECL_SIZE];
};
struct Tsymseq213792 {
  TGenericSeq Sup;
  Tsym213822* data[SEQ_DECL_SIZE];
};
struct TY213913 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
static N_INLINE(NIM_BOOL, isatom_218492)(Tnode213790* n);
N_NIMCALL(NU8, isassignable_285808)(Tsym213822* owner, Tnode213790* n, NIM_BOOL isunsafeaddr);
N_NIMCALL(Ttype213828*, skiptypes_217113)(Ttype213828* t, NU64 kinds);
N_NIMCALL(NIM_BOOL, comparetypes_245404)(Ttype213828* x, Ttype213828* y, NU8 cmp, NU8 flags);
N_NIMCALL(NU8, getmagic_238323)(Tnode213790* op);
N_NIMCALL(Tnode213790*, lastson_216364)(Tnode213790* n);
N_NIMCALL(NU8, checkforsideeffects_285650)(Tnode213790* n);
static N_INLINE(NIM_BOOL, isroutine_218397)(Tsym213822* s);
static N_INLINE(NI, len_214059)(Tnode213790* n);
N_NIMCALL(Tnode213790*, newnodei_215248)(NU8 kind, Tlineinfo181337 info);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Cell47704*, usrtocell_51640)(void* usr);
static N_INLINE(void, rtladdzct_53201)(Cell47704* c);
N_NOINLINE(void, addzct_51617)(Cellseq47720* s, Cell47704* c);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(void, compileconstraints_285074)(Tnode213790* p, NimStringDesc** result);
N_NIMCALL(void, patternerror_285030)(Tnode213790* n);
N_NIMCALL(void, localerror_186080)(Tlineinfo181337 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, rendertree_232044)(Tnode213790* n, NU8 renderflags);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(void, add_285034)(NimStringDesc** code, NU8 op);
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* s);
N_NIMCALL(NI, hashString)(NimStringDesc* s);
N_NIMCALL(void, internalerror_186113)(NimStringDesc* errmsg);
N_NIMCALL(NimStringDesc*, HEX24_186183)(TY88887 x);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(NimStringDesc*, reprEnum)(NI e_85209, TNimType* typ);
N_NIMCALL(void, internalerror_186100)(Tlineinfo181337 info, NimStringDesc* errmsg);
STRING_LITERAL(TMP3287, "|", 1);
STRING_LITERAL(TMP3288, "&", 1);
STRING_LITERAL(TMP3289, "~", 1);
STRING_LITERAL(TMP3290, "atom", 4);
STRING_LITERAL(TMP3291, "lit", 3);
STRING_LITERAL(TMP3292, "sym", 3);
STRING_LITERAL(TMP3293, "ident", 5);
STRING_LITERAL(TMP3294, "call", 4);
STRING_LITERAL(TMP3295, "alias", 5);
STRING_LITERAL(TMP3296, "noalias", 7);
STRING_LITERAL(TMP3297, "lvalue", 6);
STRING_LITERAL(TMP3298, "local", 5);
STRING_LITERAL(TMP3299, "sideeffect", 10);
STRING_LITERAL(TMP3300, "nosideeffect", 12);
STRING_LITERAL(TMP3302, "compiler/parampatterns.nim", 26);
NIM_CONST TY88887 TMP3301 = {((NimStringDesc*) &TMP3302),
((NI) 100)}
;
NIM_CONST TY88887 TMP3303 = {((NimStringDesc*) &TMP3302),
((NI) 107)}
;
STRING_LITERAL(TMP3304, "parameter pattern too complex", 29);
extern Gcheap50018 gch_50059;
extern TNimType NTI213435; /* TSymKind */
extern TNimType NTI213020; /* TNodeKind */

static N_INLINE(NIM_BOOL, isatom_218492)(Tnode213790* n) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = (((NU8) 0) <= (*n).kind);
	if (!(LOC1)) goto LA2;
	LOC1 = ((*n).kind <= ((NU8) 23));
	LA2: ;
	result = LOC1;
	return result;
}

N_NIMCALL(NU8, isassignable_285808)(Tsym213822* owner, Tnode213790* n, NIM_BOOL isunsafeaddr) {
	NU8 result;
	result = 0;
	result = ((NU8) 0);
	switch ((*n).kind) {
	case ((NU8) 3):
	{
		NU32 kinds;
		{
			if (!isunsafeaddr) goto LA4;
			kinds = 2856;
		}
		goto LA2;
		LA4: ;
		{
			kinds = 2336;
		}
		LA2: ;
		{
			if (!((kinds &(1U<<((NU)((*(*n).kindU.S4.sym).kind)&31U)))!=0)) goto LA9;
			{
				NIM_BOOL LOC13;
				NIM_BOOL LOC14;
				LOC13 = 0;
				LOC14 = 0;
				LOC14 = !((owner == NIM_NIL));
				if (!(LOC14)) goto LA15;
				LOC14 = ((*owner).Sup.id == (*(*(*n).kindU.S4.sym).owner).Sup.id);
				LA15: ;
				LOC13 = LOC14;
				if (!(LOC13)) goto LA16;
				LOC13 = !((((*(*n).kindU.S4.sym).flags &(1U<<((NU)(((NU8) 3))&31U)))!=0));
				LA16: ;
				if (!LOC13) goto LA17;
				result = ((NU8) 2);
			}
			goto LA11;
			LA17: ;
			{
				result = ((NU8) 1);
			}
			LA11: ;
		}
		goto LA7;
		LA9: ;
		{
			NIM_BOOL LOC21;
			LOC21 = 0;
			LOC21 = ((*(*n).kindU.S4.sym).kind == ((NU8) 3));
			if (!(LOC21)) goto LA22;
			LOC21 = ((*(*(*n).kindU.S4.sym).typ).kind == ((NU8) 23));
			LA22: ;
			if (!LOC21) goto LA23;
			result = ((NU8) 1);
		}
		goto LA7;
		LA23: ;
		{
			Ttype213828* t;
			if (!((*(*n).kindU.S4.sym).kind == ((NU8) 7))) goto LA26;
			t = skiptypes_217113((*(*n).kindU.S4.sym).typ, 256);
			{
				if (!((*t).kind == ((NU8) 23))) goto LA30;
				result = ((NU8) 4);
			}
			LA30: ;
		}
		goto LA7;
		LA26: ;
		LA7: ;
	}
	break;
	case ((NU8) 45):
	{
		{
			Ttype213828* LOC35;
			LOC35 = 0;
			LOC35 = skiptypes_217113((*(*n).kindU.S6.sons->data[((NI) 0)]).typ, IL64(211106232576000));
			if (!((14680064 &((NU64)1<<((NU)((*LOC35).kind)&63U)))!=0)) goto LA36;
			result = ((NU8) 1);
		}
		goto LA33;
		LA36: ;
		{
			result = isassignable_285808(owner, (*n).kindU.S6.sons->data[((NI) 0)], isunsafeaddr);
		}
		LA33: ;
		{
			NIM_BOOL LOC41;
			LOC41 = 0;
			LOC41 = !((result == ((NU8) 0)));
			if (!(LOC41)) goto LA42;
			LOC41 = (((*(*(*n).kindU.S6.sons->data[((NI) 1)]).kindU.S4.sym).flags &(1U<<((NU)(((NU8) 18))&31U)))!=0);
			LA42: ;
			if (!LOC41) goto LA43;
			result = ((NU8) 3);
		}
		LA43: ;
	}
	break;
	case ((NU8) 42):
	{
		{
			Ttype213828* LOC48;
			LOC48 = 0;
			LOC48 = skiptypes_217113((*(*n).kindU.S6.sons->data[((NI) 0)]).typ, IL64(211106232576000));
			if (!((14680064 &((NU64)1<<((NU)((*LOC48).kind)&63U)))!=0)) goto LA49;
			result = ((NU8) 1);
		}
		goto LA46;
		LA49: ;
		{
			result = isassignable_285808(owner, (*n).kindU.S6.sons->data[((NI) 0)], isunsafeaddr);
		}
		LA46: ;
	}
	break;
	case ((NU8) 58):
	case ((NU8) 59):
	case ((NU8) 60):
	{
		{
			Ttype213828* LOC55;
			LOC55 = 0;
			LOC55 = skiptypes_217113((*n).typ, IL64(211106247256064));
			if (!((134610944 &((NU64)1<<((NU)((*LOC55).kind)&63U)))!=0)) goto LA56;
			result = isassignable_285808(owner, (*n).kindU.S6.sons->data[((NI) 1)], isunsafeaddr);
		}
		goto LA53;
		LA56: ;
		{
			NIM_BOOL LOC59;
			LOC59 = 0;
			LOC59 = comparetypes_245404((*n).typ, (*(*n).kindU.S6.sons->data[((NI) 1)]).typ, ((NU8) 1), 0);
			if (!LOC59) goto LA60;
			result = isassignable_285808(owner, (*n).kindU.S6.sons->data[((NI) 1)], isunsafeaddr);
		}
		goto LA53;
		LA60: ;
		LA53: ;
	}
	break;
	case ((NU8) 65):
	case ((NU8) 47):
	case ((NU8) 64):
	{
		result = ((NU8) 1);
	}
	break;
	case ((NU8) 67):
	case ((NU8) 66):
	case ((NU8) 46):
	{
		result = isassignable_285808(owner, (*n).kindU.S6.sons->data[((NI) 0)], isunsafeaddr);
	}
	break;
	case ((NU8) 27):
	case ((NU8) 29):
	case ((NU8) 30):
	case ((NU8) 31):
	case ((NU8) 26):
	case ((NU8) 28):
	case ((NU8) 32):
	{
		{
			NU8 LOC67;
			LOC67 = 0;
			LOC67 = getmagic_238323(n);
			if (!(LOC67 == ((NU8) 4) || LOC67 == ((NU8) 138))) goto LA68;
			result = isassignable_285808(owner, (*n).kindU.S6.sons->data[((NI) 1)], isunsafeaddr);
		}
		LA68: ;
	}
	break;
	case ((NU8) 115):
	case ((NU8) 126):
	{
		{
			Tnode213790* LOC75;
			if (!!(((*n).typ == NIM_NIL))) goto LA73;
			LOC75 = 0;
			LOC75 = lastson_216364(n);
			result = isassignable_285808(owner, LOC75, isunsafeaddr);
		}
		LA73: ;
	}
	break;
	default:
	{
	}
	break;
	}
	return result;
}

static N_INLINE(NIM_BOOL, isroutine_218397)(Tsym213822* s) {
	NIM_BOOL result;
	result = 0;
	result = ((258048 &(1U<<((NU)((*s).kind)&31U)))!=0);
	return result;
}

static N_INLINE(NI, len_214059)(Tnode213790* n) {
	NI result;
	result = 0;
	{
		if (!(*n).kindU.S6.sons == 0) goto LA3;
		result = ((NI) 0);
	}
	goto LA1;
	LA3: ;
	{
		result = ((*n).kindU.S6.sons ? (*n).kindU.S6.sons->Sup.len : 0);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NU8, checkforsideeffects_285650)(Tnode213790* n) {
	NU8 result;
{	result = 0;
	switch ((*n).kind) {
	case ((NU8) 27):
	case ((NU8) 29):
	case ((NU8) 30):
	case ((NU8) 31):
	case ((NU8) 26):
	case ((NU8) 28):
	case ((NU8) 32):
	{
		Tnode213790* op;
		op = (*n).kindU.S6.sons->data[((NI) 0)];
		{
			NIM_BOOL LOC4;
			Tsym213822* s;
			LOC4 = 0;
			LOC4 = ((*op).kind == ((NU8) 3));
			if (!(LOC4)) goto LA5;
			LOC4 = isroutine_218397((*op).kindU.S4.sym);
			LA5: ;
			if (!LOC4) goto LA6;
			s = (*op).kindU.S4.sym;
			{
				if (!(((*s).flags &(1U<<((NU)(((NU8) 11))&31U)))!=0)) goto LA10;
				result = ((NU8) 1);
				goto BeforeRet;
			}
			LA10: ;
			result = ((NU8) 2);
		}
		goto LA2;
		LA6: ;
		{
			if (!(((*(*op).typ).flags &(1U<<((NU)(((NU8) 1))&31U)))!=0)) goto LA13;
			result = ((NU8) 2);
		}
		goto LA2;
		LA13: ;
		{
			result = ((NU8) 1);
			goto BeforeRet;
		}
		LA2: ;
		{
			NI i_285707;
			NI HEX3Atmp_285786;
			NI LOC17;
			NI res_285789;
			i_285707 = 0;
			HEX3Atmp_285786 = 0;
			LOC17 = 0;
			LOC17 = len_214059(n);
			HEX3Atmp_285786 = (LOC17 - 1);
			res_285789 = ((NI) 0);
			{
				while (1) {
					NU8 ret;
					if (!(res_285789 <= HEX3Atmp_285786)) goto LA19;
					i_285707 = res_285789;
					ret = checkforsideeffects_285650((*n).kindU.S6.sons->data[i_285707]);
					{
						if (!(ret == ((NU8) 1))) goto LA22;
						result = ret;
						goto BeforeRet;
					}
					goto LA20;
					LA22: ;
					{
						NIM_BOOL LOC25;
						LOC25 = 0;
						LOC25 = (ret == ((NU8) 0));
						if (!(LOC25)) goto LA26;
						LOC25 = (result == ((NU8) 2));
						LA26: ;
						if (!LOC25) goto LA27;
						result = ((NU8) 0);
					}
					goto LA20;
					LA27: ;
					LA20: ;
					res_285789 += ((NI) 1);
				} LA19: ;
			}
		}
	}
	break;
	case ((NU8) 0) ... ((NU8) 23):
	{
		result = ((NU8) 2);
	}
	break;
	default:
	{
		result = ((NU8) 2);
		{
			NI i_285755;
			NI HEX3Atmp_285794;
			NI LOC32;
			NI res_285797;
			i_285755 = 0;
			HEX3Atmp_285794 = 0;
			LOC32 = 0;
			LOC32 = len_214059(n);
			HEX3Atmp_285794 = (LOC32 - 1);
			res_285797 = ((NI) 0);
			{
				while (1) {
					NU8 ret;
					if (!(res_285797 <= HEX3Atmp_285794)) goto LA34;
					i_285755 = res_285797;
					ret = checkforsideeffects_285650((*n).kindU.S6.sons->data[i_285755]);
					{
						if (!(ret == ((NU8) 1))) goto LA37;
						result = ret;
						goto BeforeRet;
					}
					goto LA35;
					LA37: ;
					{
						NIM_BOOL LOC40;
						LOC40 = 0;
						LOC40 = (ret == ((NU8) 0));
						if (!(LOC40)) goto LA41;
						LOC40 = (result == ((NU8) 2));
						LA41: ;
						if (!LOC40) goto LA42;
						result = ((NU8) 0);
					}
					goto LA35;
					LA42: ;
					LA35: ;
					res_285797 += ((NI) 1);
				} LA34: ;
			}
		}
	}
	break;
	}
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, matchnodekinds_286042)(Tnode213790* p, Tnode213790* n) {
	NIM_BOOL result;
	TY286048 stack;
	NI sp;
	NimStringDesc* code;
	NI pc;
	result = 0;
	stack[(((NI) 0))- 0] = NIM_TRUE;
	sp = ((NI) 1);
	code = (*p).kindU.S3.strval;
	pc = ((NI) 1);
	{
		while (1) {
			switch (((NU8) (((NU8)(code->data[pc]))))) {
			case ((NU8) 1):
			{
				goto LA1;
			}
			break;
			case ((NU8) 2):
			{
				NIM_BOOL LOC5;
				LOC5 = 0;
				LOC5 = stack[((NI)(sp - ((NI) 1)))- 0];
				if (LOC5) goto LA6;
				LOC5 = stack[((NI)(sp - ((NI) 2)))- 0];
				LA6: ;
				stack[((NI)(sp - ((NI) 2)))- 0] = LOC5;
				sp -= ((NI) 1);
			}
			break;
			case ((NU8) 3):
			{
				NIM_BOOL LOC8;
				LOC8 = 0;
				LOC8 = stack[((NI)(sp - ((NI) 1)))- 0];
				if (!(LOC8)) goto LA9;
				LOC8 = stack[((NI)(sp - ((NI) 2)))- 0];
				LA9: ;
				stack[((NI)(sp - ((NI) 2)))- 0] = LOC8;
				sp -= ((NI) 1);
			}
			break;
			case ((NU8) 4):
			{
				stack[((NI)(sp - ((NI) 1)))- 0] = !(stack[((NI)(sp - ((NI) 1)))- 0]);
			}
			break;
			case ((NU8) 5):
			{
				stack[(sp)- 0] = ((*n).kind == ((NU8) 3));
				sp += ((NI) 1);
			}
			break;
			case ((NU8) 6):
			{
				stack[(sp)- 0] = isatom_218492(n);
				sp += ((NI) 1);
			}
			break;
			case ((NU8) 7):
			{
				stack[(sp)- 0] = ((*n).kind >= ((NU8) 5) && (*n).kind <= ((NU8) 23));
				sp += ((NI) 1);
			}
			break;
			case ((NU8) 8):
			{
				stack[(sp)- 0] = ((*n).kind == ((NU8) 2));
				sp += ((NI) 1);
			}
			break;
			case ((NU8) 9):
			{
				stack[(sp)- 0] = ((*n).kind == ((NU8) 27) || (*n).kind == ((NU8) 29) || (*n).kind == ((NU8) 30) || (*n).kind == ((NU8) 31) || (*n).kind == ((NU8) 26) || (*n).kind == ((NU8) 28) || (*n).kind == ((NU8) 32));
				sp += ((NI) 1);
			}
			break;
			case ((NU8) 10):
			{
				NU8 kind;
				NIM_BOOL LOC17;
				kind = ((NU8) (((NU8)(code->data[(NI)(pc + ((NI) 1))]))));
				LOC17 = 0;
				LOC17 = ((*n).kind == ((NU8) 3));
				if (!(LOC17)) goto LA18;
				LOC17 = ((*(*n).kindU.S4.sym).kind == kind);
				LA18: ;
				stack[(sp)- 0] = LOC17;
				sp += ((NI) 1);
				pc += ((NI) 1);
			}
			break;
			case ((NU8) 11):
			{
				NU8 kind;
				kind = ((NU8) (((NU8)(code->data[(NI)(pc + ((NI) 1))]))));
				stack[(sp)- 0] = ((*n).kind == kind);
				sp += ((NI) 1);
				pc += ((NI) 1);
			}
			break;
			case ((NU8) 12):
			{
				NU8 LOC21;
				LOC21 = 0;
				LOC21 = isassignable_285808(NIM_NIL, n, NIM_FALSE);
				stack[(sp)- 0] = ((6 &(1U<<((NU)(LOC21)&7U)))!=0);
				sp += ((NI) 1);
			}
			break;
			case ((NU8) 13):
			{
				NU8 LOC23;
				LOC23 = 0;
				LOC23 = isassignable_285808(NIM_NIL, n, NIM_FALSE);
				stack[(sp)- 0] = (LOC23 == ((NU8) 2));
				sp += ((NI) 1);
			}
			break;
			case ((NU8) 14):
			{
				NU8 LOC25;
				LOC25 = 0;
				LOC25 = checkforsideeffects_285650(n);
				stack[(sp)- 0] = (LOC25 == ((NU8) 1));
				sp += ((NI) 1);
			}
			break;
			case ((NU8) 15):
			{
				NU8 LOC27;
				LOC27 = 0;
				LOC27 = checkforsideeffects_285650(n);
				stack[(sp)- 0] = !((LOC27 == ((NU8) 1)));
				sp += ((NI) 1);
			}
			break;
			}
			pc += ((NI) 1);
		}
	} LA1: ;
	result = stack[((NI)(sp - ((NI) 1)))- 0];
	return result;
}

N_NIMCALL(NIM_BOOL, islvalue_286027)(Tnode213790* n) {
	NIM_BOOL result;
	NU8 LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = isassignable_285808(NIM_NIL, n, NIM_FALSE);
	result = ((22 &(1U<<((NU)(LOC1)&7U)))!=0);
	return result;
}

static N_INLINE(Cell47704*, usrtocell_51640)(void* usr) {
	Cell47704* result;
	result = 0;
	result = ((Cell47704*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Cell47704))))));
	return result;
}

static N_INLINE(void, rtladdzct_53201)(Cell47704* c) {
	addzct_51617((&gch_50059.zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Cell47704* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_51640(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell47704* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_51640((*dest));
		{
			(*c).refcount -= ((NI) 8);
			if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_53201(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(void, patternerror_285030)(Tnode213790* n) {
	NimStringDesc* LOC1;
	LOC1 = 0;
	LOC1 = rendertree_232044(n, 4);
	localerror_186080((*n).info, ((NU16) 1), LOC1);
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NIM_BOOL LOC11;
	int LOC13;
{	result = 0;
	{
		if (!(a == b)) goto LA3;
		result = NIM_TRUE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (a == NIM_NIL);
		if (LOC7) goto LA8;
		LOC7 = (b == NIM_NIL);
		LA8: ;
		if (!LOC7) goto LA9;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA9: ;
	LOC11 = 0;
	LOC11 = ((*a).Sup.len == (*b).Sup.len);
	if (!(LOC11)) goto LA12;
	LOC13 = 0;
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (*a).Sup.len);
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

static N_INLINE(void, add_285034)(NimStringDesc** code, NU8 op) {
	(*code) = addChar((*code), ((NIM_CHAR) (((NI) (op)))));
}

N_NIMCALL(void, compileconstraints_285074)(Tnode213790* p, NimStringDesc** result) {
{	switch ((*p).kind) {
	case ((NU8) 27):
	case ((NU8) 29):
	case ((NU8) 30):
	case ((NU8) 31):
	case ((NU8) 26):
	case ((NU8) 28):
	case ((NU8) 32):
	{
		Tident188012* op;
		{
			if (!!(((*(*p).kindU.S6.sons->data[((NI) 0)]).kind == ((NU8) 2)))) goto LA4;
			patternerror_285030((*p).kindU.S6.sons->data[((NI) 0)]);
			goto BeforeRet;
		}
		LA4: ;
		op = (*(*p).kindU.S6.sons->data[((NI) 0)]).kindU.S5.ident;
		{
			NI LOC8;
			LOC8 = 0;
			LOC8 = len_214059(p);
			if (!(LOC8 == ((NI) 3))) goto LA9;
			{
				NIM_BOOL LOC13;
				LOC13 = 0;
				LOC13 = eqStrings((*op).s, ((NimStringDesc*) &TMP3287));
				if (LOC13) goto LA14;
				LOC13 = ((*op).Sup.id == ((NI) 49));
				LA14: ;
				if (!LOC13) goto LA15;
				compileconstraints_285074((*p).kindU.S6.sons->data[((NI) 1)], result);
				compileconstraints_285074((*p).kindU.S6.sons->data[((NI) 2)], result);
				add_285034(result, ((NU8) 2));
			}
			goto LA11;
			LA15: ;
			{
				NIM_BOOL LOC18;
				LOC18 = 0;
				LOC18 = eqStrings((*op).s, ((NimStringDesc*) &TMP3288));
				if (LOC18) goto LA19;
				LOC18 = ((*op).Sup.id == ((NI) 2));
				LA19: ;
				if (!LOC18) goto LA20;
				compileconstraints_285074((*p).kindU.S6.sons->data[((NI) 1)], result);
				compileconstraints_285074((*p).kindU.S6.sons->data[((NI) 2)], result);
				add_285034(result, ((NU8) 3));
			}
			goto LA11;
			LA20: ;
			{
				patternerror_285030(p);
			}
			LA11: ;
		}
		goto LA6;
		LA9: ;
		{
			NIM_BOOL LOC24;
			NI LOC25;
			NIM_BOOL LOC27;
			LOC24 = 0;
			LOC25 = 0;
			LOC25 = len_214059(p);
			LOC24 = (LOC25 == ((NI) 2));
			if (!(LOC24)) goto LA26;
			LOC27 = 0;
			LOC27 = eqStrings((*op).s, ((NimStringDesc*) &TMP3289));
			if (LOC27) goto LA28;
			LOC27 = ((*op).Sup.id == ((NI) 45));
			LA28: ;
			LOC24 = LOC27;
			LA26: ;
			if (!LOC24) goto LA29;
			compileconstraints_285074((*p).kindU.S6.sons->data[((NI) 1)], result);
			add_285034(result, ((NU8) 4));
		}
		goto LA6;
		LA29: ;
		{
			patternerror_285030(p);
		}
		LA6: ;
	}
	break;
	case ((NU8) 53):
	case ((NU8) 37):
	{
		{
			NI LOC35;
			LOC35 = 0;
			LOC35 = len_214059(p);
			if (!(LOC35 == ((NI) 1))) goto LA36;
			compileconstraints_285074((*p).kindU.S6.sons->data[((NI) 0)], result);
		}
		goto LA33;
		LA36: ;
		{
			patternerror_285030(p);
		}
		LA33: ;
	}
	break;
	case ((NU8) 2):
	{
		NimStringDesc* spec;
		spec = nsuNormalize((*(*p).kindU.S5.ident).s);
		switch (hashString(spec) & 15) {
		case 2: 
if (eqStrings(spec, ((NimStringDesc*) &TMP3300))) goto LA50;
break;
		case 4: 
if (eqStrings(spec, ((NimStringDesc*) &TMP3292))) goto LA42;
if (eqStrings(spec, ((NimStringDesc*) &TMP3297))) goto LA47;
if (eqStrings(spec, ((NimStringDesc*) &TMP3299))) goto LA49;
break;
		case 6: 
if (eqStrings(spec, ((NimStringDesc*) &TMP3293))) goto LA43;
break;
		case 10: 
if (eqStrings(spec, ((NimStringDesc*) &TMP3296))) goto LA46;
break;
		case 11: 
if (eqStrings(spec, ((NimStringDesc*) &TMP3290))) goto LA40;
break;
		case 12: 
if (eqStrings(spec, ((NimStringDesc*) &TMP3291))) goto LA41;
break;
		case 13: 
if (eqStrings(spec, ((NimStringDesc*) &TMP3294))) goto LA44;
break;
		case 14: 
if (eqStrings(spec, ((NimStringDesc*) &TMP3295))) goto LA45;
if (eqStrings(spec, ((NimStringDesc*) &TMP3298))) goto LA48;
break;
		}
		goto LA51;
		LA40: ;
		{
			add_285034(result, ((NU8) 6));
		}
		goto LA52;
		LA41: ;
		{
			add_285034(result, ((NU8) 7));
		}
		goto LA52;
		LA42: ;
		{
			add_285034(result, ((NU8) 5));
		}
		goto LA52;
		LA43: ;
		{
			add_285034(result, ((NU8) 8));
		}
		goto LA52;
		LA44: ;
		{
			add_285034(result, ((NU8) 9));
		}
		goto LA52;
		LA45: ;
		{
			(*result)->data[((NI) 0)] = 2;
		}
		goto LA52;
		LA46: ;
		{
			(*result)->data[((NI) 0)] = 3;
		}
		goto LA52;
		LA47: ;
		{
			add_285034(result, ((NU8) 12));
		}
		goto LA52;
		LA48: ;
		{
			add_285034(result, ((NU8) 13));
		}
		goto LA52;
		LA49: ;
		{
			add_285034(result, ((NU8) 14));
		}
		goto LA52;
		LA50: ;
		{
			add_285034(result, ((NU8) 15));
		}
		goto LA52;
		LA51: ;
		{
			{
				NimStringDesc* LOC69;
				if (!NIM_FALSE) goto LA67;
				LOC69 = 0;
				LOC69 = HEX24_186183(TMP3301);
				internalerror_186113(LOC69);
			}
			LA67: ;
			{
				NU8 i_285214;
				NI res_285435;
				i_285214 = 0;
				res_285435 = ((NI) 0);
				{
					while (1) {
						if (!(res_285435 <= ((NI) 24))) goto LA72;
						i_285214 = ((NU8) (res_285435));
						{
							NimStringDesc* LOC75;
							NI LOC76;
							LOC75 = 0;
							LOC75 = copyStr(reprEnum(i_285214, (&NTI213435)), ((NI) 2));
							LOC76 = 0;
							LOC76 = nsuCmpIgnoreStyle(LOC75, spec);
							if (!(LOC76 == ((NI) 0))) goto LA77;
							add_285034(result, ((NU8) 10));
							(*result) = addChar((*result), ((NIM_CHAR) (((NI) (i_285214)))));
							goto BeforeRet;
						}
						LA77: ;
						res_285435 += ((NI) 1);
					} LA72: ;
				}
			}
			{
				NimStringDesc* LOC83;
				if (!NIM_FALSE) goto LA81;
				LOC83 = 0;
				LOC83 = HEX24_186183(TMP3303);
				internalerror_186113(LOC83);
			}
			LA81: ;
			{
				NU8 i_285414;
				NI res_285443;
				i_285414 = 0;
				res_285443 = ((NI) 0);
				{
					while (1) {
						if (!(res_285443 <= ((NI) 158))) goto LA86;
						i_285414 = ((NU8) (res_285443));
						{
							NI LOC89;
							LOC89 = 0;
							LOC89 = nsuCmpIgnoreStyle(reprEnum(i_285414, (&NTI213020)), spec);
							if (!(LOC89 == ((NI) 0))) goto LA90;
							add_285034(result, ((NU8) 11));
							(*result) = addChar((*result), ((NIM_CHAR) (((NI) (i_285414)))));
							goto BeforeRet;
						}
						LA90: ;
						res_285443 += ((NI) 1);
					} LA86: ;
				}
			}
			patternerror_285030(p);
		}
		LA52: ;
	}
	break;
	default:
	{
		patternerror_285030(p);
	}
	break;
	}
	}BeforeRet: ;
}

N_NIMCALL(Tnode213790*, semnodekindconstraints_285446)(Tnode213790* p) {
	Tnode213790* result;
	result = 0;
	result = newnodei_215248(((NU8) 20), (*p).info);
	asgnRefNoCycle((void**) (&(*result).kindU.S3.strval), rawNewString(((NI) 10)));
	(*result).kindU.S3.strval = addChar((*result).kindU.S3.strval, 1);
	{
		NI LOC3;
		LOC3 = 0;
		LOC3 = len_214059(p);
		if (!(((NI) 2) <= LOC3)) goto LA4;
		{
			NI i_285630;
			NI HEX3Atmp_285638;
			NI LOC7;
			NI res_285641;
			i_285630 = 0;
			HEX3Atmp_285638 = 0;
			LOC7 = 0;
			LOC7 = len_214059(p);
			HEX3Atmp_285638 = (LOC7 - 1);
			res_285641 = ((NI) 1);
			{
				while (1) {
					if (!(res_285641 <= HEX3Atmp_285638)) goto LA9;
					i_285630 = res_285641;
					compileconstraints_285074((*p).kindU.S6.sons->data[i_285630], (&(*result).kindU.S3.strval));
					res_285641 += ((NI) 1);
				} LA9: ;
			}
		}
		{
			if (!(((NI) 63) < ((*result).kindU.S3.strval ? (*result).kindU.S3.strval->Sup.len : 0))) goto LA12;
			internalerror_186100((*p).info, ((NimStringDesc*) &TMP3304));
		}
		LA12: ;
	}
	goto LA1;
	LA4: ;
	{
		patternerror_285030(p);
	}
	LA1: ;
	add_285034((&(*result).kindU.S3.strval), ((NU8) 1));
	return result;
}

N_NIMCALL(NU8, whichalias_285047)(Tsym213822* p) {
	NU8 result;
	result = 0;
	{
		if (!!(((*p).constraint == NIM_NIL))) goto LA3;
		result = ((NU8) (((NU8)((*(*p).constraint).kindU.S3.strval->data[((NI) 0)]))));
	}
	goto LA1;
	LA3: ;
	{
		result = ((NU8) 1);
	}
	LA1: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_parampatternsInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_parampatternsDatInit000)(void) {
}

