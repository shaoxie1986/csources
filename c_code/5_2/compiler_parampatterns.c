/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct Tnode214790 Tnode214790;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Ttype214828 Ttype214828;
typedef struct Tlineinfo182337 Tlineinfo182337;
typedef struct Tsym214822 Tsym214822;
typedef struct Tident189012 Tident189012;
typedef struct Tnodeseq214784 Tnodeseq214784;
typedef struct Tidobj189006 Tidobj189006;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq214824 Ttypeseq214824;
typedef struct Tscope214816 Tscope214816;
typedef struct TY214925 TY214925;
typedef struct Tstrtable214794 Tstrtable214794;
typedef struct Tsymseq214792 Tsymseq214792;
typedef struct Tloc214804 Tloc214804;
typedef struct Ropeobj169006 Ropeobj169006;
typedef struct Tlib214808 Tlib214808;
typedef struct Cell47505 Cell47505;
typedef struct Cellseq47521 Cellseq47521;
typedef struct Gcheap49818 Gcheap49818;
typedef struct Gcstack49816 Gcstack49816;
typedef struct Cellset47517 Cellset47517;
typedef struct Pagedesc47513 Pagedesc47513;
typedef struct Memregion29688 Memregion29688;
typedef struct Smallchunk29640 Smallchunk29640;
typedef struct Llchunk29682 Llchunk29682;
typedef struct Bigchunk29642 Bigchunk29642;
typedef struct Intset29614 Intset29614;
typedef struct Trunk29610 Trunk29610;
typedef struct Avlnode29686 Avlnode29686;
typedef struct Gcstat49814 Gcstat49814;
typedef struct TY88487 TY88487;
typedef struct Tinstantiation214812 Tinstantiation214812;
typedef struct Tlistentry135010 Tlistentry135010;
typedef struct Basechunk29638 Basechunk29638;
typedef struct Freecell29630 Freecell29630;
typedef struct TY214913 TY214913;
typedef NIM_BOOL TY287048[65];
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tlineinfo182337  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tnode214790  {
Ttype214828* typ;
Tlineinfo182337 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym214822* sym;
} S4;
struct {Tident189012* ident;
} S5;
struct {Tnodeseq214784* sons;
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
struct  Tidobj189006  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable214794  {
NI counter;
Tsymseq214792* data;
};
struct  Tloc214804  {
NU8 k;
NU8 s;
NU16 flags;
Ttype214828* t;
Ropeobj169006* r;
Ropeobj169006* heaproot;
};
struct  Tsym214822  {
  Tidobj189006 Sup;
NU8 kind;
union{
struct {Ttypeseq214824* typeinstcache;
Tscope214816* typscope;
} S1;
struct {TY214925* procinstcache;
Tsym214822* gcunsafetyreason;
} S2;
struct {TY214925* usedgenerics;
Tstrtable214794 tab;
} S3;
struct {Tsym214822* guard;
NI bitsize;
} S4;
} kindU;
NU8 magic;
Ttype214828* typ;
Tident189012* name;
Tlineinfo182337 info;
Tsym214822* owner;
NU32 flags;
Tnode214790* ast;
NU32 options;
NI position;
NI offset;
Tloc214804 loc;
Tlib214808* annex;
Tnode214790* constraint;
};
struct  Ttype214828  {
  Tidobj189006 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq214824* sons;
Tnode214790* n;
Tsym214822* owner;
Tsym214822* sym;
Tsym214822* destructor;
Tsym214822* deepcopy;
Tsym214822* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc214804 loc;
};
struct  Cell47505  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47521  {
NI len;
NI cap;
Cell47505** d;
};
struct  Cellset47517  {
NI counter;
NI max;
Pagedesc47513* head;
Pagedesc47513** data;
};
typedef Smallchunk29640* TY29703[512];
typedef Trunk29610* Trunkbuckets29612[256];
struct  Intset29614  {
Trunkbuckets29612 data;
};
struct  Memregion29688  {
NI minlargeobj;
NI maxlargeobj;
TY29703 freesmallchunks;
Llchunk29682* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29642* freechunkslist;
Intset29614 chunkstarts;
Avlnode29686* root;
Avlnode29686* deleted;
Avlnode29686* last;
Avlnode29686* freeavlnodes;
};
struct  Gcstat49814  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Gcheap49818  {
Gcstack49816* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47521 zct;
Cellseq47521 decstack;
Cellset47517 cycleroots;
Cellseq47521 tempstack;
NI recgclock;
Memregion29688 region;
Gcstat49814 stat;
};
struct  Tident189012  {
  Tidobj189006 Sup;
NimStringDesc* s;
Tident189012* next;
NI h;
};
struct TY88487 {
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
struct  Tscope214816  {
NI depthlevel;
Tstrtable214794 symbols;
Tnodeseq214784* usingsyms;
Tscope214816* parent;
};
struct  Ropeobj169006  {
  TNimObject Sup;
Ropeobj169006* left;
Ropeobj169006* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry135010  {
  TNimObject Sup;
Tlistentry135010* prev;
Tlistentry135010* next;
};
struct  Tlib214808  {
  Tlistentry135010 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj169006* name;
Tnode214790* path;
};
struct  Gcstack49816  {
Gcstack49816* prev;
Gcstack49816* next;
void* starts;
void* pos;
NI maxstacksize;
};
typedef NI TY29619[8];
struct  Pagedesc47513  {
Pagedesc47513* next;
NI key;
TY29619 bits;
};
struct  Basechunk29638  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29640  {
  Basechunk29638 Sup;
Smallchunk29640* next;
Smallchunk29640* prev;
Freecell29630* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29682  {
NI size;
NI acc;
Llchunk29682* next;
};
struct  Bigchunk29642  {
  Basechunk29638 Sup;
Bigchunk29642* next;
Bigchunk29642* prev;
NI align;
NF data;
};
struct  Trunk29610  {
Trunk29610* next;
NI key;
TY29619 bits;
};
typedef Avlnode29686* TY29693[2];
struct  Avlnode29686  {
TY29693 link;
NI key;
NI upperbound;
NI level;
};
struct  Tinstantiation214812  {
Tsym214822* sym;
Ttypeseq214824* concretetypes;
TY214913* usedby;
NI compilesid;
};
struct  Freecell29630  {
Freecell29630* next;
NI zerofield;
};
struct Tnodeseq214784 {
  TGenericSeq Sup;
  Tnode214790* data[SEQ_DECL_SIZE];
};
struct Ttypeseq214824 {
  TGenericSeq Sup;
  Ttype214828* data[SEQ_DECL_SIZE];
};
struct TY214925 {
  TGenericSeq Sup;
  Tinstantiation214812* data[SEQ_DECL_SIZE];
};
struct Tsymseq214792 {
  TGenericSeq Sup;
  Tsym214822* data[SEQ_DECL_SIZE];
};
struct TY214913 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
static N_INLINE(NIM_BOOL, isatom_219492)(Tnode214790* n);
N_NIMCALL(NU8, isassignable_286808)(Tsym214822* owner, Tnode214790* n, NIM_BOOL isunsafeaddr);
N_NIMCALL(Ttype214828*, skiptypes_218113)(Ttype214828* t, NU64 kinds);
N_NIMCALL(NIM_BOOL, comparetypes_246404)(Ttype214828* x, Ttype214828* y, NU8 cmp, NU8 flags);
N_NIMCALL(NU8, getmagic_239323)(Tnode214790* op);
N_NIMCALL(Tnode214790*, lastson_217364)(Tnode214790* n);
N_NIMCALL(NU8, checkforsideeffects_286650)(Tnode214790* n);
static N_INLINE(NIM_BOOL, isroutine_219397)(Tsym214822* s);
static N_INLINE(NI, len_215059)(Tnode214790* n);
N_NIMCALL(Tnode214790*, newnodei_216248)(NU8 kind, Tlineinfo182337 info);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Cell47505*, usrtocell_51440)(void* usr);
static N_INLINE(void, rtladdzct_53001)(Cell47505* c);
N_NOINLINE(void, addzct_51417)(Cellseq47521* s, Cell47505* c);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(void, compileconstraints_286074)(Tnode214790* p, NimStringDesc** result);
N_NIMCALL(void, patternerror_286030)(Tnode214790* n);
N_NIMCALL(void, localerror_187080)(Tlineinfo182337 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, rendertree_233044)(Tnode214790* n, NU8 renderflags);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(void, add_286034)(NimStringDesc** code, NU8 op);
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* s);
N_NIMCALL(NI, hashString)(NimStringDesc* s);
N_NIMCALL(void, internalerror_187113)(NimStringDesc* errmsg);
N_NIMCALL(NimStringDesc*, HEX24_187183)(TY88487 x);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(NimStringDesc*, reprEnum)(NI e_85009, TNimType* typ);
N_NIMCALL(void, internalerror_187100)(Tlineinfo182337 info, NimStringDesc* errmsg);
STRING_LITERAL(TMP3291, "|", 1);
STRING_LITERAL(TMP3292, "&", 1);
STRING_LITERAL(TMP3293, "~", 1);
STRING_LITERAL(TMP3294, "atom", 4);
STRING_LITERAL(TMP3295, "lit", 3);
STRING_LITERAL(TMP3296, "sym", 3);
STRING_LITERAL(TMP3297, "ident", 5);
STRING_LITERAL(TMP3298, "call", 4);
STRING_LITERAL(TMP3299, "alias", 5);
STRING_LITERAL(TMP3300, "noalias", 7);
STRING_LITERAL(TMP3301, "lvalue", 6);
STRING_LITERAL(TMP3302, "local", 5);
STRING_LITERAL(TMP3303, "sideeffect", 10);
STRING_LITERAL(TMP3304, "nosideeffect", 12);
STRING_LITERAL(TMP3306, "compiler/parampatterns.nim", 26);
NIM_CONST TY88487 TMP3305 = {((NimStringDesc*) &TMP3306),
((NI) 100)}
;
NIM_CONST TY88487 TMP3307 = {((NimStringDesc*) &TMP3306),
((NI) 107)}
;
STRING_LITERAL(TMP3308, "parameter pattern too complex", 29);
extern Gcheap49818 gch_49859;
extern TNimType NTI214435; /* TSymKind */
extern TNimType NTI214020; /* TNodeKind */

static N_INLINE(NIM_BOOL, isatom_219492)(Tnode214790* n) {
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

N_NIMCALL(NU8, isassignable_286808)(Tsym214822* owner, Tnode214790* n, NIM_BOOL isunsafeaddr) {
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
			Ttype214828* t;
			if (!((*(*n).kindU.S4.sym).kind == ((NU8) 7))) goto LA26;
			t = skiptypes_218113((*(*n).kindU.S4.sym).typ, 256);
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
			Ttype214828* LOC35;
			LOC35 = 0;
			LOC35 = skiptypes_218113((*(*n).kindU.S6.sons->data[((NI) 0)]).typ, IL64(211106232576000));
			if (!((14680064 &((NU64)1<<((NU)((*LOC35).kind)&63U)))!=0)) goto LA36;
			result = ((NU8) 1);
		}
		goto LA33;
		LA36: ;
		{
			result = isassignable_286808(owner, (*n).kindU.S6.sons->data[((NI) 0)], isunsafeaddr);
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
			Ttype214828* LOC48;
			LOC48 = 0;
			LOC48 = skiptypes_218113((*(*n).kindU.S6.sons->data[((NI) 0)]).typ, IL64(211106232576000));
			if (!((14680064 &((NU64)1<<((NU)((*LOC48).kind)&63U)))!=0)) goto LA49;
			result = ((NU8) 1);
		}
		goto LA46;
		LA49: ;
		{
			result = isassignable_286808(owner, (*n).kindU.S6.sons->data[((NI) 0)], isunsafeaddr);
		}
		LA46: ;
	}
	break;
	case ((NU8) 58):
	case ((NU8) 59):
	case ((NU8) 60):
	{
		{
			Ttype214828* LOC55;
			LOC55 = 0;
			LOC55 = skiptypes_218113((*n).typ, IL64(211106247256064));
			if (!((134610944 &((NU64)1<<((NU)((*LOC55).kind)&63U)))!=0)) goto LA56;
			result = isassignable_286808(owner, (*n).kindU.S6.sons->data[((NI) 1)], isunsafeaddr);
		}
		goto LA53;
		LA56: ;
		{
			NIM_BOOL LOC59;
			LOC59 = 0;
			LOC59 = comparetypes_246404((*n).typ, (*(*n).kindU.S6.sons->data[((NI) 1)]).typ, ((NU8) 1), 0);
			if (!LOC59) goto LA60;
			result = isassignable_286808(owner, (*n).kindU.S6.sons->data[((NI) 1)], isunsafeaddr);
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
		result = isassignable_286808(owner, (*n).kindU.S6.sons->data[((NI) 0)], isunsafeaddr);
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
			LOC67 = getmagic_239323(n);
			if (!(LOC67 == ((NU8) 4) || LOC67 == ((NU8) 138))) goto LA68;
			result = isassignable_286808(owner, (*n).kindU.S6.sons->data[((NI) 1)], isunsafeaddr);
		}
		LA68: ;
	}
	break;
	case ((NU8) 115):
	case ((NU8) 126):
	{
		{
			Tnode214790* LOC75;
			if (!!(((*n).typ == NIM_NIL))) goto LA73;
			LOC75 = 0;
			LOC75 = lastson_217364(n);
			result = isassignable_286808(owner, LOC75, isunsafeaddr);
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

static N_INLINE(NIM_BOOL, isroutine_219397)(Tsym214822* s) {
	NIM_BOOL result;
	result = 0;
	result = ((258048 &(1U<<((NU)((*s).kind)&31U)))!=0);
	return result;
}

static N_INLINE(NI, len_215059)(Tnode214790* n) {
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

N_NIMCALL(NU8, checkforsideeffects_286650)(Tnode214790* n) {
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
		Tnode214790* op;
		op = (*n).kindU.S6.sons->data[((NI) 0)];
		{
			NIM_BOOL LOC4;
			Tsym214822* s;
			LOC4 = 0;
			LOC4 = ((*op).kind == ((NU8) 3));
			if (!(LOC4)) goto LA5;
			LOC4 = isroutine_219397((*op).kindU.S4.sym);
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
			NI i_286707;
			NI HEX3Atmp_286786;
			NI LOC17;
			NI res_286789;
			i_286707 = 0;
			HEX3Atmp_286786 = 0;
			LOC17 = 0;
			LOC17 = len_215059(n);
			HEX3Atmp_286786 = (LOC17 - 1);
			res_286789 = ((NI) 0);
			{
				while (1) {
					NU8 ret;
					if (!(res_286789 <= HEX3Atmp_286786)) goto LA19;
					i_286707 = res_286789;
					ret = checkforsideeffects_286650((*n).kindU.S6.sons->data[i_286707]);
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
					res_286789 += ((NI) 1);
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
			NI i_286755;
			NI HEX3Atmp_286794;
			NI LOC32;
			NI res_286797;
			i_286755 = 0;
			HEX3Atmp_286794 = 0;
			LOC32 = 0;
			LOC32 = len_215059(n);
			HEX3Atmp_286794 = (LOC32 - 1);
			res_286797 = ((NI) 0);
			{
				while (1) {
					NU8 ret;
					if (!(res_286797 <= HEX3Atmp_286794)) goto LA34;
					i_286755 = res_286797;
					ret = checkforsideeffects_286650((*n).kindU.S6.sons->data[i_286755]);
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
					res_286797 += ((NI) 1);
				} LA34: ;
			}
		}
	}
	break;
	}
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, matchnodekinds_287042)(Tnode214790* p, Tnode214790* n) {
	NIM_BOOL result;
	TY287048 stack;
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
				stack[(sp)- 0] = isatom_219492(n);
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
				LOC21 = isassignable_286808(NIM_NIL, n, NIM_FALSE);
				stack[(sp)- 0] = ((6 &(1U<<((NU)(LOC21)&7U)))!=0);
				sp += ((NI) 1);
			}
			break;
			case ((NU8) 13):
			{
				NU8 LOC23;
				LOC23 = 0;
				LOC23 = isassignable_286808(NIM_NIL, n, NIM_FALSE);
				stack[(sp)- 0] = (LOC23 == ((NU8) 2));
				sp += ((NI) 1);
			}
			break;
			case ((NU8) 14):
			{
				NU8 LOC25;
				LOC25 = 0;
				LOC25 = checkforsideeffects_286650(n);
				stack[(sp)- 0] = (LOC25 == ((NU8) 1));
				sp += ((NI) 1);
			}
			break;
			case ((NU8) 15):
			{
				NU8 LOC27;
				LOC27 = 0;
				LOC27 = checkforsideeffects_286650(n);
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

N_NIMCALL(NIM_BOOL, islvalue_287027)(Tnode214790* n) {
	NIM_BOOL result;
	NU8 LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = isassignable_286808(NIM_NIL, n, NIM_FALSE);
	result = ((22 &(1U<<((NU)(LOC1)&7U)))!=0);
	return result;
}

static N_INLINE(Cell47505*, usrtocell_51440)(void* usr) {
	Cell47505* result;
	result = 0;
	result = ((Cell47505*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Cell47505))))));
	return result;
}

static N_INLINE(void, rtladdzct_53001)(Cell47505* c) {
	addzct_51417((&gch_49859.zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Cell47505* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_51440(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell47505* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_51440((*dest));
		{
			(*c).refcount -= ((NI) 8);
			if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_53001(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(void, patternerror_286030)(Tnode214790* n) {
	NimStringDesc* LOC1;
	LOC1 = 0;
	LOC1 = rendertree_233044(n, 4);
	localerror_187080((*n).info, ((NU16) 1), LOC1);
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

static N_INLINE(void, add_286034)(NimStringDesc** code, NU8 op) {
	(*code) = addChar((*code), ((NIM_CHAR) (((NI) (op)))));
}

N_NIMCALL(void, compileconstraints_286074)(Tnode214790* p, NimStringDesc** result) {
{	switch ((*p).kind) {
	case ((NU8) 27):
	case ((NU8) 29):
	case ((NU8) 30):
	case ((NU8) 31):
	case ((NU8) 26):
	case ((NU8) 28):
	case ((NU8) 32):
	{
		Tident189012* op;
		{
			if (!!(((*(*p).kindU.S6.sons->data[((NI) 0)]).kind == ((NU8) 2)))) goto LA4;
			patternerror_286030((*p).kindU.S6.sons->data[((NI) 0)]);
			goto BeforeRet;
		}
		LA4: ;
		op = (*(*p).kindU.S6.sons->data[((NI) 0)]).kindU.S5.ident;
		{
			NI LOC8;
			LOC8 = 0;
			LOC8 = len_215059(p);
			if (!(LOC8 == ((NI) 3))) goto LA9;
			{
				NIM_BOOL LOC13;
				LOC13 = 0;
				LOC13 = eqStrings((*op).s, ((NimStringDesc*) &TMP3291));
				if (LOC13) goto LA14;
				LOC13 = ((*op).Sup.id == ((NI) 49));
				LA14: ;
				if (!LOC13) goto LA15;
				compileconstraints_286074((*p).kindU.S6.sons->data[((NI) 1)], result);
				compileconstraints_286074((*p).kindU.S6.sons->data[((NI) 2)], result);
				add_286034(result, ((NU8) 2));
			}
			goto LA11;
			LA15: ;
			{
				NIM_BOOL LOC18;
				LOC18 = 0;
				LOC18 = eqStrings((*op).s, ((NimStringDesc*) &TMP3292));
				if (LOC18) goto LA19;
				LOC18 = ((*op).Sup.id == ((NI) 2));
				LA19: ;
				if (!LOC18) goto LA20;
				compileconstraints_286074((*p).kindU.S6.sons->data[((NI) 1)], result);
				compileconstraints_286074((*p).kindU.S6.sons->data[((NI) 2)], result);
				add_286034(result, ((NU8) 3));
			}
			goto LA11;
			LA20: ;
			{
				patternerror_286030(p);
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
			LOC25 = len_215059(p);
			LOC24 = (LOC25 == ((NI) 2));
			if (!(LOC24)) goto LA26;
			LOC27 = 0;
			LOC27 = eqStrings((*op).s, ((NimStringDesc*) &TMP3293));
			if (LOC27) goto LA28;
			LOC27 = ((*op).Sup.id == ((NI) 45));
			LA28: ;
			LOC24 = LOC27;
			LA26: ;
			if (!LOC24) goto LA29;
			compileconstraints_286074((*p).kindU.S6.sons->data[((NI) 1)], result);
			add_286034(result, ((NU8) 4));
		}
		goto LA6;
		LA29: ;
		{
			patternerror_286030(p);
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
			LOC35 = len_215059(p);
			if (!(LOC35 == ((NI) 1))) goto LA36;
			compileconstraints_286074((*p).kindU.S6.sons->data[((NI) 0)], result);
		}
		goto LA33;
		LA36: ;
		{
			patternerror_286030(p);
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
if (eqStrings(spec, ((NimStringDesc*) &TMP3304))) goto LA50;
break;
		case 4: 
if (eqStrings(spec, ((NimStringDesc*) &TMP3296))) goto LA42;
if (eqStrings(spec, ((NimStringDesc*) &TMP3301))) goto LA47;
if (eqStrings(spec, ((NimStringDesc*) &TMP3303))) goto LA49;
break;
		case 6: 
if (eqStrings(spec, ((NimStringDesc*) &TMP3297))) goto LA43;
break;
		case 10: 
if (eqStrings(spec, ((NimStringDesc*) &TMP3300))) goto LA46;
break;
		case 11: 
if (eqStrings(spec, ((NimStringDesc*) &TMP3294))) goto LA40;
break;
		case 12: 
if (eqStrings(spec, ((NimStringDesc*) &TMP3295))) goto LA41;
break;
		case 13: 
if (eqStrings(spec, ((NimStringDesc*) &TMP3298))) goto LA44;
break;
		case 14: 
if (eqStrings(spec, ((NimStringDesc*) &TMP3299))) goto LA45;
if (eqStrings(spec, ((NimStringDesc*) &TMP3302))) goto LA48;
break;
		}
		goto LA51;
		LA40: ;
		{
			add_286034(result, ((NU8) 6));
		}
		goto LA52;
		LA41: ;
		{
			add_286034(result, ((NU8) 7));
		}
		goto LA52;
		LA42: ;
		{
			add_286034(result, ((NU8) 5));
		}
		goto LA52;
		LA43: ;
		{
			add_286034(result, ((NU8) 8));
		}
		goto LA52;
		LA44: ;
		{
			add_286034(result, ((NU8) 9));
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
			add_286034(result, ((NU8) 12));
		}
		goto LA52;
		LA48: ;
		{
			add_286034(result, ((NU8) 13));
		}
		goto LA52;
		LA49: ;
		{
			add_286034(result, ((NU8) 14));
		}
		goto LA52;
		LA50: ;
		{
			add_286034(result, ((NU8) 15));
		}
		goto LA52;
		LA51: ;
		{
			{
				NimStringDesc* LOC69;
				if (!NIM_FALSE) goto LA67;
				LOC69 = 0;
				LOC69 = HEX24_187183(TMP3305);
				internalerror_187113(LOC69);
			}
			LA67: ;
			{
				NU8 i_286214;
				NI res_286435;
				i_286214 = 0;
				res_286435 = ((NI) 0);
				{
					while (1) {
						if (!(res_286435 <= ((NI) 24))) goto LA72;
						i_286214 = ((NU8) (res_286435));
						{
							NimStringDesc* LOC75;
							NI LOC76;
							LOC75 = 0;
							LOC75 = copyStr(reprEnum(i_286214, (&NTI214435)), ((NI) 2));
							LOC76 = 0;
							LOC76 = nsuCmpIgnoreStyle(LOC75, spec);
							if (!(LOC76 == ((NI) 0))) goto LA77;
							add_286034(result, ((NU8) 10));
							(*result) = addChar((*result), ((NIM_CHAR) (((NI) (i_286214)))));
							goto BeforeRet;
						}
						LA77: ;
						res_286435 += ((NI) 1);
					} LA72: ;
				}
			}
			{
				NimStringDesc* LOC83;
				if (!NIM_FALSE) goto LA81;
				LOC83 = 0;
				LOC83 = HEX24_187183(TMP3307);
				internalerror_187113(LOC83);
			}
			LA81: ;
			{
				NU8 i_286414;
				NI res_286443;
				i_286414 = 0;
				res_286443 = ((NI) 0);
				{
					while (1) {
						if (!(res_286443 <= ((NI) 158))) goto LA86;
						i_286414 = ((NU8) (res_286443));
						{
							NI LOC89;
							LOC89 = 0;
							LOC89 = nsuCmpIgnoreStyle(reprEnum(i_286414, (&NTI214020)), spec);
							if (!(LOC89 == ((NI) 0))) goto LA90;
							add_286034(result, ((NU8) 11));
							(*result) = addChar((*result), ((NIM_CHAR) (((NI) (i_286414)))));
							goto BeforeRet;
						}
						LA90: ;
						res_286443 += ((NI) 1);
					} LA86: ;
				}
			}
			patternerror_286030(p);
		}
		LA52: ;
	}
	break;
	default:
	{
		patternerror_286030(p);
	}
	break;
	}
	}BeforeRet: ;
}

N_NIMCALL(Tnode214790*, semnodekindconstraints_286446)(Tnode214790* p) {
	Tnode214790* result;
	result = 0;
	result = newnodei_216248(((NU8) 20), (*p).info);
	asgnRefNoCycle((void**) (&(*result).kindU.S3.strval), rawNewString(((NI) 10)));
	(*result).kindU.S3.strval = addChar((*result).kindU.S3.strval, 1);
	{
		NI LOC3;
		LOC3 = 0;
		LOC3 = len_215059(p);
		if (!(((NI) 2) <= LOC3)) goto LA4;
		{
			NI i_286630;
			NI HEX3Atmp_286638;
			NI LOC7;
			NI res_286641;
			i_286630 = 0;
			HEX3Atmp_286638 = 0;
			LOC7 = 0;
			LOC7 = len_215059(p);
			HEX3Atmp_286638 = (LOC7 - 1);
			res_286641 = ((NI) 1);
			{
				while (1) {
					if (!(res_286641 <= HEX3Atmp_286638)) goto LA9;
					i_286630 = res_286641;
					compileconstraints_286074((*p).kindU.S6.sons->data[i_286630], (&(*result).kindU.S3.strval));
					res_286641 += ((NI) 1);
				} LA9: ;
			}
		}
		{
			if (!(((NI) 63) < ((*result).kindU.S3.strval ? (*result).kindU.S3.strval->Sup.len : 0))) goto LA12;
			internalerror_187100((*p).info, ((NimStringDesc*) &TMP3308));
		}
		LA12: ;
	}
	goto LA1;
	LA4: ;
	{
		patternerror_286030(p);
	}
	LA1: ;
	add_286034((&(*result).kindU.S3.strval), ((NU8) 1));
	return result;
}

N_NIMCALL(NU8, whichalias_286047)(Tsym214822* p) {
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

