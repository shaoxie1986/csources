/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
typedef struct Tsymseq215792 Tsymseq215792;
typedef struct Tsym215822 Tsym215822;
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
typedef struct TY532042 TY532042;
typedef struct Tmoduleinmemory532008 Tmoduleinmemory532008;
typedef struct TY215913 TY215913;
typedef struct Tnode215790 Tnode215790;
typedef struct Tidobj190006 Tidobj190006;
typedef struct TNimObject TNimObject;
typedef struct Ttypeseq215824 Ttypeseq215824;
typedef struct Tscope215816 Tscope215816;
typedef struct TY215925 TY215925;
typedef struct Tstrtable215794 Tstrtable215794;
typedef struct Ttype215828 Ttype215828;
typedef struct Tident190012 Tident190012;
typedef struct Tlineinfo183337 Tlineinfo183337;
typedef struct Tloc215804 Tloc215804;
typedef struct Ropeobj170006 Ropeobj170006;
typedef struct Tlib215808 Tlib215808;
typedef struct NimStringDesc NimStringDesc;
typedef struct TY118706 TY118706;
typedef struct Trodreader253021 Trodreader253021;
typedef struct Tllstream203204 Tllstream203204;
typedef struct TY88687 TY88687;
typedef struct TY470140 TY470140;
typedef struct Tcgen470026 Tcgen470026;
typedef struct Basechunk29637 Basechunk29637;
typedef struct Freecell29629 Freecell29629;
typedef struct Tnodeseq215784 Tnodeseq215784;
typedef struct Tinstantiation215812 Tinstantiation215812;
typedef struct Tlistentry135010 Tlistentry135010;
typedef struct Tindex253019 Tindex253019;
typedef struct Tiitable222163 Tiitable222163;
typedef struct Tiipairseq222161 Tiipairseq222161;
typedef struct Table253054 Table253054;
typedef struct Keyvaluepairseq253057 Keyvaluepairseq253057;
typedef struct Memfile251202 Memfile251202;
typedef struct Tpasscontext262002 Tpasscontext262002;
typedef struct Tidtable215840 Tidtable215840;
typedef struct Tidpairseq215838 Tidpairseq215838;
typedef struct Intset212035 Intset212035;
typedef struct Trunk212031 Trunk212031;
typedef struct Trunkseq212033 Trunkseq212033;
typedef struct Tlinkedlist135016 Tlinkedlist135016;
typedef struct Tcproc470022 Tcproc470022;
typedef struct Tnodetable215852 Tnodetable215852;
typedef struct Tnodepairseq215850 Tnodepairseq215850;
typedef struct Tiipair222159 Tiipair222159;
typedef struct Keyvaluepair253060 Keyvaluepair253060;
typedef struct Tidpair215836 Tidpair215836;
typedef struct TY183350 TY183350;
typedef struct TY470094 TY470094;
typedef struct Tnodepair215848 Tnodepair215848;
typedef struct Tblock470020 Tblock470020;
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
typedef NU8 Sha1digest193003[20];
struct  Tmoduleinmemory532008  {
NF compiledat;
Sha1digest193003 hash;
TY215913* deps;
NU8 needsrecompile;
NU8 hashstatus;
};
typedef N_NIMCALL_PTR(Tnode215790*, TY262054) (Tsym215822* m, NI32 fileidx);
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj190006  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable215794  {
NI counter;
Tsymseq215792* data;
};
struct  Tlineinfo183337  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tloc215804  {
NU8 k;
NU8 s;
NU16 flags;
Ttype215828* t;
Ropeobj170006* r;
Ropeobj170006* heaproot;
};
struct  Tsym215822  {
  Tidobj190006 Sup;
NU8 kind;
union{
struct {Ttypeseq215824* typeinstcache;
Tscope215816* typscope;
} S1;
struct {TY215925* procinstcache;
Tsym215822* gcunsafetyreason;
} S2;
struct {TY215925* usedgenerics;
Tstrtable215794 tab;
} S3;
struct {Tsym215822* guard;
NI bitsize;
} S4;
} kindU;
NU8 magic;
Ttype215828* typ;
Tident190012* name;
Tlineinfo183337 info;
Tsym215822* owner;
NU32 flags;
Tnode215790* ast;
NU32 options;
NI position;
NI offset;
Tloc215804 loc;
Tlib215808* annex;
Tnode215790* constraint;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_NIMCALL_PTR(Tsym215822*, TY262049) (Tsym215822* m, NI32 fileidx);
struct TY118706 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
};
struct  Tident190012  {
  Tidobj190006 Sup;
NimStringDesc* s;
Tident190012* next;
NI h;
};
struct TY88687 {
NimStringDesc* Field0;
NI Field1;
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
struct  Tnode215790  {
Ttype215828* typ;
Tlineinfo183337 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym215822* sym;
} S4;
struct {Tident190012* ident;
} S5;
struct {Tnodeseq215784* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
struct  Tscope215816  {
NI depthlevel;
Tstrtable215794 symbols;
Tnodeseq215784* usingsyms;
Tscope215816* parent;
};
struct  Ttype215828  {
  Tidobj190006 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq215824* sons;
Tnode215790* n;
Tsym215822* owner;
Tsym215822* sym;
Tsym215822* destructor;
Tsym215822* deepcopy;
Tsym215822* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc215804 loc;
};
struct  Ropeobj170006  {
  TNimObject Sup;
Ropeobj170006* left;
Ropeobj170006* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry135010  {
  TNimObject Sup;
Tlistentry135010* prev;
Tlistentry135010* next;
};
struct  Tlib215808  {
  Tlistentry135010 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj170006* name;
Tnode215790* path;
};
struct  Tiitable222163  {
NI counter;
Tiipairseq222161* data;
};
struct  Tindex253019  {
NI lastidxkey;
NI lastidxval;
Tiitable222163 tab;
NimStringDesc* r;
NI offset;
};
struct  Table253054  {
Keyvaluepairseq253057* data;
NI counter;
};
struct  Memfile251202  {
void* mem;
NI size;
int handle;
};
struct  Trodreader253021  {
  TNimObject Sup;
NI pos;
NCSTRING s;
NU32 options;
NU8 reason;
TY215913* moddeps;
TY215913* files;
NI dataidx;
NI convertersidx;
NI initidx;
NI interfidx;
NI compilerprocsidx;
NI methodsidx;
NimStringDesc* filename;
Tindex253019 index;
Tindex253019 imports;
NI readerindex;
NI line;
NI moduleid;
Table253054 syms;
Memfile251202 memfile;
Tsymseq215792* methods;
NimStringDesc* origfile;
NIM_BOOL inviewmode;
};
struct  Tllstream203204  {
  TNimObject Sup;
NU8 kind;
FILE* f;
NimStringDesc* s;
NI rd;
NI wr;
NI lineoffset;
};
struct  Tpasscontext262002  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
typedef Ropeobj170006* Tcfilesections470010[18];
struct  Tidtable215840  {
NI counter;
Tidpairseq215838* data;
};
struct  Intset212035  {
NI counter;
NI max;
Trunk212031* head;
Trunkseq212033* data;
};
struct  Tlinkedlist135016  {
Tlistentry135010* head;
Tlistentry135010* tail;
NI counter;
};
struct  Tnodetable215852  {
NI counter;
Tnodepairseq215850* data;
};
typedef Ropeobj170006* TY470132[10];
struct  Tcgen470026  {
  Tpasscontext262002 Sup;
Tsym215822* module;
NimStringDesc* filename;
Tcfilesections470010 s;
NIM_BOOL preventstacktrace;
NIM_BOOL usesthreadvars;
NIM_BOOL framedeclared;
NIM_BOOL isheaderfile;
NIM_BOOL includesstringh;
NIM_BOOL objhaskidsvalid;
NimStringDesc* cfilename;
Tidtable215840 typecache;
Tidtable215840 forwtypecache;
Intset212035 declaredthings;
Intset212035 declaredprotos;
Tlinkedlist135016 headerfiles;
Intset212035 typeinfomarker;
Tcproc470022* initproc;
Tcproc470022* postinitproc;
Tcproc470022* preinitproc;
Ttypeseq215824* typestack;
Tnodetable215852 datacache;
Tsymseq215792* forwardedprocs;
NI typenodes;
NI nimtypes;
Ropeobj170006* typenodesname;
Ropeobj170006* nimtypesname;
NI labels;
TY470132 extensionloaders;
Ropeobj170006* injectstmt;
};
struct  Freecell29629  {
Freecell29629* next;
NI zerofield;
};
struct  Tinstantiation215812  {
Tsym215822* sym;
Ttypeseq215824* concretetypes;
TY215913* usedby;
NI compilesid;
};
struct  Tiipair222159  {
NI key;
NI val;
};
struct Keyvaluepair253060 {
NI Field0;
NI Field1;
Tsym215822* Field2;
};
struct  Tidpair215836  {
Tidobj190006* key;
TNimObject* val;
};
struct  Trunk212031  {
Trunk212031* next;
NI key;
TY29618 bits;
};
struct  Tcproc470022  {
Tsym215822* prc;
NIM_BOOL beforeretneeded;
NIM_BOOL threadvaraccessed;
Tlineinfo183337 lastlineinfo;
Tnodeseq215784* nestedtrystmts;
NI inexceptblock;
TY183350* finallysafepoints;
NI labels;
TY470094* blocks;
NI breakidx;
NU32 options;
NI maxframelen;
Tcgen470026* module;
NI withinloop;
NI splitdecls;
NI gcframeid;
Ropeobj170006* gcframetype;
};
struct  Tnodepair215848  {
NI h;
Tnode215790* key;
NI val;
};
typedef Ropeobj170006* Tcprocsections470014[3];
struct  Tblock470020  {
NI id;
Ropeobj170006* label;
Tcprocsections470014 sections;
NIM_BOOL isloop;
NI16 nestedtrystmts;
NI16 nestedexceptstmts;
NI16 framelen;
};
struct Tsymseq215792 {
  TGenericSeq Sup;
  Tsym215822* data[SEQ_DECL_SIZE];
};
struct TY532042 {
  TGenericSeq Sup;
  Tmoduleinmemory532008 data[SEQ_DECL_SIZE];
};
struct TY470140 {
  TGenericSeq Sup;
  Tcgen470026* data[SEQ_DECL_SIZE];
};
struct TY215913 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct Ttypeseq215824 {
  TGenericSeq Sup;
  Ttype215828* data[SEQ_DECL_SIZE];
};
struct TY215925 {
  TGenericSeq Sup;
  Tinstantiation215812* data[SEQ_DECL_SIZE];
};
struct Tnodeseq215784 {
  TGenericSeq Sup;
  Tnode215790* data[SEQ_DECL_SIZE];
};
struct Tiipairseq222161 {
  TGenericSeq Sup;
  Tiipair222159 data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq253057 {
  TGenericSeq Sup;
  Keyvaluepair253060 data[SEQ_DECL_SIZE];
};
struct Tidpairseq215838 {
  TGenericSeq Sup;
  Tidpair215836 data[SEQ_DECL_SIZE];
};
struct Trunkseq212033 {
  TGenericSeq Sup;
  Trunk212031* data[SEQ_DECL_SIZE];
};
struct Tnodepairseq215850 {
  TGenericSeq Sup;
  Tnodepair215848 data[SEQ_DECL_SIZE];
};
struct TY183350 {
  TGenericSeq Sup;
  Ropeobj170006* data[SEQ_DECL_SIZE];
};
struct TY470094 {
  TGenericSeq Sup;
  Tblock470020 data[SEQ_DECL_SIZE];
};
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Cell47505*, usrtocell_51440)(void* usr);
static N_INLINE(void, rtladdzct_53001)(Cell47505* c);
N_NOINLINE(void, addzct_51417)(Cellseq47521* s, Cell47505* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP1205)(void* p, NI op);
N_NIMCALL(Tnode215790*, includemodule_532818)(Tsym215822* s, NI32 fileidx);
N_NIMCALL(Tnode215790*, parsefile_239029)(NI32 fileidx);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemsize, NI newlen);
N_NIMCALL(void, adddep_532114)(Tsym215822* x, NI32 dep);
N_NIMCALL(void, safeadd_532138)(TY215913** x, NI32 y);
N_NIMCALL(void, dohash_532102)(NI32 fileidx);
N_NIMCALL(void, securehashfile_193016)(NimStringDesc* filename, Sha1digest193003* Result);
N_NIMCALL(NimStringDesc*, tofullpath_184269)(NI32 fileidx);
N_NIMCALL(Tsym215822*, importmodule_532788)(Tsym215822* s, NI32 fileidx);
N_NIMCALL(Tsym215822*, compilemodule_532695)(NI32 fileidx, NU32 flags);
N_NIMCALL(Tsym215822*, getmodule_532062)(NI32 fileidx);
N_NIMCALL(Tsym215822*, newmodule_532622)(NI32 fileidx);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(Tident190012*, getident_190441)(NimStringDesc* identifier);
N_NIMCALL(void, nossplitFile)(NimStringDesc* path, TY118706* Result);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(NIM_BOOL, isnimidentifier_206227)(NimStringDesc* s);
N_NIMCALL(void, rawmessage_186612)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(Tlineinfo183337, newlineinfo_184024)(NI32 fileinfoidx, NI line, NI col);
N_NIMCALL(Tsym215822*, newsym_216684)(NU8 symkind, Tident190012* name, Tsym215822* owner, Tlineinfo183337 info);
N_NIMCALL(NimStringDesc*, getpackagename_162006)(NimStringDesc* path);
N_NIMCALL(void, initstrtable_219001)(Tstrtable215794* x);
N_NIMCALL(void, strtableadd_222061)(Tstrtable215794* t, Tsym215822* n);
N_NIMCALL(Trodreader253021*, handlesymbolfile_253079)(Tsym215822* module);
N_NIMCALL(void, internalerror_188113)(NimStringDesc* errmsg);
static N_INLINE(NI, getid_214401)(void);
N_NIMCALL(void, processmodule_262044)(Tsym215822* module, Tllstream203204* stream, Trodreader253021* rd);
N_NIMCALL(Tllstream203204*, llstreamopen_203229)(FILE* f);
N_NIMCALL(NU8, checkdepmem_532375)(NI32 fileidx);
N_NIMCALL(NIM_BOOL, hashchanged_532078)(NI32 fileidx);
N_NIMCALL(NimStringDesc*, HEX24_188183)(TY88687 x);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(NIM_BOOL, HEX3DHEX3D_193087)(Sha1digest193003 a, Sha1digest193003 b);
N_NIMCALL(void, resetmodule_532258)(NI32 fileidx);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_53819)(Cell47505* c);
static N_INLINE(NIM_BOOL, canbecycleroot_51458)(Cell47505* c);
static N_INLINE(void, rtladdcycleroot_52220)(Cell47505* c);
N_NOINLINE(void, incl_48247)(Cellset47517* s, Cell47505* cell);
static N_INLINE(void, decref_53401)(Cell47505* c);
N_NIMCALL(NIM_BOOL, HEX3DHEX3D_532149)(TY215913* x, TY215913* y);
N_NIMCALL(void, localerror_188080)(Tlineinfo183337 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NI32, fileinfoidx_184017)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, HEX2F_118465)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(void, resetpackagecache_161802)(void);
N_NIMCALL(void, resetsystypes_259199)(void);
N_NIMCALL(void, wantmainmodule_532871)(void);
N_NIMCALL(void, fatal_188066)(Tlineinfo183337 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, nosaddFileExt)(NimStringDesc* filename, NimStringDesc* ext);
N_NIMCALL(void, compilesystemmodule_532856)(void);
N_NIMCALL(Tsym215822*, makemodule_532884)(NimStringDesc* filename);
STRING_LITERAL(TMP1631, "handleSymbolFile should have set the module\'s ID", 48);
STRING_LITERAL(TMP1634, "compiler/modules.nim", 20);
NIM_CONST TY88687 TMP1633 = {((NimStringDesc*) &TMP1634),
((NI) 41)}
;
STRING_LITERAL(TMP3722, "system.nim", 10);
STRING_LITERAL(TMP4539, "", 0);
STRING_LITERAL(TMP4540, "nim", 3);
STRING_LITERAL(TMP5257, "stdin", 5);
Tsymseq215792* gcompiledmodules_532041;
extern TNimType NTI215792; /* TSymSeq */
extern Gcheap49818 gch_49859;
TY532042* gmemcachedata_532059;
TNimType NTI532008; /* TModuleInMemory */
extern TNimType NTI124; /* float */
extern TNimType NTI193003; /* Sha1Digest */
extern TNimType NTI215913; /* seq[int32] */
TNimType NTI532004; /* TNeedRecompile */
TNimType NTI532006; /* THashStatus */
TNimType NTI532042; /* seq[TModuleInMemory] */
extern TY262054 gincludefile_262058;
extern NU32 gglobaloptions_161121;
extern TY262049 gimportmodule_262053;
extern TNimType NTI215788; /* PSym */
extern TNimType NTI215822; /* TSym */
extern NU8 gcmd_161123;
extern NI gfrontendid_214003;
extern NIM_BOOL gprojectisstdin_161202;
extern NF glastcmdtime_161134;
extern TY470140* gmodules_470157;
extern Tsym215822* systemmodule_259007;
extern NI32 systemfileidx_183630;
extern NimStringDesc* libpath_161198;
extern NimStringDesc* gprojectfull_161201;
extern Tlineinfo183337 gcmdlineinfo_184046;
extern NI32 gprojectmainidx_161203;

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
N_NIMCALL(void, TMP1205)(void* p, NI op) {
	TY532042* a;
	NI LOC1;
	a = (TY532042*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].deps, op);
	}
}

N_NIMCALL(void, adddep_532114)(Tsym215822* x, NI32 dep) {
	{
		if (!((gmemcachedata_532059 ? gmemcachedata_532059->Sup.len : 0) <= ((NI) (dep)))) goto LA3;
		gmemcachedata_532059 = (TY532042*) setLengthSeq(&(gmemcachedata_532059)->Sup, sizeof(Tmoduleinmemory532008), ((NI) ((NI32)(dep + ((NI32) 1)))));
	}
	LA3: ;
	safeadd_532138((&gmemcachedata_532059->data[(*x).position].deps), dep);
}

N_NIMCALL(void, dohash_532102)(NI32 fileidx) {
	{
		NimStringDesc* LOC5;
		if (!(gmemcachedata_532059->data[fileidx].hashstatus == ((NU8) 0))) goto LA3;
		LOC5 = 0;
		LOC5 = tofullpath_184269(fileidx);
		securehashfile_193016(LOC5, gmemcachedata_532059->data[fileidx].hash);
	}
	LA3: ;
}

N_NIMCALL(Tnode215790*, includemodule_532818)(Tsym215822* s, NI32 fileidx) {
	Tnode215790* result;
	result = 0;
	result = parsefile_239029(fileidx);
	{
		if (!((gglobaloptions_161121 &(1U<<((NU)(((NU8) 15))&31U)))!=0)) goto LA3;
		{
			if (!((gmemcachedata_532059 ? gmemcachedata_532059->Sup.len : 0) <= ((NI) (fileidx)))) goto LA7;
			gmemcachedata_532059 = (TY532042*) setLengthSeq(&(gmemcachedata_532059)->Sup, sizeof(Tmoduleinmemory532008), ((NI) ((NI32)(fileidx + ((NI32) 1)))));
		}
		LA7: ;
		adddep_532114(s, fileidx);
		dohash_532102(fileidx);
	}
	LA3: ;
	return result;
}

N_NIMCALL(Tsym215822*, getmodule_532062)(NI32 fileidx) {
	Tsym215822* result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (((NI32) 0) <= fileidx);
		if (!(LOC3)) goto LA4;
		LOC3 = (((NI) (fileidx)) < (gcompiledmodules_532041 ? gcompiledmodules_532041->Sup.len : 0));
		LA4: ;
		if (!LOC3) goto LA5;
		result = gcompiledmodules_532041->data[fileidx];
	}
	LA5: ;
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

N_NIMCALL(Tsym215822*, newmodule_532622)(NI32 fileidx) {
	Tsym215822* result;
	NimStringDesc* filename;
	TY118706 LOC1;
	NimStringDesc* LOC7;
	Tident190012* LOC8;
	result = 0;
	result = (Tsym215822*) newObj((&NTI215788), sizeof(Tsym215822));
	(*result).Sup.Sup.m_type = (&NTI215822);
	(*result).Sup.id = ((NI) -1);
	(*result).kind = ((NU8) 6);
	filename = tofullpath_184269(fileidx);
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	nossplitFile(filename, (&LOC1));
	asgnRefNoCycle((void**) (&(*result).name), getident_190441(LOC1.Field1));
	{
		NIM_BOOL LOC4;
		LOC4 = 0;
		LOC4 = isnimidentifier_206227((*(*result).name).s);
		if (!!(LOC4)) goto LA5;
		rawmessage_186612(((NU16) 22), (*(*result).name).s);
	}
	LA5: ;
	(*result).info = newlineinfo_184024(fileidx, ((NI) 1), ((NI) 1));
	LOC7 = 0;
	LOC7 = getpackagename_162006(filename);
	LOC8 = 0;
	LOC8 = getident_190441(LOC7);
	asgnRefNoCycle((void**) (&(*result).owner), newsym_216684(((NU8) 23), LOC8, NIM_NIL, (*result).info));
	(*result).position = ((NI) (fileidx));
	{
		if (!((gmemcachedata_532059 ? gmemcachedata_532059->Sup.len : 0) <= ((NI) (fileidx)))) goto LA11;
		gmemcachedata_532059 = (TY532042*) setLengthSeq(&(gmemcachedata_532059)->Sup, sizeof(Tmoduleinmemory532008), ((NI) ((NI32)(fileidx + ((NI32) 1)))));
	}
	LA11: ;
	{
		if (!((gcompiledmodules_532041 ? gcompiledmodules_532041->Sup.len : 0) <= ((NI) (fileidx)))) goto LA15;
		gcompiledmodules_532041 = (Tsymseq215792*) setLengthSeq(&(gcompiledmodules_532041)->Sup, sizeof(Tsym215822*), ((NI) ((NI32)(fileidx + ((NI32) 1)))));
	}
	LA15: ;
	asgnRefNoCycle((void**) (&gcompiledmodules_532041->data[(*result).position]), result);
	(*result).flags |= ((NU32)1)<<((((NU8) 0))%(sizeof(NU32)*8));
	initstrtable_219001((&(*result).kindU.S3.tab));
	strtableadd_222061((&(*result).kindU.S3.tab), result);
	return result;
}

static N_INLINE(NI, getid_214401)(void) {
	NI result;
	result = 0;
	result = gfrontendid_214003;
	gfrontendid_214003 += ((NI) 1);
	return result;
}

N_NIMCALL(NIM_BOOL, hashchanged_532078)(NI32 fileidx) {
	NIM_BOOL result;
	result = 0;
	{
		NIM_BOOL LOC3;
		NimStringDesc* LOC7;
		LOC3 = 0;
		LOC3 = (((NI32) 0) <= fileidx);
		if (!(LOC3)) goto LA4;
		LOC3 = (((NI) (fileidx)) < (gmemcachedata_532059 ? gmemcachedata_532059->Sup.len : 0));
		LA4: ;
		if (!!(LOC3)) goto LA5;
		LOC7 = 0;
		LOC7 = HEX24_188183(TMP1633);
		internalerror_188113(LOC7);
	}
	LA5: ;
	switch (gmemcachedata_532059->data[fileidx].hashstatus) {
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
		Sha1digest193003 newhash;
		NimStringDesc* LOC11;
		NIM_BOOL LOC12;
		memset((void*)newhash, 0, sizeof(newhash));
		LOC11 = 0;
		LOC11 = tofullpath_184269(fileidx);
		chckNil((void*)newhash);
		memset((void*)newhash, 0, sizeof(newhash));
		securehashfile_193016(LOC11, newhash);
		LOC12 = 0;
		LOC12 = HEX3DHEX3D_193087(newhash, gmemcachedata_532059->data[fileidx].hash);
		result = !(LOC12);
		memcpy((void*)gmemcachedata_532059->data[fileidx].hash, (NIM_CONST void*)newhash, sizeof(Sha1digest193003));
		{
			if (!result) goto LA15;
			gmemcachedata_532059->data[fileidx].hashstatus = ((NU8) 2);
		}
		goto LA13;
		LA15: ;
		{
			gmemcachedata_532059->data[fileidx].hashstatus = ((NU8) 3);
		}
		LA13: ;
	}
	break;
	case ((NU8) 0):
	{
		NimStringDesc* LOC19;
		LOC19 = 0;
		LOC19 = tofullpath_184269(fileidx);
		securehashfile_193016(LOC19, gmemcachedata_532059->data[fileidx].hash);
		result = NIM_TRUE;
		{
			if (!result) goto LA22;
			gmemcachedata_532059->data[fileidx].hashstatus = ((NU8) 2);
		}
		goto LA20;
		LA22: ;
		{
			gmemcachedata_532059->data[fileidx].hashstatus = ((NU8) 3);
		}
		LA20: ;
	}
	break;
	}
	return result;
}

static N_INLINE(NIM_BOOL, canbecycleroot_51458)(Cell47505* c) {
	NIM_BOOL result;
	result = 0;
	result = !((((*(*c).typ).flags &(1U<<((NU)(((NU8) 1))&7U)))!=0));
	return result;
}

static N_INLINE(void, rtladdcycleroot_52220)(Cell47505* c) {
	{
		if (!!((((NI) ((NI)((*c).refcount & ((NI) 3)))) == ((NI) 3)))) goto LA3;
		(*c).refcount = (NI)((NI)((*c).refcount & ((NI) -4)) | ((NI) 3));
		incl_48247((&gch_49859.cycleroots), c);
	}
	LA3: ;
}

static N_INLINE(void, incref_53819)(Cell47505* c) {
	(*c).refcount = (NI)((NU32)((*c).refcount) + (NU32)(((NI) 8)));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_51458(c);
		if (!LOC3) goto LA4;
		rtladdcycleroot_52220(c);
	}
	LA4: ;
}

static N_INLINE(void, decref_53401)(Cell47505* c) {
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_53001(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		LOC6 = 0;
		LOC6 = canbecycleroot_51458(c);
		if (!LOC6) goto LA7;
		rtladdcycleroot_52220(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		Cell47505* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_51440(src);
		incref_53819(LOC5);
	}
	LA3: ;
	{
		Cell47505* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_51440((*dest));
		decref_53401(LOC10);
	}
	LA8: ;
	(*dest) = src;
}

N_NIMCALL(void, resetmodule_532258)(NI32 fileidx) {
	{
		if (!((NU64)(((NI64) (fileidx))) < (NU64)(((NI64) ((gmemcachedata_532059 ? gmemcachedata_532059->Sup.len : 0)))))) goto LA3;
		gmemcachedata_532059->data[fileidx].needsrecompile = ((NU8) 2);
	}
	LA3: ;
	{
		if (!((NU64)(((NI64) (fileidx))) < (NU64)(((NI64) ((gcompiledmodules_532041 ? gcompiledmodules_532041->Sup.len : 0)))))) goto LA7;
		asgnRefNoCycle((void**) (&gcompiledmodules_532041->data[fileidx]), NIM_NIL);
	}
	LA7: ;
	{
		if (!((NU64)(((NI64) (fileidx))) < (NU64)(((NI64) ((gmodules_470157 ? gmodules_470157->Sup.len : 0)))))) goto LA11;
		asgnRef((void**) (&gmodules_470157->data[fileidx]), NIM_NIL);
	}
	LA11: ;
}

N_NIMCALL(NU8, checkdepmem_532375)(NI32 fileidx) {
	NU8 result;
{	result = 0;
	{
		if (!!((gmemcachedata_532059->data[fileidx].needsrecompile == ((NU8) 0)))) goto LA3;
		result = gmemcachedata_532059->data[fileidx].needsrecompile;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = ((gglobaloptions_161121 &(1U<<((NU)(((NU8) 1))&31U)))!=0);
		if (LOC7) goto LA8;
		LOC7 = hashchanged_532078(fileidx);
		LA8: ;
		if (!LOC7) goto LA9;
		resetmodule_532258(fileidx);
		result = ((NU8) 2);
		goto BeforeRet;
	}
	LA9: ;
	{
		NIM_BOOL LOC13;
		LOC13 = 0;
		LOC13 = HEX3DHEX3D_532149(gmemcachedata_532059->data[fileidx].deps, NIM_NIL);
		if (!!(LOC13)) goto LA14;
		gmemcachedata_532059->data[fileidx].needsrecompile = ((NU8) 3);
		{
			NI32 dep_532602;
			TY215913* HEX3Atmp_532616;
			NI i_532619;
			NI L_532621;
			dep_532602 = 0;
			HEX3Atmp_532616 = 0;
			HEX3Atmp_532616 = gmemcachedata_532059->data[fileidx].deps;
			i_532619 = ((NI) 0);
			L_532621 = (HEX3Atmp_532616 ? HEX3Atmp_532616->Sup.len : 0);
			{
				while (1) {
					NU8 d;
					if (!(i_532619 < L_532621)) goto LA18;
					dep_532602 = HEX3Atmp_532616->data[i_532619];
					d = checkdepmem_532375(dep_532602);
					{
						if (!((20 &(1U<<((NU)(d)&7U)))!=0)) goto LA21;
						resetmodule_532258(fileidx);
						result = ((NU8) 2);
						goto BeforeRet;
					}
					LA21: ;
					i_532619 += ((NI) 1);
				} LA18: ;
			}
		}
	}
	LA14: ;
	gmemcachedata_532059->data[fileidx].needsrecompile = ((NU8) 1);
	result = ((NU8) 1);
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(Tsym215822*, compilemodule_532695)(NI32 fileidx, NU32 flags) {
	Tsym215822* result;
{	result = 0;
	result = getmodule_532062(fileidx);
	{
		Trodreader253021* rd;
		if (!(result == NIM_NIL)) goto LA3;
		{
			if (!((gmemcachedata_532059 ? gmemcachedata_532059->Sup.len : 0) <= ((NI) (fileidx)))) goto LA7;
			gmemcachedata_532059 = (TY532042*) setLengthSeq(&(gmemcachedata_532059)->Sup, sizeof(Tmoduleinmemory532008), ((NI) ((NI32)(fileidx + ((NI32) 1)))));
		}
		LA7: ;
		gmemcachedata_532059->data[fileidx].needsrecompile = ((NU8) 3);
		result = newmodule_532622(fileidx);
		rd = 0;
		(*result).flags = ((*result).flags | flags);
		{
			if (!((18438 &(1U<<((NU)(gcmd_161123)&31U)))!=0)) goto LA11;
			rd = handlesymbolfile_253079(result);
			{
				if (!((*result).Sup.id < ((NI) 0))) goto LA15;
				internalerror_188113(((NimStringDesc*) &TMP1631));
				goto BeforeRet;
			}
			LA15: ;
		}
		goto LA9;
		LA11: ;
		{
			(*result).Sup.id = getid_214401();
		}
		LA9: ;
		{
			NIM_BOOL LOC20;
			Tllstream203204* LOC24;
			LOC20 = 0;
			LOC20 = ((flags &(1U<<((NU)(((NU8) 12))&31U)))!=0);
			if (!(LOC20)) goto LA21;
			LOC20 = gprojectisstdin_161202;
			LA21: ;
			if (!LOC20) goto LA22;
			LOC24 = 0;
			LOC24 = llstreamopen_203229(stdin);
			processmodule_262044(result, LOC24, rd);
		}
		goto LA18;
		LA22: ;
		{
			processmodule_262044(result, NIM_NIL, rd);
		}
		LA18: ;
		{
			if (!((gglobaloptions_161121 &(1U<<((NU)(((NU8) 15))&31U)))!=0)) goto LA28;
			gmemcachedata_532059->data[fileidx].compiledat = glastcmdtime_161134;
			gmemcachedata_532059->data[fileidx].needsrecompile = ((NU8) 4);
			dohash_532102(fileidx);
		}
		LA28: ;
	}
	goto LA1;
	LA3: ;
	{
		{
			NU8 LOC33;
			LOC33 = 0;
			LOC33 = checkdepmem_532375(fileidx);
			if (!(LOC33 == ((NU8) 2))) goto LA34;
			result = compilemodule_532695(fileidx, flags);
		}
		goto LA31;
		LA34: ;
		{
			result = gcompiledmodules_532041->data[fileidx];
		}
		LA31: ;
	}
	LA1: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(Tsym215822*, importmodule_532788)(Tsym215822* s, NI32 fileidx) {
	Tsym215822* result;
	result = 0;
	result = compilemodule_532695(fileidx, 0);
	{
		if (!((gglobaloptions_161121 &(1U<<((NU)(((NU8) 15))&31U)))!=0)) goto LA3;
		adddep_532114(s, fileidx);
	}
	LA3: ;
	{
		if (!(((*result).flags &(1U<<((NU)(((NU8) 13))&31U)))!=0)) goto LA7;
		localerror_188080((*result).info, ((NU16) 41), (*(*result).name).s);
	}
	LA7: ;
	return result;
}

N_NIMCALL(Tsym215822*, makemodule_532884)(NimStringDesc* filename) {
	Tsym215822* result;
	NI32 LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = fileinfoidx_184017(filename);
	result = newmodule_532622(LOC1);
	(*result).Sup.id = getid_214401();
	return result;
}

N_NIMCALL(void, compilesystemmodule_532856)(void) {
	{
		NimStringDesc* LOC5;
		Tsym215822* LOC6;
		if (!(systemmodule_259007 == NIM_NIL)) goto LA3;
		LOC5 = 0;
		LOC5 = HEX2F_118465(libpath_161198, ((NimStringDesc*) &TMP3722));
		systemfileidx_183630 = fileinfoidx_184017(LOC5);
		LOC6 = 0;
		LOC6 = compilemodule_532695(systemfileidx_183630, 8192);
	}
	LA3: ;
}

N_NIMCALL(void, resetallmoduleshard_532353)(void) {
	resetpackagecache_161802();
	gcompiledmodules_532041 = (Tsymseq215792*) setLengthSeq(&(gcompiledmodules_532041)->Sup, sizeof(Tsym215822*), ((NI) 0));
	gmemcachedata_532059 = (TY532042*) setLengthSeq(&(gmemcachedata_532059)->Sup, sizeof(Tmoduleinmemory532008), ((NI) 0));
	resetsystypes_259199();
}

N_NIMCALL(void, wantmainmodule_532871)(void) {
	NimStringDesc* LOC5;
	{
		if (!((gprojectfull_161201 ? gprojectfull_161201->Sup.len : 0) == ((NI) 0))) goto LA3;
		fatal_188066(gcmdlineinfo_184046, ((NU16) 191), ((NimStringDesc*) &TMP4539));
	}
	LA3: ;
	LOC5 = 0;
	LOC5 = nosaddFileExt(gprojectfull_161201, ((NimStringDesc*) &TMP4540));
	gprojectmainidx_161203 = fileinfoidx_184017(LOC5);
}

N_NIMCALL(void, compileproject_532877)(NI32 projectfileidx) {
	NI32 systemfileidx;
	NimStringDesc* LOC1;
	NI32 projectfile;
	wantmainmodule_532871();
	LOC1 = 0;
	LOC1 = HEX2F_118465(libpath_161198, ((NimStringDesc*) &TMP3722));
	systemfileidx = fileinfoidx_184017(LOC1);
	{
		if (!(projectfileidx < ((NI32) 0))) goto LA4;
		projectfile = gprojectmainidx_161203;
	}
	goto LA2;
	LA4: ;
	{
		projectfile = projectfileidx;
	}
	LA2: ;
	{
		Tsym215822* LOC11;
		if (!(projectfile == systemfileidx)) goto LA9;
		LOC11 = 0;
		LOC11 = compilemodule_532695(projectfile, 12288);
	}
	goto LA7;
	LA9: ;
	{
		Tsym215822* LOC13;
		compilesystemmodule_532856();
		LOC13 = 0;
		LOC13 = compilemodule_532695(projectfile, 4096);
	}
	LA7: ;
}

N_NIMCALL(Tsym215822*, makestdinmodule_532889)(void) {
	Tsym215822* result;
	result = 0;
	result = makemodule_532884(((NimStringDesc*) &TMP5257));
	return result;
}

N_NIMCALL(void, resetallmodules_532320)(void) {
	{
		NI i_532331;
		NI HEX3Atmp_532346;
		NI res_532349;
		i_532331 = 0;
		HEX3Atmp_532346 = 0;
		HEX3Atmp_532346 = (gcompiledmodules_532041 ? (gcompiledmodules_532041->Sup.len-1) : -1);
		res_532349 = ((NI) 0);
		{
			while (1) {
				if (!(res_532349 <= HEX3Atmp_532346)) goto LA3;
				i_532331 = res_532349;
				{
					if (!!((gcompiledmodules_532041->data[i_532331] == NIM_NIL))) goto LA6;
					resetmodule_532258(((NI32) (i_532331)));
				}
				LA6: ;
				res_532349 += ((NI) 1);
			} LA3: ;
		}
	}
	resetpackagecache_161802();
}
NIM_EXTERNC N_NOINLINE(void, compiler_modulesInit000)(void) {
	if (gcompiledmodules_532041) nimGCunrefNoCycle(gcompiledmodules_532041);
	gcompiledmodules_532041 = (Tsymseq215792*) newSeqRC1((&NTI215792), 0);
	if (gmemcachedata_532059) nimGCunrefNoCycle(gmemcachedata_532059);
	gmemcachedata_532059 = (TY532042*) newSeqRC1((&NTI532042), 0);
	gincludefile_262058 = includemodule_532818;
	gimportmodule_262053 = importmodule_532788;
}

NIM_EXTERNC N_NOINLINE(void, compiler_modulesDatInit000)(void) {
static TNimNode* TMP1198[5];
static TNimNode* TMP1199[5];
NI TMP1201;
static char* NIM_CONST TMP1200[5] = {
"Maybe", 
"No", 
"Yes", 
"Probing", 
"Recompiled"};
static TNimNode* TMP1202[4];
NI TMP1204;
static char* NIM_CONST TMP1203[4] = {
"hashNotTaken", 
"hashCached", 
"hashHasChanged", 
"hashNotChanged"};
static TNimNode TMP1196[17];
NTI532008.size = sizeof(Tmoduleinmemory532008);
NTI532008.kind = 18;
NTI532008.base = 0;
NTI532008.flags = 2;
TMP1198[0] = &TMP1196[1];
TMP1196[1].kind = 1;
TMP1196[1].offset = offsetof(Tmoduleinmemory532008, compiledat);
TMP1196[1].typ = (&NTI124);
TMP1196[1].name = "compiledAt";
TMP1198[1] = &TMP1196[2];
TMP1196[2].kind = 1;
TMP1196[2].offset = offsetof(Tmoduleinmemory532008, hash);
TMP1196[2].typ = (&NTI193003);
TMP1196[2].name = "hash";
TMP1198[2] = &TMP1196[3];
TMP1196[3].kind = 1;
TMP1196[3].offset = offsetof(Tmoduleinmemory532008, deps);
TMP1196[3].typ = (&NTI215913);
TMP1196[3].name = "deps";
TMP1198[3] = &TMP1196[4];
NTI532004.size = sizeof(NU8);
NTI532004.kind = 14;
NTI532004.base = 0;
NTI532004.flags = 3;
for (TMP1201 = 0; TMP1201 < 5; TMP1201++) {
TMP1196[TMP1201+5].kind = 1;
TMP1196[TMP1201+5].offset = TMP1201;
TMP1196[TMP1201+5].name = TMP1200[TMP1201];
TMP1199[TMP1201] = &TMP1196[TMP1201+5];
}
TMP1196[10].len = 5; TMP1196[10].kind = 2; TMP1196[10].sons = &TMP1199[0];
NTI532004.node = &TMP1196[10];
TMP1196[4].kind = 1;
TMP1196[4].offset = offsetof(Tmoduleinmemory532008, needsrecompile);
TMP1196[4].typ = (&NTI532004);
TMP1196[4].name = "needsRecompile";
TMP1198[4] = &TMP1196[11];
NTI532006.size = sizeof(NU8);
NTI532006.kind = 14;
NTI532006.base = 0;
NTI532006.flags = 3;
for (TMP1204 = 0; TMP1204 < 4; TMP1204++) {
TMP1196[TMP1204+12].kind = 1;
TMP1196[TMP1204+12].offset = TMP1204;
TMP1196[TMP1204+12].name = TMP1203[TMP1204];
TMP1202[TMP1204] = &TMP1196[TMP1204+12];
}
TMP1196[16].len = 4; TMP1196[16].kind = 2; TMP1196[16].sons = &TMP1202[0];
NTI532006.node = &TMP1196[16];
TMP1196[11].kind = 1;
TMP1196[11].offset = offsetof(Tmoduleinmemory532008, hashstatus);
TMP1196[11].typ = (&NTI532006);
TMP1196[11].name = "hashStatus";
TMP1196[0].len = 5; TMP1196[0].kind = 2; TMP1196[0].sons = &TMP1198[0];
NTI532008.node = &TMP1196[0];
NTI532042.size = sizeof(TY532042*);
NTI532042.kind = 24;
NTI532042.base = (&NTI532008);
NTI532042.flags = 2;
NTI532042.marker = TMP1205;
}

