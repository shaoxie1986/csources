/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
typedef struct Tnode216790 Tnode216790;
typedef struct Tsym216822 Tsym216822;
typedef struct Tlineinfo184337 Tlineinfo184337;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Ttype216828 Ttype216828;
typedef struct Tident191012 Tident191012;
typedef struct Tnodeseq216784 Tnodeseq216784;
typedef struct Tidobj191006 Tidobj191006;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq216824 Ttypeseq216824;
typedef struct Tscope216816 Tscope216816;
typedef struct TY216925 TY216925;
typedef struct Tstrtable216794 Tstrtable216794;
typedef struct Tsymseq216792 Tsymseq216792;
typedef struct Tloc216804 Tloc216804;
typedef struct Ropeobj172006 Ropeobj172006;
typedef struct Tlib216808 Tlib216808;
typedef struct Templctx402004 Templctx402004;
typedef struct Tidtable216840 Tidtable216840;
typedef struct Tidpairseq216838 Tidpairseq216838;
typedef struct TY89887 TY89887;
typedef struct Cell47304 Cell47304;
typedef struct Cellseq47320 Cellseq47320;
typedef struct Gcheap49618 Gcheap49618;
typedef struct Gcstack49616 Gcstack49616;
typedef struct Cellset47316 Cellset47316;
typedef struct Pagedesc47312 Pagedesc47312;
typedef struct Memregion29487 Memregion29487;
typedef struct Smallchunk29439 Smallchunk29439;
typedef struct Llchunk29481 Llchunk29481;
typedef struct Bigchunk29441 Bigchunk29441;
typedef struct Intset29414 Intset29414;
typedef struct Trunk29410 Trunk29410;
typedef struct Avlnode29485 Avlnode29485;
typedef struct Gcstat49614 Gcstat49614;
typedef struct Tinstantiation216812 Tinstantiation216812;
typedef struct Tlistentry138010 Tlistentry138010;
typedef struct Tidpair216836 Tidpair216836;
typedef struct Basechunk29437 Basechunk29437;
typedef struct Freecell29429 Freecell29429;
typedef struct TY216913 TY216913;
struct  Tlineinfo184337  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tnode216790  {
Ttype216828* typ;
Tlineinfo184337 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym216822* sym;
} S4;
struct {Tident191012* ident;
} S5;
struct {Tnodeseq216784* sons;
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
struct  Tidobj191006  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable216794  {
NI counter;
Tsymseq216792* data;
};
struct  Tloc216804  {
NU8 k;
NU8 s;
NU16 flags;
Ttype216828* t;
Ropeobj172006* r;
Ropeobj172006* heaproot;
};
struct  Tsym216822  {
  Tidobj191006 Sup;
NU8 kind;
union{
struct {Ttypeseq216824* typeinstcache;
Tscope216816* typscope;
} S1;
struct {TY216925* procinstcache;
Tsym216822* gcunsafetyreason;
} S2;
struct {TY216925* usedgenerics;
Tstrtable216794 tab;
} S3;
struct {Tsym216822* guard;
NI bitsize;
} S4;
} kindU;
NU8 magic;
Ttype216828* typ;
Tident191012* name;
Tlineinfo184337 info;
Tsym216822* owner;
NU32 flags;
Tnode216790* ast;
NU32 options;
NI position;
NI offset;
Tloc216804 loc;
Tlib216808* annex;
Tnode216790* constraint;
};
struct  Ttype216828  {
  Tidobj191006 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq216824* sons;
Tnode216790* n;
Tsym216822* owner;
Tsym216822* sym;
Tsym216822* destructor;
Tsym216822* deepcopy;
Tsym216822* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc216804 loc;
};
struct  Tidtable216840  {
NI counter;
Tidpairseq216838* data;
};
struct  Templctx402004  {
Tsym216822* owner;
Tsym216822* gensymowner;
NIM_BOOL instlines;
Tidtable216840 mapping;
};
struct TY89887 {
NimStringDesc* Field0;
NI Field1;
};
struct  Cell47304  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47320  {
NI len;
NI cap;
Cell47304** d;
};
struct  Cellset47316  {
NI counter;
NI max;
Pagedesc47312* head;
Pagedesc47312** data;
};
typedef Smallchunk29439* TY29502[512];
typedef Trunk29410* Trunkbuckets29412[256];
struct  Intset29414  {
Trunkbuckets29412 data;
};
struct  Memregion29487  {
NI minlargeobj;
NI maxlargeobj;
TY29502 freesmallchunks;
Llchunk29481* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29441* freechunkslist;
Intset29414 chunkstarts;
Avlnode29485* root;
Avlnode29485* deleted;
Avlnode29485* last;
Avlnode29485* freeavlnodes;
};
struct  Gcstat49614  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Gcheap49618  {
Gcstack49616* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47320 zct;
Cellseq47320 decstack;
Cellset47316 cycleroots;
Cellseq47320 tempstack;
NI recgclock;
Memregion29487 region;
Gcstat49614 stat;
};
struct  Tident191012  {
  Tidobj191006 Sup;
NimStringDesc* s;
Tident191012* next;
NI h;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Tscope216816  {
NI depthlevel;
Tstrtable216794 symbols;
Tnodeseq216784* usingsyms;
Tscope216816* parent;
};
struct  Ropeobj172006  {
  TNimObject Sup;
Ropeobj172006* left;
Ropeobj172006* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry138010  {
  TNimObject Sup;
Tlistentry138010* prev;
Tlistentry138010* next;
};
struct  Tlib216808  {
  Tlistentry138010 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj172006* name;
Tnode216790* path;
};
struct  Tidpair216836  {
Tidobj191006* key;
TNimObject* val;
};
struct  Gcstack49616  {
Gcstack49616* prev;
Gcstack49616* next;
void* starts;
void* pos;
NI maxstacksize;
};
typedef NI TY29418[16];
struct  Pagedesc47312  {
Pagedesc47312* next;
NI key;
TY29418 bits;
};
struct  Basechunk29437  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29439  {
  Basechunk29437 Sup;
Smallchunk29439* next;
Smallchunk29439* prev;
Freecell29429* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29481  {
NI size;
NI acc;
Llchunk29481* next;
};
struct  Bigchunk29441  {
  Basechunk29437 Sup;
Bigchunk29441* next;
Bigchunk29441* prev;
NI align;
NF data;
};
struct  Trunk29410  {
Trunk29410* next;
NI key;
TY29418 bits;
};
typedef Avlnode29485* TY29492[2];
struct  Avlnode29485  {
TY29492 link;
NI key;
NI upperbound;
NI level;
};
struct  Tinstantiation216812  {
Tsym216822* sym;
Ttypeseq216824* concretetypes;
TY216913* usedby;
NI compilesid;
};
struct  Freecell29429  {
Freecell29429* next;
NI zerofield;
};
struct Tnodeseq216784 {
  TGenericSeq Sup;
  Tnode216790* data[SEQ_DECL_SIZE];
};
struct Ttypeseq216824 {
  TGenericSeq Sup;
  Ttype216828* data[SEQ_DECL_SIZE];
};
struct TY216925 {
  TGenericSeq Sup;
  Tinstantiation216812* data[SEQ_DECL_SIZE];
};
struct Tsymseq216792 {
  TGenericSeq Sup;
  Tsym216822* data[SEQ_DECL_SIZE];
};
struct Tidpairseq216838 {
  TGenericSeq Sup;
  Tidpair216836 data[SEQ_DECL_SIZE];
};
struct TY216913 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, globalerror_189071)(Tlineinfo184337 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(Tnode216790*, evaltemplateargs_402216)(Tnode216790* n, Tsym216822* s);
static N_INLINE(NI, len_217059)(Tnode216790* n);
static N_INLINE(Tnode216790*, HEX5BHEX5D_217238)(Tnode216790* n, NI i);
N_NIMCALL(NI, len_219339)(Ttype216828* n);
N_NIMCALL(Tnode216790*, newnodei_218248)(NU8 kind, Tlineinfo184337 info);
N_NIMCALL(void, addson_218807)(Tnode216790* father, Tnode216790* son);
N_NIMCALL(void, localerror_189080)(Tlineinfo184337 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(Tnode216790*, copytree_220822)(Tnode216790* src);
N_NIMCALL(void, initidtable_220033)(Tidtable216840* x);
N_NIMCALL(Tnode216790*, getbody_256828)(Tsym216822* s);
static N_INLINE(NIM_BOOL, isatom_221491)(Tnode216790* n);
N_NIMCALL(void, evaltemplateaux_402015)(Tnode216790* templ, Tnode216790* actual, Templctx402004* c, Tnode216790* result);
N_NIMCALL(void, add_217114)(Tnode216790* father, Tnode216790* son);
N_NIMCALL(void, internalerror_189113)(NimStringDesc* errmsg);
N_NIMCALL(NimStringDesc*, HEX24_189183)(TY89887 x);
N_NIMCALL(TNimObject*, idtableget_223107)(Tidtable216840 t, Tidobj191006* key);
N_NIMCALL(Tsym216822*, copysym_219601)(Tsym216822* s, NIM_BOOL keepid);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Cell47304*, usrtocell_51240)(void* usr);
static N_INLINE(void, rtladdzct_52801)(Cell47304* c);
N_NOINLINE(void, addzct_51217)(Cellseq47320* s, Cell47304* c);
N_NIMCALL(void, idtableput_223115)(Tidtable216840* t, Tidobj191006* key, TNimObject* val);
N_NIMCALL(Tnode216790*, newsymnode_218241)(Tsym216822* sym, Tlineinfo184337 info);
N_NIMCALL(Tnode216790*, copynode_402009)(Templctx402004* ctx, Tnode216790* a, Tnode216790* b);
N_NIMCALL(Tnode216790*, copynode_220542)(Tnode216790* src);
N_NIMCALL(NI, sonslen_219351)(Tnode216790* n);
N_NIMCALL(NimStringDesc*, rendertree_235044)(Tnode216790* n, NU8 renderflags);
static N_INLINE(NI, safelen_217081)(Tnode216790* n);
STRING_LITERAL(TMP2983, "", 0);
STRING_LITERAL(TMP2985, "compiler/evaltempl.nim", 22);
NIM_CONST TY89887 TMP2984 = {((NimStringDesc*) &TMP2985),
((NI) 45)}
;
NI evaltemplatecounter_402328;
extern Tnode216790* emptynode_217801;
extern Gcheap49618 gch_49659;

static N_INLINE(NI, len_217059)(Tnode216790* n) {
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

static N_INLINE(Tnode216790*, HEX5BHEX5D_217238)(Tnode216790* n, NI i) {
	Tnode216790* result;
	result = 0;
	result = (*n).kindU.S6.sons->data[i];
	return result;
}

N_NIMCALL(Tnode216790*, evaltemplateargs_402216)(Tnode216790* n, Tsym216822* s) {
	Tnode216790* result;
	NI totalparams;
	NI genericparams;
	NI expectedregularparams;
	NI LOC10;
	NI givenregularparams;
	result = 0;
	switch ((*n).kind) {
	case ((NU8) 27):
	case ((NU8) 29):
	case ((NU8) 30):
	case ((NU8) 31):
	case ((NU8) 26):
	case ((NU8) 28):
	{
		NI LOC2;
		LOC2 = 0;
		LOC2 = len_217059(n);
		totalparams = (NI)(LOC2 - ((NI) 1));
	}
	break;
	default:
	{
		totalparams = ((NI) 0);
	}
	break;
	}
	{
		if (!(((*s).flags &(1U<<((NU)(((NU8) 25))&31U)))!=0)) goto LA6;
		genericparams = ((NI) 0);
	}
	goto LA4;
	LA6: ;
	{
		Tnode216790* LOC9;
		LOC9 = 0;
		LOC9 = HEX5BHEX5D_217238((*s).ast, ((NI) 2));
		genericparams = len_217059(LOC9);
	}
	LA4: ;
	LOC10 = 0;
	LOC10 = len_219339((*s).typ);
	expectedregularparams = (LOC10 - 1);
	givenregularparams = (NI)(totalparams - genericparams);
	{
		if (!((NI)(expectedregularparams + genericparams) < totalparams)) goto LA13;
		globalerror_189071((*n).info, ((NU16) 137), ((NimStringDesc*) &TMP2983));
	}
	LA13: ;
	result = newnodei_218248(((NU8) 152), (*n).info);
	{
		NI i_402257;
		NI res_402309;
		i_402257 = 0;
		res_402309 = ((NI) 1);
		{
			while (1) {
				if (!(res_402309 <= givenregularparams)) goto LA17;
				i_402257 = res_402309;
				addson_218807(result, (*n).kindU.S6.sons->data[i_402257]);
				res_402309 += ((NI) 1);
			} LA17: ;
		}
	}
	{
		NI i_402269;
		NI HEX3Atmp_402314;
		NI res_402317;
		i_402269 = 0;
		HEX3Atmp_402314 = 0;
		HEX3Atmp_402314 = (NI)(givenregularparams + ((NI) 1));
		res_402317 = HEX3Atmp_402314;
		{
			while (1) {
				Tnode216790* default_402274;
				if (!(res_402317 <= expectedregularparams)) goto LA20;
				i_402269 = res_402317;
				default_402274 = (*(*(*(*(*s).typ).n).kindU.S6.sons->data[i_402269]).kindU.S4.sym).ast;
				{
					NIM_BOOL LOC23;
					LOC23 = 0;
					LOC23 = default_402274 == 0;
					if (LOC23) goto LA24;
					LOC23 = ((*default_402274).kind == ((NU8) 1));
					LA24: ;
					if (!LOC23) goto LA25;
					localerror_189080((*n).info, ((NU16) 137), ((NimStringDesc*) &TMP2983));
					addson_218807(result, emptynode_217801);
				}
				goto LA21;
				LA25: ;
				{
					Tnode216790* LOC28;
					LOC28 = 0;
					LOC28 = copytree_220822(default_402274);
					addson_218807(result, LOC28);
				}
				LA21: ;
				res_402317 += ((NI) 1);
			} LA20: ;
		}
	}
	{
		NI i_402303;
		NI res_402324;
		i_402303 = 0;
		res_402324 = ((NI) 1);
		{
			while (1) {
				if (!(res_402324 <= genericparams)) goto LA31;
				i_402303 = res_402324;
				addson_218807(result, (*n).kindU.S6.sons->data[(NI)(givenregularparams + i_402303)]);
				res_402324 += ((NI) 1);
			} LA31: ;
		}
	}
	return result;
}

static N_INLINE(NIM_BOOL, isatom_221491)(Tnode216790* n) {
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

static N_INLINE(Cell47304*, usrtocell_51240)(void* usr) {
	Cell47304* result;
	result = 0;
	result = ((Cell47304*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Cell47304))))));
	return result;
}

static N_INLINE(void, rtladdzct_52801)(Cell47304* c) {
	addzct_51217((&gch_49659.zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Cell47304* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_51240(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell47304* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_51240((*dest));
		{
			(*c).refcount -= ((NI) 8);
			if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_52801(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(Tnode216790*, copynode_402009)(Templctx402004* ctx, Tnode216790* a, Tnode216790* b) {
	Tnode216790* result;
	result = 0;
	result = copynode_220542(a);
	{
		if (!(*ctx).instlines) goto LA3;
		(*result).info = (*b).info;
	}
	LA3: ;
	return result;
}

N_NIMCALL(void, evaltemplateaux_402015)(Tnode216790* templ, Tnode216790* actual, Templctx402004* c, Tnode216790* result) {
	switch ((*templ).kind) {
	case ((NU8) 3):
	{
		Tsym216822* s;
		s = (*templ).kindU.S4.sym;
		{
			if (!((*(*s).owner).Sup.id == (*(*c).owner).Sup.id)) goto LA4;
			{
				NIM_BOOL LOC8;
				Tnode216790* x_402059;
				LOC8 = 0;
				LOC8 = ((*s).kind == ((NU8) 3));
				if (!(LOC8)) goto LA9;
				LOC8 = !((((*s).flags &(1U<<((NU)(((NU8) 31))&31U)))!=0));
				LA9: ;
				if (!LOC8) goto LA10;
				x_402059 = (*actual).kindU.S6.sons->data[(*s).position];
				{
					if (!((*x_402059).kind == ((NU8) 152))) goto LA14;
					{
						Tnode216790* y_402061;
						y_402061 = 0;
						{
							NI i_402190;
							NI HEX3Atmp_402192;
							NI LOC18;
							NI res_402194;
							i_402190 = 0;
							HEX3Atmp_402192 = 0;
							LOC18 = 0;
							LOC18 = len_217059(x_402059);
							HEX3Atmp_402192 = (LOC18 - 1);
							res_402194 = ((NI) 0);
							{
								while (1) {
									if (!(res_402194 <= HEX3Atmp_402192)) goto LA20;
									i_402190 = res_402194;
									y_402061 = (*x_402059).kindU.S6.sons->data[i_402190];
									add_217114(result, y_402061);
									res_402194 += ((NI) 1);
								} LA20: ;
							}
						}
					}
				}
				goto LA12;
				LA14: ;
				{
					Tnode216790* LOC22;
					LOC22 = 0;
					LOC22 = copytree_220822(x_402059);
					add_217114(result, LOC22);
				}
				LA12: ;
			}
			goto LA6;
			LA10: ;
			{
				NIM_BOOL LOC24;
				NIM_BOOL LOC26;
				NIM_BOOL LOC27;
				Tnode216790* x_402117;
				NI LOC32;
				LOC24 = 0;
				LOC24 = ((*s).kind == ((NU8) 4));
				if (LOC24) goto LA25;
				LOC26 = 0;
				LOC27 = 0;
				LOC27 = ((*s).kind == ((NU8) 7));
				if (!(LOC27)) goto LA28;
				LOC27 = !(((*s).typ == NIM_NIL));
				LA28: ;
				LOC26 = LOC27;
				if (!(LOC26)) goto LA29;
				LOC26 = ((*(*s).typ).kind == ((NU8) 12));
				LA29: ;
				LOC24 = LOC26;
				LA25: ;
				if (!LOC24) goto LA30;
				LOC32 = 0;
				LOC32 = len_219339((*(*s).owner).typ);
				x_402117 = (*actual).kindU.S6.sons->data[(NI)((NI)(LOC32 + (*s).position) - ((NI) 1))];
				{
					if (!((*x_402117).kind == ((NU8) 152))) goto LA35;
					{
						Tnode216790* y_402119;
						y_402119 = 0;
						{
							NI i_402201;
							NI HEX3Atmp_402203;
							NI LOC39;
							NI res_402205;
							i_402201 = 0;
							HEX3Atmp_402203 = 0;
							LOC39 = 0;
							LOC39 = len_217059(x_402117);
							HEX3Atmp_402203 = (LOC39 - 1);
							res_402205 = ((NI) 0);
							{
								while (1) {
									if (!(res_402205 <= HEX3Atmp_402203)) goto LA41;
									i_402201 = res_402205;
									y_402119 = (*x_402117).kindU.S6.sons->data[i_402201];
									add_217114(result, y_402119);
									res_402205 += ((NI) 1);
								} LA41: ;
							}
						}
					}
				}
				goto LA33;
				LA35: ;
				{
					Tnode216790* LOC43;
					LOC43 = 0;
					LOC43 = copytree_220822(x_402117);
					add_217114(result, LOC43);
				}
				LA33: ;
			}
			goto LA6;
			LA30: ;
			{
				Tsym216822* x;
				Tidobj191006* LOC50;
				TNimObject* LOC51;
				Tlineinfo184337 LOC58;
				Tnode216790* LOC64;
				{
					NimStringDesc* LOC49;
					if (!!((((*s).flags &(1U<<((NU)(((NU8) 31))&31U)))!=0))) goto LA47;
					LOC49 = 0;
					LOC49 = HEX24_189183(TMP2984);
					internalerror_189113(LOC49);
				}
				LA47: ;
				LOC50 = 0;
				LOC50 = &s->Sup;
				LOC51 = 0;
				LOC51 = idtableget_223107((*c).mapping, LOC50);
				x = ((Tsym216822*) (LOC51));
				{
					Tidobj191006* LOC56;
					TNimObject* LOC57;
					if (!(x == NIM_NIL)) goto LA54;
					x = copysym_219601(s, NIM_FALSE);
					asgnRefNoCycle((void**) (&(*x).owner), (*c).gensymowner);
					LOC56 = 0;
					LOC56 = &s->Sup;
					LOC57 = 0;
					LOC57 = &x->Sup.Sup;
					idtableput_223115((&(*c).mapping), LOC56, LOC57);
				}
				LA54: ;
				{
					if (!(*c).instlines) goto LA61;
					LOC58 = (*actual).info;
				}
				goto LA59;
				LA61: ;
				{
					LOC58 = (*templ).info;
				}
				LA59: ;
				LOC64 = 0;
				LOC64 = newsymnode_218241(x, LOC58);
				add_217114(result, LOC64);
			}
			LA6: ;
		}
		goto LA2;
		LA4: ;
		{
			Tnode216790* LOC66;
			LOC66 = 0;
			LOC66 = copynode_402009((&(*c)), templ, actual);
			add_217114(result, LOC66);
		}
		LA2: ;
	}
	break;
	case ((NU8) 0) ... ((NU8) 2):
	case ((NU8) 4) ... ((NU8) 23):
	{
		Tnode216790* LOC68;
		LOC68 = 0;
		LOC68 = copynode_402009((&(*c)), templ, actual);
		add_217114(result, LOC68);
	}
	break;
	default:
	{
		Tnode216790* res;
		res = copynode_402009((&(*c)), templ, actual);
		{
			NI i_402183;
			NI HEX3Atmp_402209;
			NI LOC71;
			NI res_402212;
			i_402183 = 0;
			HEX3Atmp_402209 = 0;
			LOC71 = 0;
			LOC71 = sonslen_219351(templ);
			HEX3Atmp_402209 = (NI)(LOC71 - ((NI) 1));
			res_402212 = ((NI) 0);
			{
				while (1) {
					if (!(res_402212 <= HEX3Atmp_402209)) goto LA73;
					i_402183 = res_402212;
					evaltemplateaux_402015((*templ).kindU.S6.sons->data[i_402183], actual, c, res);
					res_402212 += ((NI) 1);
				} LA73: ;
			}
		}
		add_217114(result, res);
	}
	break;
	}
}

static N_INLINE(NI, safelen_217081)(Tnode216790* n) {
	NI result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = ((*n).kind >= ((NU8) 0) && (*n).kind <= ((NU8) 23));
		if (LOC3) goto LA4;
		LOC3 = (*n).kindU.S6.sons == 0;
		LA4: ;
		if (!LOC3) goto LA5;
		result = ((NI) 0);
	}
	goto LA1;
	LA5: ;
	{
		result = ((*n).kindU.S6.sons ? (*n).kindU.S6.sons->Sup.len : 0);
	}
	LA1: ;
	return result;
}

N_NIMCALL(Tnode216790*, evaltemplate_402329)(Tnode216790* n, Tsym216822* tmpl, Tsym216822* gensymowner) {
	Tnode216790* result;
	Tnode216790* args;
	Templctx402004 ctx;
	Tnode216790* body;
	result = 0;
	evaltemplatecounter_402328 += ((NI) 1);
	{
		if (!(((NI) 100) < evaltemplatecounter_402328)) goto LA3;
		globalerror_189071((*n).info, ((NU16) 188), ((NimStringDesc*) &TMP2983));
		result = n;
	}
	LA3: ;
	args = evaltemplateargs_402216(n, tmpl);
	memset((void*)(&ctx), 0, sizeof(ctx));
	ctx.owner = tmpl;
	ctx.gensymowner = gensymowner;
	initidtable_220033((&ctx.mapping));
	body = getbody_256828(tmpl);
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = isatom_221491(body);
		if (!LOC7) goto LA8;
		result = newnodei_218248(((NU8) 37), (*body).info);
		evaltemplateaux_402015(body, args, (&ctx), result);
		{
			NI LOC12;
			LOC12 = 0;
			LOC12 = len_217059(result);
			if (!(LOC12 == ((NI) 1))) goto LA13;
			result = (*result).kindU.S6.sons->data[((NI) 0)];
		}
		goto LA10;
		LA13: ;
		{
			NimStringDesc* LOC16;
			LOC16 = 0;
			LOC16 = rendertree_235044(result, 4);
			localerror_189080((*result).info, ((NU16) 1), LOC16);
		}
		LA10: ;
	}
	goto LA5;
	LA8: ;
	{
		result = copynode_220542(body);
		{
			NI i_402365;
			NI HEX3Atmp_402379;
			NI LOC19;
			NI res_402382;
			i_402365 = 0;
			HEX3Atmp_402379 = 0;
			LOC19 = 0;
			LOC19 = safelen_217081(body);
			HEX3Atmp_402379 = (NI)(LOC19 - ((NI) 1));
			res_402382 = ((NI) 0);
			{
				while (1) {
					if (!(res_402382 <= HEX3Atmp_402379)) goto LA21;
					i_402365 = res_402382;
					evaltemplateaux_402015((*body).kindU.S6.sons->data[i_402365], args, (&ctx), result);
					res_402382 += ((NI) 1);
				} LA21: ;
			}
		}
	}
	LA5: ;
	evaltemplatecounter_402328 -= ((NI) 1);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_evaltemplInit000)(void) {
	evaltemplatecounter_402328 = ((NI) 0);
}

NIM_EXTERNC N_NOINLINE(void, compiler_evaltemplDatInit000)(void) {
}

