/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
typedef struct TY374226 TY374226;
typedef struct TY374227 TY374227;
typedef struct Tsymseq214792 Tsymseq214792;
typedef struct Tsym214822 Tsym214822;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Cell47505 Cell47505;
typedef struct Cellseq47521 Cellseq47521;
typedef struct Gcheap49818 Gcheap49818;
typedef struct Gcstack49816 Gcstack49816;
typedef struct Cellset47517 Cellset47517;
typedef struct Pagedesc47513 Pagedesc47513;
typedef struct Memregion29687 Memregion29687;
typedef struct Smallchunk29639 Smallchunk29639;
typedef struct Llchunk29681 Llchunk29681;
typedef struct Bigchunk29641 Bigchunk29641;
typedef struct Intset29614 Intset29614;
typedef struct Trunk29610 Trunk29610;
typedef struct Avlnode29685 Avlnode29685;
typedef struct Gcstat49814 Gcstat49814;
typedef struct Tidobj189006 Tidobj189006;
typedef struct TNimObject TNimObject;
typedef struct Ttypeseq214824 Ttypeseq214824;
typedef struct Tscope214816 Tscope214816;
typedef struct TY214925 TY214925;
typedef struct Tstrtable214794 Tstrtable214794;
typedef struct Ttype214828 Ttype214828;
typedef struct Tident189012 Tident189012;
typedef struct Tlineinfo182337 Tlineinfo182337;
typedef struct Tnode214790 Tnode214790;
typedef struct Tloc214804 Tloc214804;
typedef struct Ropeobj169006 Ropeobj169006;
typedef struct Tlib214808 Tlib214808;
typedef struct NimStringDesc NimStringDesc;
typedef struct Tnodeseq214784 Tnodeseq214784;
typedef struct Intset211035 Intset211035;
typedef struct Trunk211031 Trunk211031;
typedef struct Trunkseq211033 Trunkseq211033;
typedef struct Basechunk29637 Basechunk29637;
typedef struct Freecell29629 Freecell29629;
typedef struct Tinstantiation214812 Tinstantiation214812;
typedef struct Tlistentry135010 Tlistentry135010;
typedef struct TY214913 TY214913;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct TY374227 {
Tsymseq214792* Field0;
Tsym214822* Field1;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
typedef Smallchunk29639* TY29702[512];
typedef Trunk29610* Trunkbuckets29612[256];
struct  Intset29614  {
Trunkbuckets29612 data;
};
struct  Memregion29687  {
NI minlargeobj;
NI maxlargeobj;
TY29702 freesmallchunks;
Llchunk29681* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29641* freechunkslist;
Intset29614 chunkstarts;
Avlnode29685* root;
Avlnode29685* deleted;
Avlnode29685* last;
Avlnode29685* freeavlnodes;
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
Memregion29687 region;
Gcstat49814 stat;
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
struct  Tlineinfo182337  {
NI16 line;
NI16 col;
NI32 fileindex;
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
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tident189012  {
  Tidobj189006 Sup;
NimStringDesc* s;
Tident189012* next;
NI h;
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
typedef NimStringDesc* TY184169[2];
typedef Tsym214822* TY264332[1];
struct  Intset211035  {
NI counter;
NI max;
Trunk211031* head;
Trunkseq211033* data;
};
struct  Gcstack49816  {
Gcstack49816* prev;
Gcstack49816* next;
void* starts;
void* pos;
NI maxstacksize;
};
typedef NI TY29618[16];
struct  Pagedesc47513  {
Pagedesc47513* next;
NI key;
TY29618 bits;
};
struct  Basechunk29637  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29639  {
  Basechunk29637 Sup;
Smallchunk29639* next;
Smallchunk29639* prev;
Freecell29629* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29681  {
NI size;
NI acc;
Llchunk29681* next;
};
struct  Bigchunk29641  {
  Basechunk29637 Sup;
Bigchunk29641* next;
Bigchunk29641* prev;
NI align;
NF data;
};
struct  Trunk29610  {
Trunk29610* next;
NI key;
TY29618 bits;
};
typedef Avlnode29685* TY29692[2];
struct  Avlnode29685  {
TY29692 link;
NI key;
NI upperbound;
NI level;
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
struct  Trunk211031  {
Trunk211031* next;
NI key;
TY29618 bits;
};
struct  Freecell29629  {
Freecell29629* next;
NI zerofield;
};
struct  Tinstantiation214812  {
Tsym214822* sym;
Ttypeseq214824* concretetypes;
TY214913* usedby;
NI compilesid;
};
struct Tsymseq214792 {
  TGenericSeq Sup;
  Tsym214822* data[SEQ_DECL_SIZE];
};
struct TY374226 {
  TGenericSeq Sup;
  TY374227 data[SEQ_DECL_SIZE];
};
struct Ttypeseq214824 {
  TGenericSeq Sup;
  Ttype214828* data[SEQ_DECL_SIZE];
};
struct TY214925 {
  TGenericSeq Sup;
  Tinstantiation214812* data[SEQ_DECL_SIZE];
};
struct Tnodeseq214784 {
  TGenericSeq Sup;
  Tnode214790* data[SEQ_DECL_SIZE];
};
struct Trunkseq211033 {
  TGenericSeq Sup;
  Trunk211031* data[SEQ_DECL_SIZE];
};
struct TY214913 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP1012)(void* p, NI op);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Cell47505*, usrtocell_51440)(void* usr);
static N_INLINE(void, rtladdzct_53001)(Cell47505* c);
N_NOINLINE(void, addzct_51417)(Cellseq47521* s, Cell47505* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(NU8, samemethodbucket_374253)(Tsym214822* a, Tsym214822* b);
N_NIMCALL(NI, sonslen_217327)(Ttype214828* n);
N_NIMCALL(NIM_BOOL, sametypeornil_244638)(Ttype214828* a, Ttype214828* b, NU8 flags);
N_NIMCALL(Ttype214828*, skiptypes_218113)(Ttype214828* t, NU64 kinds);
N_NIMCALL(Ttype214828*, lastson_217377)(Ttype214828* n);
N_NIMCALL(NIM_BOOL, sametype_244628)(Ttype214828* a, Ttype214828* b, NU8 flags);
N_NIMCALL(NI, inheritancediff_246442)(Ttype214828* a, Ttype214828* b);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq, NI elemsize);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, attachdispatcher_374362)(Tsym214822* s, Tnode214790* dispatcher);
static N_INLINE(NI, len_215059)(Tnode214790* n);
N_NIMCALL(void, add_215114)(Tnode214790* father, Tnode214790* son);
N_NIMCALL(Tnode214790*, lastson_217364)(Tnode214790* n);
N_NIMCALL(void, fixupdispatcher_374466)(Tsym214822* meth, Tsym214822* disp);
N_NIMCALL(NI, sonslen_217351)(Tnode214790* n);
N_NIMCALL(Tnode214790*, copytree_218822)(Tnode214790* src);
N_NIMCALL(void, message_187095)(Tlineinfo182337 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, nsuFormatOpenArray)(NimStringDesc* formatstr, NimStringDesc** a, NI aLen0);
N_NIMCALL(NimStringDesc*, HEX24_217069)(NI16 x);
N_NIMCALL(void, checkmethodeffects_346842)(Tsym214822* disp, Tsym214822* branch);
N_NIMCALL(void, localerror_187085)(Tlineinfo182337 info, NimStringDesc* arg);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(Tsym214822*, createdispatcher_374397)(Tsym214822* s);
N_NIMCALL(Tsym214822*, copysym_217601)(Tsym214822* s, NIM_BOOL keepid);
N_NIMCALL(Ttype214828*, copytype_217470)(Ttype214828* t, Tsym214822* owner, NIM_BOOL keepid);
N_NIMCALL(void, addson_216807)(Tnode214790* father, Tnode214790* son);
N_NIMCALL(Tnode214790*, newsymnode_216234)(Tsym214822* sym);
N_NIMCALL(void, genericSeqAssign)(void* dest, void* src_84004, TNimType* mt);
N_NIMCALL(void, internalerror_187100)(Tlineinfo182337 info, NimStringDesc* errmsg);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, HEX24_183431)(Tlineinfo182337 info);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(Tnode214790*, genconv_374005)(Tnode214790* n, Ttype214828* d, NIM_BOOL downcast);
N_NIMCALL(Tnode214790*, newnodeit_216801)(NU8 kind, Tlineinfo182337 info, Ttype214828* typ);
N_NIMCALL(Tnode214790*, newnode_215401)(NU8 kind);
N_NIMCALL(void, initintset_211885)(Intset211035* Result);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(NIM_BOOL, relevantcol_374896)(Tsymseq214792* methods, NI col);
N_NIMCALL(void, incl_211832)(Intset211035* s, NI key);
N_NIMCALL(void, sortbucket_374970)(Tsymseq214792** a, Intset211035 relevantcols);
N_NIMCALL(NI, cmpsignatures_374934)(Tsym214822* a, Tsym214822* b, Intset211035 relevantcols);
N_NIMCALL(NIM_BOOL, contains_211811)(Intset211035 s, NI key);
N_NIMCALL(Tsym214822*, gendispatcher_375010)(Tsymseq214792* methods, Intset211035 relevantcols);
N_NIMCALL(Tnode214790*, newnodei_216248)(NU8 kind, Tlineinfo182337 info);
N_NIMCALL(Tsym214822*, getsyssym_258041)(NimStringDesc* name);
N_NIMCALL(Ttype214828*, getsystype_258130)(NU8 kind);
STRING_LITERAL(TMP3443, "method has lock level $1, but another method has $2", 51);
STRING_LITERAL(TMP3451, "method is not a base", 20);
STRING_LITERAL(TMP3452, "no method dispatcher found", 26);
STRING_LITERAL(TMP3453, "invalid declaration order; cannot attach \'", 42);
STRING_LITERAL(TMP3454, "\' to method defined here: ", 26);
STRING_LITERAL(TMP3455, "", 0);
STRING_LITERAL(TMP3456, "cgmeth.genConv: no upcast allowed", 33);
STRING_LITERAL(TMP3457, "cgmeth.genConv: no downcast allowed", 35);
STRING_LITERAL(TMP4481, "and", 3);
STRING_LITERAL(TMP4482, "of", 2);
TY374226* gmethods_374246;
TNimType NTI374227; /* tuple[methods: TSymSeq, dispatcher: PSym] */
extern TNimType NTI214792; /* TSymSeq */
extern TNimType NTI214788; /* PSym */
TNimType NTI374226; /* seq[tuple[methods: TSymSeq, dispatcher: PSym]] */
extern Gcheap49818 gch_49859;
extern Tnode214790* emptynode_215801;
N_NIMCALL(void, TMP1012)(void* p, NI op) {
	TY374226* a;
	NI LOC1;
	a = (TY374226*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field0, op);
	nimGCvisit((void*)a->data[LOC1].Field1, op);
	}
}

static N_INLINE(Cell47505*, usrtocell_51440)(void* usr) {
	Cell47505* result;
	result = 0;
	result = ((Cell47505*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Cell47505))))));
	return result;
}

static N_INLINE(void, rtladdzct_53001)(Cell47505* c) {
	addzct_51417((&gch_49859.zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Cell47505* c;
	c = usrtocell_51440(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_53001(c);
	}
	LA3: ;
}

N_NIMCALL(NU8, samemethodbucket_374253)(Tsym214822* a, Tsym214822* b) {
	NU8 result;
{	result = 0;
	{
		if (!!(((*(*a).name).Sup.id == (*(*b).name).Sup.id))) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	{
		NI LOC7;
		NI LOC8;
		LOC7 = 0;
		LOC7 = sonslen_217327((*a).typ);
		LOC8 = 0;
		LOC8 = sonslen_217327((*b).typ);
		if (!!((LOC7 == LOC8))) goto LA9;
		goto BeforeRet;
	}
	LA9: ;
	{
		NIM_BOOL LOC13;
		LOC13 = 0;
		LOC13 = sametypeornil_244638((*(*a).typ).sons->data[((NI) 0)], (*(*b).typ).sons->data[((NI) 0)], 0);
		if (!!(LOC13)) goto LA14;
		goto BeforeRet;
	}
	LA14: ;
	{
		NI i_374276;
		NI HEX3Atmp_374355;
		NI LOC17;
		NI res_374358;
		i_374276 = 0;
		HEX3Atmp_374355 = 0;
		LOC17 = 0;
		LOC17 = sonslen_217327((*a).typ);
		HEX3Atmp_374355 = (NI)(LOC17 - ((NI) 1));
		res_374358 = ((NI) 1);
		{
			while (1) {
				Ttype214828* aa;
				Ttype214828* bb;
				if (!(res_374358 <= HEX3Atmp_374355)) goto LA19;
				i_374276 = res_374358;
				aa = (*(*a).typ).sons->data[i_374276];
				bb = (*(*b).typ).sons->data[i_374276];
				{
					while (1) {
						aa = skiptypes_218113(aa, 2048);
						bb = skiptypes_218113(bb, 2048);
						{
							NIM_BOOL LOC24;
							LOC24 = 0;
							LOC24 = ((*aa).kind == (*bb).kind);
							if (!(LOC24)) goto LA25;
							LOC24 = ((*aa).kind == ((NU8) 23) || (*aa).kind == ((NU8) 21) || (*aa).kind == ((NU8) 22));
							LA25: ;
							if (!LOC24) goto LA26;
							aa = lastson_217377(aa);
							bb = lastson_217377(bb);
						}
						goto LA22;
						LA26: ;
						{
							goto LA20;
						}
						LA22: ;
					}
				} LA20: ;
				{
					NIM_BOOL LOC31;
					LOC31 = 0;
					LOC31 = sametype_244628(aa, bb, 0);
					if (!LOC31) goto LA32;
					{
						NIM_BOOL LOC36;
						LOC36 = 0;
						LOC36 = ((*aa).kind == ((NU8) 17));
						if (!(LOC36)) goto LA37;
						LOC36 = !((result == ((NU8) 1)));
						LA37: ;
						if (!LOC36) goto LA38;
						result = ((NU8) 2);
					}
					LA38: ;
				}
				goto LA29;
				LA32: ;
				{
					NIM_BOOL LOC41;
					NI diff;
					LOC41 = 0;
					LOC41 = ((*aa).kind == ((NU8) 17));
					if (!(LOC41)) goto LA42;
					LOC41 = ((*bb).kind == ((NU8) 17));
					LA42: ;
					if (!LOC41) goto LA43;
					diff = inheritancediff_246442(bb, aa);
					{
						if (!(diff < ((NI) 0))) goto LA47;
						{
							if (!!((result == ((NU8) 1)))) goto LA51;
							result = ((NU8) 2);
						}
						LA51: ;
					}
					goto LA45;
					LA47: ;
					{
						if (!!((diff == ((NI) 2147483647)))) goto LA54;
						result = ((NU8) 1);
					}
					goto LA45;
					LA54: ;
					LA45: ;
				}
				goto LA29;
				LA43: ;
				{
					result = ((NU8) 0);
					goto BeforeRet;
				}
				LA29: ;
				res_374358 += ((NI) 1);
			} LA19: ;
		}
	}
	}BeforeRet: ;
	return result;
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
			if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_53001(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
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

N_NIMCALL(void, attachdispatcher_374362)(Tsym214822* s, Tnode214790* dispatcher) {
	NI L;
	NI LOC1;
	Tnode214790* x;
	LOC1 = 0;
	LOC1 = len_215059((*s).ast);
	L = (NI)(LOC1 - ((NI) 1));
	x = (*(*s).ast).kindU.S6.sons->data[L];
	{
		NIM_BOOL LOC4;
		LOC4 = 0;
		LOC4 = ((*x).kind == ((NU8) 3));
		if (!(LOC4)) goto LA5;
		LOC4 = (((*(*x).kindU.S4.sym).flags &(1U<<((NU)(((NU8) 25))&31U)))!=0);
		LA5: ;
		if (!LOC4) goto LA6;
		asgnRefNoCycle((void**) (&(*(*s).ast).kindU.S6.sons->data[L]), dispatcher);
	}
	goto LA2;
	LA6: ;
	{
		add_215114((*s).ast, dispatcher);
	}
	LA2: ;
}

N_NIMCALL(void, fixupdispatcher_374466)(Tsym214822* meth, Tsym214822* disp) {
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		NI LOC5;
		NI LOC7;
		LOC3 = 0;
		LOC4 = 0;
		LOC5 = 0;
		LOC5 = sonslen_217351((*disp).ast);
		LOC4 = (((NI) 7) < LOC5);
		if (!(LOC4)) goto LA6;
		LOC7 = 0;
		LOC7 = sonslen_217351((*meth).ast);
		LOC4 = (((NI) 7) < LOC7);
		LA6: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA8;
		LOC3 = ((*(*disp).ast).kindU.S6.sons->data[((NI) 7)] == emptynode_215801);
		LA8: ;
		if (!LOC3) goto LA9;
		asgnRefNoCycle((void**) (&(*(*disp).ast).kindU.S6.sons->data[((NI) 7)]), copytree_218822((*(*meth).ast).kindU.S6.sons->data[((NI) 7)]));
	}
	LA9: ;
	{
		if (!((*(*disp).typ).locklevel == ((NI16) -1))) goto LA13;
		(*(*disp).typ).locklevel = (*(*meth).typ).locklevel;
	}
	goto LA11;
	LA13: ;
	{
		NIM_BOOL LOC16;
		TY184169 LOC20;
		NimStringDesc* LOC21;
		LOC16 = 0;
		LOC16 = !(((*(*meth).typ).locklevel == ((NI16) -1)));
		if (!(LOC16)) goto LA17;
		LOC16 = !(((*(*meth).typ).locklevel == (*(*disp).typ).locklevel));
		LA17: ;
		if (!LOC16) goto LA18;
		memset((void*)LOC20, 0, sizeof(LOC20));
		LOC20[0] = HEX24_217069((*(*meth).typ).locklevel);
		LOC20[1] = HEX24_217069((*(*disp).typ).locklevel);
		LOC21 = 0;
		LOC21 = nsuFormatOpenArray(((NimStringDesc*) &TMP3443), LOC20, 2);
		message_187095((*meth).info, ((NU16) 265), LOC21);
		{
			if (!((*(*disp).typ).locklevel < (*(*meth).typ).locklevel)) goto LA24;
			(*(*disp).typ).locklevel = (*(*meth).typ).locklevel;
		}
		LA24: ;
	}
	goto LA11;
	LA18: ;
	LA11: ;
}

N_NIMCALL(Tsym214822*, createdispatcher_374397)(Tsym214822* s) {
	Tsym214822* result;
	Tsym214822* disp;
	Tnode214790* LOC15;
	Tnode214790* LOC16;
{	result = 0;
	disp = copysym_217601(s, NIM_FALSE);
	(*disp).flags |= ((NU32)1)<<((((NU8) 25))%(sizeof(NU32)*8));
	(*disp).flags &= ~(((NU32)1) << ((((NU8) 1)) % (sizeof(NU32)*8)));
	asgnRefNoCycle((void**) (&(*disp).typ), copytype_217470((*disp).typ, (*(*disp).typ).owner, NIM_FALSE));
	{
		if (!((*(*disp).typ).callconv == ((NU8) 5))) goto LA3;
		(*(*disp).typ).callconv = ((NU8) 0);
	}
	LA3: ;
	asgnRefNoCycle((void**) (&(*disp).ast), copytree_218822((*s).ast));
	asgnRefNoCycle((void**) (&(*(*disp).ast).kindU.S6.sons->data[((NI) 6)]), emptynode_215801);
	asgnRefNoCycle((void**) (&(*disp).loc.r), NIM_NIL);
	{
		if (!!(((*(*s).typ).sons->data[((NI) 0)] == NIM_NIL))) goto LA7;
		{
			NI LOC11;
			LOC11 = 0;
			LOC11 = sonslen_217351((*disp).ast);
			if (!(((NI) 7) < LOC11)) goto LA12;
			asgnRefNoCycle((void**) (&(*(*(*disp).ast).kindU.S6.sons->data[((NI) 7)]).kindU.S4.sym), copysym_217601((*(*(*s).ast).kindU.S6.sons->data[((NI) 7)]).kindU.S4.sym, NIM_FALSE));
		}
		goto LA9;
		LA12: ;
		{
			addson_216807((*disp).ast, emptynode_215801);
		}
		LA9: ;
	}
	LA7: ;
	LOC15 = 0;
	LOC15 = newsymnode_216234(disp);
	attachdispatcher_374362(s, LOC15);
	LOC16 = 0;
	LOC16 = newsymnode_216234(disp);
	attachdispatcher_374362(disp, LOC16);
	result = disp;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(void, methoddef_374628)(Tsym214822* s, NIM_BOOL fromcache) {
	NI L;
	Tsym214822* witness;
	TY374227 LOC19;
	TY264332 LOC20;
{	L = (gmethods_374246 ? gmethods_374246->Sup.len : 0);
	witness = 0;
	{
		NI i_374653;
		NI HEX3Atmp_374889;
		NI res_374892;
		i_374653 = 0;
		HEX3Atmp_374889 = 0;
		HEX3Atmp_374889 = (NI)(L - ((NI) 1));
		res_374892 = ((NI) 0);
		{
			while (1) {
				Tsym214822* disp;
				NU8 LOC4;
				if (!(res_374892 <= HEX3Atmp_374889)) goto LA3;
				i_374653 = res_374892;
				disp = gmethods_374246->data[i_374653].Field1;
				LOC4 = 0;
				LOC4 = samemethodbucket_374253(disp, s);
				switch (LOC4) {
				case ((NU8) 2):
				{
					Tnode214790* LOC6;
					gmethods_374246->data[i_374653].Field0 = (Tsymseq214792*) incrSeqV2(&(gmethods_374246->data[i_374653].Field0)->Sup, sizeof(Tsym214822*));
					asgnRefNoCycle((void**) (&gmethods_374246->data[i_374653].Field0->data[gmethods_374246->data[i_374653].Field0->Sup.len]), s);
					++gmethods_374246->data[i_374653].Field0->Sup.len;
					LOC6 = 0;
					LOC6 = lastson_217364((*disp).ast);
					attachdispatcher_374362(s, LOC6);
					fixupdispatcher_374466(s, disp);
					checkmethodeffects_346842(disp, s);
					{
						NIM_BOOL LOC9;
						LOC9 = 0;
						LOC9 = (((*s).flags &(1U<<((NU)(((NU8) 18))&31U)))!=0);
						if (!(LOC9)) goto LA10;
						LOC9 = !((gmethods_374246->data[i_374653].Field0->data[((NI) 0)] == s));
						LA10: ;
						if (!LOC9) goto LA11;
						localerror_187085((*s).info, ((NimStringDesc*) &TMP3451));
					}
					LA11: ;
					goto BeforeRet;
				}
				break;
				case ((NU8) 0):
				{
				}
				break;
				case ((NU8) 1):
				{
					{
						if (!witness == 0) goto LA17;
						witness = gmethods_374246->data[i_374653].Field0->data[((NI) 0)];
					}
					LA17: ;
				}
				break;
				}
				res_374892 += ((NI) 1);
			} LA3: ;
		}
	}
	memset((void*)(&LOC19), 0, sizeof(LOC19));
	LOC19.Field0 = (Tsymseq214792*) newSeq((&NTI214792), 1);
	memset((void*)LOC20, 0, sizeof(LOC20));
	LOC20[0] = s;
	asgnRefNoCycle((void**) (&LOC19.Field0->data[0]), LOC20[0]);
	LOC19.Field1 = createdispatcher_374397(s);
	gmethods_374246 = (TY374226*) incrSeqV2(&(gmethods_374246)->Sup, sizeof(TY374227));
	genericSeqAssign((&gmethods_374246->data[gmethods_374246->Sup.len].Field0), LOC19.Field0, (&NTI214792));
	asgnRefNoCycle((void**) (&gmethods_374246->data[gmethods_374246->Sup.len].Field1), LOC19.Field1);
	++gmethods_374246->Sup.len;
	{
		if (!fromcache) goto LA23;
		internalerror_187100((*s).info, ((NimStringDesc*) &TMP3452));
	}
	LA23: ;
	{
		NimStringDesc* LOC29;
		NimStringDesc* LOC30;
		if (!!((witness == NIM_NIL))) goto LA27;
		LOC29 = 0;
		LOC30 = 0;
		LOC30 = HEX24_183431((*witness).info);
		LOC29 = rawNewString((*(*s).name).s->Sup.len + LOC30->Sup.len + 68);
appendString(LOC29, ((NimStringDesc*) &TMP3453));
appendString(LOC29, (*(*s).name).s);
appendString(LOC29, ((NimStringDesc*) &TMP3454));
appendString(LOC29, LOC30);
		localerror_187085((*s).info, LOC29);
	}
	goto LA25;
	LA27: ;
	{
		if (!!((((*s).flags &(1U<<((NU)(((NU8) 18))&31U)))!=0))) goto LA32;
		message_187095((*s).info, ((NU16) 252), ((NimStringDesc*) &TMP3455));
	}
	goto LA25;
	LA32: ;
	LA25: ;
	}BeforeRet: ;
}

N_NIMCALL(Tnode214790*, genconv_374005)(Tnode214790* n, Ttype214828* d, NIM_BOOL downcast) {
	Tnode214790* result;
	Ttype214828* dest;
	Ttype214828* source;
	result = 0;
	dest = skiptypes_218113(d, IL64(211106247256320));
	source = skiptypes_218113((*n).typ, IL64(211106247256320));
	{
		NIM_BOOL LOC3;
		NI diff;
		LOC3 = 0;
		LOC3 = ((*source).kind == ((NU8) 17));
		if (!(LOC3)) goto LA4;
		LOC3 = ((*dest).kind == ((NU8) 17));
		LA4: ;
		if (!LOC3) goto LA5;
		diff = inheritancediff_246442(dest, source);
		{
			if (!(diff == ((NI) 2147483647))) goto LA9;
			result = n;
		}
		goto LA7;
		LA9: ;
		{
			if (!(diff < ((NI) 0))) goto LA12;
			result = newnodeit_216801(((NU8) 67), (*n).info, d);
			addson_216807(result, n);
			{
				if (!downcast) goto LA16;
				internalerror_187100((*n).info, ((NimStringDesc*) &TMP3456));
			}
			LA16: ;
		}
		goto LA7;
		LA12: ;
		{
			if (!(((NI) 0) < diff)) goto LA19;
			result = newnodeit_216801(((NU8) 66), (*n).info, d);
			addson_216807(result, n);
			{
				if (!!(downcast)) goto LA23;
				internalerror_187100((*n).info, ((NimStringDesc*) &TMP3457));
			}
			LA23: ;
		}
		goto LA7;
		LA19: ;
		{
			result = n;
		}
		LA7: ;
	}
	goto LA1;
	LA5: ;
	{
		result = n;
	}
	LA1: ;
	return result;
}

N_NIMCALL(Tnode214790*, methodcall_374036)(Tnode214790* n) {
	Tnode214790* result;
	Tsym214822* disp;
	Tnode214790* LOC1;
	result = 0;
	result = n;
	LOC1 = 0;
	LOC1 = lastson_217364((*(*(*result).kindU.S6.sons->data[((NI) 0)]).kindU.S4.sym).ast);
	disp = (*LOC1).kindU.S4.sym;
	asgnRefNoCycle((void**) (&(*(*result).kindU.S6.sons->data[((NI) 0)]).kindU.S4.sym), disp);
	{
		NI i_374214;
		NI HEX3Atmp_374219;
		NI LOC3;
		NI res_374222;
		i_374214 = 0;
		HEX3Atmp_374219 = 0;
		LOC3 = 0;
		LOC3 = sonslen_217351(result);
		HEX3Atmp_374219 = (NI)(LOC3 - ((NI) 1));
		res_374222 = ((NI) 1);
		{
			while (1) {
				if (!(res_374222 <= HEX3Atmp_374219)) goto LA5;
				i_374214 = res_374222;
				asgnRefNoCycle((void**) (&(*result).kindU.S6.sons->data[i_374214]), genconv_374005((*result).kindU.S6.sons->data[i_374214], (*(*disp).typ).sons->data[i_374214], NIM_TRUE));
				res_374222 += ((NI) 1);
			} LA5: ;
		}
	}
	return result;
}

N_NIMCALL(NIM_BOOL, relevantcol_374896)(Tsymseq214792* methods, NI col) {
	NIM_BOOL result;
	Ttype214828* t;
{	result = 0;
	t = skiptypes_218113((*(*methods->data[((NI) 0)]).typ).sons->data[col], IL64(211106247215360));
	{
		if (!((*t).kind == ((NU8) 17))) goto LA3;
		{
			NI i_374923;
			NI HEX3Atmp_374927;
			NI res_374930;
			i_374923 = 0;
			HEX3Atmp_374927 = 0;
			HEX3Atmp_374927 = (methods ? (methods->Sup.len-1) : -1);
			res_374930 = ((NI) 1);
			{
				while (1) {
					Ttype214828* t2;
					if (!(res_374930 <= HEX3Atmp_374927)) goto LA7;
					i_374923 = res_374930;
					t2 = skiptypes_218113((*(*methods->data[i_374923]).typ).sons->data[col], IL64(211106247215360));
					{
						NIM_BOOL LOC10;
						LOC10 = 0;
						LOC10 = sametype_244628(t2, t, 0);
						if (!!(LOC10)) goto LA11;
						result = NIM_TRUE;
						goto BeforeRet;
					}
					LA11: ;
					res_374930 += ((NI) 1);
				} LA7: ;
			}
		}
	}
	LA3: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NI, cmpsignatures_374934)(Tsym214822* a, Tsym214822* b, Intset211035 relevantcols) {
	NI result;
{	result = 0;
	{
		NI col_374952;
		NI HEX3Atmp_374963;
		NI LOC2;
		NI res_374966;
		col_374952 = 0;
		HEX3Atmp_374963 = 0;
		LOC2 = 0;
		LOC2 = sonslen_217327((*a).typ);
		HEX3Atmp_374963 = (NI)(LOC2 - ((NI) 1));
		res_374966 = ((NI) 1);
		{
			while (1) {
				if (!(res_374966 <= HEX3Atmp_374963)) goto LA4;
				col_374952 = res_374966;
				{
					NIM_BOOL LOC7;
					Ttype214828* aa;
					Ttype214828* bb;
					NI d;
					LOC7 = 0;
					LOC7 = contains_211811(relevantcols, col_374952);
					if (!LOC7) goto LA8;
					aa = skiptypes_218113((*(*a).typ).sons->data[col_374952], IL64(211106247215360));
					bb = skiptypes_218113((*(*b).typ).sons->data[col_374952], IL64(211106247215360));
					d = inheritancediff_246442(aa, bb);
					{
						if (!!((d == ((NI) 2147483647)))) goto LA12;
						result = d;
						goto BeforeRet;
					}
					LA12: ;
				}
				LA8: ;
				res_374966 += ((NI) 1);
			} LA4: ;
		}
	}
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, sortbucket_374970)(Tsymseq214792** a, Intset211035 relevantcols) {
	NI n;
	NI h;
	n = ((*a) ? (*a)->Sup.len : 0);
	h = ((NI) 1);
	{
		while (1) {
			h = (NI)((NI)(((NI) 3) * h) + ((NI) 1));
			{
				if (!(n < h)) goto LA5;
				goto LA1;
			}
			LA5: ;
		}
	} LA1: ;
	{
		while (1) {
			h = (NI)(h / ((NI) 3));
			{
				NI i_374996;
				NI HEX3Atmp_375003;
				NI res_375006;
				i_374996 = 0;
				HEX3Atmp_375003 = 0;
				HEX3Atmp_375003 = (NI)(n - ((NI) 1));
				res_375006 = h;
				{
					while (1) {
						Tsym214822* v;
						NI j;
						if (!(res_375006 <= HEX3Atmp_375003)) goto LA11;
						i_374996 = res_375006;
						v = (*a)->data[i_374996];
						j = i_374996;
						{
							while (1) {
								NI LOC14;
								LOC14 = 0;
								LOC14 = cmpsignatures_374934((*a)->data[(NI)(j - h)], v, relevantcols);
								if (!(((NI) 0) <= LOC14)) goto LA13;
								asgnRefNoCycle((void**) (&(*a)->data[j]), (*a)->data[(NI)(j - h)]);
								j = (NI)(j - h);
								{
									if (!(j < h)) goto LA17;
									goto LA12;
								}
								LA17: ;
							} LA13: ;
						} LA12: ;
						asgnRefNoCycle((void**) (&(*a)->data[j]), v);
						res_375006 += ((NI) 1);
					} LA11: ;
				}
			}
			{
				if (!(h == ((NI) 1))) goto LA21;
				goto LA7;
			}
			LA21: ;
		}
	} LA7: ;
}

N_NIMCALL(Tsym214822*, gendispatcher_375010)(Tsymseq214792* methods, Intset211035 relevantcols) {
	Tsym214822* result;
	Tsym214822* base;
	Tnode214790* LOC1;
	NI paramlen;
	Tnode214790* disp;
	Tsym214822* ands;
	Tsym214822* iss;
	result = 0;
	LOC1 = 0;
	LOC1 = lastson_217364((*methods->data[((NI) 0)]).ast);
	base = (*LOC1).kindU.S4.sym;
	result = base;
	paramlen = sonslen_217327((*base).typ);
	disp = newnodei_216248(((NU8) 92), (*base).info);
	ands = getsyssym_258041(((NimStringDesc*) &TMP4481));
	iss = getsyssym_258041(((NimStringDesc*) &TMP4482));
	{
		NI meth_375035;
		NI HEX3Atmp_375144;
		NI res_375147;
		meth_375035 = 0;
		HEX3Atmp_375144 = 0;
		HEX3Atmp_375144 = (methods ? (methods->Sup.len-1) : -1);
		res_375147 = ((NI) 0);
		{
			while (1) {
				Tsym214822* curr;
				Tnode214790* cond;
				Tnode214790* call;
				Tnode214790* LOC24;
				Tnode214790* ret;
				if (!(res_375147 <= HEX3Atmp_375144)) goto LA4;
				meth_375035 = res_375147;
				curr = methods->data[meth_375035];
				cond = NIM_NIL;
				{
					NI col_375049;
					NI HEX3Atmp_375128;
					NI res_375131;
					col_375049 = 0;
					HEX3Atmp_375128 = 0;
					HEX3Atmp_375128 = (NI)(paramlen - ((NI) 1));
					res_375131 = ((NI) 1);
					{
						while (1) {
							if (!(res_375131 <= HEX3Atmp_375128)) goto LA7;
							col_375049 = res_375131;
							{
								NIM_BOOL LOC10;
								Tnode214790* isn;
								Ttype214828* LOC13;
								Tnode214790* LOC14;
								Tnode214790* LOC15;
								Tnode214790* LOC16;
								LOC10 = 0;
								LOC10 = contains_211811(relevantcols, col_375049);
								if (!LOC10) goto LA11;
								LOC13 = 0;
								LOC13 = getsystype_258130(((NU8) 1));
								isn = newnodeit_216801(((NU8) 27), (*base).info, LOC13);
								LOC14 = 0;
								LOC14 = newsymnode_216234(iss);
								addson_216807(isn, LOC14);
								LOC15 = 0;
								LOC15 = newsymnode_216234((*(*(*(*base).typ).n).kindU.S6.sons->data[col_375049]).kindU.S4.sym);
								addson_216807(isn, LOC15);
								LOC16 = 0;
								LOC16 = newnodeit_216801(((NU8) 4), (*base).info, (*(*curr).typ).sons->data[col_375049]);
								addson_216807(isn, LOC16);
								{
									Tnode214790* a;
									Ttype214828* LOC21;
									Tnode214790* LOC22;
									if (!!((cond == NIM_NIL))) goto LA19;
									LOC21 = 0;
									LOC21 = getsystype_258130(((NU8) 1));
									a = newnodeit_216801(((NU8) 27), (*base).info, LOC21);
									LOC22 = 0;
									LOC22 = newsymnode_216234(ands);
									addson_216807(a, LOC22);
									addson_216807(a, cond);
									addson_216807(a, isn);
									cond = a;
								}
								goto LA17;
								LA19: ;
								{
									cond = isn;
								}
								LA17: ;
							}
							LA11: ;
							res_375131 += ((NI) 1);
						} LA7: ;
					}
				}
				call = newnodei_216248(((NU8) 27), (*base).info);
				LOC24 = 0;
				LOC24 = newsymnode_216234(curr);
				addson_216807(call, LOC24);
				{
					NI col_375084;
					NI HEX3Atmp_375136;
					NI res_375139;
					col_375084 = 0;
					HEX3Atmp_375136 = 0;
					HEX3Atmp_375136 = (NI)(paramlen - ((NI) 1));
					res_375139 = ((NI) 1);
					{
						while (1) {
							Tnode214790* LOC28;
							Tnode214790* LOC29;
							if (!(res_375139 <= HEX3Atmp_375136)) goto LA27;
							col_375084 = res_375139;
							LOC28 = 0;
							LOC28 = newsymnode_216234((*(*(*(*base).typ).n).kindU.S6.sons->data[col_375084]).kindU.S4.sym);
							LOC29 = 0;
							LOC29 = genconv_374005(LOC28, (*(*curr).typ).sons->data[col_375084], NIM_FALSE);
							addson_216807(call, LOC29);
							res_375139 += ((NI) 1);
						} LA27: ;
					}
				}
				ret = 0;
				{
					Tnode214790* a;
					Tnode214790* LOC34;
					if (!!(((*(*base).typ).sons->data[((NI) 0)] == NIM_NIL))) goto LA32;
					a = newnodei_216248(((NU8) 74), (*base).info);
					LOC34 = 0;
					LOC34 = newsymnode_216234((*(*(*base).ast).kindU.S6.sons->data[((NI) 7)]).kindU.S4.sym);
					addson_216807(a, LOC34);
					addson_216807(a, call);
					ret = newnodei_216248(((NU8) 109), (*base).info);
					addson_216807(ret, a);
				}
				goto LA30;
				LA32: ;
				{
					ret = call;
				}
				LA30: ;
				{
					Tnode214790* a;
					if (!!((cond == NIM_NIL))) goto LA38;
					a = newnodei_216248(((NU8) 86), (*base).info);
					addson_216807(a, cond);
					addson_216807(a, ret);
					addson_216807(disp, a);
				}
				goto LA36;
				LA38: ;
				{
					disp = ret;
				}
				LA36: ;
				res_375147 += ((NI) 1);
			} LA4: ;
		}
	}
	asgnRefNoCycle((void**) (&(*(*result).ast).kindU.S6.sons->data[((NI) 6)]), disp);
	return result;
}

N_NIMCALL(Tnode214790*, generatemethoddispatchers_375151)(void) {
	Tnode214790* result;
	result = 0;
	result = newnode_215401(((NU8) 115));
	{
		NI bucket_375173;
		NI HEX3Atmp_375199;
		NI res_375202;
		bucket_375173 = 0;
		HEX3Atmp_375199 = 0;
		HEX3Atmp_375199 = (NI)((gmethods_374246 ? gmethods_374246->Sup.len : 0) - ((NI) 1));
		res_375202 = ((NI) 0);
		{
			while (1) {
				Intset211035 relevantcols;
				Tsym214822* LOC13;
				Tnode214790* LOC14;
				if (!(res_375202 <= HEX3Atmp_375199)) goto LA3;
				bucket_375173 = res_375202;
				memset((void*)(&relevantcols), 0, sizeof(relevantcols));
				chckNil((void*)(&relevantcols));
				memset((void*)(&relevantcols), 0, sizeof(relevantcols));
				initintset_211885((&relevantcols));
				{
					NI col_375187;
					NI HEX3Atmp_375192;
					NI LOC5;
					NI res_375195;
					col_375187 = 0;
					HEX3Atmp_375192 = 0;
					LOC5 = 0;
					LOC5 = sonslen_217327((*gmethods_374246->data[bucket_375173].Field0->data[((NI) 0)]).typ);
					HEX3Atmp_375192 = (NI)(LOC5 - ((NI) 1));
					res_375195 = ((NI) 1);
					{
						while (1) {
							if (!(res_375195 <= HEX3Atmp_375192)) goto LA7;
							col_375187 = res_375195;
							{
								NIM_BOOL LOC10;
								LOC10 = 0;
								LOC10 = relevantcol_374896(gmethods_374246->data[bucket_375173].Field0, col_375187);
								if (!LOC10) goto LA11;
								incl_211832((&relevantcols), col_375187);
							}
							LA11: ;
							res_375195 += ((NI) 1);
						} LA7: ;
					}
				}
				sortbucket_374970((&gmethods_374246->data[bucket_375173].Field0), relevantcols);
				LOC13 = 0;
				LOC13 = gendispatcher_375010(gmethods_374246->data[bucket_375173].Field0, relevantcols);
				LOC14 = 0;
				LOC14 = newsymnode_216234(LOC13);
				addson_216807(result, LOC14);
				res_375202 += ((NI) 1);
			} LA3: ;
		}
	}
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_cgmethInit000)(void) {
	if (gmethods_374246) nimGCunrefNoCycle(gmethods_374246);
	gmethods_374246 = (TY374226*) newSeqRC1((&NTI374226), 0);
}

NIM_EXTERNC N_NOINLINE(void, compiler_cgmethDatInit000)(void) {
static TNimNode* TMP1011[2];
static TNimNode TMP1009[3];
NTI374227.size = sizeof(TY374227);
NTI374227.kind = 18;
NTI374227.base = 0;
NTI374227.flags = 2;
TMP1011[0] = &TMP1009[1];
TMP1009[1].kind = 1;
TMP1009[1].offset = offsetof(TY374227, Field0);
TMP1009[1].typ = (&NTI214792);
TMP1009[1].name = "Field0";
TMP1011[1] = &TMP1009[2];
TMP1009[2].kind = 1;
TMP1009[2].offset = offsetof(TY374227, Field1);
TMP1009[2].typ = (&NTI214788);
TMP1009[2].name = "Field1";
TMP1009[0].len = 2; TMP1009[0].kind = 2; TMP1009[0].sons = &TMP1011[0];
NTI374227.node = &TMP1009[0];
NTI374226.size = sizeof(TY374226*);
NTI374226.kind = 24;
NTI374226.base = (&NTI374227);
NTI374226.flags = 2;
NTI374226.marker = TMP1012;
}

