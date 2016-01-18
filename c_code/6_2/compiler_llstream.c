/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tllstream202204 Tllstream202204;
typedef struct TNimObject TNimObject;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
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
typedef struct Basechunk29638 Basechunk29638;
typedef struct Freecell29630 Freecell29630;
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
struct  TNimObject  {
TNimType* m_type;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
typedef NU8 TY202404[32];
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
struct  Freecell29630  {
Freecell29630* next;
NI zerofield;
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP1214)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NIM_BOOL, open_15403)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(NIM_BOOL, readline_15513)(FILE* f, NimStringDesc** line);
N_NIMCALL(NI, readbuffer_15554)(FILE* f, void* buffer, NI len);
N_NIMCALL(NI, llreadfromstdin_202486)(Tllstream202204* s, void* buf, NI buflen);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Cell47505*, usrtocell_51440)(void* usr);
static N_INLINE(void, rtladdzct_53001)(Cell47505* c);
N_NOINLINE(void, addzct_51417)(Cellseq47521* s, Cell47505* c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, readlinefromstdin_202280)(NimStringDesc* prompt, NimStringDesc** line);
N_NIMCALL(void, write_15489)(FILE* f, NimStringDesc* s);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NI, counttriples_202453)(NimStringDesc* s);
static N_INLINE(NIM_BOOL, continueline_202436)(NimStringDesc* line, NIM_BOOL intriplestring);
N_NIMCALL(NIM_BOOL, endswith_202401)(NimStringDesc* x, TY202404 s);
N_NIMCALL(NI, writebuffer_15576)(FILE* f, void* buffer, NI len);
N_NIMCALL(void, llstreamwrite_202593)(Tllstream202204* s, NimStringDesc* data);
STRING_LITERAL(TMP1236, "", 0);
STRING_LITERAL(TMP1237, "\012", 1);
STRING_LITERAL(TMP1238, ">>> ", 4);
STRING_LITERAL(TMP1239, "... ", 4);
static NIM_CONST TY202404 TMP1240 = {
0x00, 0x00, 0x00, 0x00, 0x7A, 0xBC, 0x00, 0xF4,
0x01, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x50,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
static NIM_CONST TY202404 TMP1530 = {
0x00, 0x00, 0x00, 0x00, 0x72, 0xBC, 0x00, 0xD0,
0x01, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x50,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
extern TNimType NTI3608; /* RootObj */
TNimType NTI202204; /* TLLStream */
TNimType NTI202202; /* TLLStreamKind */
extern TNimType NTI15004; /* File */
extern TNimType NTI138; /* string */
extern TNimType NTI104; /* int */
TNimType NTI202206; /* PLLStream */
extern Gcheap49818 gch_49859;
extern TNimType NTI136; /* char */
TNimType NTI202404; /* set[char] */
N_NIMCALL(void, TMP1214)(void* p, NI op) {
	Tllstream202204* a;
	a = (Tllstream202204*)p;
	nimGCvisit((void*)(*a).s, op);
}

N_NIMCALL(Tllstream202204*, llstreamopen_202241)(NimStringDesc* filename, NU8 mode) {
	Tllstream202204* result;
	result = 0;
	result = (Tllstream202204*) newObj((&NTI202206), sizeof(Tllstream202204));
	(*result).Sup.m_type = (&NTI202204);
	(*result).kind = ((NU8) 2);
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = open_15403(&(*result).f, filename, mode, ((NI) -1));
		if (!!(LOC3)) goto LA4;
		result = NIM_NIL;
	}
	LA4: ;
	return result;
}

N_NIMCALL(NIM_BOOL, llstreamreadline_202550)(Tllstream202204* s, NimStringDesc** line) {
	NIM_BOOL result;
	result = 0;
	(*line) = setLengthStr((*line), ((NI) 0));
	switch ((*s).kind) {
	case ((NU8) 0):
	{
		result = NIM_TRUE;
	}
	break;
	case ((NU8) 1):
	{
		NIM_BOOL LOC12;
		{
			while (1) {
				if (!((*s).rd < ((*s).s ? (*s).s->Sup.len : 0))) goto LA4;
				switch (((NU8)((*s).s->data[(*s).rd]))) {
				case 13:
				{
					(*s).rd += ((NI) 1);
					{
						if (!((NU8)((*s).s->data[(*s).rd]) == (NU8)(10))) goto LA8;
						(*s).rd += ((NI) 1);
					}
					LA8: ;
					goto LA3;
				}
				break;
				case 10:
				{
					(*s).rd += ((NI) 1);
					goto LA3;
				}
				break;
				default:
				{
					(*line) = addChar((*line), (*s).s->data[(*s).rd]);
					(*s).rd += ((NI) 1);
				}
				break;
				}
			} LA4: ;
		} LA3: ;
		LOC12 = 0;
		LOC12 = (((NI) 0) < ((*line) ? (*line)->Sup.len : 0));
		if (LOC12) goto LA13;
		LOC12 = ((*s).rd < ((*s).s ? (*s).s->Sup.len : 0));
		LA13: ;
		result = LOC12;
	}
	break;
	case ((NU8) 2):
	{
		result = readline_15513((*s).f, line);
	}
	break;
	case ((NU8) 3):
	{
		result = readline_15513(stdin, line);
	}
	break;
	}
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

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Cell47505* c;
	c = usrtocell_51440(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_53001(c);
	}
	LA3: ;
}

N_NIMCALL(NIM_BOOL, readlinefromstdin_202280)(NimStringDesc* prompt, NimStringDesc** line) {
	NIM_BOOL result;
	result = 0;
	write_15489(stdout, prompt);
	result = readline_15513(stdin, line);
	{
		if (!!(result)) goto LA3;
		write_15489(stdout, ((NimStringDesc*) &TMP1237));
		exit(((NI) 0));
	}
	LA3: ;
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NI, counttriples_202453)(NimStringDesc* s) {
	NI result;
	NI i;
	result = 0;
	i = ((NI) 0);
	{
		while (1) {
			if (!(i < (s ? s->Sup.len : 0))) goto LA2;
			{
				NIM_BOOL LOC5;
				NIM_BOOL LOC6;
				LOC5 = 0;
				LOC6 = 0;
				LOC6 = ((NU8)(s->data[i]) == (NU8)(34));
				if (!(LOC6)) goto LA7;
				LOC6 = ((NU8)(s->data[(NI)(i + ((NI) 1))]) == (NU8)(34));
				LA7: ;
				LOC5 = LOC6;
				if (!(LOC5)) goto LA8;
				LOC5 = ((NU8)(s->data[(NI)(i + ((NI) 2))]) == (NU8)(34));
				LA8: ;
				if (!LOC5) goto LA9;
				result += ((NI) 1);
				i += ((NI) 2);
			}
			LA9: ;
			i += ((NI) 1);
		} LA2: ;
	}
	return result;
}

N_NIMCALL(NIM_BOOL, endswith_202401)(NimStringDesc* x, TY202404 s) {
	NIM_BOOL result;
	NI i;
	result = 0;
	i = (NI)((x ? x->Sup.len : 0) - ((NI) 1));
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = (((NI) 0) <= i);
			if (!(LOC3)) goto LA4;
			LOC3 = ((NU8)(x->data[i]) == (NU8)(32));
			LA4: ;
			if (!LOC3) goto LA2;
			i -= ((NI) 1);
		} LA2: ;
	}
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (((NI) 0) <= i);
		if (!(LOC7)) goto LA8;
		LOC7 = ((s[(NU)(((NU8)(x->data[i])))>>3] &(1U<<((NU)(((NU8)(x->data[i])))&7U)))!=0);
		LA8: ;
		if (!LOC7) goto LA9;
		result = NIM_TRUE;
	}
	LA9: ;
	return result;
}

static N_INLINE(NIM_BOOL, continueline_202436)(NimStringDesc* line, NIM_BOOL intriplestring) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	NIM_BOOL LOC2;
	result = 0;
	LOC1 = 0;
	LOC2 = 0;
	LOC2 = intriplestring;
	if (LOC2) goto LA3;
	LOC2 = ((NU8)(line->data[((NI) 0)]) == (NU8)(32));
	LA3: ;
	LOC1 = LOC2;
	if (LOC1) goto LA4;
	LOC1 = endswith_202401(line, TMP1240);
	LA4: ;
	result = LOC1;
	return result;
}

N_NIMCALL(NI, llreadfromstdin_202486)(Tllstream202204* s, void* buf, NI buflen) {
	NI result;
	NimStringDesc* LOC1;
	NimStringDesc* line;
	NI triples;
	result = 0;
	LOC1 = 0;
	LOC1 = (*s).s; (*s).s = copyStringRC1(((NimStringDesc*) &TMP1236));
	if (LOC1) nimGCunrefNoCycle(LOC1);
	(*s).rd = ((NI) 0);
	line = rawNewString(((NI) 120));
	triples = ((NI) 0);
	{
		while (1) {
			NimStringDesc* LOC4;
			NIM_BOOL LOC10;
			NI LOC11;
			LOC4 = 0;
			{
				if (!(((*s).s ? (*s).s->Sup.len : 0) == ((NI) 0))) goto LA7;
				LOC4 = copyString(((NimStringDesc*) &TMP1238));
			}
			goto LA5;
			LA7: ;
			{
				LOC4 = copyString(((NimStringDesc*) &TMP1239));
			}
			LA5: ;
			LOC10 = 0;
			LOC10 = readlinefromstdin_202280(LOC4, (&line));
			if (!LOC10) goto LA3;
			(*s).s = resizeString((*s).s, line->Sup.len + 0);
appendString((*s).s, line);
			(*s).s = resizeString((*s).s, 1);
appendString((*s).s, ((NimStringDesc*) &TMP1237));
			LOC11 = 0;
			LOC11 = counttriples_202453(line);
			triples += LOC11;
			{
				NIM_BOOL LOC14;
				LOC14 = 0;
				LOC14 = continueline_202436(line, (((NI) ((NI)(triples & ((NI) 1)))) == ((NI) 1)));
				if (!!(LOC14)) goto LA15;
				goto LA2;
			}
			LA15: ;
		} LA3: ;
	} LA2: ;
	(*s).lineoffset += ((NI) 1);
	result = ((buflen <= (NI)(((*s).s ? (*s).s->Sup.len : 0) - (*s).rd)) ? buflen : (NI)(((*s).s ? (*s).s->Sup.len : 0) - (*s).rd));
	{
		if (!(((NI) 0) < result)) goto LA19;
		memcpy(buf, ((void*) ((&(*s).s->data[(*s).rd]))), ((NI) (result)));
		(*s).rd += result;
	}
	LA19: ;
	return result;
}

N_NIMCALL(NI, llstreamread_202530)(Tllstream202204* s, void* buf, NI buflen) {
	NI result;
	result = 0;
	switch ((*s).kind) {
	case ((NU8) 0):
	{
		result = ((NI) 0);
	}
	break;
	case ((NU8) 1):
	{
		result = ((buflen <= (NI)(((*s).s ? (*s).s->Sup.len : 0) - (*s).rd)) ? buflen : (NI)(((*s).s ? (*s).s->Sup.len : 0) - (*s).rd));
		{
			if (!(((NI) 0) < result)) goto LA5;
			memcpy(buf, ((void*) ((&(*s).s->data[(NI)(((NI) 0) + (*s).rd)]))), ((NI) (result)));
			(*s).rd += result;
		}
		LA5: ;
	}
	break;
	case ((NU8) 2):
	{
		result = readbuffer_15554((*s).f, buf, ((NI) (buflen)));
	}
	break;
	case ((NU8) 3):
	{
		result = llreadfromstdin_202486(s, buf, buflen);
	}
	break;
	}
	return result;
}

N_NIMCALL(Tllstream202204*, llstreamopen_202217)(NimStringDesc* data) {
	Tllstream202204* result;
	NimStringDesc* LOC1;
	result = 0;
	result = (Tllstream202204*) newObj((&NTI202206), sizeof(Tllstream202204));
	(*result).Sup.m_type = (&NTI202204);
	LOC1 = 0;
	LOC1 = (*result).s; (*result).s = copyStringRC1(data);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	(*result).kind = ((NU8) 1);
	return result;
}

N_NIMCALL(void, llstreamclose_202277)(Tllstream202204* s) {
	switch ((*s).kind) {
	case ((NU8) 0):
	case ((NU8) 1):
	case ((NU8) 3):
	{
	}
	break;
	case ((NU8) 2):
	{
		fclose((*s).f);
	}
	break;
	}
}

N_NIMCALL(void, llstreamwrite_202593)(Tllstream202204* s, NimStringDesc* data) {
	switch ((*s).kind) {
	case ((NU8) 0):
	case ((NU8) 3):
	{
	}
	break;
	case ((NU8) 1):
	{
		(*s).s = resizeString((*s).s, data->Sup.len + 0);
appendString((*s).s, data);
		(*s).wr += (data ? data->Sup.len : 0);
	}
	break;
	case ((NU8) 2):
	{
		write_15489((*s).f, data);
	}
	break;
	}
}

N_NIMCALL(NIM_BOOL, endswithopr_202432)(NimStringDesc* x) {
	NIM_BOOL result;
	result = 0;
	result = endswith_202401(x, TMP1530);
	return result;
}

N_NIMCALL(void, llstreamwrite_202612)(Tllstream202204* s, NIM_CHAR data) {
	NIM_CHAR c;
	c = 0;
	switch ((*s).kind) {
	case ((NU8) 0):
	case ((NU8) 3):
	{
	}
	break;
	case ((NU8) 1):
	{
		(*s).s = addChar((*s).s, data);
		(*s).wr += ((NI) 1);
	}
	break;
	case ((NU8) 2):
	{
		NI LOC4;
		c = data;
		LOC4 = 0;
		LOC4 = writebuffer_15576((*s).f, ((void*) ((&c))), ((NI) 1));
	}
	break;
	}
}

N_NIMCALL(void, llstreamwriteln_202608)(Tllstream202204* s, NimStringDesc* data) {
	llstreamwrite_202593(s, data);
	llstreamwrite_202593(s, ((NimStringDesc*) &TMP1237));
}

N_NIMCALL(Tllstream202204*, llstreamopen_202229)(FILE* f) {
	Tllstream202204* result;
	result = 0;
	result = (Tllstream202204*) newObj((&NTI202206), sizeof(Tllstream202204));
	(*result).Sup.m_type = (&NTI202204);
	(*result).f = f;
	(*result).kind = ((NU8) 2);
	return result;
}

N_NIMCALL(Tllstream202204*, llstreamopenstdin_202266)(void) {
	Tllstream202204* result;
	NimStringDesc* LOC1;
	result = 0;
	result = (Tllstream202204*) newObj((&NTI202206), sizeof(Tllstream202204));
	(*result).Sup.m_type = (&NTI202204);
	(*result).kind = ((NU8) 3);
	LOC1 = 0;
	LOC1 = (*result).s; (*result).s = copyStringRC1(((NimStringDesc*) &TMP1236));
	if (LOC1) nimGCunrefNoCycle(LOC1);
	(*result).lineoffset = ((NI) -1);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_llstreamInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_llstreamDatInit000)(void) {
static TNimNode* TMP1210[6];
static TNimNode* TMP1211[4];
NI TMP1213;
static char* NIM_CONST TMP1212[4] = {
"llsNone", 
"llsString", 
"llsFile", 
"llsStdIn"};
static TNimNode TMP795[13];
NTI202204.size = sizeof(Tllstream202204);
NTI202204.kind = 17;
NTI202204.base = (&NTI3608);
TMP1210[0] = &TMP795[1];
NTI202202.size = sizeof(NU8);
NTI202202.kind = 14;
NTI202202.base = 0;
NTI202202.flags = 3;
for (TMP1213 = 0; TMP1213 < 4; TMP1213++) {
TMP795[TMP1213+2].kind = 1;
TMP795[TMP1213+2].offset = TMP1213;
TMP795[TMP1213+2].name = TMP1212[TMP1213];
TMP1211[TMP1213] = &TMP795[TMP1213+2];
}
TMP795[6].len = 4; TMP795[6].kind = 2; TMP795[6].sons = &TMP1211[0];
NTI202202.node = &TMP795[6];
TMP795[1].kind = 1;
TMP795[1].offset = offsetof(Tllstream202204, kind);
TMP795[1].typ = (&NTI202202);
TMP795[1].name = "kind";
TMP1210[1] = &TMP795[7];
TMP795[7].kind = 1;
TMP795[7].offset = offsetof(Tllstream202204, f);
TMP795[7].typ = (&NTI15004);
TMP795[7].name = "f";
TMP1210[2] = &TMP795[8];
TMP795[8].kind = 1;
TMP795[8].offset = offsetof(Tllstream202204, s);
TMP795[8].typ = (&NTI138);
TMP795[8].name = "s";
TMP1210[3] = &TMP795[9];
TMP795[9].kind = 1;
TMP795[9].offset = offsetof(Tllstream202204, rd);
TMP795[9].typ = (&NTI104);
TMP795[9].name = "rd";
TMP1210[4] = &TMP795[10];
TMP795[10].kind = 1;
TMP795[10].offset = offsetof(Tllstream202204, wr);
TMP795[10].typ = (&NTI104);
TMP795[10].name = "wr";
TMP1210[5] = &TMP795[11];
TMP795[11].kind = 1;
TMP795[11].offset = offsetof(Tllstream202204, lineoffset);
TMP795[11].typ = (&NTI104);
TMP795[11].name = "lineOffset";
TMP795[0].len = 6; TMP795[0].kind = 2; TMP795[0].sons = &TMP1210[0];
NTI202204.node = &TMP795[0];
NTI202206.size = sizeof(Tllstream202204*);
NTI202206.kind = 22;
NTI202206.base = (&NTI202204);
NTI202206.marker = TMP1214;
NTI202404.size = sizeof(TY202404);
NTI202404.kind = 19;
NTI202404.base = (&NTI136);
NTI202404.flags = 3;
TMP795[12].len = 0; TMP795[12].kind = 0;
NTI202404.node = &TMP795[12];
}

