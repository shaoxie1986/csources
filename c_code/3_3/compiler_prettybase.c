/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
typedef struct TY267010 TY267010;
typedef struct Tsourcefile267002 Tsourcefile267002;
typedef struct TY125402 TY125402;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
typedef struct Tlineinfo181337 Tlineinfo181337;
typedef struct Tsym213822 Tsym213822;
typedef struct Tident188012 Tident188012;
typedef struct TY118906 TY118906;
typedef struct Baselexer264009 Baselexer264009;
typedef struct TNimObject TNimObject;
typedef struct Streamobj144418 Streamobj144418;
typedef struct Filestreamobj145248 Filestreamobj145248;
typedef struct Slice88282 Slice88282;
typedef struct Tidobj188006 Tidobj188006;
typedef struct Ttypeseq213824 Ttypeseq213824;
typedef struct Tscope213816 Tscope213816;
typedef struct TY213925 TY213925;
typedef struct Tstrtable213794 Tstrtable213794;
typedef struct Tsymseq213792 Tsymseq213792;
typedef struct Ttype213828 Ttype213828;
typedef struct Tnode213790 Tnode213790;
typedef struct Tloc213804 Tloc213804;
typedef struct Ropeobj168006 Ropeobj168006;
typedef struct Tlib213808 Tlib213808;
typedef struct Basechunk29838 Basechunk29838;
typedef struct Freecell29830 Freecell29830;
typedef struct Tnodeseq213784 Tnodeseq213784;
typedef struct Tinstantiation213812 Tinstantiation213812;
typedef struct Tlistentry135010 Tlistentry135010;
typedef struct TY213913 TY213913;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tsourcefile267002  {
TY125402* lines;
NIM_BOOL dirty;
NIM_BOOL isnimfixfile;
NimStringDesc* fullpath;
NimStringDesc* newline;
NI32 fileidx;
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
struct  Tlineinfo181337  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct TY118906 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
};
struct  TNimObject  {
TNimType* m_type;
};
typedef NU8 TY201404[32];
struct  Baselexer264009  {
  TNimObject Sup;
NI bufpos;
NCSTRING buf;
NI buflen;
Streamobj144418* input;
NI linenumber;
NI sentinel;
NI linestart;
TY201404 refillchars;
};
struct  Slice88282  {
NI a;
NI b;
};
struct  Tidobj188006  {
  TNimObject Sup;
NI id;
};
struct  Tident188012  {
  Tidobj188006 Sup;
NimStringDesc* s;
Tident188012* next;
NI h;
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
typedef N_NIMCALL_PTR(void, TY144419) (Streamobj144418* s);
typedef N_NIMCALL_PTR(NIM_BOOL, TY144423) (Streamobj144418* s);
typedef N_NIMCALL_PTR(void, TY144427) (Streamobj144418* s, NI pos);
typedef N_NIMCALL_PTR(NI, TY144432) (Streamobj144418* s);
typedef N_NIMCALL_PTR(NI, TY144436) (Streamobj144418* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(NI, TY144442) (Streamobj144418* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY144448) (Streamobj144418* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY144454) (Streamobj144418* s);
struct  Streamobj144418  {
  TNimObject Sup;
TY144419 closeimpl;
TY144423 atendimpl;
TY144427 setpositionimpl;
TY144432 getpositionimpl;
TY144436 readdataimpl;
TY144442 peekdataimpl;
TY144448 writedataimpl;
TY144454 flushimpl;
};
struct  Filestreamobj145248  {
  Streamobj144418 Sup;
FILE* f;
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
struct TY267010 {
  TGenericSeq Sup;
  Tsourcefile267002 data[SEQ_DECL_SIZE];
};
struct TY125402 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
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
struct Tnodeseq213784 {
  TGenericSeq Sup;
  Tnode213790* data[SEQ_DECL_SIZE];
};
struct TY213913 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP944)(void* p, NI op);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Cell47704*, usrtocell_51640)(void* usr);
static N_INLINE(void, rtladdzct_53201)(Cell47704* c);
N_NOINLINE(void, addzct_51617)(Cellseq47720* s, Cell47704* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(void, replacedeprecated_267154)(Tlineinfo181337 info, Tident188012* oldsym, Tident188012* newsym);
N_NIMCALL(void, loadfile_267029)(Tlineinfo181337 info);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemsize, NI newlen);
N_NIMCALL(NimStringDesc*, tofullpath_182266)(NI32 fileidx);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(void, nossplitFile)(NimStringDesc* path, TY118906* Result);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(FILE*, open_15617)(NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, readline_15713)(FILE* f, NimStringDesc** line);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(void, open_266223)(Baselexer264009* L, Streamobj144418* input, NI buflen, TY201404 refillchars);
N_NIMCALL(Filestreamobj145248*, newfilestream_145313)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(void, close_264022)(Baselexer264009* L);
N_NIMCALL(NI, identlen_267111)(NimStringDesc* line, NI start);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NimStringDesc*, HEX5BHEX5D_88275)(NimStringDesc* s, Slice88282 x);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_80010, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
static N_INLINE(Slice88282, HEX2EHEX2E_102424)(NI a, NI b);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
STRING_LITERAL(TMP2823, ".nimfix", 7);
static NIM_CONST TY201404 TMP2832 = {
0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP2833, "\015\012", 2);
STRING_LITERAL(TMP2834, "\012", 1);
TY267010* gsourcefiles_267027;
TNimType NTI267002; /* TSourceFile */
extern TNimType NTI125402; /* seq[string] */
extern TNimType NTI130; /* bool */
extern TNimType NTI138; /* string */
extern TNimType NTI110; /* int32 */
TNimType NTI267010; /* seq[TSourceFile] */
extern Gcheap50018 gch_50059;
extern TNimType NTI264009; /* BaseLexer */
N_NIMCALL(void, TMP944)(void* p, NI op) {
	TY267010* a;
	NI LOC1;
	a = (TY267010*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].lines, op);
	nimGCvisit((void*)a->data[LOC1].fullpath, op);
	nimGCvisit((void*)a->data[LOC1].newline, op);
	}
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

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Cell47704* c;
	c = usrtocell_51640(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_53201(c);
	}
	LA3: ;
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

N_NIMCALL(void, loadfile_267029)(Tlineinfo181337 info) {
	NI32 i;
	i = info.fileindex;
	{
		if (!((gsourcefiles_267027 ? gsourcefiles_267027->Sup.len : 0) <= ((NI) (i)))) goto LA3;
		gsourcefiles_267027 = (TY267010*) setLengthSeq(&(gsourcefiles_267027)->Sup, sizeof(Tsourcefile267002), ((NI) ((NI32)(i + ((NI32) 1)))));
	}
	LA3: ;
	{
		NimStringDesc* path;
		NimStringDesc* LOC9;
		TY118906 LOC10;
		Baselexer264009 lex;
		Filestreamobj145248* LOC16;
		Streamobj144418* LOC17;
		NI pos;
		if (!gsourcefiles_267027->data[i].lines == 0) goto LA7;
		gsourcefiles_267027->data[i].fileidx = info.fileindex;
		if (gsourcefiles_267027->data[i].lines) nimGCunrefNoCycle(gsourcefiles_267027->data[i].lines);
		gsourcefiles_267027->data[i].lines = (TY125402*) newSeqRC1((&NTI125402), 0);
		path = tofullpath_182266(info.fileindex);
		LOC9 = 0;
		LOC9 = gsourcefiles_267027->data[i].fullpath; gsourcefiles_267027->data[i].fullpath = copyStringRC1(path);
		if (LOC9) nimGCunrefNoCycle(LOC9);
		memset((void*)(&LOC10), 0, sizeof(LOC10));
		nossplitFile(path, (&LOC10));
		gsourcefiles_267027->data[i].isnimfixfile = eqStrings(LOC10.Field2, ((NimStringDesc*) &TMP2823));
		{
			NimStringDesc* line_267076;
			FILE* f_267103;
			NimStringDesc* res_267105;
			line_267076 = 0;
			f_267103 = open_15617(path, ((NU8) 0), ((NI) 8000));
			res_267105 = rawNewString(((NI) 80));
			{
				while (1) {
					NIM_BOOL LOC14;
					NimStringDesc* LOC15;
					LOC14 = 0;
					LOC14 = readline_15713(f_267103, (&res_267105));
					if (!LOC14) goto LA13;
					line_267076 = res_267105;
					gsourcefiles_267027->data[i].lines = (TY125402*) incrSeqV2(&(gsourcefiles_267027->data[i].lines)->Sup, sizeof(NimStringDesc*));
					LOC15 = 0;
					LOC15 = gsourcefiles_267027->data[i].lines->data[gsourcefiles_267027->data[i].lines->Sup.len]; gsourcefiles_267027->data[i].lines->data[gsourcefiles_267027->data[i].lines->Sup.len] = copyStringRC1(line_267076);
					if (LOC15) nimGCunrefNoCycle(LOC15);
					++gsourcefiles_267027->data[i].lines->Sup.len;
				} LA13: ;
			}
			fclose(f_267103);
		}
		memset((void*)(&lex), 0, sizeof(lex));
		lex.Sup.m_type = (&NTI264009);
		LOC16 = 0;
		LOC16 = newfilestream_145313(path, ((NU8) 0));
		LOC17 = 0;
		LOC17 = &LOC16->Sup;
		open_266223((&lex), LOC17, ((NI) 8192), TMP2832);
		pos = lex.bufpos;
		{
			while (1) {
				switch (((NU8)(lex.buf[pos]))) {
				case 13:
				{
					NimStringDesc* LOC21;
					LOC21 = 0;
					LOC21 = gsourcefiles_267027->data[i].newline; gsourcefiles_267027->data[i].newline = copyStringRC1(((NimStringDesc*) &TMP2833));
					if (LOC21) nimGCunrefNoCycle(LOC21);
					goto LA18;
				}
				break;
				case 10:
				case 0:
				{
					NimStringDesc* LOC23;
					LOC23 = 0;
					LOC23 = gsourcefiles_267027->data[i].newline; gsourcefiles_267027->data[i].newline = copyStringRC1(((NimStringDesc*) &TMP2834));
					if (LOC23) nimGCunrefNoCycle(LOC23);
					goto LA18;
				}
				break;
				default:
				{
				}
				break;
				}
				pos += ((NI) 1);
			}
		} LA18: ;
		close_264022((&lex));
	}
	LA7: ;
}

N_NIMCALL(NI, identlen_267111)(NimStringDesc* line, NI start) {
	NI result;
	result = 0;
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = ((NI)(start + result) < (line ? line->Sup.len : 0));
			if (!(LOC3)) goto LA4;
			LOC3 = (((NU8)(line->data[(NI)(start + result)])) >= ((NU8)(97)) && ((NU8)(line->data[(NI)(start + result)])) <= ((NU8)(122)) || ((NU8)(line->data[(NI)(start + result)])) >= ((NU8)(65)) && ((NU8)(line->data[(NI)(start + result)])) <= ((NU8)(90)) || ((NU8)(line->data[(NI)(start + result)])) >= ((NU8)(48)) && ((NU8)(line->data[(NI)(start + result)])) <= ((NU8)(57)) || ((NU8)(line->data[(NI)(start + result)])) >= ((NU8)(128)) && ((NU8)(line->data[(NI)(start + result)])) <= ((NU8)(255)) || ((NU8)(line->data[(NI)(start + result)])) == ((NU8)(95)));
			LA4: ;
			if (!LOC3) goto LA2;
			result += ((NI) 1);
		} LA2: ;
	}
	return result;
}

static N_INLINE(NimStringDesc*, HEX5BHEX5D_88275)(NimStringDesc* s, Slice88282 x) {
	NimStringDesc* result;
	result = 0;
	result = copyStrLast(s, x.a, x.b);
	return result;
}

static N_INLINE(Slice88282, HEX2EHEX2E_102424)(NI a, NI b) {
	Slice88282 result;
	memset((void*)(&result), 0, sizeof(result));
	result.a = a;
	result.b = b;
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
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

N_NIMCALL(void, replacedeprecated_267154)(Tlineinfo181337 info, Tident188012* oldsym, Tident188012* newsym) {
	NimStringDesc* line;
	NI first;
	NI last;
	NI LOC17;
{	loadfile_267029(info);
	line = gsourcefiles_267027->data[info.fileindex].lines->data[(NI16)(info.line - ((NI16) 1))];
	first = ((((NI) (info.col)) <= (line ? line->Sup.len : 0)) ? ((NI) (info.col)) : (line ? line->Sup.len : 0));
	{
		if (!(first < ((NI) 0))) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	{
		while (1) {
			NIM_BOOL LOC7;
			LOC7 = 0;
			LOC7 = (((NI) 0) < first);
			if (!(LOC7)) goto LA8;
			LOC7 = (((NU8)(line->data[(NI)(first - ((NI) 1))])) >= ((NU8)(97)) && ((NU8)(line->data[(NI)(first - ((NI) 1))])) <= ((NU8)(122)) || ((NU8)(line->data[(NI)(first - ((NI) 1))])) >= ((NU8)(65)) && ((NU8)(line->data[(NI)(first - ((NI) 1))])) <= ((NU8)(90)) || ((NU8)(line->data[(NI)(first - ((NI) 1))])) >= ((NU8)(48)) && ((NU8)(line->data[(NI)(first - ((NI) 1))])) <= ((NU8)(57)) || ((NU8)(line->data[(NI)(first - ((NI) 1))])) >= ((NU8)(128)) && ((NU8)(line->data[(NI)(first - ((NI) 1))])) <= ((NU8)(255)) || ((NU8)(line->data[(NI)(first - ((NI) 1))])) == ((NU8)(95)));
			LA8: ;
			if (!LOC7) goto LA6;
			first -= ((NI) 1);
		} LA6: ;
	}
	{
		if (!(first < ((NI) 0))) goto LA11;
		goto BeforeRet;
	}
	LA11: ;
	{
		if (!((NU8)(line->data[first]) == (NU8)(96))) goto LA15;
		first += ((NI) 1);
	}
	LA15: ;
	LOC17 = 0;
	LOC17 = identlen_267111(line, first);
	last = (NI)((NI)(first + LOC17) - ((NI) 1));
	{
		Slice88282 LOC20;
		NimStringDesc* LOC21;
		NI LOC22;
		NimStringDesc* x;
		NimStringDesc* LOC25;
		NimStringDesc* LOC26;
		NimStringDesc* LOC27;
		LOC20 = HEX2EHEX2E_102424(first, last);
		LOC21 = 0;
		LOC21 = HEX5BHEX5D_88275(line, LOC20);
		LOC22 = 0;
		LOC22 = nsuCmpIgnoreStyle(LOC21, (*oldsym).s);
		if (!(LOC22 == ((NI) 0))) goto LA23;
		LOC25 = 0;
		LOC26 = 0;
		LOC26 = copyStrLast(line, ((NI) 0), (NI)(first - ((NI) 1)));
		LOC27 = 0;
		LOC27 = copyStr(line, (NI)(last + ((NI) 1)));
		LOC25 = rawNewString(LOC26->Sup.len + (*newsym).s->Sup.len + LOC27->Sup.len + 0);
appendString(LOC25, LOC26);
appendString(LOC25, (*newsym).s);
appendString(LOC25, LOC27);
		x = LOC25;
		asgnRefNoCycle((void**) (&gsourcefiles_267027->data[info.fileindex].lines->data[(NI16)(info.line - ((NI16) 1))]), x);
		gsourcefiles_267027->data[info.fileindex].dirty = NIM_TRUE;
	}
	LA23: ;
	}BeforeRet: ;
}

N_NIMCALL(void, replacedeprecated_267207)(Tlineinfo181337 info, Tsym213822* oldsym, Tsym213822* newsym) {
	replacedeprecated_267154(info, (*oldsym).name, (*newsym).name);
}
NIM_EXTERNC N_NOINLINE(void, compiler_prettybaseInit000)(void) {
	if (gsourcefiles_267027) nimGCunrefNoCycle(gsourcefiles_267027);
	gsourcefiles_267027 = (TY267010*) newSeqRC1((&NTI267010), 0);
}

NIM_EXTERNC N_NOINLINE(void, compiler_prettybaseDatInit000)(void) {
static TNimNode* TMP943[6];
static TNimNode TMP939[7];
NTI267002.size = sizeof(Tsourcefile267002);
NTI267002.kind = 18;
NTI267002.base = 0;
NTI267002.flags = 2;
TMP943[0] = &TMP939[1];
TMP939[1].kind = 1;
TMP939[1].offset = offsetof(Tsourcefile267002, lines);
TMP939[1].typ = (&NTI125402);
TMP939[1].name = "lines";
TMP943[1] = &TMP939[2];
TMP939[2].kind = 1;
TMP939[2].offset = offsetof(Tsourcefile267002, dirty);
TMP939[2].typ = (&NTI130);
TMP939[2].name = "dirty";
TMP943[2] = &TMP939[3];
TMP939[3].kind = 1;
TMP939[3].offset = offsetof(Tsourcefile267002, isnimfixfile);
TMP939[3].typ = (&NTI130);
TMP939[3].name = "isNimfixFile";
TMP943[3] = &TMP939[4];
TMP939[4].kind = 1;
TMP939[4].offset = offsetof(Tsourcefile267002, fullpath);
TMP939[4].typ = (&NTI138);
TMP939[4].name = "fullpath";
TMP943[4] = &TMP939[5];
TMP939[5].kind = 1;
TMP939[5].offset = offsetof(Tsourcefile267002, newline);
TMP939[5].typ = (&NTI138);
TMP939[5].name = "newline";
TMP943[5] = &TMP939[6];
TMP939[6].kind = 1;
TMP939[6].offset = offsetof(Tsourcefile267002, fileidx);
TMP939[6].typ = (&NTI110);
TMP939[6].name = "fileIdx";
TMP939[0].len = 6; TMP939[0].kind = 2; TMP939[0].sons = &TMP943[0];
NTI267002.node = &TMP939[0];
NTI267010.size = sizeof(TY267010*);
NTI267010.kind = 24;
NTI267010.base = (&NTI267002);
NTI267010.flags = 2;
NTI267010.marker = TMP944;
}

