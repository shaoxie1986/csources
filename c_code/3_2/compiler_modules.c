/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
typedef struct Tsymseq213792 Tsymseq213792;
typedef struct Tsym213822 Tsym213822;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Cell47705 Cell47705;
typedef struct Cellseq47721 Cellseq47721;
typedef struct Gcheap50018 Gcheap50018;
typedef struct Gcstack50016 Gcstack50016;
typedef struct Cellset47717 Cellset47717;
typedef struct Pagedesc47713 Pagedesc47713;
typedef struct Memregion29888 Memregion29888;
typedef struct Smallchunk29840 Smallchunk29840;
typedef struct Llchunk29882 Llchunk29882;
typedef struct Bigchunk29842 Bigchunk29842;
typedef struct Intset29814 Intset29814;
typedef struct Trunk29810 Trunk29810;
typedef struct Avlnode29886 Avlnode29886;
typedef struct Gcstat50014 Gcstat50014;
typedef struct TY530042 TY530042;
typedef struct Tmoduleinmemory530008 Tmoduleinmemory530008;
typedef struct TY213913 TY213913;
typedef struct Tnode213790 Tnode213790;
typedef struct Tidobj188006 Tidobj188006;
typedef struct TNimObject TNimObject;
typedef struct Ttypeseq213824 Ttypeseq213824;
typedef struct Tscope213816 Tscope213816;
typedef struct TY213925 TY213925;
typedef struct Tstrtable213794 Tstrtable213794;
typedef struct Ttype213828 Ttype213828;
typedef struct Tident188012 Tident188012;
typedef struct Tlineinfo181337 Tlineinfo181337;
typedef struct Tloc213804 Tloc213804;
typedef struct Ropeobj168006 Ropeobj168006;
typedef struct Tlib213808 Tlib213808;
typedef struct NimStringDesc NimStringDesc;
typedef struct TY118906 TY118906;
typedef struct Trodreader251021 Trodreader251021;
typedef struct Tllstream201204 Tllstream201204;
typedef struct TY88887 TY88887;
typedef struct TY468140 TY468140;
typedef struct Tcgen468026 Tcgen468026;
typedef struct Basechunk29838 Basechunk29838;
typedef struct Freecell29830 Freecell29830;
typedef struct Tnodeseq213784 Tnodeseq213784;
typedef struct Tinstantiation213812 Tinstantiation213812;
typedef struct Tlistentry135010 Tlistentry135010;
typedef struct Tindex251019 Tindex251019;
typedef struct Tiitable220163 Tiitable220163;
typedef struct Tiipairseq220161 Tiipairseq220161;
typedef struct Table251054 Table251054;
typedef struct Keyvaluepairseq251057 Keyvaluepairseq251057;
typedef struct Memfile249202 Memfile249202;
typedef struct Tpasscontext260002 Tpasscontext260002;
typedef struct Tidtable213840 Tidtable213840;
typedef struct Tidpairseq213838 Tidpairseq213838;
typedef struct Intset210035 Intset210035;
typedef struct Trunk210031 Trunk210031;
typedef struct Trunkseq210033 Trunkseq210033;
typedef struct Tlinkedlist135016 Tlinkedlist135016;
typedef struct Tcproc468022 Tcproc468022;
typedef struct Tnodetable213852 Tnodetable213852;
typedef struct Tnodepairseq213850 Tnodepairseq213850;
typedef struct Tiipair220159 Tiipair220159;
typedef struct Keyvaluepair251060 Keyvaluepair251060;
typedef struct Tidpair213836 Tidpair213836;
typedef struct TY181350 TY181350;
typedef struct TY468094 TY468094;
typedef struct Tnodepair213848 Tnodepair213848;
typedef struct Tblock468020 Tblock468020;
struct  TGenericSeq  {
NI len;
NI reserved;
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
struct  Cell47705  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47721  {
NI len;
NI cap;
Cell47705** d;
};
struct  Cellset47717  {
NI counter;
NI max;
Pagedesc47713* head;
Pagedesc47713** data;
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
Cellseq47721 zct;
Cellseq47721 decstack;
Cellset47717 cycleroots;
Cellseq47721 tempstack;
NI recgclock;
Memregion29888 region;
Gcstat50014 stat;
};
typedef NU8 Sha1digest191003[20];
struct  Tmoduleinmemory530008  {
NF compiledat;
Sha1digest191003 hash;
TY213913* deps;
NU8 needsrecompile;
NU8 hashstatus;
};
typedef N_NIMCALL_PTR(Tnode213790*, TY260054) (Tsym213822* m, NI32 fileidx);
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
struct  Tlineinfo181337  {
NI16 line;
NI16 col;
NI32 fileindex;
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
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_NIMCALL_PTR(Tsym213822*, TY260049) (Tsym213822* m, NI32 fileidx);
struct TY118906 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
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
struct  Gcstack50016  {
Gcstack50016* prev;
Gcstack50016* next;
void* starts;
void* pos;
NI maxstacksize;
};
typedef NI TY29819[8];
struct  Pagedesc47713  {
Pagedesc47713* next;
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
struct  Tscope213816  {
NI depthlevel;
Tstrtable213794 symbols;
Tnodeseq213784* usingsyms;
Tscope213816* parent;
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
struct  Tiitable220163  {
NI counter;
Tiipairseq220161* data;
};
struct  Tindex251019  {
NI lastidxkey;
NI lastidxval;
Tiitable220163 tab;
NimStringDesc* r;
NI offset;
};
struct  Table251054  {
Keyvaluepairseq251057* data;
NI counter;
};
struct  Memfile249202  {
void* mem;
NI size;
int handle;
};
struct  Trodreader251021  {
  TNimObject Sup;
NI pos;
NCSTRING s;
NU32 options;
NU8 reason;
TY213913* moddeps;
TY213913* files;
NI dataidx;
NI convertersidx;
NI initidx;
NI interfidx;
NI compilerprocsidx;
NI methodsidx;
NimStringDesc* filename;
Tindex251019 index;
Tindex251019 imports;
NI readerindex;
NI line;
NI moduleid;
Table251054 syms;
Memfile249202 memfile;
Tsymseq213792* methods;
NimStringDesc* origfile;
NIM_BOOL inviewmode;
};
struct  Tllstream201204  {
  TNimObject Sup;
NU8 kind;
FILE* f;
NimStringDesc* s;
NI rd;
NI wr;
NI lineoffset;
};
struct  Tpasscontext260002  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
typedef Ropeobj168006* Tcfilesections468010[18];
struct  Tidtable213840  {
NI counter;
Tidpairseq213838* data;
};
struct  Intset210035  {
NI counter;
NI max;
Trunk210031* head;
Trunkseq210033* data;
};
struct  Tlinkedlist135016  {
Tlistentry135010* head;
Tlistentry135010* tail;
NI counter;
};
struct  Tnodetable213852  {
NI counter;
Tnodepairseq213850* data;
};
typedef Ropeobj168006* TY468132[10];
struct  Tcgen468026  {
  Tpasscontext260002 Sup;
Tsym213822* module;
NimStringDesc* filename;
Tcfilesections468010 s;
NIM_BOOL preventstacktrace;
NIM_BOOL usesthreadvars;
NIM_BOOL framedeclared;
NIM_BOOL isheaderfile;
NIM_BOOL includesstringh;
NIM_BOOL objhaskidsvalid;
NimStringDesc* cfilename;
Tidtable213840 typecache;
Tidtable213840 forwtypecache;
Intset210035 declaredthings;
Intset210035 declaredprotos;
Tlinkedlist135016 headerfiles;
Intset210035 typeinfomarker;
Tcproc468022* initproc;
Tcproc468022* postinitproc;
Tcproc468022* preinitproc;
Ttypeseq213824* typestack;
Tnodetable213852 datacache;
Tsymseq213792* forwardedprocs;
NI typenodes;
NI nimtypes;
Ropeobj168006* typenodesname;
Ropeobj168006* nimtypesname;
NI labels;
TY468132 extensionloaders;
Ropeobj168006* injectstmt;
};
struct  Freecell29830  {
Freecell29830* next;
NI zerofield;
};
struct  Tinstantiation213812  {
Tsym213822* sym;
Ttypeseq213824* concretetypes;
TY213913* usedby;
NI compilesid;
};
struct  Tiipair220159  {
NI key;
NI val;
};
struct Keyvaluepair251060 {
NI Field0;
NI Field1;
Tsym213822* Field2;
};
struct  Tidpair213836  {
Tidobj188006* key;
TNimObject* val;
};
struct  Trunk210031  {
Trunk210031* next;
NI key;
TY29819 bits;
};
struct  Tcproc468022  {
Tsym213822* prc;
NIM_BOOL beforeretneeded;
NIM_BOOL threadvaraccessed;
Tlineinfo181337 lastlineinfo;
Tnodeseq213784* nestedtrystmts;
NI inexceptblock;
TY181350* finallysafepoints;
NI labels;
TY468094* blocks;
NI breakidx;
NU32 options;
NI maxframelen;
Tcgen468026* module;
NI withinloop;
NI splitdecls;
NI gcframeid;
Ropeobj168006* gcframetype;
};
struct  Tnodepair213848  {
NI h;
Tnode213790* key;
NI val;
};
typedef Ropeobj168006* Tcprocsections468014[3];
struct  Tblock468020  {
NI id;
Ropeobj168006* label;
Tcprocsections468014 sections;
NIM_BOOL isloop;
NI16 nestedtrystmts;
NI16 nestedexceptstmts;
NI16 framelen;
};
struct Tsymseq213792 {
  TGenericSeq Sup;
  Tsym213822* data[SEQ_DECL_SIZE];
};
struct TY530042 {
  TGenericSeq Sup;
  Tmoduleinmemory530008 data[SEQ_DECL_SIZE];
};
struct TY468140 {
  TGenericSeq Sup;
  Tcgen468026* data[SEQ_DECL_SIZE];
};
struct TY213913 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct Ttypeseq213824 {
  TGenericSeq Sup;
  Ttype213828* data[SEQ_DECL_SIZE];
};
struct TY213925 {
  TGenericSeq Sup;
  Tinstantiation213812* data[SEQ_DECL_SIZE];
};
struct Tnodeseq213784 {
  TGenericSeq Sup;
  Tnode213790* data[SEQ_DECL_SIZE];
};
struct Tiipairseq220161 {
  TGenericSeq Sup;
  Tiipair220159 data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq251057 {
  TGenericSeq Sup;
  Keyvaluepair251060 data[SEQ_DECL_SIZE];
};
struct Tidpairseq213838 {
  TGenericSeq Sup;
  Tidpair213836 data[SEQ_DECL_SIZE];
};
struct Trunkseq210033 {
  TGenericSeq Sup;
  Trunk210031* data[SEQ_DECL_SIZE];
};
struct Tnodepairseq213850 {
  TGenericSeq Sup;
  Tnodepair213848 data[SEQ_DECL_SIZE];
};
struct TY181350 {
  TGenericSeq Sup;
  Ropeobj168006* data[SEQ_DECL_SIZE];
};
struct TY468094 {
  TGenericSeq Sup;
  Tblock468020 data[SEQ_DECL_SIZE];
};
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Cell47705*, usrtocell_51640)(void* usr);
static N_INLINE(void, rtladdzct_53201)(Cell47705* c);
N_NOINLINE(void, addzct_51617)(Cellseq47721* s, Cell47705* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP1203)(void* p, NI op);
N_NIMCALL(Tnode213790*, includemodule_530818)(Tsym213822* s, NI32 fileidx);
N_NIMCALL(Tnode213790*, parsefile_237029)(NI32 fileidx);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemsize, NI newlen);
N_NIMCALL(void, adddep_530114)(Tsym213822* x, NI32 dep);
N_NIMCALL(void, safeadd_530138)(TY213913** x, NI32 y);
N_NIMCALL(void, dohash_530102)(NI32 fileidx);
N_NIMCALL(void, securehashfile_191016)(NimStringDesc* filename, Sha1digest191003* Result);
N_NIMCALL(NimStringDesc*, tofullpath_182266)(NI32 fileidx);
N_NIMCALL(Tsym213822*, importmodule_530788)(Tsym213822* s, NI32 fileidx);
N_NIMCALL(Tsym213822*, compilemodule_530695)(NI32 fileidx, NU32 flags);
N_NIMCALL(Tsym213822*, getmodule_530062)(NI32 fileidx);
N_NIMCALL(Tsym213822*, newmodule_530622)(NI32 fileidx);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(Tident188012*, getident_188441)(NimStringDesc* identifier);
N_NIMCALL(void, nossplitFile)(NimStringDesc* path, TY118906* Result);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(NIM_BOOL, isnimidentifier_204227)(NimStringDesc* s);
N_NIMCALL(void, rawmessage_184612)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(Tlineinfo181337, newlineinfo_182023)(NI32 fileinfoidx, NI line, NI col);
N_NIMCALL(Tsym213822*, newsym_214683)(NU8 symkind, Tident188012* name, Tsym213822* owner, Tlineinfo181337 info);
N_NIMCALL(NimStringDesc*, getpackagename_160006)(NimStringDesc* path);
N_NIMCALL(void, initstrtable_217001)(Tstrtable213794* x);
N_NIMCALL(void, strtableadd_220061)(Tstrtable213794* t, Tsym213822* n);
N_NIMCALL(Trodreader251021*, handlesymbolfile_251079)(Tsym213822* module);
N_NIMCALL(void, internalerror_186113)(NimStringDesc* errmsg);
static N_INLINE(NI, getid_212401)(void);
N_NIMCALL(void, processmodule_260044)(Tsym213822* module, Tllstream201204* stream, Trodreader251021* rd);
N_NIMCALL(Tllstream201204*, llstreamopen_201229)(FILE* f);
N_NIMCALL(NU8, checkdepmem_530372)(NI32 fileidx);
N_NIMCALL(NIM_BOOL, hashchanged_530078)(NI32 fileidx);
N_NIMCALL(NimStringDesc*, HEX24_186183)(TY88887 x);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(NIM_BOOL, HEX3DHEX3D_191087)(Sha1digest191003 a, Sha1digest191003 b);
N_NIMCALL(void, resetmodule_530258)(NI32 fileidx);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_54019)(Cell47705* c);
static N_INLINE(NIM_BOOL, canbecycleroot_51658)(Cell47705* c);
static N_INLINE(void, rtladdcycleroot_52420)(Cell47705* c);
N_NOINLINE(void, incl_48447)(Cellset47717* s, Cell47705* cell);
static N_INLINE(void, decref_53601)(Cell47705* c);
N_NIMCALL(NIM_BOOL, HEX3DHEX3D_530149)(TY213913* x, TY213913* y);
N_NIMCALL(void, localerror_186080)(Tlineinfo181337 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NI32, fileinfoidx_182016)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, HEX2F_118665)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(void, resetpackagecache_159802)(void);
N_NIMCALL(void, resetsystypes_257199)(void);
N_NIMCALL(void, wantmainmodule_530871)(void);
N_NIMCALL(void, fatal_186066)(Tlineinfo181337 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, nosaddFileExt)(NimStringDesc* filename, NimStringDesc* ext);
N_NIMCALL(void, compilesystemmodule_530856)(void);
N_NIMCALL(Tsym213822*, makemodule_530884)(NimStringDesc* filename);
STRING_LITERAL(TMP1625, "handleSymbolFile should have set the module\'s ID", 48);
STRING_LITERAL(TMP1628, "compiler/modules.nim", 20);
NIM_CONST TY88887 TMP1627 = {((NimStringDesc*) &TMP1628),
((NI) 41)}
;
STRING_LITERAL(TMP3717, "system.nim", 10);
STRING_LITERAL(TMP4534, "", 0);
STRING_LITERAL(TMP4535, "nim", 3);
STRING_LITERAL(TMP5252, "stdin", 5);
Tsymseq213792* gcompiledmodules_530041;
extern TNimType NTI213792; /* TSymSeq */
extern Gcheap50018 gch_50059;
TY530042* gmemcachedata_530059;
TNimType NTI530008; /* TModuleInMemory */
extern TNimType NTI124; /* float */
extern TNimType NTI191003; /* Sha1Digest */
extern TNimType NTI213913; /* seq[int32] */
TNimType NTI530004; /* TNeedRecompile */
TNimType NTI530006; /* THashStatus */
TNimType NTI530042; /* seq[TModuleInMemory] */
extern TY260054 gincludefile_260058;
extern NU32 gglobaloptions_159121;
extern TY260049 gimportmodule_260053;
extern TNimType NTI213788; /* PSym */
extern TNimType NTI213822; /* TSym */
extern NU8 gcmd_159123;
extern NI gfrontendid_212003;
extern NIM_BOOL gprojectisstdin_159202;
extern NF glastcmdtime_159134;
extern TY468140* gmodules_468157;
extern Tsym213822* systemmodule_257007;
extern NI32 systemfileidx_181630;
extern NimStringDesc* libpath_159198;
extern NimStringDesc* gprojectfull_159201;
extern Tlineinfo181337 gcmdlineinfo_182045;
extern NI32 gprojectmainidx_159203;

static N_INLINE(Cell47705*, usrtocell_51640)(void* usr) {
	Cell47705* result;
	result = 0;
	result = ((Cell47705*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Cell47705))))));
	return result;
}

static N_INLINE(void, rtladdzct_53201)(Cell47705* c) {
	addzct_51617((&gch_50059.zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Cell47705* c;
	c = usrtocell_51640(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_53201(c);
	}
	LA3: ;
}
N_NIMCALL(void, TMP1203)(void* p, NI op) {
	TY530042* a;
	NI LOC1;
	a = (TY530042*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].deps, op);
	}
}

N_NIMCALL(void, adddep_530114)(Tsym213822* x, NI32 dep) {
	{
		if (!((gmemcachedata_530059 ? gmemcachedata_530059->Sup.len : 0) <= ((NI) (dep)))) goto LA3;
		gmemcachedata_530059 = (TY530042*) setLengthSeq(&(gmemcachedata_530059)->Sup, sizeof(Tmoduleinmemory530008), ((NI) ((NI32)(dep + ((NI32) 1)))));
	}
	LA3: ;
	safeadd_530138((&gmemcachedata_530059->data[(*x).position].deps), dep);
}

N_NIMCALL(void, dohash_530102)(NI32 fileidx) {
	{
		NimStringDesc* LOC5;
		if (!(gmemcachedata_530059->data[fileidx].hashstatus == ((NU8) 0))) goto LA3;
		LOC5 = 0;
		LOC5 = tofullpath_182266(fileidx);
		securehashfile_191016(LOC5, gmemcachedata_530059->data[fileidx].hash);
	}
	LA3: ;
}

N_NIMCALL(Tnode213790*, includemodule_530818)(Tsym213822* s, NI32 fileidx) {
	Tnode213790* result;
	result = 0;
	result = parsefile_237029(fileidx);
	{
		if (!((gglobaloptions_159121 &(1U<<((NU)(((NU8) 15))&31U)))!=0)) goto LA3;
		{
			if (!((gmemcachedata_530059 ? gmemcachedata_530059->Sup.len : 0) <= ((NI) (fileidx)))) goto LA7;
			gmemcachedata_530059 = (TY530042*) setLengthSeq(&(gmemcachedata_530059)->Sup, sizeof(Tmoduleinmemory530008), ((NI) ((NI32)(fileidx + ((NI32) 1)))));
		}
		LA7: ;
		adddep_530114(s, fileidx);
		dohash_530102(fileidx);
	}
	LA3: ;
	return result;
}

N_NIMCALL(Tsym213822*, getmodule_530062)(NI32 fileidx) {
	Tsym213822* result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (((NI32) 0) <= fileidx);
		if (!(LOC3)) goto LA4;
		LOC3 = (((NI) (fileidx)) < (gcompiledmodules_530041 ? gcompiledmodules_530041->Sup.len : 0));
		LA4: ;
		if (!LOC3) goto LA5;
		result = gcompiledmodules_530041->data[fileidx];
	}
	LA5: ;
	return result;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Cell47705* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_51640(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell47705* c;
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

N_NIMCALL(Tsym213822*, newmodule_530622)(NI32 fileidx) {
	Tsym213822* result;
	NimStringDesc* filename;
	TY118906 LOC1;
	NimStringDesc* LOC7;
	Tident188012* LOC8;
	result = 0;
	result = (Tsym213822*) newObj((&NTI213788), sizeof(Tsym213822));
	(*result).Sup.Sup.m_type = (&NTI213822);
	(*result).Sup.id = ((NI) -1);
	(*result).kind = ((NU8) 6);
	filename = tofullpath_182266(fileidx);
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	nossplitFile(filename, (&LOC1));
	asgnRefNoCycle((void**) (&(*result).name), getident_188441(LOC1.Field1));
	{
		NIM_BOOL LOC4;
		LOC4 = 0;
		LOC4 = isnimidentifier_204227((*(*result).name).s);
		if (!!(LOC4)) goto LA5;
		rawmessage_184612(((NU16) 22), (*(*result).name).s);
	}
	LA5: ;
	(*result).info = newlineinfo_182023(fileidx, ((NI) 1), ((NI) 1));
	LOC7 = 0;
	LOC7 = getpackagename_160006(filename);
	LOC8 = 0;
	LOC8 = getident_188441(LOC7);
	asgnRefNoCycle((void**) (&(*result).owner), newsym_214683(((NU8) 23), LOC8, NIM_NIL, (*result).info));
	(*result).position = ((NI) (fileidx));
	{
		if (!((gmemcachedata_530059 ? gmemcachedata_530059->Sup.len : 0) <= ((NI) (fileidx)))) goto LA11;
		gmemcachedata_530059 = (TY530042*) setLengthSeq(&(gmemcachedata_530059)->Sup, sizeof(Tmoduleinmemory530008), ((NI) ((NI32)(fileidx + ((NI32) 1)))));
	}
	LA11: ;
	{
		if (!((gcompiledmodules_530041 ? gcompiledmodules_530041->Sup.len : 0) <= ((NI) (fileidx)))) goto LA15;
		gcompiledmodules_530041 = (Tsymseq213792*) setLengthSeq(&(gcompiledmodules_530041)->Sup, sizeof(Tsym213822*), ((NI) ((NI32)(fileidx + ((NI32) 1)))));
	}
	LA15: ;
	asgnRefNoCycle((void**) (&gcompiledmodules_530041->data[(*result).position]), result);
	(*result).flags |= ((NU32)1)<<((((NU8) 0))%(sizeof(NU32)*8));
	initstrtable_217001((&(*result).kindU.S3.tab));
	strtableadd_220061((&(*result).kindU.S3.tab), result);
	return result;
}

static N_INLINE(NI, getid_212401)(void) {
	NI result;
	result = 0;
	result = gfrontendid_212003;
	gfrontendid_212003 += ((NI) 1);
	return result;
}

N_NIMCALL(NIM_BOOL, hashchanged_530078)(NI32 fileidx) {
	NIM_BOOL result;
	result = 0;
	{
		NIM_BOOL LOC3;
		NimStringDesc* LOC7;
		LOC3 = 0;
		LOC3 = (((NI32) 0) <= fileidx);
		if (!(LOC3)) goto LA4;
		LOC3 = (((NI) (fileidx)) < (gmemcachedata_530059 ? gmemcachedata_530059->Sup.len : 0));
		LA4: ;
		if (!!(LOC3)) goto LA5;
		LOC7 = 0;
		LOC7 = HEX24_186183(TMP1627);
		internalerror_186113(LOC7);
	}
	LA5: ;
	switch (gmemcachedata_530059->data[fileidx].hashstatus) {
	case ((NU8) 2):
	{
		result = NIM_TRUE;
	}
	break;
	case ((NU8) 3):
	{
		result = NIM_FALSE;
	}
	break;
	case ((NU8) 1):
	{
		Sha1digest191003 newhash;
		NimStringDesc* LOC11;
		NIM_BOOL LOC12;
		memset((void*)newhash, 0, sizeof(newhash));
		LOC11 = 0;
		LOC11 = tofullpath_182266(fileidx);
		chckNil((void*)newhash);
		memset((void*)newhash, 0, sizeof(newhash));
		securehashfile_191016(LOC11, newhash);
		LOC12 = 0;
		LOC12 = HEX3DHEX3D_191087(newhash, gmemcachedata_530059->data[fileidx].hash);
		result = !(LOC12);
		memcpy((void*)gmemcachedata_530059->data[fileidx].hash, (NIM_CONST void*)newhash, sizeof(Sha1digest191003));
		{
			if (!result) goto LA15;
			gmemcachedata_530059->data[fileidx].hashstatus = ((NU8) 2);
		}
		goto LA13;
		LA15: ;
		{
			gmemcachedata_530059->data[fileidx].hashstatus = ((NU8) 3);
		}
		LA13: ;
	}
	break;
	case ((NU8) 0):
	{
		NimStringDesc* LOC19;
		LOC19 = 0;
		LOC19 = tofullpath_182266(fileidx);
		securehashfile_191016(LOC19, gmemcachedata_530059->data[fileidx].hash);
		result = NIM_TRUE;
		{
			if (!result) goto LA22;
			gmemcachedata_530059->data[fileidx].hashstatus = ((NU8) 2);
		}
		goto LA20;
		LA22: ;
		{
			gmemcachedata_530059->data[fileidx].hashstatus = ((NU8) 3);
		}
		LA20: ;
	}
	break;
	}
	return result;
}

static N_INLINE(NIM_BOOL, canbecycleroot_51658)(Cell47705* c) {
	NIM_BOOL result;
	result = 0;
	result = !((((*(*c).typ).flags &(1U<<((NU)(((NU8) 1))&7U)))!=0));
	return result;
}

static N_INLINE(void, rtladdcycleroot_52420)(Cell47705* c) {
	{
		if (!!((((NI) ((NI)((*c).refcount & ((NI) 3)))) == ((NI) 3)))) goto LA3;
		(*c).refcount = (NI)((NI)((*c).refcount & ((NI) -4)) | ((NI) 3));
		incl_48447((&gch_50059.cycleroots), c);
	}
	LA3: ;
}

static N_INLINE(void, incref_54019)(Cell47705* c) {
	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_51658(c);
		if (!LOC3) goto LA4;
		rtladdcycleroot_52420(c);
	}
	LA4: ;
}

static N_INLINE(void, decref_53601)(Cell47705* c) {
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_53201(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		LOC6 = 0;
		LOC6 = canbecycleroot_51658(c);
		if (!LOC6) goto LA7;
		rtladdcycleroot_52420(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		Cell47705* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_51640(src);
		incref_54019(LOC5);
	}
	LA3: ;
	{
		Cell47705* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_51640((*dest));
		decref_53601(LOC10);
	}
	LA8: ;
	(*dest) = src;
}

N_NIMCALL(void, resetmodule_530258)(NI32 fileidx) {
	{
		if (!((NU64)(((NI64) (fileidx))) < (NU64)(((NI64) ((gmemcachedata_530059 ? gmemcachedata_530059->Sup.len : 0)))))) goto LA3;
		gmemcachedata_530059->data[fileidx].needsrecompile = ((NU8) 2);
	}
	LA3: ;
	{
		if (!((NU64)(((NI64) (fileidx))) < (NU64)(((NI64) ((gcompiledmodules_530041 ? gcompiledmodules_530041->Sup.len : 0)))))) goto LA7;
		asgnRefNoCycle((void**) (&gcompiledmodules_530041->data[fileidx]), NIM_NIL);
	}
	LA7: ;
	{
		if (!((NU64)(((NI64) (fileidx))) < (NU64)(((NI64) ((gmodules_468157 ? gmodules_468157->Sup.len : 0)))))) goto LA11;
		asgnRef((void**) (&gmodules_468157->data[fileidx]), NIM_NIL);
	}
	LA11: ;
}

N_NIMCALL(NU8, checkdepmem_530372)(NI32 fileidx) {
	NU8 result;
{	result = 0;
	{
		if (!!((gmemcachedata_530059->data[fileidx].needsrecompile == ((NU8) 0)))) goto LA3;
		result = gmemcachedata_530059->data[fileidx].needsrecompile;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = ((gglobaloptions_159121 &(1U<<((NU)(((NU8) 1))&31U)))!=0);
		if (LOC7) goto LA8;
		LOC7 = hashchanged_530078(fileidx);
		LA8: ;
		if (!LOC7) goto LA9;
		resetmodule_530258(fileidx);
		result = ((NU8) 2);
		goto BeforeRet;
	}
	LA9: ;
	{
		NIM_BOOL LOC13;
		LOC13 = 0;
		LOC13 = HEX3DHEX3D_530149(gmemcachedata_530059->data[fileidx].deps, NIM_NIL);
		if (!!(LOC13)) goto LA14;
		gmemcachedata_530059->data[fileidx].needsrecompile = ((NU8) 3);
		{
			NI32 dep_530602;
			TY213913* HEX3Atmp_530616;
			NI i_530619;
			NI L_530621;
			dep_530602 = 0;
			HEX3Atmp_530616 = 0;
			HEX3Atmp_530616 = gmemcachedata_530059->data[fileidx].deps;
			i_530619 = ((NI) 0);
			L_530621 = (HEX3Atmp_530616 ? HEX3Atmp_530616->Sup.len : 0);
			{
				while (1) {
					NU8 d;
					if (!(i_530619 < L_530621)) goto LA18;
					dep_530602 = HEX3Atmp_530616->data[i_530619];
					d = checkdepmem_530372(dep_530602);
					{
						if (!((20 &(1U<<((NU)(d)&7U)))!=0)) goto LA21;
						resetmodule_530258(fileidx);
						result = ((NU8) 2);
						goto BeforeRet;
					}
					LA21: ;
					i_530619 += ((NI) 1);
				} LA18: ;
			}
		}
	}
	LA14: ;
	gmemcachedata_530059->data[fileidx].needsrecompile = ((NU8) 1);
	result = ((NU8) 1);
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(Tsym213822*, compilemodule_530695)(NI32 fileidx, NU32 flags) {
	Tsym213822* result;
{	result = 0;
	result = getmodule_530062(fileidx);
	{
		Trodreader251021* rd;
		if (!(result == NIM_NIL)) goto LA3;
		{
			if (!((gmemcachedata_530059 ? gmemcachedata_530059->Sup.len : 0) <= ((NI) (fileidx)))) goto LA7;
			gmemcachedata_530059 = (TY530042*) setLengthSeq(&(gmemcachedata_530059)->Sup, sizeof(Tmoduleinmemory530008), ((NI) ((NI32)(fileidx + ((NI32) 1)))));
		}
		LA7: ;
		gmemcachedata_530059->data[fileidx].needsrecompile = ((NU8) 3);
		result = newmodule_530622(fileidx);
		rd = 0;
		(*result).flags = ((*result).flags | flags);
		{
			if (!((18438 &(1U<<((NU)(gcmd_159123)&31U)))!=0)) goto LA11;
			rd = handlesymbolfile_251079(result);
			{
				if (!((*result).Sup.id < ((NI) 0))) goto LA15;
				internalerror_186113(((NimStringDesc*) &TMP1625));
				goto BeforeRet;
			}
			LA15: ;
		}
		goto LA9;
		LA11: ;
		{
			(*result).Sup.id = getid_212401();
		}
		LA9: ;
		{
			NIM_BOOL LOC20;
			Tllstream201204* LOC24;
			LOC20 = 0;
			LOC20 = ((flags &(1U<<((NU)(((NU8) 12))&31U)))!=0);
			if (!(LOC20)) goto LA21;
			LOC20 = gprojectisstdin_159202;
			LA21: ;
			if (!LOC20) goto LA22;
			LOC24 = 0;
			LOC24 = llstreamopen_201229(stdin);
			processmodule_260044(result, LOC24, rd);
		}
		goto LA18;
		LA22: ;
		{
			processmodule_260044(result, NIM_NIL, rd);
		}
		LA18: ;
		{
			if (!((gglobaloptions_159121 &(1U<<((NU)(((NU8) 15))&31U)))!=0)) goto LA28;
			gmemcachedata_530059->data[fileidx].compiledat = glastcmdtime_159134;
			gmemcachedata_530059->data[fileidx].needsrecompile = ((NU8) 4);
			dohash_530102(fileidx);
		}
		LA28: ;
	}
	goto LA1;
	LA3: ;
	{
		{
			NU8 LOC33;
			LOC33 = 0;
			LOC33 = checkdepmem_530372(fileidx);
			if (!(LOC33 == ((NU8) 2))) goto LA34;
			result = compilemodule_530695(fileidx, flags);
		}
		goto LA31;
		LA34: ;
		{
			result = gcompiledmodules_530041->data[fileidx];
		}
		LA31: ;
	}
	LA1: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(Tsym213822*, importmodule_530788)(Tsym213822* s, NI32 fileidx) {
	Tsym213822* result;
	result = 0;
	result = compilemodule_530695(fileidx, 0);
	{
		if (!((gglobaloptions_159121 &(1U<<((NU)(((NU8) 15))&31U)))!=0)) goto LA3;
		adddep_530114(s, fileidx);
	}
	LA3: ;
	{
		if (!(((*result).flags &(1U<<((NU)(((NU8) 13))&31U)))!=0)) goto LA7;
		localerror_186080((*result).info, ((NU16) 41), (*(*result).name).s);
	}
	LA7: ;
	return result;
}

N_NIMCALL(Tsym213822*, makemodule_530884)(NimStringDesc* filename) {
	Tsym213822* result;
	NI32 LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = fileinfoidx_182016(filename);
	result = newmodule_530622(LOC1);
	(*result).Sup.id = getid_212401();
	return result;
}

N_NIMCALL(void, compilesystemmodule_530856)(void) {
	{
		NimStringDesc* LOC5;
		Tsym213822* LOC6;
		if (!(systemmodule_257007 == NIM_NIL)) goto LA3;
		LOC5 = 0;
		LOC5 = HEX2F_118665(libpath_159198, ((NimStringDesc*) &TMP3717));
		systemfileidx_181630 = fileinfoidx_182016(LOC5);
		LOC6 = 0;
		LOC6 = compilemodule_530695(systemfileidx_181630, 8192);
	}
	LA3: ;
}

N_NIMCALL(void, resetallmoduleshard_530350)(void) {
	resetpackagecache_159802();
	gcompiledmodules_530041 = (Tsymseq213792*) setLengthSeq(&(gcompiledmodules_530041)->Sup, sizeof(Tsym213822*), ((NI) 0));
	gmemcachedata_530059 = (TY530042*) setLengthSeq(&(gmemcachedata_530059)->Sup, sizeof(Tmoduleinmemory530008), ((NI) 0));
	resetsystypes_257199();
}

N_NIMCALL(void, wantmainmodule_530871)(void) {
	NimStringDesc* LOC5;
	{
		if (!((gprojectfull_159201 ? gprojectfull_159201->Sup.len : 0) == ((NI) 0))) goto LA3;
		fatal_186066(gcmdlineinfo_182045, ((NU16) 191), ((NimStringDesc*) &TMP4534));
	}
	LA3: ;
	LOC5 = 0;
	LOC5 = nosaddFileExt(gprojectfull_159201, ((NimStringDesc*) &TMP4535));
	gprojectmainidx_159203 = fileinfoidx_182016(LOC5);
}

N_NIMCALL(void, compileproject_530877)(NI32 projectfileidx) {
	NI32 systemfileidx;
	NimStringDesc* LOC1;
	NI32 projectfile;
	wantmainmodule_530871();
	LOC1 = 0;
	LOC1 = HEX2F_118665(libpath_159198, ((NimStringDesc*) &TMP3717));
	systemfileidx = fileinfoidx_182016(LOC1);
	{
		if (!(projectfileidx < ((NI32) 0))) goto LA4;
		projectfile = gprojectmainidx_159203;
	}
	goto LA2;
	LA4: ;
	{
		projectfile = projectfileidx;
	}
	LA2: ;
	{
		Tsym213822* LOC11;
		if (!(projectfile == systemfileidx)) goto LA9;
		LOC11 = 0;
		LOC11 = compilemodule_530695(projectfile, 12288);
	}
	goto LA7;
	LA9: ;
	{
		Tsym213822* LOC13;
		compilesystemmodule_530856();
		LOC13 = 0;
		LOC13 = compilemodule_530695(projectfile, 4096);
	}
	LA7: ;
}

N_NIMCALL(Tsym213822*, makestdinmodule_530889)(void) {
	Tsym213822* result;
	result = 0;
	result = makemodule_530884(((NimStringDesc*) &TMP5252));
	return result;
}

N_NIMCALL(void, resetallmodules_530318)(void) {
	{
		NI i_530329;
		NI HEX3Atmp_530343;
		NI res_530346;
		i_530329 = 0;
		HEX3Atmp_530343 = 0;
		HEX3Atmp_530343 = (gcompiledmodules_530041 ? (gcompiledmodules_530041->Sup.len-1) : -1);
		res_530346 = ((NI) 0);
		{
			while (1) {
				if (!(res_530346 <= HEX3Atmp_530343)) goto LA3;
				i_530329 = res_530346;
				{
					if (!!((gcompiledmodules_530041->data[i_530329] == NIM_NIL))) goto LA6;
					resetmodule_530258(((NI32) (i_530329)));
				}
				LA6: ;
				res_530346 += ((NI) 1);
			} LA3: ;
		}
	}
	resetpackagecache_159802();
}
NIM_EXTERNC N_NOINLINE(void, compiler_modulesInit000)(void) {
	if (gcompiledmodules_530041) nimGCunrefNoCycle(gcompiledmodules_530041);
	gcompiledmodules_530041 = (Tsymseq213792*) newSeqRC1((&NTI213792), 0);
	if (gmemcachedata_530059) nimGCunrefNoCycle(gmemcachedata_530059);
	gmemcachedata_530059 = (TY530042*) newSeqRC1((&NTI530042), 0);
	gincludefile_260058 = includemodule_530818;
	gimportmodule_260053 = importmodule_530788;
}

NIM_EXTERNC N_NOINLINE(void, compiler_modulesDatInit000)(void) {
static TNimNode* TMP1196[5];
static TNimNode* TMP1197[5];
NI TMP1199;
static char* NIM_CONST TMP1198[5] = {
"Maybe", 
"No", 
"Yes", 
"Probing", 
"Recompiled"};
static TNimNode* TMP1200[4];
NI TMP1202;
static char* NIM_CONST TMP1201[4] = {
"hashNotTaken", 
"hashCached", 
"hashHasChanged", 
"hashNotChanged"};
static TNimNode TMP1194[17];
NTI530008.size = sizeof(Tmoduleinmemory530008);
NTI530008.kind = 18;
NTI530008.base = 0;
NTI530008.flags = 2;
TMP1196[0] = &TMP1194[1];
TMP1194[1].kind = 1;
TMP1194[1].offset = offsetof(Tmoduleinmemory530008, compiledat);
TMP1194[1].typ = (&NTI124);
TMP1194[1].name = "compiledAt";
TMP1196[1] = &TMP1194[2];
TMP1194[2].kind = 1;
TMP1194[2].offset = offsetof(Tmoduleinmemory530008, hash);
TMP1194[2].typ = (&NTI191003);
TMP1194[2].name = "hash";
TMP1196[2] = &TMP1194[3];
TMP1194[3].kind = 1;
TMP1194[3].offset = offsetof(Tmoduleinmemory530008, deps);
TMP1194[3].typ = (&NTI213913);
TMP1194[3].name = "deps";
TMP1196[3] = &TMP1194[4];
NTI530004.size = sizeof(NU8);
NTI530004.kind = 14;
NTI530004.base = 0;
NTI530004.flags = 3;
for (TMP1199 = 0; TMP1199 < 5; TMP1199++) {
TMP1194[TMP1199+5].kind = 1;
TMP1194[TMP1199+5].offset = TMP1199;
TMP1194[TMP1199+5].name = TMP1198[TMP1199];
TMP1197[TMP1199] = &TMP1194[TMP1199+5];
}
TMP1194[10].len = 5; TMP1194[10].kind = 2; TMP1194[10].sons = &TMP1197[0];
NTI530004.node = &TMP1194[10];
TMP1194[4].kind = 1;
TMP1194[4].offset = offsetof(Tmoduleinmemory530008, needsrecompile);
TMP1194[4].typ = (&NTI530004);
TMP1194[4].name = "needsRecompile";
TMP1196[4] = &TMP1194[11];
NTI530006.size = sizeof(NU8);
NTI530006.kind = 14;
NTI530006.base = 0;
NTI530006.flags = 3;
for (TMP1202 = 0; TMP1202 < 4; TMP1202++) {
TMP1194[TMP1202+12].kind = 1;
TMP1194[TMP1202+12].offset = TMP1202;
TMP1194[TMP1202+12].name = TMP1201[TMP1202];
TMP1200[TMP1202] = &TMP1194[TMP1202+12];
}
TMP1194[16].len = 4; TMP1194[16].kind = 2; TMP1194[16].sons = &TMP1200[0];
NTI530006.node = &TMP1194[16];
TMP1194[11].kind = 1;
TMP1194[11].offset = offsetof(Tmoduleinmemory530008, hashstatus);
TMP1194[11].typ = (&NTI530006);
TMP1194[11].name = "hashStatus";
TMP1194[0].len = 5; TMP1194[0].kind = 2; TMP1194[0].sons = &TMP1196[0];
NTI530008.node = &TMP1194[0];
NTI530042.size = sizeof(TY530042*);
NTI530042.kind = 24;
NTI530042.base = (&NTI530008);
NTI530042.flags = 2;
NTI530042.marker = TMP1203;
}

