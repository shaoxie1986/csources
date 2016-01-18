/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tlistentry135010 Tlistentry135010;
typedef struct TNimObject TNimObject;
typedef struct Tlinkedlist135016 Tlinkedlist135016;
typedef struct Cell47505 Cell47505;
typedef struct Cellset47517 Cellset47517;
typedef struct Gcheap49818 Gcheap49818;
typedef struct Gcstack49816 Gcstack49816;
typedef struct Cellseq47521 Cellseq47521;
typedef struct Pagedesc47513 Pagedesc47513;
typedef struct Memregion29687 Memregion29687;
typedef struct Smallchunk29639 Smallchunk29639;
typedef struct Llchunk29681 Llchunk29681;
typedef struct Bigchunk29641 Bigchunk29641;
typedef struct Intset29614 Intset29614;
typedef struct Trunk29610 Trunk29610;
typedef struct Avlnode29685 Avlnode29685;
typedef struct Gcstat49814 Gcstat49814;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tstrentry135012 Tstrentry135012;
typedef struct Basechunk29637 Basechunk29637;
typedef struct Freecell29629 Freecell29629;
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
struct  Tlistentry135010  {
  TNimObject Sup;
Tlistentry135010* prev;
Tlistentry135010* next;
};
struct  Tlinkedlist135016  {
Tlistentry135010* head;
Tlistentry135010* tail;
NI counter;
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
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tstrentry135012  {
  Tlistentry135010 Sup;
NimStringDesc* data;
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
struct  Freecell29629  {
Freecell29629* next;
NI zerofield;
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP860)(void* p, NI op);
N_NIMCALL(void, remove_135633)(Tlinkedlist135016* list, Tlistentry135010* entry);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_53819)(Cell47505* c);
static N_INLINE(NIM_BOOL, canbecycleroot_51458)(Cell47505* c);
static N_INLINE(void, rtladdcycleroot_52220)(Cell47505* c);
N_NOINLINE(void, incl_48247)(Cellset47517* s, Cell47505* cell);
static N_INLINE(Cell47505*, usrtocell_51440)(void* usr);
static N_INLINE(void, decref_53401)(Cell47505* c);
static N_INLINE(void, rtladdzct_53001)(Cell47505* c);
N_NOINLINE(void, addzct_51417)(Cellseq47521* s, Cell47505* c);
N_NIMCALL(void, prepend_135255)(Tlinkedlist135016* list, Tlistentry135010* entry);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(Tstrentry135012*, newstrentry_135232)(NimStringDesc* data);
N_NIMCALL(void, TMP1787)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
N_NIMCALL(NI, noscmpPaths)(NimStringDesc* patha, NimStringDesc* pathb);
N_NIMCALL(void, append_135032)(Tlinkedlist135016* list, Tlistentry135010* entry);
N_NIMCALL(NIM_BOOL, contains_135213)(Tlinkedlist135016 list, NimStringDesc* data);
N_NIMCALL(void, appendstr_135244)(Tlinkedlist135016* list, NimStringDesc* data);
extern TNimType NTI3608; /* RootObj */
TNimType NTI135010; /* TListEntry */
TNimType NTI135008; /* PListEntry */
TNimType NTI135016; /* TLinkedList */
extern TNimType NTI104; /* int */
extern Gcheap49818 gch_49859;
TNimType NTI135012; /* TStrEntry */
extern TNimType NTI138; /* string */
TNimType NTI135014; /* PStrEntry */
N_NIMCALL(void, TMP860)(void* p, NI op) {
	Tlistentry135010* a;
	a = (Tlistentry135010*)p;
	nimGCvisit((void*)(*a).prev, op);
	nimGCvisit((void*)(*a).next, op);
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

static N_INLINE(Cell47505*, usrtocell_51440)(void* usr) {
	Cell47505* result;
	result = 0;
	result = ((Cell47505*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Cell47505))))));
	return result;
}

static N_INLINE(void, rtladdzct_53001)(Cell47505* c) {
	addzct_51417((&gch_49859.zct), c);
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

N_NIMCALL(void, remove_135633)(Tlinkedlist135016* list, Tlistentry135010* entry) {
	(*list).counter -= ((NI) 1);
	{
		if (!(entry == (*list).tail)) goto LA3;
		unsureAsgnRef((void**) (&(*list).tail), (*entry).prev);
	}
	LA3: ;
	{
		if (!(entry == (*list).head)) goto LA7;
		unsureAsgnRef((void**) (&(*list).head), (*entry).next);
	}
	LA7: ;
	{
		if (!!(((*entry).next == NIM_NIL))) goto LA11;
		asgnRef((void**) (&(*(*entry).next).prev), (*entry).prev);
	}
	LA11: ;
	{
		if (!!(((*entry).prev == NIM_NIL))) goto LA15;
		asgnRef((void**) (&(*(*entry).prev).next), (*entry).next);
	}
	LA15: ;
}

N_NIMCALL(void, prepend_135255)(Tlinkedlist135016* list, Tlistentry135010* entry) {
	(*list).counter += ((NI) 1);
	asgnRef((void**) (&(*entry).prev), NIM_NIL);
	asgnRef((void**) (&(*entry).next), (*list).head);
	{
		if (!!(((*list).head == NIM_NIL))) goto LA3;
		asgnRef((void**) (&(*(*list).head).prev), entry);
	}
	LA3: ;
	unsureAsgnRef((void**) (&(*list).head), entry);
	{
		if (!((*list).tail == NIM_NIL)) goto LA7;
		unsureAsgnRef((void**) (&(*list).tail), entry);
	}
	LA7: ;
}

N_NIMCALL(void, bringtofront_135693)(Tlinkedlist135016* list, Tlistentry135010* entry) {
	remove_135633(list, entry);
	prepend_135255(list, entry);
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

N_NIMCALL(NIM_BOOL, contains_135213)(Tlinkedlist135016 list, NimStringDesc* data) {
	NIM_BOOL result;
	Tlistentry135010* it;
{	result = 0;
	it = list.head;
	{
		while (1) {
			if (!!((it == NIM_NIL))) goto LA2;
			{
				if (!eqStrings((*((Tstrentry135012*) (it))).data, data)) goto LA5;
				result = NIM_TRUE;
				goto BeforeRet;
			}
			LA5: ;
			it = (*it).next;
		} LA2: ;
	}
	}BeforeRet: ;
	return result;
}
N_NIMCALL(void, TMP1787)(void* p, NI op) {
	Tstrentry135012* a;
	a = (Tstrentry135012*)p;
	nimGCvisit((void*)(*a).Sup.prev, op);
	nimGCvisit((void*)(*a).Sup.next, op);
	nimGCvisit((void*)(*a).data, op);
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

N_NIMCALL(Tstrentry135012*, newstrentry_135232)(NimStringDesc* data) {
	Tstrentry135012* result;
	NimStringDesc* LOC1;
	result = 0;
	result = (Tstrentry135012*) newObj((&NTI135014), sizeof(Tstrentry135012));
	(*result).Sup.Sup.m_type = (&NTI135012);
	LOC1 = 0;
	LOC1 = (*result).data; (*result).data = copyStringRC1(data);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	return result;
}

N_NIMCALL(void, prependstr_135413)(Tlinkedlist135016* list, NimStringDesc* data) {
	Tstrentry135012* LOC1;
	Tlistentry135010* LOC2;
	LOC1 = 0;
	LOC1 = newstrentry_135232(data);
	LOC2 = 0;
	LOC2 = &LOC1->Sup;
	prepend_135255(list, LOC2);
}

N_NIMCALL(void, excludepath_135801)(Tlinkedlist135016* list, NimStringDesc* data) {
	Tlistentry135010* it;
	it = (*list).head;
	{
		while (1) {
			Tlistentry135010* nxt;
			if (!!((it == NIM_NIL))) goto LA2;
			nxt = (*it).next;
			{
				NI LOC5;
				LOC5 = 0;
				LOC5 = noscmpPaths((*((Tstrentry135012*) (it))).data, data);
				if (!(LOC5 == ((NI) 0))) goto LA6;
				remove_135633(list, it);
			}
			LA6: ;
			it = nxt;
		} LA2: ;
	}
}

N_NIMCALL(void, append_135032)(Tlinkedlist135016* list, Tlistentry135010* entry) {
	(*list).counter += ((NI) 1);
	asgnRef((void**) (&(*entry).next), NIM_NIL);
	asgnRef((void**) (&(*entry).prev), (*list).tail);
	{
		if (!!(((*list).tail == NIM_NIL))) goto LA3;
		asgnRef((void**) (&(*(*list).tail).next), entry);
	}
	LA3: ;
	unsureAsgnRef((void**) (&(*list).tail), entry);
	{
		if (!((*list).head == NIM_NIL)) goto LA7;
		unsureAsgnRef((void**) (&(*list).head), entry);
	}
	LA7: ;
}

N_NIMCALL(void, appendstr_135244)(Tlinkedlist135016* list, NimStringDesc* data) {
	Tstrentry135012* LOC1;
	Tlistentry135010* LOC2;
	LOC1 = 0;
	LOC1 = newstrentry_135232(data);
	LOC2 = 0;
	LOC2 = &LOC1->Sup;
	append_135032(list, LOC2);
}

N_NIMCALL(void, initlinkedlist_135028)(Tlinkedlist135016* list) {
	(*list).counter = ((NI) 0);
	unsureAsgnRef((void**) (&(*list).head), NIM_NIL);
	unsureAsgnRef((void**) (&(*list).tail), NIM_NIL);
}

N_NIMCALL(NIM_BOOL, includestr_135249)(Tlinkedlist135016* list, NimStringDesc* data) {
	NIM_BOOL result;
{	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = contains_135213((*list), data);
		if (!LOC3) goto LA4;
		result = NIM_TRUE;
		goto BeforeRet;
	}
	LA4: ;
	appendstr_135244(list, data);
	}BeforeRet: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_listsInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_listsDatInit000)(void) {
static TNimNode* TMP859[2];
static TNimNode* TMP1168[3];
static TNimNode TMP23[8];
NTI135010.size = sizeof(Tlistentry135010);
NTI135010.kind = 17;
NTI135010.base = (&NTI3608);
TMP859[0] = &TMP23[1];
NTI135008.size = sizeof(Tlistentry135010*);
NTI135008.kind = 22;
NTI135008.base = (&NTI135010);
NTI135008.marker = TMP860;
TMP23[1].kind = 1;
TMP23[1].offset = offsetof(Tlistentry135010, prev);
TMP23[1].typ = (&NTI135008);
TMP23[1].name = "prev";
TMP859[1] = &TMP23[2];
TMP23[2].kind = 1;
TMP23[2].offset = offsetof(Tlistentry135010, next);
TMP23[2].typ = (&NTI135008);
TMP23[2].name = "next";
TMP23[0].len = 2; TMP23[0].kind = 2; TMP23[0].sons = &TMP859[0];
NTI135010.node = &TMP23[0];
NTI135016.size = sizeof(Tlinkedlist135016);
NTI135016.kind = 18;
NTI135016.base = 0;
TMP1168[0] = &TMP23[4];
TMP23[4].kind = 1;
TMP23[4].offset = offsetof(Tlinkedlist135016, head);
TMP23[4].typ = (&NTI135008);
TMP23[4].name = "head";
TMP1168[1] = &TMP23[5];
TMP23[5].kind = 1;
TMP23[5].offset = offsetof(Tlinkedlist135016, tail);
TMP23[5].typ = (&NTI135008);
TMP23[5].name = "tail";
TMP1168[2] = &TMP23[6];
TMP23[6].kind = 1;
TMP23[6].offset = offsetof(Tlinkedlist135016, counter);
TMP23[6].typ = (&NTI104);
TMP23[6].name = "counter";
TMP23[3].len = 3; TMP23[3].kind = 2; TMP23[3].sons = &TMP1168[0];
NTI135016.node = &TMP23[3];
NTI135012.size = sizeof(Tstrentry135012);
NTI135012.kind = 17;
NTI135012.base = (&NTI135010);
TMP23[7].kind = 1;
TMP23[7].offset = offsetof(Tstrentry135012, data);
TMP23[7].typ = (&NTI138);
TMP23[7].name = "data";
NTI135012.node = &TMP23[7];
NTI135014.size = sizeof(Tstrentry135012*);
NTI135014.kind = 22;
NTI135014.base = (&NTI135012);
NTI135014.marker = TMP1787;
}

