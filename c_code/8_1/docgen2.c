/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <setjmp.h>
typedef struct tnode184813 tnode184813;
typedef struct tpasscontext243003 tpasscontext243003;
typedef struct tgen519008 tgen519008;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TNimObject TNimObject;
typedef struct tdocumentor338005 tdocumentor338005;
typedef struct tsym184843 tsym184843;
typedef struct tidobj164013 tidobj164013;
typedef struct ttypeseq184845 ttypeseq184845;
typedef struct ttype184847 ttype184847;
typedef struct TGenericSeq TGenericSeq;
typedef struct tscope184837 tscope184837;
typedef struct TY184943 TY184943;
typedef struct tinstantiation184833 tinstantiation184833;
typedef struct tstrtable184817 tstrtable184817;
typedef struct tsymseq184815 tsymseq184815;
typedef struct tident164019 tident164019;
typedef struct tlineinfo160527 tlineinfo160527;
typedef struct tloc184827 tloc184827;
typedef struct trope142007 trope142007;
typedef struct tlib184831 tlib184831;
typedef struct NimStringDesc NimStringDesc;
typedef struct E_Base E_Base;
typedef struct TSafePoint TSafePoint;
typedef struct tcell41290 tcell41290;
typedef struct tcellset41302 tcellset41302;
typedef struct tgcheap43216 tgcheap43216;
typedef struct tcellseq41306 tcellseq41306;
typedef struct tpagedesc41298 tpagedesc41298;
typedef struct tmemregion23610 tmemregion23610;
typedef struct tsmallchunk22838 tsmallchunk22838;
typedef struct tllchunk23604 tllchunk23604;
typedef struct tbigchunk22840 tbigchunk22840;
typedef struct tintset22815 tintset22815;
typedef struct ttrunk22811 ttrunk22811;
typedef struct tavlnode23608 tavlnode23608;
typedef struct tgcstat43214 tgcstat43214;
typedef struct tstringtable119810 tstringtable119810;
typedef struct trstgenerator306012 trstgenerator306012;
typedef struct TY306028 TY306028;
typedef struct ttocentry306008 ttocentry306008;
typedef struct trstnode294009 trstnode294009;
typedef struct tpass243015 tpass243015;
typedef struct trodreader233024 trodreader233024;
typedef struct tnodeseq184807 tnodeseq184807;
typedef struct TY184932 TY184932;
typedef struct tlistentry116017 tlistentry116017;
typedef struct tbasechunk22836 tbasechunk22836;
typedef struct tfreecell22828 tfreecell22828;
typedef struct tkeyvaluepairseq119808 tkeyvaluepairseq119808;
typedef struct TY94105 TY94105;
typedef struct TY294084 TY294084;
typedef struct tindex233022 tindex233022;
typedef struct tiitable193207 tiitable193207;
typedef struct tiipairseq193205 tiipairseq193205;
typedef struct tiipair193203 tiipair193203;
typedef struct tidtable184859 tidtable184859;
typedef struct tidpairseq184857 tidpairseq184857;
typedef struct tidpair184855 tidpair184855;
typedef struct tmemfile231204 tmemfile231204;
typedef N_NIMCALL_PTR(void, TY2289) (void* p, NI op);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY2289 marker;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  tpasscontext243003  {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
struct  tgen519008  {
  tpasscontext243003 Sup;
tdocumentor338005* Doc;
tsym184843* Module;
};
struct  tidobj164013  {
  TNimObject Sup;
NI Id;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  tstrtable184817  {
NI Counter;
tsymseq184815* Data;
};
struct  tlineinfo160527  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  tloc184827  {
NU8 K;
NU8 S;
NU8 Flags;
ttype184847* T;
trope142007* R;
trope142007* Heaproot;
NI A;
};
struct  tsym184843  {
  tidobj164013 Sup;
NU8 Kind;
union {
struct {ttypeseq184845* Typeinstcache;
tscope184837* Typscope;
} S1;
struct {TY184943* Procinstcache;
tscope184837* Scope;
} S2;
struct {TY184943* Usedgenerics;
tstrtable184817 Tab;
} S3;
} kindU;
NU16 Magic;
ttype184847* Typ;
tident164019* Name;
tlineinfo160527 Info;
tsym184843* Owner;
NU32 Flags;
tnode184813* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc184827 Loc;
tlib184831* Annex;
tnode184813* Constraint;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  E_Base  {
  TNimObject Sup;
E_Base* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClPrc) (E_Base* e, void* ClEnv);
void* ClEnv;
} TY11626;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY11626 raiseAction;
};
struct  tcell41290  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq41306  {
NI Len;
NI Cap;
tcell41290** D;
};
struct  tcellset41302  {
NI Counter;
NI Max;
tpagedesc41298* Head;
tpagedesc41298** Data;
};
typedef tsmallchunk22838* TY23622[512];
typedef ttrunk22811* ttrunkbuckets22813[256];
struct  tintset22815  {
ttrunkbuckets22813 Data;
};
struct  tmemregion23610  {
NI Minlargeobj;
NI Maxlargeobj;
TY23622 Freesmallchunks;
tllchunk23604* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk22840* Freechunkslist;
tintset22815 Chunkstarts;
tavlnode23608* Root;
tavlnode23608* Deleted;
tavlnode23608* Last;
tavlnode23608* Freeavlnodes;
};
struct  tgcstat43214  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap43216  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq41306 Zct;
tcellseq41306 Decstack;
tcellset41302 Cycleroots;
tcellseq41306 Tempstack;
NI Recgclock;
tmemregion23610 Region;
tgcstat43214 Stat;
};
struct  ttocentry306008  {
trstnode294009* N;
NimStringDesc* Refname;
NimStringDesc* Header;
};
typedef N_NIMCALL_PTR(NimStringDesc*, tfindfilehandler295018) (NimStringDesc* filename);
typedef N_NIMCALL_PTR(void, tmsghandler295016) (NimStringDesc* filename, NI line, NI col, NU8 msgkind, NimStringDesc* arg);
typedef NimStringDesc* TY306036[5];
struct  trstgenerator306012  {
  TNimObject Sup;
NU8 Target;
tstringtable119810* Config;
NI Splitafter;
TY306028* Tocpart;
NIM_BOOL Hastoc;
NimStringDesc* Theindex;
NU8 Options;
tfindfilehandler295018 Findfile;
tmsghandler295016 Msghandler;
NimStringDesc* Filename;
TY306036 Meta;
NimStringDesc* Currentsection;
};
typedef trope142007* tsections338003[25];
struct  tdocumentor338005  {
  trstgenerator306012 Sup;
trope142007* Moddesc;
NI Id;
tsections338003 Toc;
tsections338003 Section;
NimStringDesc* Indexvalfilename;
tstringtable119810* Seensymbols;
};
typedef N_NIMCALL_PTR(tpasscontext243003*, tpassopen243007) (tsym184843* module);
typedef N_NIMCALL_PTR(tpasscontext243003*, tpassopencached243009) (tsym184843* module, trodreader233024* rd);
typedef N_NIMCALL_PTR(tnode184813*, tpassprocess243013) (tpasscontext243003* p, tnode184813* toplevelstmt);
typedef N_NIMCALL_PTR(tnode184813*, tpassclose243011) (tpasscontext243003* p, tnode184813* n);
struct tpass243015 {
tpassopen243007 Field0;
tpassopencached243009 Field1;
tpassprocess243013 Field2;
tpassclose243011 Field3;
};
struct  tnode184813  {
ttype184847* Typ;
tlineinfo160527 Info;
NU16 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym184843* Sym;
} S4;
struct {tident164019* Ident;
} S5;
struct {tnodeseq184807* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
struct  ttype184847  {
  tidobj164013 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq184845* Sons;
tnode184813* N;
tsym184843* Destructor;
tsym184843* Owner;
tsym184843* Sym;
NI64 Size;
NI Align;
tloc184827 Loc;
};
struct  tscope184837  {
NI Depthlevel;
tstrtable184817 Symbols;
tnodeseq184807* Usingsyms;
tscope184837* Parent;
};
struct  tinstantiation184833  {
tsym184843* Sym;
ttypeseq184845* Concretetypes;
TY184932* Usedby;
};
struct  tident164019  {
  tidobj164013 Sup;
NimStringDesc* S;
tident164019* Next;
NI H;
};
struct  trope142007  {
  TNimObject Sup;
trope142007* Left;
trope142007* Right;
NI Length;
NimStringDesc* Data;
};
struct  tlistentry116017  {
  TNimObject Sup;
tlistentry116017* Prev;
tlistentry116017* Next;
};
struct  tlib184831  {
  tlistentry116017 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope142007* Name;
tnode184813* Path;
};
typedef NI TY22818[16];
struct  tpagedesc41298  {
tpagedesc41298* Next;
NI Key;
TY22818 Bits;
};
struct  tbasechunk22836  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk22838  {
  tbasechunk22836 Sup;
tsmallchunk22838* Next;
tsmallchunk22838* Prev;
tfreecell22828* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk23604  {
NI Size;
NI Acc;
tllchunk23604* Next;
};
struct  tbigchunk22840  {
  tbasechunk22836 Sup;
tbigchunk22840* Next;
tbigchunk22840* Prev;
NI Align;
NF Data;
};
struct  ttrunk22811  {
ttrunk22811* Next;
NI Key;
TY22818 Bits;
};
typedef tavlnode23608* TY23614[2];
struct  tavlnode23608  {
TY23614 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct TY94105 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct  tstringtable119810  {
  TNimObject Sup;
NI Counter;
tkeyvaluepairseq119808* Data;
NU8 Mode;
};
struct  trstnode294009  {
NU8 Kind;
NimStringDesc* Text;
NI Level;
TY294084* Sons;
};
struct  tiipair193203  {
NI Key;
NI Val;
};
struct  tiitable193207  {
NI Counter;
tiipairseq193205* Data;
};
struct  tindex233022  {
NI Lastidxkey;
NI Lastidxval;
tiitable193207 Tab;
NimStringDesc* R;
NI Offset;
};
struct  tidpair184855  {
tidobj164013* Key;
TNimObject* Val;
};
struct  tidtable184859  {
NI Counter;
tidpairseq184857* Data;
};
struct  tmemfile231204  {
void* Mem;
NI Size;
int Handle;
};
struct  trodreader233024  {
  TNimObject Sup;
NI Pos;
NCSTRING S;
NU32 Options;
NU8 Reason;
TY184932* Moddeps;
TY184932* Files;
NI Dataidx;
NI Convertersidx;
NI Initidx;
NI Interfidx;
NI Compilerprocsidx;
NI Methodsidx;
NimStringDesc* Filename;
tindex233022 Index;
tindex233022 Imports;
NI Readerindex;
NI Line;
NI Moduleid;
tidtable184859 Syms;
tmemfile231204 Memfile;
tsymseq184815* Methods;
NimStringDesc* Origfile;
NIM_BOOL Inviewmode;
};
struct  tfreecell22828  {
tfreecell22828* Next;
NI Zerofield;
};
struct ttypeseq184845 {
  TGenericSeq Sup;
  ttype184847* data[SEQ_DECL_SIZE];
};
struct TY184943 {
  TGenericSeq Sup;
  tinstantiation184833* data[SEQ_DECL_SIZE];
};
struct tsymseq184815 {
  TGenericSeq Sup;
  tsym184843* data[SEQ_DECL_SIZE];
};
struct TY306028 {
  TGenericSeq Sup;
  ttocentry306008 data[SEQ_DECL_SIZE];
};
struct tnodeseq184807 {
  TGenericSeq Sup;
  tnode184813* data[SEQ_DECL_SIZE];
};
struct TY184932 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct tkeyvaluepairseq119808 {
  TGenericSeq Sup;
  TY94105 data[SEQ_DECL_SIZE];
};
struct TY294084 {
  TGenericSeq Sup;
  trstnode294009* data[SEQ_DECL_SIZE];
};
struct tiipairseq193205 {
  TGenericSeq Sup;
  tiipair193203 data[SEQ_DECL_SIZE];
};
struct tidpairseq184857 {
  TGenericSeq Sup;
  tidpair184855 data[SEQ_DECL_SIZE];
};
N_NIMCALL(tnode184813*, close_519014)(tpasscontext243003* p, tnode184813* n);
N_NIMCALL(void, chckObj)(TNimType* obj, TNimType* subclass);
N_NIMCALL(void, writeoutput_341719)(tdocumentor338005* d, NimStringDesc* filename, NimStringDesc* outext, NIM_BOOL usewarning);
N_NIMCALL(NimStringDesc*, tofilename_161780)(NI32 fileidx);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(void, generateindex_341700)(tdocumentor338005* d);
static N_INLINE(void, popSafePoint)(void);
static N_INLINE(void, setFrame)(TFrame* s);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(E_Base*, getCurrentException)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, popCurrentException)(void);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_47027)(tcell41290* c);
static N_INLINE(NIM_BOOL, canbecycleroot_44662)(tcell41290* c);
static N_INLINE(void, rtladdcycleroot_45435)(tcell41290* c);
N_NOINLINE(void, incl_42055)(tcellset41302* s, tcell41290* cell);
static N_INLINE(tcell41290*, usrtocell_44643)(void* usr);
static N_INLINE(void, decref_46602)(tcell41290* c);
static N_INLINE(void, rtladdzct_46202)(tcell41290* c);
N_NOINLINE(void, addzct_44618)(tcellseq41306* s, tcell41290* c);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(tnode184813*, processnode_519050)(tpasscontext243003* c, tnode184813* n);
N_NIMCALL(void, generatedoc_339458)(tdocumentor338005* d, tnode184813* n);
N_NIMCALL(tpasscontext243003*, myopen_519058)(tsym184843* module);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP7628)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(tdocumentor338005*, newdocumentor_338048)(NimStringDesc* filename, tstringtable119810* config);
N_NIMCALL(void, finishdoc2pass_519087)(NimStringDesc* project);
STRING_LITERAL(TMP7626, "html", 4);
NIM_CONST tpass243015 docgen2pass_519084 = {myopen_519058,
NIM_NIL,
processnode_519050,
close_519014}
;
extern TNimType NTI243003; /* TPassContext */
TNimType NTI519008; /* TGen */
extern TNimType NTI338007; /* PDoc */
extern TNimType NTI184811; /* PSym */
extern NIM_BOOL gwholeproject_134122;
extern TSafePoint* exchandler_13039;
extern TFrame* frameptr_13038;
extern TNimType NTI2433; /* EIO */
extern E_Base* currexception_13041;
extern tgcheap43216 gch_43244;
TNimType NTI519010; /* PGen */
extern tstringtable119810* gconfigvars_134203;

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = exchandler_13039;
	exchandler_13039 = s;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_13039 = (*exchandler_13039).prev;
}

static N_INLINE(void, setFrame)(TFrame* s) {
	frameptr_13038 = s;
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13038;
	frameptr_13038 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13038 = (*frameptr_13038).prev;
}

static N_INLINE(E_Base*, getCurrentException)(void) {
	E_Base* result;
	nimfr("getCurrentException", "system.nim")
	result = 0;
	nimln(2442, "system.nim");
	result = currexception_13041;
	popFrame();
	return result;
}

static N_INLINE(NIM_BOOL, canbecycleroot_44662)(tcell41290* c) {
	NIM_BOOL result;
	nimfr("canbeCycleRoot", "gc.nim")
	result = 0;
	nimln(121, "gc.nim");
	nimln(121, "gc.nim");
	nimln(121, "gc.nim");
	result = !((((*(*c).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdcycleroot_45435)(tcell41290* c) {
	nimfr("rtlAddCycleRoot", "gc.nim")
	nimln(189, "gc.nim");
	{
		nimln(189, "gc.nim");
		nimln(189, "gc.nim");
		nimln(189, "gc.nim");
		if (!!((((NI) ((NI)((*c).Refcount & 3))) == 3))) goto LA3;
		nimln(139, "gc.nim");
		nimln(139, "gc.nim");
		nimln(139, "gc.nim");
		(*c).Refcount = (NI)((NI)((*c).Refcount & -4) | 3);
		nimln(191, "gc.nim");
		incl_42055(&gch_43244.Cycleroots, c);
	}
	LA3: ;
	popFrame();
}

static N_INLINE(void, incref_47027)(tcell41290* c) {
	nimfr("incRef", "gc.nim")
	nimln(216, "gc.nim");
	nimln(216, "gc.nim");
	(*c).Refcount = (NI)((NU32)((*c).Refcount) + (NU32)(8));
	nimln(219, "gc.nim");
	{
		NIM_BOOL LOC3;
		nimln(219, "gc.nim");
		LOC3 = 0;
		LOC3 = canbecycleroot_44662(c);
		if (!LOC3) goto LA4;
		nimln(220, "gc.nim");
		rtladdcycleroot_45435(c);
	}
	LA4: ;
	popFrame();
}

static N_INLINE(tcell41290*, usrtocell_44643)(void* usr) {
	tcell41290* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	result = ((tcell41290*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell41290))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_46202)(tcell41290* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_44618(&gch_43244.Zct, c);
	popFrame();
}

static N_INLINE(void, decref_46602)(tcell41290* c) {
	nimfr("decRef", "gc.nim")
	nimln(206, "gc.nim");
	{
		nimln(167, "gc.nim");
		(*c).Refcount -= 8;
		nimln(168, "gc.nim");
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
		nimln(207, "gc.nim");
		rtladdzct_46202(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		nimln(208, "gc.nim");
		LOC6 = 0;
		LOC6 = canbecycleroot_44662(c);
		if (!LOC6) goto LA7;
		nimln(211, "gc.nim");
		rtladdcycleroot_45435(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
	popFrame();
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	nimfr("asgnRef", "gc.nim")
	nimln(244, "gc.nim");
	{
		tcell41290* LOC5;
		nimln(244, "gc.nim");
		nimln(244, "gc.nim");
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(244, "gc.nim");
		nimln(244, "gc.nim");
		LOC5 = 0;
		LOC5 = usrtocell_44643(src);
		incref_47027(LOC5);
	}
	LA3: ;
	nimln(245, "gc.nim");
	{
		tcell41290* LOC10;
		nimln(245, "gc.nim");
		nimln(245, "gc.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		nimln(245, "gc.nim");
		nimln(245, "gc.nim");
		LOC10 = 0;
		LOC10 = usrtocell_44643((*dest));
		decref_46602(LOC10);
	}
	LA8: ;
	nimln(246, "gc.nim");
	(*dest) = src;
	popFrame();
}

static N_INLINE(void, popCurrentException)(void) {
	asgnRef((void**) &currexception_13041, (*currexception_13041).parent);
}

N_NIMCALL(tnode184813*, close_519014)(tpasscontext243003* p, tnode184813* n) {
	tnode184813* result;
	tgen519008* g;
	NIM_BOOL usewarning;
	nimfr("close", "docgen2.nim")
	result = 0;
	nimln(23, "docgen2.nim");
	if (p) chckObj((*p).Sup.m_type, (&NTI519008));
	g = ((tgen519008*) (p));
	nimln(24, "docgen2.nim");
	nimln(24, "docgen2.nim");
	nimln(24, "docgen2.nim");
	usewarning = !((((*(*g).Module).Flags &(1<<((((NU8) 12))&31)))!=0));
	nimln(25, "docgen2.nim");
	{
		NIM_BOOL LOC3;
		NimStringDesc* LOC7;
		TSafePoint TMP7627;
		nimln(25, "docgen2.nim");
		LOC3 = 0;
		LOC3 = gwholeproject_134122;
		if (LOC3) goto LA4;
		nimln(25, "docgen2.nim");
		LOC3 = (((*(*g).Module).Flags &(1<<((((NU8) 12))&31)))!=0);
		LA4: ;
		if (!LOC3) goto LA5;
		nimln(26, "docgen2.nim");
		nimln(26, "docgen2.nim");
		LOC7 = 0;
		LOC7 = tofilename_161780(((NI32) ((*(*g).Module).Position)));
		writeoutput_341719((*g).Doc, LOC7, ((NimStringDesc*) &TMP7626), usewarning);
		nimln(27, "docgen2.nim");
		pushSafePoint(&TMP7627);
		TMP7627.status = setjmp(TMP7627.context);
		if (TMP7627.status == 0) {
			nimln(28, "docgen2.nim");
			generateindex_341700((*g).Doc);
			popSafePoint();
		}
		else {
			popSafePoint();
			setFrame((TFrame*)&F);
			if (isObj(getCurrentException()->Sup.m_type, (&NTI2433))) {
				TMP7627.status = 0;
				popCurrentException();
			}
		}
		if (TMP7627.status != 0) reraiseException();
	}
	LA5: ;
	popFrame();
	return result;
}

N_NIMCALL(tnode184813*, processnode_519050)(tpasscontext243003* c, tnode184813* n) {
	tnode184813* result;
	tgen519008* g;
	nimfr("processNode", "docgen2.nim")
	result = 0;
	nimln(33, "docgen2.nim");
	result = n;
	nimln(34, "docgen2.nim");
	if (c) chckObj((*c).Sup.m_type, (&NTI519008));
	g = ((tgen519008*) (c));
	nimln(35, "docgen2.nim");
	generatedoc_339458((*g).Doc, n);
	popFrame();
	return result;
}
N_NIMCALL(void, TMP7628)(void* p, NI op) {
	tgen519008* a;
	a = (tgen519008*)p;
	nimGCvisit((void*)(*a).Doc, op);
	nimGCvisit((void*)(*a).Module, op);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr("asgnRefNoCycle", "gc.nim")
	nimln(251, "gc.nim");
	{
		tcell41290* c;
		nimln(251, "gc.nim");
		nimln(251, "gc.nim");
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(252, "gc.nim");
		c = usrtocell_44643(src);
		nimln(169, "gc.nim");
		(*c).Refcount += 8;
	}
	LA3: ;
	nimln(254, "gc.nim");
	{
		tcell41290* c;
		nimln(254, "gc.nim");
		nimln(254, "gc.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		nimln(255, "gc.nim");
		c = usrtocell_44643((*dest));
		nimln(256, "gc.nim");
		{
			nimln(167, "gc.nim");
			(*c).Refcount -= 8;
			nimln(168, "gc.nim");
			if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA11;
			nimln(257, "gc.nim");
			rtladdzct_46202(c);
		}
		LA11: ;
	}
	LA7: ;
	nimln(258, "gc.nim");
	(*dest) = src;
	popFrame();
}

N_NIMCALL(tpasscontext243003*, myopen_519058)(tsym184843* module) {
	tpasscontext243003* result;
	tgen519008* g;
	tdocumentor338005* d;
	NimStringDesc* LOC1;
	nimfr("myOpen", "docgen2.nim")
	result = 0;
	g = 0;
	nimln(39, "docgen2.nim");
	g = (tgen519008*) newObj((&NTI519010), sizeof(tgen519008));
	(*g).Sup.Sup.m_type = (&NTI519008);
	nimln(40, "docgen2.nim");
	asgnRefNoCycle((void**) &(*g).Module, module);
	nimln(41, "docgen2.nim");
	nimln(41, "docgen2.nim");
	LOC1 = 0;
	LOC1 = tofilename_161780(((NI32) ((*module).Position)));
	d = newdocumentor_338048(LOC1, gconfigvars_134203);
	nimln(42, "docgen2.nim");
	(*d).Sup.Hastoc = NIM_TRUE;
	nimln(43, "docgen2.nim");
	asgnRef((void**) &(*g).Doc, d);
	nimln(44, "docgen2.nim");
	result = &g->Sup;
	popFrame();
	return result;
}

N_NIMCALL(void, finishdoc2pass_519087)(NimStringDesc* project) {
	nimfr("finishDoc2Pass", "docgen2.nim")
	popFrame();
}
N_NOINLINE(void, docgen2Init)(void) {
	nimfr("docgen2", "docgen2.nim")
	popFrame();
}

N_NOINLINE(void, docgen2DatInit)(void) {
static TNimNode* TMP7625[2];
static TNimNode TMP7623[3];
NTI519008.size = sizeof(tgen519008);
NTI519008.kind = 17;
NTI519008.base = (&NTI243003);
TMP7625[0] = &TMP7623[1];
TMP7623[1].kind = 1;
TMP7623[1].offset = offsetof(tgen519008, Doc);
TMP7623[1].typ = (&NTI338007);
TMP7623[1].name = "doc";
TMP7625[1] = &TMP7623[2];
TMP7623[2].kind = 1;
TMP7623[2].offset = offsetof(tgen519008, Module);
TMP7623[2].typ = (&NTI184811);
TMP7623[2].name = "module";
TMP7623[0].len = 2; TMP7623[0].kind = 2; TMP7623[0].sons = &TMP7625[0];
NTI519008.node = &TMP7623[0];
NTI519010.size = sizeof(tgen519008*);
NTI519010.kind = 22;
NTI519010.base = (&NTI519008);
NTI519010.marker = TMP7628;
}
