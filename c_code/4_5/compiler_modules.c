/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
typedef struct Tsymseq214792 Tsymseq214792;
typedef struct Tsym214822 Tsym214822;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Cell47504 Cell47504;
typedef struct Cellseq47520 Cellseq47520;
typedef struct Gcheap49818 Gcheap49818;
typedef struct Gcstack49816 Gcstack49816;
typedef struct Cellset47516 Cellset47516;
typedef struct Pagedesc47512 Pagedesc47512;
typedef struct Memregion29687 Memregion29687;
typedef struct Smallchunk29639 Smallchunk29639;
typedef struct Llchunk29681 Llchunk29681;
typedef struct Bigchunk29641 Bigchunk29641;
typedef struct Intset29614 Intset29614;
typedef struct Trunk29610 Trunk29610;
typedef struct Avlnode29685 Avlnode29685;
typedef struct Gcstat49814 Gcstat49814;
typedef struct TY531042 TY531042;
typedef struct Tmoduleinmemory531008 Tmoduleinmemory531008;
typedef struct TY214913 TY214913;
typedef struct Tnode214790 Tnode214790;
typedef struct Tidobj189006 Tidobj189006;
typedef struct TNimObject TNimObject;
typedef struct Ttypeseq214824 Ttypeseq214824;
typedef struct Tscope214816 Tscope214816;
typedef struct TY214925 TY214925;
typedef struct Tstrtable214794 Tstrtable214794;
typedef struct Ttype214828 Ttype214828;
typedef struct Tident189012 Tident189012;
typedef struct Tlineinfo182337 Tlineinfo182337;
typedef struct Tloc214804 Tloc214804;
typedef struct Ropeobj169006 Ropeobj169006;
typedef struct Tlib214808 Tlib214808;
typedef struct NimStringDesc NimStringDesc;
typedef struct TY118706 TY118706;
typedef struct Trodreader252021 Trodreader252021;
typedef struct Tllstream202204 Tllstream202204;
typedef struct TY88487 TY88487;
typedef struct TY469140 TY469140;
typedef struct Tcgen469026 Tcgen469026;
typedef struct Basechunk29637 Basechunk29637;
typedef struct Freecell29629 Freecell29629;
typedef struct Tnodeseq214784 Tnodeseq214784;
typedef struct Tinstantiation214812 Tinstantiation214812;
typedef struct Tlistentry135010 Tlistentry135010;
typedef struct Tindex252019 Tindex252019;
typedef struct Tiitable221163 Tiitable221163;
typedef struct Tiipairseq221161 Tiipairseq221161;
typedef struct Table252054 Table252054;
typedef struct Keyvaluepairseq252057 Keyvaluepairseq252057;
typedef struct Memfile250202 Memfile250202;
typedef struct Tpasscontext261002 Tpasscontext261002;
typedef struct Tidtable214840 Tidtable214840;
typedef struct Tidpairseq214838 Tidpairseq214838;
typedef struct Intset211035 Intset211035;
typedef struct Trunk211031 Trunk211031;
typedef struct Trunkseq211033 Trunkseq211033;
typedef struct Tlinkedlist135016 Tlinkedlist135016;
typedef struct Tcproc469022 Tcproc469022;
typedef struct Tnodetable214852 Tnodetable214852;
typedef struct Tnodepairseq214850 Tnodepairseq214850;
typedef struct Tiipair221159 Tiipair221159;
typedef struct Keyvaluepair252060 Keyvaluepair252060;
typedef struct Tidpair214836 Tidpair214836;
typedef struct TY182350 TY182350;
typedef struct TY469094 TY469094;
typedef struct Tnodepair214848 Tnodepair214848;
typedef struct Tblock469020 Tblock469020;
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
struct  Cell47504  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47520  {
NI len;
NI cap;
Cell47504** d;
};
struct  Cellset47516  {
NI counter;
NI max;
Pagedesc47512* head;
Pagedesc47512** data;
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
Cellseq47520 zct;
Cellseq47520 decstack;
Cellset47516 cycleroots;
Cellseq47520 tempstack;
NI recgclock;
Memregion29687 region;
Gcstat49814 stat;
};
typedef NU8 Sha1digest192003[20];
struct  Tmoduleinmemory531008  {
NF compiledat;
Sha1digest192003 hash;
TY214913* deps;
NU8 needsrecompile;
NU8 hashstatus;
};
typedef N_NIMCALL_PTR(Tnode214790*, TY261054) (Tsym214822* m, NI32 fileidx);
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
typedef N_NIMCALL_PTR(Tsym214822*, TY261049) (Tsym214822* m, NI32 fileidx);
struct TY118706 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
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
struct  Gcstack49816  {
Gcstack49816* prev;
Gcstack49816* next;
void* starts;
void* pos;
NI maxstacksize;
};
typedef NI TY29618[16];
struct  Pagedesc47512  {
Pagedesc47512* next;
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
struct  Tscope214816  {
NI depthlevel;
Tstrtable214794 symbols;
Tnodeseq214784* usingsyms;
Tscope214816* parent;
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
struct  Tiitable221163  {
NI counter;
Tiipairseq221161* data;
};
struct  Tindex252019  {
NI lastidxkey;
NI lastidxval;
Tiitable221163 tab;
NimStringDesc* r;
NI offset;
};
struct  Table252054  {
Keyvaluepairseq252057* data;
NI counter;
};
struct  Memfile250202  {
void* mem;
NI size;
int handle;
};
struct  Trodreader252021  {
  TNimObject Sup;
NI pos;
NCSTRING s;
NU32 options;
NU8 reason;
TY214913* moddeps;
TY214913* files;
NI dataidx;
NI convertersidx;
NI initidx;
NI interfidx;
NI compilerprocsidx;
NI methodsidx;
NimStringDesc* filename;
Tindex252019 index;
Tindex252019 imports;
NI readerindex;
NI line;
NI moduleid;
Table252054 syms;
Memfile250202 memfile;
Tsymseq214792* methods;
NimStringDesc* origfile;
NIM_BOOL inviewmode;
};
struct  Tllstream202204  {
  TNimObject Sup;
NU8 kind;
FILE* f;
NimStringDesc* s;
NI rd;
NI wr;
NI lineoffset;
};
struct  Tpasscontext261002  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
typedef Ropeobj169006* Tcfilesections469010[18];
struct  Tidtable214840  {
NI counter;
Tidpairseq214838* data;
};
struct  Intset211035  {
NI counter;
NI max;
Trunk211031* head;
Trunkseq211033* data;
};
struct  Tlinkedlist135016  {
Tlistentry135010* head;
Tlistentry135010* tail;
NI counter;
};
struct  Tnodetable214852  {
NI counter;
Tnodepairseq214850* data;
};
typedef Ropeobj169006* TY469132[10];
struct  Tcgen469026  {
  Tpasscontext261002 Sup;
Tsym214822* module;
NimStringDesc* filename;
Tcfilesections469010 s;
NIM_BOOL preventstacktrace;
NIM_BOOL usesthreadvars;
NIM_BOOL framedeclared;
NIM_BOOL isheaderfile;
NIM_BOOL includesstringh;
NIM_BOOL objhaskidsvalid;
NimStringDesc* cfilename;
Tidtable214840 typecache;
Tidtable214840 forwtypecache;
Intset211035 declaredthings;
Intset211035 declaredprotos;
Tlinkedlist135016 headerfiles;
Intset211035 typeinfomarker;
Tcproc469022* initproc;
Tcproc469022* postinitproc;
Tcproc469022* preinitproc;
Ttypeseq214824* typestack;
Tnodetable214852 datacache;
Tsymseq214792* forwardedprocs;
NI typenodes;
NI nimtypes;
Ropeobj169006* typenodesname;
Ropeobj169006* nimtypesname;
NI labels;
TY469132 extensionloaders;
Ropeobj169006* injectstmt;
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
struct  Tiipair221159  {
NI key;
NI val;
};
struct Keyvaluepair252060 {
NI Field0;
NI Field1;
Tsym214822* Field2;
};
struct  Tidpair214836  {
Tidobj189006* key;
TNimObject* val;
};
struct  Trunk211031  {
Trunk211031* next;
NI key;
TY29618 bits;
};
struct  Tcproc469022  {
Tsym214822* prc;
NIM_BOOL beforeretneeded;
NIM_BOOL threadvaraccessed;
Tlineinfo182337 lastlineinfo;
Tnodeseq214784* nestedtrystmts;
NI inexceptblock;
TY182350* finallysafepoints;
NI labels;
TY469094* blocks;
NI breakidx;
NU32 options;
NI maxframelen;
Tcgen469026* module;
NI withinloop;
NI splitdecls;
NI gcframeid;
Ropeobj169006* gcframetype;
};
struct  Tnodepair214848  {
NI h;
Tnode214790* key;
NI val;
};
typedef Ropeobj169006* Tcprocsections469014[3];
struct  Tblock469020  {
NI id;
Ropeobj169006* label;
Tcprocsections469014 sections;
NIM_BOOL isloop;
NI16 nestedtrystmts;
NI16 nestedexceptstmts;
NI16 framelen;
};
struct Tsymseq214792 {
  TGenericSeq Sup;
  Tsym214822* data[SEQ_DECL_SIZE];
};
struct TY531042 {
  TGenericSeq Sup;
  Tmoduleinmemory531008 data[SEQ_DECL_SIZE];
};
struct TY469140 {
  TGenericSeq Sup;
  Tcgen469026* data[SEQ_DECL_SIZE];
};
struct TY214913 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
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
struct Tiipairseq221161 {
  TGenericSeq Sup;
  Tiipair221159 data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq252057 {
  TGenericSeq Sup;
  Keyvaluepair252060 data[SEQ_DECL_SIZE];
};
struct Tidpairseq214838 {
  TGenericSeq Sup;
  Tidpair214836 data[SEQ_DECL_SIZE];
};
struct Trunkseq211033 {
  TGenericSeq Sup;
  Trunk211031* data[SEQ_DECL_SIZE];
};
struct Tnodepairseq214850 {
  TGenericSeq Sup;
  Tnodepair214848 data[SEQ_DECL_SIZE];
};
struct TY182350 {
  TGenericSeq Sup;
  Ropeobj169006* data[SEQ_DECL_SIZE];
};
struct TY469094 {
  TGenericSeq Sup;
  Tblock469020 data[SEQ_DECL_SIZE];
};
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Cell47504*, usrtocell_51440)(void* usr);
static N_INLINE(void, rtladdzct_53001)(Cell47504* c);
N_NOINLINE(void, addzct_51417)(Cellseq47520* s, Cell47504* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP1203)(void* p, NI op);
N_NIMCALL(Tnode214790*, includemodule_531818)(Tsym214822* s, NI32 fileidx);
N_NIMCALL(Tnode214790*, parsefile_238029)(NI32 fileidx);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemsize, NI newlen);
N_NIMCALL(void, adddep_531114)(Tsym214822* x, NI32 dep);
N_NIMCALL(void, safeadd_531138)(TY214913** x, NI32 y);
N_NIMCALL(void, dohash_531102)(NI32 fileidx);
N_NIMCALL(void, securehashfile_192016)(NimStringDesc* filename, Sha1digest192003* Result);
N_NIMCALL(NimStringDesc*, tofullpath_183269)(NI32 fileidx);
N_NIMCALL(Tsym214822*, importmodule_531788)(Tsym214822* s, NI32 fileidx);
N_NIMCALL(Tsym214822*, compilemodule_531695)(NI32 fileidx, NU32 flags);
N_NIMCALL(Tsym214822*, getmodule_531062)(NI32 fileidx);
N_NIMCALL(Tsym214822*, newmodule_531622)(NI32 fileidx);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(Tident189012*, getident_189441)(NimStringDesc* identifier);
N_NIMCALL(void, nossplitFile)(NimStringDesc* path, TY118706* Result);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(NIM_BOOL, isnimidentifier_205227)(NimStringDesc* s);
N_NIMCALL(void, rawmessage_185612)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(Tlineinfo182337, newlineinfo_183024)(NI32 fileinfoidx, NI line, NI col);
N_NIMCALL(Tsym214822*, newsym_215684)(NU8 symkind, Tident189012* name, Tsym214822* owner, Tlineinfo182337 info);
N_NIMCALL(NimStringDesc*, getpackagename_161006)(NimStringDesc* path);
N_NIMCALL(void, initstrtable_218001)(Tstrtable214794* x);
N_NIMCALL(void, strtableadd_221061)(Tstrtable214794* t, Tsym214822* n);
N_NIMCALL(Trodreader252021*, handlesymbolfile_252079)(Tsym214822* module);
N_NIMCALL(void, internalerror_187113)(NimStringDesc* errmsg);
static N_INLINE(NI, getid_213401)(void);
N_NIMCALL(void, processmodule_261044)(Tsym214822* module, Tllstream202204* stream, Trodreader252021* rd);
N_NIMCALL(Tllstream202204*, llstreamopen_202229)(FILE* f);
N_NIMCALL(NU8, checkdepmem_531375)(NI32 fileidx);
N_NIMCALL(NIM_BOOL, hashchanged_531078)(NI32 fileidx);
N_NIMCALL(NimStringDesc*, HEX24_187183)(TY88487 x);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(NIM_BOOL, HEX3DHEX3D_192087)(Sha1digest192003 a, Sha1digest192003 b);
N_NIMCALL(void, resetmodule_531258)(NI32 fileidx);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_53819)(Cell47504* c);
static N_INLINE(NIM_BOOL, canbecycleroot_51458)(Cell47504* c);
static N_INLINE(void, rtladdcycleroot_52220)(Cell47504* c);
N_NOINLINE(void, incl_48247)(Cellset47516* s, Cell47504* cell);
static N_INLINE(void, decref_53401)(Cell47504* c);
N_NIMCALL(NIM_BOOL, HEX3DHEX3D_531149)(TY214913* x, TY214913* y);
N_NIMCALL(void, localerror_187080)(Tlineinfo182337 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NI32, fileinfoidx_183017)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, HEX2F_118465)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(void, resetpackagecache_160802)(void);
N_NIMCALL(void, resetsystypes_258199)(void);
N_NIMCALL(void, wantmainmodule_531871)(void);
N_NIMCALL(void, fatal_187066)(Tlineinfo182337 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, nosaddFileExt)(NimStringDesc* filename, NimStringDesc* ext);
N_NIMCALL(void, compilesystemmodule_531856)(void);
N_NIMCALL(Tsym214822*, makemodule_531884)(NimStringDesc* filename);
STRING_LITERAL(TMP1630, "handleSymbolFile should have set the module\'s ID", 48);
STRING_LITERAL(TMP1633, "compiler/modules.nim", 20);
NIM_CONST TY88487 TMP1632 = {((NimStringDesc*) &TMP1633),
((NI) 41)}
;
STRING_LITERAL(TMP3719, "system.nim", 10);
STRING_LITERAL(TMP4536, "", 0);
STRING_LITERAL(TMP4537, "nim", 3);
STRING_LITERAL(TMP5254, "stdin", 5);
Tsymseq214792* gcompiledmodules_531041;
extern TNimType NTI214792; /* TSymSeq */
extern Gcheap49818 gch_49859;
TY531042* gmemcachedata_531059;
TNimType NTI531008; /* TModuleInMemory */
extern TNimType NTI124; /* float */
extern TNimType NTI192003; /* Sha1Digest */
extern TNimType NTI214913; /* seq[int32] */
TNimType NTI531004; /* TNeedRecompile */
TNimType NTI531006; /* THashStatus */
TNimType NTI531042; /* seq[TModuleInMemory] */
extern TY261054 gincludefile_261058;
extern NU32 gglobaloptions_160121;
extern TY261049 gimportmodule_261053;
extern TNimType NTI214788; /* PSym */
extern TNimType NTI214822; /* TSym */
extern NU8 gcmd_160123;
extern NI gfrontendid_213003;
extern NIM_BOOL gprojectisstdin_160202;
extern NF glastcmdtime_160134;
extern TY469140* gmodules_469157;
extern Tsym214822* systemmodule_258007;
extern NI32 systemfileidx_182630;
extern NimStringDesc* libpath_160198;
extern NimStringDesc* gprojectfull_160201;
extern Tlineinfo182337 gcmdlineinfo_183046;
extern NI32 gprojectmainidx_160203;

static N_INLINE(Cell47504*, usrtocell_51440)(void* usr) {
	Cell47504* result;
	result = 0;
	result = ((Cell47504*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Cell47504))))));
	return result;
}

static N_INLINE(void, rtladdzct_53001)(Cell47504* c) {
	addzct_51417((&gch_49859.zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Cell47504* c;
	c = usrtocell_51440(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_53001(c);
	}
	LA3: ;
}
N_NIMCALL(void, TMP1203)(void* p, NI op) {
	TY531042* a;
	NI LOC1;
	a = (TY531042*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].deps, op);
	}
}

N_NIMCALL(void, adddep_531114)(Tsym214822* x, NI32 dep) {
	{
		if (!((gmemcachedata_531059 ? gmemcachedata_531059->Sup.len : 0) <= ((NI) (dep)))) goto LA3;
		gmemcachedata_531059 = (TY531042*) setLengthSeq(&(gmemcachedata_531059)->Sup, sizeof(Tmoduleinmemory531008), ((NI) ((NI32)(dep + ((NI32) 1)))));
	}
	LA3: ;
	safeadd_531138((&gmemcachedata_531059->data[(*x).position].deps), dep);
}

N_NIMCALL(void, dohash_531102)(NI32 fileidx) {
	{
		NimStringDesc* LOC5;
		if (!(gmemcachedata_531059->data[fileidx].hashstatus == ((NU8) 0))) goto LA3;
		LOC5 = 0;
		LOC5 = tofullpath_183269(fileidx);
		securehashfile_192016(LOC5, gmemcachedata_531059->data[fileidx].hash);
	}
	LA3: ;
}

N_NIMCALL(Tnode214790*, includemodule_531818)(Tsym214822* s, NI32 fileidx) {
	Tnode214790* result;
	result = 0;
	result = parsefile_238029(fileidx);
	{
		if (!((gglobaloptions_160121 &(1U<<((NU)(((NU8) 15))&31U)))!=0)) goto LA3;
		{
			if (!((gmemcachedata_531059 ? gmemcachedata_531059->Sup.len : 0) <= ((NI) (fileidx)))) goto LA7;
			gmemcachedata_531059 = (TY531042*) setLengthSeq(&(gmemcachedata_531059)->Sup, sizeof(Tmoduleinmemory531008), ((NI) ((NI32)(fileidx + ((NI32) 1)))));
		}
		LA7: ;
		adddep_531114(s, fileidx);
		dohash_531102(fileidx);
	}
	LA3: ;
	return result;
}

N_NIMCALL(Tsym214822*, getmodule_531062)(NI32 fileidx) {
	Tsym214822* result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (((NI32) 0) <= fileidx);
		if (!(LOC3)) goto LA4;
		LOC3 = (((NI) (fileidx)) < (gcompiledmodules_531041 ? gcompiledmodules_531041->Sup.len : 0));
		LA4: ;
		if (!LOC3) goto LA5;
		result = gcompiledmodules_531041->data[fileidx];
	}
	LA5: ;
	return result;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Cell47504* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_51440(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell47504* c;
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

N_NIMCALL(Tsym214822*, newmodule_531622)(NI32 fileidx) {
	Tsym214822* result;
	NimStringDesc* filename;
	TY118706 LOC1;
	NimStringDesc* LOC7;
	Tident189012* LOC8;
	result = 0;
	result = (Tsym214822*) newObj((&NTI214788), sizeof(Tsym214822));
	(*result).Sup.Sup.m_type = (&NTI214822);
	(*result).Sup.id = ((NI) -1);
	(*result).kind = ((NU8) 6);
	filename = tofullpath_183269(fileidx);
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	nossplitFile(filename, (&LOC1));
	asgnRefNoCycle((void**) (&(*result).name), getident_189441(LOC1.Field1));
	{
		NIM_BOOL LOC4;
		LOC4 = 0;
		LOC4 = isnimidentifier_205227((*(*result).name).s);
		if (!!(LOC4)) goto LA5;
		rawmessage_185612(((NU16) 22), (*(*result).name).s);
	}
	LA5: ;
	(*result).info = newlineinfo_183024(fileidx, ((NI) 1), ((NI) 1));
	LOC7 = 0;
	LOC7 = getpackagename_161006(filename);
	LOC8 = 0;
	LOC8 = getident_189441(LOC7);
	asgnRefNoCycle((void**) (&(*result).owner), newsym_215684(((NU8) 23), LOC8, NIM_NIL, (*result).info));
	(*result).position = ((NI) (fileidx));
	{
		if (!((gmemcachedata_531059 ? gmemcachedata_531059->Sup.len : 0) <= ((NI) (fileidx)))) goto LA11;
		gmemcachedata_531059 = (TY531042*) setLengthSeq(&(gmemcachedata_531059)->Sup, sizeof(Tmoduleinmemory531008), ((NI) ((NI32)(fileidx + ((NI32) 1)))));
	}
	LA11: ;
	{
		if (!((gcompiledmodules_531041 ? gcompiledmodules_531041->Sup.len : 0) <= ((NI) (fileidx)))) goto LA15;
		gcompiledmodules_531041 = (Tsymseq214792*) setLengthSeq(&(gcompiledmodules_531041)->Sup, sizeof(Tsym214822*), ((NI) ((NI32)(fileidx + ((NI32) 1)))));
	}
	LA15: ;
	asgnRefNoCycle((void**) (&gcompiledmodules_531041->data[(*result).position]), result);
	(*result).flags |= ((NU32)1)<<((((NU8) 0))%(sizeof(NU32)*8));
	initstrtable_218001((&(*result).kindU.S3.tab));
	strtableadd_221061((&(*result).kindU.S3.tab), result);
	return result;
}

static N_INLINE(NI, getid_213401)(void) {
	NI result;
	result = 0;
	result = gfrontendid_213003;
	gfrontendid_213003 += ((NI) 1);
	return result;
}

N_NIMCALL(NIM_BOOL, hashchanged_531078)(NI32 fileidx) {
	NIM_BOOL result;
	result = 0;
	{
		NIM_BOOL LOC3;
		NimStringDesc* LOC7;
		LOC3 = 0;
		LOC3 = (((NI32) 0) <= fileidx);
		if (!(LOC3)) goto LA4;
		LOC3 = (((NI) (fileidx)) < (gmemcachedata_531059 ? gmemcachedata_531059->Sup.len : 0));
		LA4: ;
		if (!!(LOC3)) goto LA5;
		LOC7 = 0;
		LOC7 = HEX24_187183(TMP1632);
		internalerror_187113(LOC7);
	}
	LA5: ;
	switch (gmemcachedata_531059->data[fileidx].hashstatus) {
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
		Sha1digest192003 newhash;
		NimStringDesc* LOC11;
		NIM_BOOL LOC12;
		memset((void*)newhash, 0, sizeof(newhash));
		LOC11 = 0;
		LOC11 = tofullpath_183269(fileidx);
		chckNil((void*)newhash);
		memset((void*)newhash, 0, sizeof(newhash));
		securehashfile_192016(LOC11, newhash);
		LOC12 = 0;
		LOC12 = HEX3DHEX3D_192087(newhash, gmemcachedata_531059->data[fileidx].hash);
		result = !(LOC12);
		memcpy((void*)gmemcachedata_531059->data[fileidx].hash, (NIM_CONST void*)newhash, sizeof(Sha1digest192003));
		{
			if (!result) goto LA15;
			gmemcachedata_531059->data[fileidx].hashstatus = ((NU8) 2);
		}
		goto LA13;
		LA15: ;
		{
			gmemcachedata_531059->data[fileidx].hashstatus = ((NU8) 3);
		}
		LA13: ;
	}
	break;
	case ((NU8) 0):
	{
		NimStringDesc* LOC19;
		LOC19 = 0;
		LOC19 = tofullpath_183269(fileidx);
		securehashfile_192016(LOC19, gmemcachedata_531059->data[fileidx].hash);
		result = NIM_TRUE;
		{
			if (!result) goto LA22;
			gmemcachedata_531059->data[fileidx].hashstatus = ((NU8) 2);
		}
		goto LA20;
		LA22: ;
		{
			gmemcachedata_531059->data[fileidx].hashstatus = ((NU8) 3);
		}
		LA20: ;
	}
	break;
	}
	return result;
}

static N_INLINE(NIM_BOOL, canbecycleroot_51458)(Cell47504* c) {
	NIM_BOOL result;
	result = 0;
	result = !((((*(*c).typ).flags &(1U<<((NU)(((NU8) 1))&7U)))!=0));
	return result;
}

static N_INLINE(void, rtladdcycleroot_52220)(Cell47504* c) {
	{
		if (!!((((NI) ((NI)((*c).refcount & ((NI) 3)))) == ((NI) 3)))) goto LA3;
		(*c).refcount = (NI)((NI)((*c).refcount & ((NI) -4)) | ((NI) 3));
		incl_48247((&gch_49859.cycleroots), c);
	}
	LA3: ;
}

static N_INLINE(void, incref_53819)(Cell47504* c) {
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

static N_INLINE(void, decref_53401)(Cell47504* c) {
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
		Cell47504* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_51440(src);
		incref_53819(LOC5);
	}
	LA3: ;
	{
		Cell47504* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_51440((*dest));
		decref_53401(LOC10);
	}
	LA8: ;
	(*dest) = src;
}

N_NIMCALL(void, resetmodule_531258)(NI32 fileidx) {
	{
		if (!((NU64)(((NI64) (fileidx))) < (NU64)(((NI64) ((gmemcachedata_531059 ? gmemcachedata_531059->Sup.len : 0)))))) goto LA3;
		gmemcachedata_531059->data[fileidx].needsrecompile = ((NU8) 2);
	}
	LA3: ;
	{
		if (!((NU64)(((NI64) (fileidx))) < (NU64)(((NI64) ((gcompiledmodules_531041 ? gcompiledmodules_531041->Sup.len : 0)))))) goto LA7;
		asgnRefNoCycle((void**) (&gcompiledmodules_531041->data[fileidx]), NIM_NIL);
	}
	LA7: ;
	{
		if (!((NU64)(((NI64) (fileidx))) < (NU64)(((NI64) ((gmodules_469157 ? gmodules_469157->Sup.len : 0)))))) goto LA11;
		asgnRef((void**) (&gmodules_469157->data[fileidx]), NIM_NIL);
	}
	LA11: ;
}

N_NIMCALL(NU8, checkdepmem_531375)(NI32 fileidx) {
	NU8 result;
{	result = 0;
	{
		if (!!((gmemcachedata_531059->data[fileidx].needsrecompile == ((NU8) 0)))) goto LA3;
		result = gmemcachedata_531059->data[fileidx].needsrecompile;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = ((gglobaloptions_160121 &(1U<<((NU)(((NU8) 1))&31U)))!=0);
		if (LOC7) goto LA8;
		LOC7 = hashchanged_531078(fileidx);
		LA8: ;
		if (!LOC7) goto LA9;
		resetmodule_531258(fileidx);
		result = ((NU8) 2);
		goto BeforeRet;
	}
	LA9: ;
	{
		NIM_BOOL LOC13;
		LOC13 = 0;
		LOC13 = HEX3DHEX3D_531149(gmemcachedata_531059->data[fileidx].deps, NIM_NIL);
		if (!!(LOC13)) goto LA14;
		gmemcachedata_531059->data[fileidx].needsrecompile = ((NU8) 3);
		{
			NI32 dep_531602;
			TY214913* HEX3Atmp_531616;
			NI i_531619;
			NI L_531621;
			dep_531602 = 0;
			HEX3Atmp_531616 = 0;
			HEX3Atmp_531616 = gmemcachedata_531059->data[fileidx].deps;
			i_531619 = ((NI) 0);
			L_531621 = (HEX3Atmp_531616 ? HEX3Atmp_531616->Sup.len : 0);
			{
				while (1) {
					NU8 d;
					if (!(i_531619 < L_531621)) goto LA18;
					dep_531602 = HEX3Atmp_531616->data[i_531619];
					d = checkdepmem_531375(dep_531602);
					{
						if (!((20 &(1U<<((NU)(d)&7U)))!=0)) goto LA21;
						resetmodule_531258(fileidx);
						result = ((NU8) 2);
						goto BeforeRet;
					}
					LA21: ;
					i_531619 += ((NI) 1);
				} LA18: ;
			}
		}
	}
	LA14: ;
	gmemcachedata_531059->data[fileidx].needsrecompile = ((NU8) 1);
	result = ((NU8) 1);
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(Tsym214822*, compilemodule_531695)(NI32 fileidx, NU32 flags) {
	Tsym214822* result;
{	result = 0;
	result = getmodule_531062(fileidx);
	{
		Trodreader252021* rd;
		if (!(result == NIM_NIL)) goto LA3;
		{
			if (!((gmemcachedata_531059 ? gmemcachedata_531059->Sup.len : 0) <= ((NI) (fileidx)))) goto LA7;
			gmemcachedata_531059 = (TY531042*) setLengthSeq(&(gmemcachedata_531059)->Sup, sizeof(Tmoduleinmemory531008), ((NI) ((NI32)(fileidx + ((NI32) 1)))));
		}
		LA7: ;
		gmemcachedata_531059->data[fileidx].needsrecompile = ((NU8) 3);
		result = newmodule_531622(fileidx);
		rd = 0;
		(*result).flags = ((*result).flags | flags);
		{
			if (!((18438 &(1U<<((NU)(gcmd_160123)&31U)))!=0)) goto LA11;
			rd = handlesymbolfile_252079(result);
			{
				if (!((*result).Sup.id < ((NI) 0))) goto LA15;
				internalerror_187113(((NimStringDesc*) &TMP1630));
				goto BeforeRet;
			}
			LA15: ;
		}
		goto LA9;
		LA11: ;
		{
			(*result).Sup.id = getid_213401();
		}
		LA9: ;
		{
			NIM_BOOL LOC20;
			Tllstream202204* LOC24;
			LOC20 = 0;
			LOC20 = ((flags &(1U<<((NU)(((NU8) 12))&31U)))!=0);
			if (!(LOC20)) goto LA21;
			LOC20 = gprojectisstdin_160202;
			LA21: ;
			if (!LOC20) goto LA22;
			LOC24 = 0;
			LOC24 = llstreamopen_202229(stdin);
			processmodule_261044(result, LOC24, rd);
		}
		goto LA18;
		LA22: ;
		{
			processmodule_261044(result, NIM_NIL, rd);
		}
		LA18: ;
		{
			if (!((gglobaloptions_160121 &(1U<<((NU)(((NU8) 15))&31U)))!=0)) goto LA28;
			gmemcachedata_531059->data[fileidx].compiledat = glastcmdtime_160134;
			gmemcachedata_531059->data[fileidx].needsrecompile = ((NU8) 4);
			dohash_531102(fileidx);
		}
		LA28: ;
	}
	goto LA1;
	LA3: ;
	{
		{
			NU8 LOC33;
			LOC33 = 0;
			LOC33 = checkdepmem_531375(fileidx);
			if (!(LOC33 == ((NU8) 2))) goto LA34;
			result = compilemodule_531695(fileidx, flags);
		}
		goto LA31;
		LA34: ;
		{
			result = gcompiledmodules_531041->data[fileidx];
		}
		LA31: ;
	}
	LA1: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(Tsym214822*, importmodule_531788)(Tsym214822* s, NI32 fileidx) {
	Tsym214822* result;
	result = 0;
	result = compilemodule_531695(fileidx, 0);
	{
		if (!((gglobaloptions_160121 &(1U<<((NU)(((NU8) 15))&31U)))!=0)) goto LA3;
		adddep_531114(s, fileidx);
	}
	LA3: ;
	{
		if (!(((*result).flags &(1U<<((NU)(((NU8) 13))&31U)))!=0)) goto LA7;
		localerror_187080((*result).info, ((NU16) 41), (*(*result).name).s);
	}
	LA7: ;
	return result;
}

N_NIMCALL(Tsym214822*, makemodule_531884)(NimStringDesc* filename) {
	Tsym214822* result;
	NI32 LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = fileinfoidx_183017(filename);
	result = newmodule_531622(LOC1);
	(*result).Sup.id = getid_213401();
	return result;
}

N_NIMCALL(void, compilesystemmodule_531856)(void) {
	{
		NimStringDesc* LOC5;
		Tsym214822* LOC6;
		if (!(systemmodule_258007 == NIM_NIL)) goto LA3;
		LOC5 = 0;
		LOC5 = HEX2F_118465(libpath_160198, ((NimStringDesc*) &TMP3719));
		systemfileidx_182630 = fileinfoidx_183017(LOC5);
		LOC6 = 0;
		LOC6 = compilemodule_531695(systemfileidx_182630, 8192);
	}
	LA3: ;
}

N_NIMCALL(void, resetallmoduleshard_531353)(void) {
	resetpackagecache_160802();
	gcompiledmodules_531041 = (Tsymseq214792*) setLengthSeq(&(gcompiledmodules_531041)->Sup, sizeof(Tsym214822*), ((NI) 0));
	gmemcachedata_531059 = (TY531042*) setLengthSeq(&(gmemcachedata_531059)->Sup, sizeof(Tmoduleinmemory531008), ((NI) 0));
	resetsystypes_258199();
}

N_NIMCALL(void, wantmainmodule_531871)(void) {
	NimStringDesc* LOC5;
	{
		if (!((gprojectfull_160201 ? gprojectfull_160201->Sup.len : 0) == ((NI) 0))) goto LA3;
		fatal_187066(gcmdlineinfo_183046, ((NU16) 191), ((NimStringDesc*) &TMP4536));
	}
	LA3: ;
	LOC5 = 0;
	LOC5 = nosaddFileExt(gprojectfull_160201, ((NimStringDesc*) &TMP4537));
	gprojectmainidx_160203 = fileinfoidx_183017(LOC5);
}

N_NIMCALL(void, compileproject_531877)(NI32 projectfileidx) {
	NI32 systemfileidx;
	NimStringDesc* LOC1;
	NI32 projectfile;
	wantmainmodule_531871();
	LOC1 = 0;
	LOC1 = HEX2F_118465(libpath_160198, ((NimStringDesc*) &TMP3719));
	systemfileidx = fileinfoidx_183017(LOC1);
	{
		if (!(projectfileidx < ((NI32) 0))) goto LA4;
		projectfile = gprojectmainidx_160203;
	}
	goto LA2;
	LA4: ;
	{
		projectfile = projectfileidx;
	}
	LA2: ;
	{
		Tsym214822* LOC11;
		if (!(projectfile == systemfileidx)) goto LA9;
		LOC11 = 0;
		LOC11 = compilemodule_531695(projectfile, 12288);
	}
	goto LA7;
	LA9: ;
	{
		Tsym214822* LOC13;
		compilesystemmodule_531856();
		LOC13 = 0;
		LOC13 = compilemodule_531695(projectfile, 4096);
	}
	LA7: ;
}

N_NIMCALL(Tsym214822*, makestdinmodule_531889)(void) {
	Tsym214822* result;
	result = 0;
	result = makemodule_531884(((NimStringDesc*) &TMP5254));
	return result;
}

N_NIMCALL(void, resetallmodules_531320)(void) {
	{
		NI i_531331;
		NI HEX3Atmp_531346;
		NI res_531349;
		i_531331 = 0;
		HEX3Atmp_531346 = 0;
		HEX3Atmp_531346 = (gcompiledmodules_531041 ? (gcompiledmodules_531041->Sup.len-1) : -1);
		res_531349 = ((NI) 0);
		{
			while (1) {
				if (!(res_531349 <= HEX3Atmp_531346)) goto LA3;
				i_531331 = res_531349;
				{
					if (!!((gcompiledmodules_531041->data[i_531331] == NIM_NIL))) goto LA6;
					resetmodule_531258(((NI32) (i_531331)));
				}
				LA6: ;
				res_531349 += ((NI) 1);
			} LA3: ;
		}
	}
	resetpackagecache_160802();
}
NIM_EXTERNC N_NOINLINE(void, compiler_modulesInit000)(void) {
	if (gcompiledmodules_531041) nimGCunrefNoCycle(gcompiledmodules_531041);
	gcompiledmodules_531041 = (Tsymseq214792*) newSeqRC1((&NTI214792), 0);
	if (gmemcachedata_531059) nimGCunrefNoCycle(gmemcachedata_531059);
	gmemcachedata_531059 = (TY531042*) newSeqRC1((&NTI531042), 0);
	gincludefile_261058 = includemodule_531818;
	gimportmodule_261053 = importmodule_531788;
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
NTI531008.size = sizeof(Tmoduleinmemory531008);
NTI531008.kind = 18;
NTI531008.base = 0;
NTI531008.flags = 2;
TMP1196[0] = &TMP1194[1];
TMP1194[1].kind = 1;
TMP1194[1].offset = offsetof(Tmoduleinmemory531008, compiledat);
TMP1194[1].typ = (&NTI124);
TMP1194[1].name = "compiledAt";
TMP1196[1] = &TMP1194[2];
TMP1194[2].kind = 1;
TMP1194[2].offset = offsetof(Tmoduleinmemory531008, hash);
TMP1194[2].typ = (&NTI192003);
TMP1194[2].name = "hash";
TMP1196[2] = &TMP1194[3];
TMP1194[3].kind = 1;
TMP1194[3].offset = offsetof(Tmoduleinmemory531008, deps);
TMP1194[3].typ = (&NTI214913);
TMP1194[3].name = "deps";
TMP1196[3] = &TMP1194[4];
NTI531004.size = sizeof(NU8);
NTI531004.kind = 14;
NTI531004.base = 0;
NTI531004.flags = 3;
for (TMP1199 = 0; TMP1199 < 5; TMP1199++) {
TMP1194[TMP1199+5].kind = 1;
TMP1194[TMP1199+5].offset = TMP1199;
TMP1194[TMP1199+5].name = TMP1198[TMP1199];
TMP1197[TMP1199] = &TMP1194[TMP1199+5];
}
TMP1194[10].len = 5; TMP1194[10].kind = 2; TMP1194[10].sons = &TMP1197[0];
NTI531004.node = &TMP1194[10];
TMP1194[4].kind = 1;
TMP1194[4].offset = offsetof(Tmoduleinmemory531008, needsrecompile);
TMP1194[4].typ = (&NTI531004);
TMP1194[4].name = "needsRecompile";
TMP1196[4] = &TMP1194[11];
NTI531006.size = sizeof(NU8);
NTI531006.kind = 14;
NTI531006.base = 0;
NTI531006.flags = 3;
for (TMP1202 = 0; TMP1202 < 4; TMP1202++) {
TMP1194[TMP1202+12].kind = 1;
TMP1194[TMP1202+12].offset = TMP1202;
TMP1194[TMP1202+12].name = TMP1201[TMP1202];
TMP1200[TMP1202] = &TMP1194[TMP1202+12];
}
TMP1194[16].len = 4; TMP1194[16].kind = 2; TMP1194[16].sons = &TMP1200[0];
NTI531006.node = &TMP1194[16];
TMP1194[11].kind = 1;
TMP1194[11].offset = offsetof(Tmoduleinmemory531008, hashstatus);
TMP1194[11].typ = (&NTI531006);
TMP1194[11].name = "hashStatus";
TMP1194[0].len = 5; TMP1194[0].kind = 2; TMP1194[0].sons = &TMP1196[0];
NTI531008.node = &TMP1194[0];
NTI531042.size = sizeof(TY531042*);
NTI531042.kind = 24;
NTI531042.base = (&NTI531008);
NTI531042.flags = 2;
NTI531042.marker = TMP1203;
}

