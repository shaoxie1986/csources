/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
typedef struct Stringtableobj140209 Stringtableobj140209;
typedef struct Tident190012 Tident190012;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tinfocpu168462 Tinfocpu168462;
typedef struct Tinfoos168037 Tinfoos168037;
typedef struct Tidobj190006 Tidobj190006;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Keyvaluepairseq140207 Keyvaluepairseq140207;
typedef struct Keyvaluepair140205 Keyvaluepair140205;
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
typedef struct Basechunk29637 Basechunk29637;
typedef struct Freecell29629 Freecell29629;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct Tinfocpu168462 {
NimStringDesc* Field0;
NI Field1;
NU8 Field2;
NI Field3;
NI Field4;
};
typedef Tinfocpu168462 TY168490[18];
struct Tinfoos168037 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
NimStringDesc* Field3;
NimStringDesc* Field4;
NimStringDesc* Field5;
NimStringDesc* Field6;
NimStringDesc* Field7;
NimStringDesc* Field8;
NimStringDesc* Field9;
NimStringDesc* Field10;
NimStringDesc* Field11;
NU8 Field12;
};
typedef Tinfoos168037 TY168069[24];
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
struct  Tidobj190006  {
  TNimObject Sup;
NI id;
};
struct  Tident190012  {
  Tidobj190006 Sup;
NimStringDesc* s;
Tident190012* next;
NI h;
};
struct  Stringtableobj140209  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq140207* data;
NU8 mode;
};
struct Keyvaluepair140205 {
NimStringDesc* Field0;
NimStringDesc* Field1;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
struct Keyvaluepairseq140207 {
  TGenericSeq Sup;
  Keyvaluepair140205 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NIM_BOOL, isdefined_191010)(NimStringDesc* symbol);
N_NIMCALL(NIM_BOOL, nsthasKey)(Stringtableobj140209* t, NimStringDesc* key);
N_NIMCALL(NimStringDesc**, nstTake)(Stringtableobj140209* t, NimStringDesc* key);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* s);
N_NIMCALL(NI, hashString)(NimStringDesc* s);
N_NIMCALL(Stringtableobj140209*, nstnewStringTable)(NU8 mode);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_53819)(Cell47505* c);
static N_INLINE(NIM_BOOL, canbecycleroot_51458)(Cell47505* c);
static N_INLINE(void, rtladdcycleroot_52220)(Cell47505* c);
N_NOINLINE(void, incl_48247)(Cellset47517* s, Cell47505* cell);
static N_INLINE(Cell47505*, usrtocell_51440)(void* usr);
static N_INLINE(void, decref_53401)(Cell47505* c);
static N_INLINE(void, rtladdzct_53001)(Cell47505* c);
N_NOINLINE(void, addzct_51417)(Cellseq47521* s, Cell47505* c);
N_NIMCALL(void, definesymbol_191004)(NimStringDesc* symbol);
N_NIMCALL(void, nstPut)(Stringtableobj140209* t, NimStringDesc* key, NimStringDesc* val);
STRING_LITERAL(TMP1591, "false", 5);
extern NIM_CONST TY168490 Cpu_168476;
extern NIM_CONST TY168069 Os_168055;
STRING_LITERAL(TMP1592, "x86", 3);
STRING_LITERAL(TMP1593, "itanium", 7);
STRING_LITERAL(TMP1594, "x8664", 5);
STRING_LITERAL(TMP1595, "posix", 5);
STRING_LITERAL(TMP1596, "unix", 4);
STRING_LITERAL(TMP1597, "bsd", 3);
STRING_LITERAL(TMP1598, "emulatedthreadvars", 18);
STRING_LITERAL(TMP1599, "msdos", 5);
STRING_LITERAL(TMP1600, "mswindows", 9);
STRING_LITERAL(TMP1601, "win32", 5);
STRING_LITERAL(TMP1602, "macintosh", 9);
STRING_LITERAL(TMP1603, "sunos", 5);
STRING_LITERAL(TMP1604, "littleendian", 12);
STRING_LITERAL(TMP1605, "bigendian", 9);
STRING_LITERAL(TMP1606, "cpu8", 4);
STRING_LITERAL(TMP1607, "cpu16", 5);
STRING_LITERAL(TMP1608, "cpu32", 5);
STRING_LITERAL(TMP1609, "cpu64", 5);
STRING_LITERAL(TMP1610, "nimrawsetjmp", 12);
STRING_LITERAL(TMP1639, "true", 4);
STRING_LITERAL(TMP1640, "nimrod", 6);
STRING_LITERAL(TMP1641, "nimhygiene", 10);
STRING_LITERAL(TMP1642, "niminheritable", 14);
STRING_LITERAL(TMP1643, "nimmixin", 8);
STRING_LITERAL(TMP1644, "nimeffects", 10);
STRING_LITERAL(TMP1645, "nimbabel", 8);
STRING_LITERAL(TMP1646, "nimcomputedgoto", 15);
STRING_LITERAL(TMP1647, "nimunion", 8);
STRING_LITERAL(TMP1648, "nimnewshared", 12);
STRING_LITERAL(TMP1649, "nimrequiresnimframe", 19);
STRING_LITERAL(TMP1650, "nimparsebiggestfloatmagic", 25);
STRING_LITERAL(TMP1651, "nimalias", 8);
STRING_LITERAL(TMP1652, "nimlocks", 8);
STRING_LITERAL(TMP1653, "nimnode", 7);
STRING_LITERAL(TMP1654, "nimnomagic64", 12);
STRING_LITERAL(TMP1655, "nimvarargstyped", 15);
STRING_LITERAL(TMP1656, "nimtypedescfixed", 16);
STRING_LITERAL(TMP1657, "nimKnowsNimvm", 13);
STRING_LITERAL(TMP1658, "nimArrIdx", 9);
Stringtableobj140209* gsymbols_191001;
extern NU8 targetcpu_168601;
extern NU8 targetos_168603;
extern Gcheap49818 gch_49859;

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

N_NIMCALL(NIM_BOOL, isdefined_191010)(NimStringDesc* symbol) {
	NIM_BOOL result;
	result = 0;
	{
		NIM_BOOL LOC3;
		NimStringDesc** LOC6;
		LOC3 = 0;
		LOC3 = nsthasKey(gsymbols_191001, symbol);
		if (!LOC3) goto LA4;
		LOC6 = 0;
		LOC6 = nstTake(gsymbols_191001, symbol);
		result = !(eqStrings((*LOC6), ((NimStringDesc*) &TMP1591)));
	}
	goto LA1;
	LA4: ;
	{
		NI LOC8;
		LOC8 = 0;
		LOC8 = nsuCmpIgnoreStyle(symbol, Cpu_168476[(targetcpu_168601)- 1].Field0);
		if (!(LOC8 == ((NI) 0))) goto LA9;
		result = NIM_TRUE;
	}
	goto LA1;
	LA9: ;
	{
		NI LOC12;
		LOC12 = 0;
		LOC12 = nsuCmpIgnoreStyle(symbol, Os_168055[(targetos_168603)- 1].Field0);
		if (!(LOC12 == ((NI) 0))) goto LA13;
		result = NIM_TRUE;
	}
	goto LA1;
	LA13: ;
	{
		NimStringDesc* LOC16;
		LOC16 = 0;
		LOC16 = nsuNormalize(symbol);
		switch (hashString(LOC16) & 31) {
		case 2: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1602))) goto LA25;
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1608))) goto LA31;
break;
		case 6: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1597))) goto LA21;
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1605))) goto LA28;
break;
		case 7: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1594))) goto LA19;
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1604))) goto LA27;
break;
		case 8: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1601))) goto LA24;
break;
		case 11: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1599))) goto LA23;
break;
		case 13: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1603))) goto LA26;
break;
		case 15: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1592))) goto LA17;
break;
		case 17: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1598))) goto LA22;
break;
		case 19: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1596))) goto LA20;
break;
		case 20: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1610))) goto LA33;
break;
		case 22: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1606))) goto LA29;
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1607))) goto LA30;
break;
		case 25: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1609))) goto LA32;
break;
		case 27: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1593))) goto LA18;
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1600))) goto LA24;
break;
		case 30: 
if (eqStrings(LOC16, ((NimStringDesc*) &TMP1595))) goto LA20;
break;
		}
		goto LA34;
		LA17: ;
		{
			result = (targetcpu_168601 == ((NU8) 1));
		}
		goto LA35;
		LA18: ;
		{
			result = (targetcpu_168601 == ((NU8) 9));
		}
		goto LA35;
		LA19: ;
		{
			result = (targetcpu_168601 == ((NU8) 10));
		}
		goto LA35;
		LA20: ;
		{
			result = ((3768304 &(1U<<((NU)(targetos_168603)&31U)))!=0);
		}
		goto LA35;
		LA21: ;
		{
			result = ((3584 &(1U<<((NU)(targetos_168603)&31U)))!=0);
		}
		goto LA35;
		LA22: ;
		{
			result = ((Os_168055[(targetos_168603)- 1].Field12 &(1U<<((NU)(((NU8) 3))&7U)))!=0);
		}
		goto LA35;
		LA23: ;
		{
			result = (targetos_168603 == ((NU8) 1));
		}
		goto LA35;
		LA24: ;
		{
			result = (targetos_168603 == ((NU8) 2));
		}
		goto LA35;
		LA25: ;
		{
			result = ((786432 &(1U<<((NU)(targetos_168603)&31U)))!=0);
		}
		goto LA35;
		LA26: ;
		{
			result = (targetos_168603 == ((NU8) 7));
		}
		goto LA35;
		LA27: ;
		{
			result = (Cpu_168476[(targetcpu_168601)- 1].Field2 == ((NU8) 0));
		}
		goto LA35;
		LA28: ;
		{
			result = (Cpu_168476[(targetcpu_168601)- 1].Field2 == ((NU8) 1));
		}
		goto LA35;
		LA29: ;
		{
			result = (Cpu_168476[(targetcpu_168601)- 1].Field4 == ((NI) 8));
		}
		goto LA35;
		LA30: ;
		{
			result = (Cpu_168476[(targetcpu_168601)- 1].Field4 == ((NI) 16));
		}
		goto LA35;
		LA31: ;
		{
			result = (Cpu_168476[(targetcpu_168601)- 1].Field4 == ((NI) 32));
		}
		goto LA35;
		LA32: ;
		{
			result = (Cpu_168476[(targetcpu_168601)- 1].Field4 == ((NI) 64));
		}
		goto LA35;
		LA33: ;
		{
			result = ((528000 &(1U<<((NU)(targetos_168603)&31U)))!=0);
		}
		goto LA35;
		LA34: ;
		{
		}
		LA35: ;
	}
	LA1: ;
	return result;
}

N_NIMCALL(NIM_BOOL, isdefined_191140)(Tident190012* symbol) {
	NIM_BOOL result;
	result = 0;
	result = isdefined_191010((*symbol).s);
	return result;
}

N_NIMCALL(NI, countdefinedsymbols_191159)(void) {
	NI result;
	result = 0;
	result = ((NI) 0);
	{
		NimStringDesc* key_191162;
		NimStringDesc* val_191163;
		key_191162 = 0;
		val_191163 = 0;
		{
			NI h_191177;
			NI HEX3Atmp_191179;
			NI res_191181;
			h_191177 = 0;
			HEX3Atmp_191179 = 0;
			HEX3Atmp_191179 = ((*gsymbols_191001).data ? ((*gsymbols_191001).data->Sup.len-1) : -1);
			res_191181 = ((NI) 0);
			{
				while (1) {
					if (!(res_191181 <= HEX3Atmp_191179)) goto LA4;
					h_191177 = res_191181;
					{
						if (!!((*gsymbols_191001).data->data[h_191177].Field0 == 0)) goto LA7;
						key_191162 = (*gsymbols_191001).data->data[h_191177].Field0;
						val_191163 = (*gsymbols_191001).data->data[h_191177].Field1;
						{
							if (!!(eqStrings(val_191163, ((NimStringDesc*) &TMP1591)))) goto LA11;
							result += ((NI) 1);
						}
						LA11: ;
					}
					LA7: ;
					res_191181 += ((NI) 1);
				} LA4: ;
			}
		}
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

N_NIMCALL(void, definesymbol_191004)(NimStringDesc* symbol) {
	nstPut(gsymbols_191001, symbol, ((NimStringDesc*) &TMP1639));
}

N_NIMCALL(void, initdefines_191184)(void) {
	asgnRef((void**) (&gsymbols_191001), nstnewStringTable(((NU8) 2)));
	definesymbol_191004(((NimStringDesc*) &TMP1640));
	definesymbol_191004(((NimStringDesc*) &TMP1641));
	definesymbol_191004(((NimStringDesc*) &TMP1642));
	definesymbol_191004(((NimStringDesc*) &TMP1643));
	definesymbol_191004(((NimStringDesc*) &TMP1644));
	definesymbol_191004(((NimStringDesc*) &TMP1645));
	definesymbol_191004(((NimStringDesc*) &TMP1646));
	definesymbol_191004(((NimStringDesc*) &TMP1647));
	definesymbol_191004(((NimStringDesc*) &TMP1648));
	definesymbol_191004(((NimStringDesc*) &TMP1649));
	definesymbol_191004(((NimStringDesc*) &TMP1650));
	definesymbol_191004(((NimStringDesc*) &TMP1651));
	definesymbol_191004(((NimStringDesc*) &TMP1652));
	definesymbol_191004(((NimStringDesc*) &TMP1653));
	definesymbol_191004(((NimStringDesc*) &TMP1654));
	definesymbol_191004(((NimStringDesc*) &TMP1655));
	definesymbol_191004(((NimStringDesc*) &TMP1656));
	definesymbol_191004(((NimStringDesc*) &TMP1657));
	definesymbol_191004(((NimStringDesc*) &TMP1658));
}

N_NIMCALL(void, undefsymbol_191007)(NimStringDesc* symbol) {
	nstPut(gsymbols_191001, symbol, ((NimStringDesc*) &TMP1591));
}
NIM_EXTERNC N_NOINLINE(void, compiler_condsymsInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_condsymsDatInit000)(void) {
}

