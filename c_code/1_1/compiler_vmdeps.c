/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <setjmp.h>
#include <string.h>
#include <stdio.h>
typedef struct Tnode216790 Tnode216790;
typedef struct Ttype216828 Ttype216828;
typedef struct Tlineinfo184337 Tlineinfo184337;
typedef struct Tidobj191006 Tidobj191006;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq216824 Ttypeseq216824;
typedef struct Tsym216822 Tsym216822;
typedef struct Tloc216804 Tloc216804;
typedef struct Ropeobj172006 Ropeobj172006;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tident191012 Tident191012;
typedef struct Tscope216816 Tscope216816;
typedef struct TY216925 TY216925;
typedef struct Tstrtable216794 Tstrtable216794;
typedef struct Tsymseq216792 Tsymseq216792;
typedef struct Tlib216808 Tlib216808;
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
typedef struct Tnodeseq216784 Tnodeseq216784;
typedef struct Exception Exception;
typedef struct TSafePoint TSafePoint;
typedef struct Processobj152404 Processobj152404;
typedef struct Stringtableobj143209 Stringtableobj143209;
typedef struct Streamobj147418 Streamobj147418;
typedef struct Tinstantiation216812 Tinstantiation216812;
typedef struct Tlistentry138010 Tlistentry138010;
typedef struct Basechunk29437 Basechunk29437;
typedef struct Freecell29429 Freecell29429;
typedef struct Keyvaluepairseq143207 Keyvaluepairseq143207;
typedef struct TY216913 TY216913;
typedef struct Keyvaluepair143205 Keyvaluepair143205;
struct  Tlineinfo184337  {
NI16 line;
NI16 col;
NI32 fileindex;
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
struct  Tloc216804  {
NU8 k;
NU8 s;
NU16 flags;
Ttype216828* t;
Ropeobj172006* r;
Ropeobj172006* heaproot;
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
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tstrtable216794  {
NI counter;
Tsymseq216792* data;
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
struct  Tident191012  {
  Tidobj191006 Sup;
NimStringDesc* s;
Tident191012* next;
NI h;
};
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClPrc) (Exception* e, void* ClEnv);
void* ClEnv;
} TY17811;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY17811 raiseAction;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef Tnode216790* TY232280[1];
typedef NU8 Sha1digest194003[20];
typedef NimStringDesc* TY240694[1];
struct  Ropeobj172006  {
  TNimObject Sup;
Ropeobj172006* left;
Ropeobj172006* right;
NI length;
NimStringDesc* data;
};
struct  Tscope216816  {
NI depthlevel;
Tstrtable216794 symbols;
Tnodeseq216784* usingsyms;
Tscope216816* parent;
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
struct  Processobj152404  {
  TNimObject Sup;
NI fprocesshandle;
int inhandle;
int outhandle;
int errhandle;
NI id;
int exitcode;
NU8 options;
};
struct  Stringtableobj143209  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq143207* data;
NU8 mode;
};
typedef N_NIMCALL_PTR(void, TY147419) (Streamobj147418* s);
typedef N_NIMCALL_PTR(NIM_BOOL, TY147423) (Streamobj147418* s);
typedef N_NIMCALL_PTR(void, TY147427) (Streamobj147418* s, NI pos);
typedef N_NIMCALL_PTR(NI, TY147432) (Streamobj147418* s);
typedef N_NIMCALL_PTR(NI, TY147436) (Streamobj147418* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(NI, TY147442) (Streamobj147418* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY147448) (Streamobj147418* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY147454) (Streamobj147418* s);
struct  Streamobj147418  {
  TNimObject Sup;
TY147419 closeimpl;
TY147423 atendimpl;
TY147427 setpositionimpl;
TY147432 getpositionimpl;
TY147436 readdataimpl;
TY147442 peekdataimpl;
TY147448 writedataimpl;
TY147454 flushimpl;
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
struct Keyvaluepair143205 {
NimStringDesc* Field0;
NimStringDesc* Field1;
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
struct Keyvaluepairseq143207 {
  TGenericSeq Sup;
  Keyvaluepair143205 data[SEQ_DECL_SIZE];
};
struct TY216913 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(Tnode216790*, maptypetoast_399053)(Ttype216828* t, Tlineinfo184337 info, NIM_BOOL allowrecursion);
N_NIMCALL(Tnode216790*, atomictypex_399045)(NimStringDesc* name, Ttype216828* t, Tlineinfo184337 info);
N_NIMCALL(Tsym216822*, newsym_217684)(NU8 symkind, Tident191012* name, Tsym216822* owner, Tlineinfo184337 info);
N_NIMCALL(Tident191012*, getident_191441)(NimStringDesc* identifier);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Cell47304*, usrtocell_51240)(void* usr);
static N_INLINE(void, rtladdzct_52801)(Cell47304* c);
N_NOINLINE(void, addzct_51217)(Cellseq47320* s, Cell47304* c);
N_NIMCALL(Tnode216790*, newsymnode_218234)(Tsym216822* sym);
N_NIMCALL(Tnode216790*, newnodeit_218801)(NU8 kind, Tlineinfo184337 info, Ttype216828* typ);
N_NIMCALL(void, add_217114)(Tnode216790* father, Tnode216790* son);
N_NIMCALL(Ttype216828*, base_242021)(Ttype216828* t);
N_NIMCALL(NI, len_219339)(Ttype216828* n);
N_NIMCALL(Ttype216828*, lastson_219377)(Ttype216828* n);
N_NIMCALL(Tnode216790*, maptypetobracket_399058)(NimStringDesc* name, Ttype216828* t, Tlineinfo184337 info);
N_NIMCALL(Ttype216828*, newtype_219107)(NU8 kind, Tsym216822* owner);
N_NIMCALL(Tnode216790*, copytree_220822)(Tnode216790* src);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(NimStringDesc*, findfile_164480)(NimStringDesc* f);
N_NIMCALL(NimStringDesc*, readfile_15466)(NimStringDesc* filename);
N_NIMCALL(void, appendtomodule_217869)(Tsym216822* m, Tnode216790* n);
N_NIMCALL(Tnode216790*, newnode_218601)(NU8 kind, Tlineinfo184337 info, Tnodeseq216784* sons, Ttype216828* typ);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(Tnode216790*, newstrnode_217678)(NU8 kind, NimStringDesc* strval);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(Exception*, getCurrentException)(void);
N_NIMCALL(void, localerror_189080)(Tlineinfo184337 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, popCurrentException)(void);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_53619)(Cell47304* c);
static N_INLINE(NIM_BOOL, canbecycleroot_51258)(Cell47304* c);
static N_INLINE(void, rtladdcycleroot_52020)(Cell47304* c);
N_NOINLINE(void, incl_48047)(Cellset47316* s, Cell47304* cell);
static N_INLINE(void, decref_53201)(Cell47304* c);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(void, securehash_194011)(NimStringDesc* str, Sha1digest194003* Result);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(NimStringDesc*, togeneratedfile_164078)(NimStringDesc* path, NimStringDesc* ext);
N_NIMCALL(NimStringDesc*, HEX24_194020)(Sha1digest194003 self);
N_NIMCALL(NIM_BOOL, open_15403)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(NimStringDesc*, readall_15463)(FILE* file);
N_NIMCALL(Processobj152404*, nospstartProcess)(NimStringDesc* command, NimStringDesc* workingdir, NimStringDesc** args, NI argsLen0, Stringtableobj143209* env, NU8 options);
N_NIMCALL(void, write_147569)(Streamobj147418* s, NimStringDesc* x);
N_NIMCALL(Streamobj147418*, nospinputStream)(Processobj152404* p);
N_NIMCALL(void, close_147470)(Streamobj147418* s);
N_NIMCALL(NimStringDesc*, readoutput_399003)(Processobj152404* p);
N_NIMCALL(Streamobj147418*, nospoutputStream)(Processobj152404* p);
N_NIMCALL(NIM_BOOL, atend_147484)(Streamobj147418* s);
N_NIMCALL(NimStringDesc*, readline_148133)(Streamobj147418* s);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(NI, nospwaitForExit)(Processobj152404* p, NI timeout);
N_NIMCALL(void, writefile_15469)(NimStringDesc* filename, NimStringDesc* content);
STRING_LITERAL(TMP2993, "none", 4);
STRING_LITERAL(TMP2994, "bool", 4);
STRING_LITERAL(TMP2995, "char", 4);
STRING_LITERAL(TMP2996, "nil", 3);
STRING_LITERAL(TMP2997, "expr", 4);
STRING_LITERAL(TMP2998, "stmt", 4);
STRING_LITERAL(TMP2999, "void", 4);
STRING_LITERAL(TMP3000, "array", 5);
STRING_LITERAL(TMP3001, "typeDesc", 8);
STRING_LITERAL(TMP3002, "typeDesc", 8);
STRING_LITERAL(TMP3003, "void", 4);
STRING_LITERAL(TMP3004, "distinct", 8);
STRING_LITERAL(TMP3005, "tuple", 5);
STRING_LITERAL(TMP3006, "set", 3);
STRING_LITERAL(TMP3007, "ptr", 3);
STRING_LITERAL(TMP3008, "ref", 3);
STRING_LITERAL(TMP3009, "var", 3);
STRING_LITERAL(TMP3010, "seq", 3);
STRING_LITERAL(TMP3011, "proc", 4);
STRING_LITERAL(TMP3012, "openArray", 9);
STRING_LITERAL(TMP3013, "range", 5);
STRING_LITERAL(TMP3014, "pointer", 7);
STRING_LITERAL(TMP3015, "string", 6);
STRING_LITERAL(TMP3016, "cstring", 7);
STRING_LITERAL(TMP3017, "int", 3);
STRING_LITERAL(TMP3018, "int8", 4);
STRING_LITERAL(TMP3019, "int16", 5);
STRING_LITERAL(TMP3020, "int32", 5);
STRING_LITERAL(TMP3021, "int64", 5);
STRING_LITERAL(TMP3022, "float", 5);
STRING_LITERAL(TMP3023, "float32", 7);
STRING_LITERAL(TMP3024, "float64", 7);
STRING_LITERAL(TMP3025, "float128", 8);
STRING_LITERAL(TMP3026, "uint", 4);
STRING_LITERAL(TMP3027, "uint8", 5);
STRING_LITERAL(TMP3028, "uint16", 6);
STRING_LITERAL(TMP3029, "uint32", 6);
STRING_LITERAL(TMP3030, "uint64", 6);
STRING_LITERAL(TMP3031, "bignum", 6);
STRING_LITERAL(TMP3032, "const", 5);
STRING_LITERAL(TMP3033, "mutable", 7);
STRING_LITERAL(TMP3034, "varargs", 7);
STRING_LITERAL(TMP3035, "iter", 4);
STRING_LITERAL(TMP3036, "error", 5);
STRING_LITERAL(TMP3037, "builtinTypeClass", 16);
STRING_LITERAL(TMP3038, "concept", 7);
STRING_LITERAL(TMP3039, "compositeTypeClass", 18);
STRING_LITERAL(TMP3040, "and", 3);
STRING_LITERAL(TMP3041, "or", 2);
STRING_LITERAL(TMP3042, "not", 3);
STRING_LITERAL(TMP3043, "anything", 8);
STRING_LITERAL(TMP3044, "static", 6);
STRING_LITERAL(TMP3048, "", 0);
STRING_LITERAL(TMP3049, "\011", 1);
STRING_LITERAL(TMP3050, "gorge_", 6);
STRING_LITERAL(TMP3051, "txt", 3);
STRING_LITERAL(TMP3065, "\015\012", 2);
extern Gcheap49618 gch_49659;
extern Tnode216790* emptynode_217801;
extern TSafePoint* exchandler_19437;
extern TNimType NTI216784; /* TNodeSeq */
extern TNimType NTI3628; /* IOError */
extern Exception* currexception_19439;
extern TNimType NTI3630; /* OSError */

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

N_NIMCALL(Tnode216790*, atomictypex_399045)(NimStringDesc* name, Ttype216828* t, Tlineinfo184337 info) {
	Tnode216790* result;
	Tsym216822* sym;
	Tident191012* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = getident_191441(name);
	sym = newsym_217684(((NU8) 7), LOC1, (*t).owner, info);
	asgnRefNoCycle((void**) (&(*sym).typ), t);
	result = newsymnode_218234(sym);
	asgnRefNoCycle((void**) (&(*result).typ), t);
	return result;
}

N_NIMCALL(Tnode216790*, maptypetobracket_399058)(NimStringDesc* name, Ttype216828* t, Tlineinfo184337 info) {
	Tnode216790* result;
	Tlineinfo184337 LOC1;
	Tnode216790* LOC7;
	result = 0;
	{
		if (!(*t).n == 0) goto LA4;
		LOC1 = info;
	}
	goto LA2;
	LA4: ;
	{
		LOC1 = (*(*t).n).info;
	}
	LA2: ;
	result = newnodeit_218801(((NU8) 42), LOC1, t);
	LOC7 = 0;
	LOC7 = atomictypex_399045(name, t, info);
	add_217114(result, LOC7);
	{
		NI i_399091;
		NI HEX3Atmp_399108;
		NI LOC9;
		NI res_399111;
		i_399091 = 0;
		HEX3Atmp_399108 = 0;
		LOC9 = 0;
		LOC9 = len_219339(t);
		HEX3Atmp_399108 = (LOC9 - 1);
		res_399111 = ((NI) 0);
		{
			while (1) {
				if (!(res_399111 <= HEX3Atmp_399108)) goto LA11;
				i_399091 = res_399111;
				{
					Tnode216790* void_399104;
					if (!((*t).sons->data[i_399091] == NIM_NIL)) goto LA14;
					void_399104 = atomictypex_399045(((NimStringDesc*) &TMP3003), t, info);
					asgnRefNoCycle((void**) (&(*void_399104).typ), newtype_219107(((NU8) 3), (*t).owner));
					add_217114(result, void_399104);
				}
				goto LA12;
				LA14: ;
				{
					Tnode216790* LOC17;
					LOC17 = 0;
					LOC17 = maptypetoast_399053((*t).sons->data[i_399091], info, NIM_FALSE);
					add_217114(result, LOC17);
				}
				LA12: ;
				res_399111 += ((NI) 1);
			} LA11: ;
		}
	}
	return result;
}

N_NIMCALL(Tnode216790*, maptypetoast_399053)(Ttype216828* t, Tlineinfo184337 info, NIM_BOOL allowrecursion) {
	Tnode216790* result;
	result = 0;
	switch ((*t).kind) {
	case ((NU8) 0):
	{
		result = atomictypex_399045(((NimStringDesc*) &TMP2993), t, info);
	}
	break;
	case ((NU8) 1):
	{
		result = atomictypex_399045(((NimStringDesc*) &TMP2994), t, info);
	}
	break;
	case ((NU8) 2):
	{
		result = atomictypex_399045(((NimStringDesc*) &TMP2995), t, info);
	}
	break;
	case ((NU8) 5):
	{
		result = atomictypex_399045(((NimStringDesc*) &TMP2996), t, info);
	}
	break;
	case ((NU8) 6):
	{
		result = atomictypex_399045(((NimStringDesc*) &TMP2997), t, info);
	}
	break;
	case ((NU8) 7):
	{
		result = atomictypex_399045(((NimStringDesc*) &TMP2998), t, info);
	}
	break;
	case ((NU8) 3):
	{
		result = atomictypex_399045(((NimStringDesc*) &TMP2999), t, info);
	}
	break;
	case ((NU8) 4):
	case ((NU8) 16):
	{
		Tlineinfo184337 LOC9;
		Tnode216790* LOC15;
		Tnode216790* LOC16;
		Tnode216790* LOC17;
		{
			if (!(*t).n == 0) goto LA12;
			LOC9 = info;
		}
		goto LA10;
		LA12: ;
		{
			LOC9 = (*(*t).n).info;
		}
		LA10: ;
		result = newnodeit_218801(((NU8) 42), LOC9, t);
		LOC15 = 0;
		LOC15 = atomictypex_399045(((NimStringDesc*) &TMP3000), t, info);
		add_217114(result, LOC15);
		LOC16 = 0;
		LOC16 = maptypetoast_399053((*t).sons->data[((NI) 0)], info, NIM_FALSE);
		add_217114(result, LOC16);
		LOC17 = 0;
		LOC17 = maptypetoast_399053((*t).sons->data[((NI) 1)], info, NIM_FALSE);
		add_217114(result, LOC17);
	}
	break;
	case ((NU8) 8):
	{
		{
			Ttype216828* LOC21;
			Tlineinfo184337 LOC24;
			Tnode216790* LOC30;
			Ttype216828* LOC31;
			Tnode216790* LOC32;
			LOC21 = 0;
			LOC21 = base_242021(t);
			if (!!((LOC21 == NIM_NIL))) goto LA22;
			{
				if (!(*t).n == 0) goto LA27;
				LOC24 = info;
			}
			goto LA25;
			LA27: ;
			{
				LOC24 = (*(*t).n).info;
			}
			LA25: ;
			result = newnodeit_218801(((NU8) 42), LOC24, t);
			LOC30 = 0;
			LOC30 = atomictypex_399045(((NimStringDesc*) &TMP3001), t, info);
			add_217114(result, LOC30);
			LOC31 = 0;
			LOC31 = base_242021(t);
			LOC32 = 0;
			LOC32 = maptypetoast_399053(LOC31, info, NIM_FALSE);
			add_217114(result, LOC32);
		}
		goto LA19;
		LA22: ;
		{
			result = atomictypex_399045(((NimStringDesc*) &TMP3002), t, info);
		}
		LA19: ;
	}
	break;
	case ((NU8) 9):
	{
		Tlineinfo184337 LOC35;
		{
			if (!(*t).n == 0) goto LA38;
			LOC35 = info;
		}
		goto LA36;
		LA38: ;
		{
			LOC35 = (*(*t).n).info;
		}
		LA36: ;
		result = newnodeit_218801(((NU8) 42), LOC35, t);
		{
			NI i_399186;
			NI HEX3Atmp_399268;
			NI LOC42;
			NI res_399271;
			i_399186 = 0;
			HEX3Atmp_399268 = 0;
			LOC42 = 0;
			LOC42 = len_219339(t);
			HEX3Atmp_399268 = (LOC42 - 1);
			res_399271 = ((NI) 0);
			{
				while (1) {
					Tnode216790* LOC45;
					if (!(res_399271 <= HEX3Atmp_399268)) goto LA44;
					i_399186 = res_399271;
					LOC45 = 0;
					LOC45 = maptypetoast_399053((*t).sons->data[i_399186], info, NIM_FALSE);
					add_217114(result, LOC45);
					res_399271 += ((NI) 1);
				} LA44: ;
			}
		}
	}
	break;
	case ((NU8) 11):
	case ((NU8) 10):
	case ((NU8) 15):
	case ((NU8) 53):
	{
		Ttype216828* LOC47;
		LOC47 = 0;
		LOC47 = lastson_219377(t);
		result = maptypetoast_399053(LOC47, info, NIM_FALSE);
	}
	break;
	case ((NU8) 13):
	{
		{
			if (!allowrecursion) goto LA51;
			result = maptypetobracket_399058(((NimStringDesc*) &TMP3004), t, info);
		}
		goto LA49;
		LA51: ;
		{
			result = atomictypex_399045((*(*(*t).sym).name).s, t, info);
		}
		LA49: ;
	}
	break;
	case ((NU8) 12):
	case ((NU8) 30):
	{
		result = atomictypex_399045((*(*(*t).sym).name).s, t, info);
	}
	break;
	case ((NU8) 17):
	{
		{
			Tlineinfo184337 LOC60;
			Tnode216790* LOC72;
			if (!allowrecursion) goto LA58;
			{
				if (!(*t).n == 0) goto LA63;
				LOC60 = info;
			}
			goto LA61;
			LA63: ;
			{
				LOC60 = (*(*t).n).info;
			}
			LA61: ;
			result = newnodeit_218801(((NU8) 133), LOC60, t);
			{
				if (!((*t).sons->data[((NI) 0)] == NIM_NIL)) goto LA68;
				add_217114(result, emptynode_217801);
			}
			goto LA66;
			LA68: ;
			{
				Tnode216790* LOC71;
				LOC71 = 0;
				LOC71 = maptypetoast_399053((*t).sons->data[((NI) 0)], info, NIM_FALSE);
				add_217114(result, LOC71);
			}
			LA66: ;
			LOC72 = 0;
			LOC72 = copytree_220822((*t).n);
			add_217114(result, LOC72);
		}
		goto LA56;
		LA58: ;
		{
			result = atomictypex_399045((*(*(*t).sym).name).s, t, info);
		}
		LA56: ;
	}
	break;
	case ((NU8) 14):
	{
		Tlineinfo184337 LOC75;
		Tnode216790* LOC81;
		{
			if (!(*t).n == 0) goto LA78;
			LOC75 = info;
		}
		goto LA76;
		LA78: ;
		{
			LOC75 = (*(*t).n).info;
		}
		LA76: ;
		result = newnodeit_218801(((NU8) 150), LOC75, t);
		LOC81 = 0;
		LOC81 = copytree_220822((*t).n);
		add_217114(result, LOC81);
	}
	break;
	case ((NU8) 18):
	{
		result = maptypetobracket_399058(((NimStringDesc*) &TMP3005), t, info);
	}
	break;
	case ((NU8) 19):
	{
		result = maptypetobracket_399058(((NimStringDesc*) &TMP3006), t, info);
	}
	break;
	case ((NU8) 21):
	{
		result = maptypetobracket_399058(((NimStringDesc*) &TMP3007), t, info);
	}
	break;
	case ((NU8) 22):
	{
		result = maptypetobracket_399058(((NimStringDesc*) &TMP3008), t, info);
	}
	break;
	case ((NU8) 23):
	{
		result = maptypetobracket_399058(((NimStringDesc*) &TMP3009), t, info);
	}
	break;
	case ((NU8) 24):
	{
		result = maptypetobracket_399058(((NimStringDesc*) &TMP3010), t, info);
	}
	break;
	case ((NU8) 25):
	{
		result = maptypetobracket_399058(((NimStringDesc*) &TMP3011), t, info);
	}
	break;
	case ((NU8) 27):
	{
		result = maptypetobracket_399058(((NimStringDesc*) &TMP3012), t, info);
	}
	break;
	case ((NU8) 20):
	{
		Tlineinfo184337 LOC91;
		Tnode216790* LOC97;
		Tnode216790* LOC98;
		Tnode216790* LOC99;
		{
			if (!(*t).n == 0) goto LA94;
			LOC91 = info;
		}
		goto LA92;
		LA94: ;
		{
			LOC91 = (*(*t).n).info;
		}
		LA92: ;
		result = newnodeit_218801(((NU8) 42), LOC91, t);
		LOC97 = 0;
		LOC97 = atomictypex_399045(((NimStringDesc*) &TMP3013), t, info);
		add_217114(result, LOC97);
		LOC98 = 0;
		LOC98 = copytree_220822((*(*t).n).kindU.S6.sons->data[((NI) 0)]);
		add_217114(result, LOC98);
		LOC99 = 0;
		LOC99 = copytree_220822((*(*t).n).kindU.S6.sons->data[((NI) 1)]);
		add_217114(result, LOC99);
	}
	break;
	case ((NU8) 26):
	{
		result = atomictypex_399045(((NimStringDesc*) &TMP3014), t, info);
	}
	break;
	case ((NU8) 28):
	{
		result = atomictypex_399045(((NimStringDesc*) &TMP3015), t, info);
	}
	break;
	case ((NU8) 29):
	{
		result = atomictypex_399045(((NimStringDesc*) &TMP3016), t, info);
	}
	break;
	case ((NU8) 31):
	{
		result = atomictypex_399045(((NimStringDesc*) &TMP3017), t, info);
	}
	break;
	case ((NU8) 32):
	{
		result = atomictypex_399045(((NimStringDesc*) &TMP3018), t, info);
	}
	break;
	case ((NU8) 33):
	{
		result = atomictypex_399045(((NimStringDesc*) &TMP3019), t, info);
	}
	break;
	case ((NU8) 34):
	{
		result = atomictypex_399045(((NimStringDesc*) &TMP3020), t, info);
	}
	break;
	case ((NU8) 35):
	{
		result = atomictypex_399045(((NimStringDesc*) &TMP3021), t, info);
	}
	break;
	case ((NU8) 36):
	{
		result = atomictypex_399045(((NimStringDesc*) &TMP3022), t, info);
	}
	break;
	case ((NU8) 37):
	{
		result = atomictypex_399045(((NimStringDesc*) &TMP3023), t, info);
	}
	break;
	case ((NU8) 38):
	{
		result = atomictypex_399045(((NimStringDesc*) &TMP3024), t, info);
	}
	break;
	case ((NU8) 39):
	{
		result = atomictypex_399045(((NimStringDesc*) &TMP3025), t, info);
	}
	break;
	case ((NU8) 40):
	{
		result = atomictypex_399045(((NimStringDesc*) &TMP3026), t, info);
	}
	break;
	case ((NU8) 41):
	{
		result = atomictypex_399045(((NimStringDesc*) &TMP3027), t, info);
	}
	break;
	case ((NU8) 42):
	{
		result = atomictypex_399045(((NimStringDesc*) &TMP3028), t, info);
	}
	break;
	case ((NU8) 43):
	{
		result = atomictypex_399045(((NimStringDesc*) &TMP3029), t, info);
	}
	break;
	case ((NU8) 44):
	{
		result = atomictypex_399045(((NimStringDesc*) &TMP3030), t, info);
	}
	break;
	case ((NU8) 45):
	{
		result = atomictypex_399045(((NimStringDesc*) &TMP3031), t, info);
	}
	break;
	case ((NU8) 46):
	{
		result = maptypetobracket_399058(((NimStringDesc*) &TMP3032), t, info);
	}
	break;
	case ((NU8) 47):
	{
		result = maptypetobracket_399058(((NimStringDesc*) &TMP3033), t, info);
	}
	break;
	case ((NU8) 48):
	{
		result = maptypetobracket_399058(((NimStringDesc*) &TMP3034), t, info);
	}
	break;
	case ((NU8) 49):
	{
		result = maptypetobracket_399058(((NimStringDesc*) &TMP3035), t, info);
	}
	break;
	case ((NU8) 50):
	{
		result = atomictypex_399045(((NimStringDesc*) &TMP3036), t, info);
	}
	break;
	case ((NU8) 51):
	{
		result = maptypetobracket_399058(((NimStringDesc*) &TMP3037), t, info);
	}
	break;
	case ((NU8) 52):
	{
		Tnode216790* LOC125;
		result = maptypetobracket_399058(((NimStringDesc*) &TMP3038), t, info);
		LOC125 = 0;
		LOC125 = copytree_220822((*t).n);
		add_217114(result, LOC125);
	}
	break;
	case ((NU8) 54):
	{
		result = maptypetobracket_399058(((NimStringDesc*) &TMP3039), t, info);
	}
	break;
	case ((NU8) 55):
	{
		result = maptypetobracket_399058(((NimStringDesc*) &TMP3040), t, info);
	}
	break;
	case ((NU8) 56):
	{
		result = maptypetobracket_399058(((NimStringDesc*) &TMP3041), t, info);
	}
	break;
	case ((NU8) 57):
	{
		result = maptypetobracket_399058(((NimStringDesc*) &TMP3042), t, info);
	}
	break;
	case ((NU8) 58):
	{
		result = atomictypex_399045(((NimStringDesc*) &TMP3043), t, info);
	}
	break;
	case ((NU8) 59):
	case ((NU8) 60):
	case ((NU8) 61):
	{
		Tlineinfo184337 LOC132;
		Tnode216790* LOC138;
		{
			if (!(*t).n == 0) goto LA135;
			LOC132 = info;
		}
		goto LA133;
		LA135: ;
		{
			LOC132 = (*(*t).n).info;
		}
		LA133: ;
		result = newnodeit_218801(((NU8) 42), LOC132, t);
		LOC138 = 0;
		LOC138 = atomictypex_399045(((NimStringDesc*) &TMP3044), t, info);
		add_217114(result, LOC138);
		{
			Tnode216790* LOC143;
			if (!!(((*t).n == NIM_NIL))) goto LA141;
			LOC143 = 0;
			LOC143 = copytree_220822((*t).n);
			add_217114(result, LOC143);
		}
		LA141: ;
	}
	break;
	}
	return result;
}

N_NIMCALL(Tnode216790*, opmaptypetoast_399275)(Ttype216828* t, Tlineinfo184337 info) {
	Tnode216790* result;
	result = 0;
	result = maptypetoast_399053(t, info, NIM_TRUE);
	return result;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = exchandler_19437;
	exchandler_19437 = s;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_19437 = (*exchandler_19437).prev;
}

static N_INLINE(Exception*, getCurrentException)(void) {
	Exception* result;
	result = 0;
	result = currexception_19439;
	return result;
}

static N_INLINE(NIM_BOOL, canbecycleroot_51258)(Cell47304* c) {
	NIM_BOOL result;
	result = 0;
	result = !((((*(*c).typ).flags &(1U<<((NU)(((NU8) 1))&7U)))!=0));
	return result;
}

static N_INLINE(void, rtladdcycleroot_52020)(Cell47304* c) {
	{
		if (!!((((NI) ((NI)((*c).refcount & ((NI) 3)))) == ((NI) 3)))) goto LA3;
		(*c).refcount = (NI)((NI)((*c).refcount & ((NI) -4)) | ((NI) 3));
		incl_48047((&gch_49659.cycleroots), c);
	}
	LA3: ;
}

static N_INLINE(void, incref_53619)(Cell47304* c) {
	(*c).refcount = (NI)((NU32)((*c).refcount) + (NU32)(((NI) 8)));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_51258(c);
		if (!LOC3) goto LA4;
		rtladdcycleroot_52020(c);
	}
	LA4: ;
}

static N_INLINE(void, decref_53201)(Cell47304* c) {
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_52801(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		LOC6 = 0;
		LOC6 = canbecycleroot_51258(c);
		if (!LOC6) goto LA7;
		rtladdcycleroot_52020(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		Cell47304* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_51240(src);
		incref_53619(LOC5);
	}
	LA3: ;
	{
		Cell47304* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_51240((*dest));
		decref_53201(LOC10);
	}
	LA8: ;
	(*dest) = src;
}

static N_INLINE(void, popCurrentException)(void) {
	asgnRef((void**) (&currexception_19439), NIM_NIL);
}

N_NIMCALL(NimStringDesc*, opslurp_399025)(NimStringDesc* file, Tlineinfo184337 info, Tsym216822* module) {
	NimStringDesc* volatile result;
	TSafePoint TMP3047;
	result = 0;
	pushSafePoint(&TMP3047);
	TMP3047.status = setjmp(TMP3047.context);
	if (TMP3047.status == 0) {
		NimStringDesc* filename;
		Tnodeseq216784* LOC2;
		TY232280 LOC3;
		Tnode216790* LOC4;
		filename = findfile_164480(file);
		result = readfile_15466(filename);
		LOC2 = 0;
		LOC2 = (Tnodeseq216784*) newSeq((&NTI216784), 1);
		memset((void*)LOC3, 0, sizeof(LOC3));
		LOC3[0] = newstrnode_217678(((NU8) 20), filename);
		asgnRefNoCycle((void**) (&LOC2->data[0]), LOC3[0]);
		LOC4 = 0;
		LOC4 = newnode_218601(((NU8) 121), info, LOC2, NIM_NIL);
		appendtomodule_217869(module, LOC4);
		popSafePoint();
	}
	else {
		popSafePoint();
		if (isObj(getCurrentException()->Sup.m_type, (&NTI3628))) {
			TMP3047.status = 0;
			localerror_189080(info, ((NU16) 3), file);
			result = copyString(((NimStringDesc*) &TMP3048));
			popCurrentException();
		}
	}
	if (TMP3047.status != 0) reraiseException();
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, readoutput_399003)(Processobj152404* p) {
	NimStringDesc* result;
	Streamobj147418* output;
	NI LOC9;
	result = 0;
	result = copyString(((NimStringDesc*) &TMP3048));
	output = nospoutputStream(p);
	{
		while (1) {
			NIM_BOOL LOC3;
			NimStringDesc* LOC4;
			LOC3 = 0;
			LOC3 = atend_147484(output);
			if (!!(LOC3)) goto LA2;
			LOC4 = 0;
			LOC4 = readline_148133(output);
			result = resizeString(result, LOC4->Sup.len + 0);
appendString(result, LOC4);
			result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TMP3065));
		} LA2: ;
	}
	{
		if (!(((NI) 0) < (result ? result->Sup.len : 0))) goto LA7;
		result = setLengthStr(result, ((NI) ((NI)((result ? result->Sup.len : 0) - ((NI) 2)))));
	}
	LA7: ;
	LOC9 = 0;
	LOC9 = nospwaitForExit(p, ((NI) -1));
	return result;
}

N_NIMCALL(NimStringDesc*, opgorge_399009)(NimStringDesc* cmd, NimStringDesc* input, NimStringDesc* cache) {
	NimStringDesc* volatile result;
{	result = 0;
	{
		Sha1digest194003 h;
		NimStringDesc* LOC5;
		NimStringDesc* filename;
		NimStringDesc* LOC6;
		NimStringDesc* LOC7;
		FILE* f;
		NIM_BOOL volatile readsuccessful;
		TSafePoint TMP3052;
		if (!(((NI) 0) < (cache ? cache->Sup.len : 0))) goto LA3;
		memset((void*)h, 0, sizeof(h));
		LOC5 = 0;
		LOC5 = rawNewString(cmd->Sup.len + input->Sup.len + cache->Sup.len + 2);
appendString(LOC5, cmd);
appendString(LOC5, ((NimStringDesc*) &TMP3049));
appendString(LOC5, input);
appendString(LOC5, ((NimStringDesc*) &TMP3049));
appendString(LOC5, cache);
		chckNil((void*)h);
		memset((void*)h, 0, sizeof(h));
		securehash_194011(LOC5, h);
		LOC6 = 0;
		LOC7 = 0;
		LOC7 = HEX24_194020(h);
		LOC6 = rawNewString(LOC7->Sup.len + 6);
appendString(LOC6, ((NimStringDesc*) &TMP3050));
appendString(LOC6, LOC7);
		filename = togeneratedfile_164078(LOC6, ((NimStringDesc*) &TMP3051));
		f = 0;
		{
			NIM_BOOL LOC10;
			LOC10 = 0;
			LOC10 = open_15403(&f, filename, ((NU8) 0), ((NI) -1));
			if (!LOC10) goto LA11;
			result = readall_15463(f);
			fclose(f);
			goto BeforeRet;
		}
		LA11: ;
		readsuccessful = NIM_FALSE;
		pushSafePoint(&TMP3052);
		TMP3052.status = setjmp(TMP3052.context);
		if (TMP3052.status == 0) {
			Processobj152404* p;
			TY240694 LOC14;
			memset((void*)LOC14, 0, sizeof(LOC14));
			p = nospstartProcess(cmd, ((NimStringDesc*) &TMP3048), LOC14, 0, NIM_NIL, 12);
			{
				Streamobj147418* LOC19;
				Streamobj147418* LOC20;
				if (!!(((input ? input->Sup.len : 0) == ((NI) 0)))) goto LA17;
				LOC19 = 0;
				LOC19 = nospinputStream(p);
				write_147569(LOC19, input);
				LOC20 = 0;
				LOC20 = nospinputStream(p);
				close_147470(LOC20);
			}
			LA17: ;
			result = readoutput_399003(p);
			readsuccessful = NIM_TRUE;
			writefile_15469(filename, result);
			popSafePoint();
		}
		else {
			popSafePoint();
			if (isObj(getCurrentException()->Sup.m_type, (&NTI3628))||isObj(getCurrentException()->Sup.m_type, (&NTI3630))) {
				TMP3052.status = 0;
				{
					if (!!(readsuccessful)) goto LA25;
					result = copyString(((NimStringDesc*) &TMP3048));
				}
				LA25: ;
				popCurrentException();
			}
		}
		if (TMP3052.status != 0) reraiseException();
	}
	goto LA1;
	LA3: ;
	{
		TSafePoint TMP3066;
		pushSafePoint(&TMP3066);
		TMP3066.status = setjmp(TMP3066.context);
		if (TMP3066.status == 0) {
			Processobj152404* p;
			TY240694 LOC29;
			memset((void*)LOC29, 0, sizeof(LOC29));
			p = nospstartProcess(cmd, ((NimStringDesc*) &TMP3048), LOC29, 0, NIM_NIL, 12);
			{
				Streamobj147418* LOC34;
				Streamobj147418* LOC35;
				if (!!(((input ? input->Sup.len : 0) == ((NI) 0)))) goto LA32;
				LOC34 = 0;
				LOC34 = nospinputStream(p);
				write_147569(LOC34, input);
				LOC35 = 0;
				LOC35 = nospinputStream(p);
				close_147470(LOC35);
			}
			LA32: ;
			result = readoutput_399003(p);
			popSafePoint();
		}
		else {
			popSafePoint();
			if (isObj(getCurrentException()->Sup.m_type, (&NTI3628))||isObj(getCurrentException()->Sup.m_type, (&NTI3630))) {
				TMP3066.status = 0;
				result = copyString(((NimStringDesc*) &TMP3048));
				popCurrentException();
			}
		}
		if (TMP3066.status != 0) reraiseException();
	}
	LA1: ;
	}BeforeRet: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_vmdepsInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_vmdepsDatInit000)(void) {
}

