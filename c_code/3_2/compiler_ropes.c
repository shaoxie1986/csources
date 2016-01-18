/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Ropeobj168006 Ropeobj168006;
typedef struct TNimObject TNimObject;
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
typedef struct TY181350 TY181350;
typedef struct Basechunk29838 Basechunk29838;
typedef struct Freecell29830 Freecell29830;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (NU8 err, NimStringDesc* msg, NIM_BOOL usewarning, void* ClEnv);
void* ClEnv;
} TY168017;
typedef Ropeobj168006* TY168072[4096];
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
struct  Ropeobj168006  {
  TNimObject Sup;
Ropeobj168006* left;
Ropeobj168006* right;
NI length;
NimStringDesc* data;
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
typedef Ropeobj168006* TY168507[1];
typedef N_CLOSURE_PTR(void, TMP3756) (NU8 err, NimStringDesc* msg, NIM_BOOL usewarning);
typedef N_CLOSURE_PTR(void, TMP3757) (NU8 err, NimStringDesc* msg, NIM_BOOL usewarning);
typedef N_CLOSURE_PTR(void, TMP3758) (NU8 err, NimStringDesc* msg, NIM_BOOL usewarning);
typedef N_CLOSURE_PTR(void, TMP3759) (NU8 err, NimStringDesc* msg, NIM_BOOL usewarning);
typedef N_CLOSURE_PTR(void, TMP4585) (NU8 err, NimStringDesc* msg, NIM_BOOL usewarning);
typedef NIM_CHAR TY169409[1024];
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
struct  Freecell29830  {
Freecell29830* next;
NI zerofield;
};
struct TY181350 {
  TGenericSeq Sup;
  Ropeobj168006* data[SEQ_DECL_SIZE];
};
N_NIMCALL(Ropeobj168006*, newrope_168041)(NimStringDesc* data);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP131)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Cell47705*, usrtocell_51640)(void* usr);
static N_INLINE(void, rtladdzct_53201)(Cell47705* c);
N_NOINLINE(void, addzct_51617)(Cellseq47721* s, Cell47705* c);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(Ropeobj168006*, HEX26_168418)(Ropeobj168006* a, Ropeobj168006* b);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(Ropeobj168006*, insertincache_168241)(NimStringDesc* s);
N_NIMCALL(NI, hash_137827)(NimStringDesc* x);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NI, len_168025)(Ropeobj168006* a);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
static N_INLINE(Ropeobj168006*, pop_168530)(TY181350** s);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemsize, NI newlen);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq, NI elemsize);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(Ropeobj168006*, HEX26_168447)(Ropeobj168006* a, NimStringDesc* b);
N_NIMCALL(Ropeobj168006*, rope_168277)(NimStringDesc* s);
N_NIMCALL(void, add_168487)(Ropeobj168006** a, NimStringDesc* b);
N_NIMCALL(void, add_168482)(Ropeobj168006** a, Ropeobj168006* b);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_NIMCALL(NimStringDesc*, nimCharToStr)(NIM_CHAR x);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_80010, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, nimInt64ToStr)(NI64 x);
N_NIMCALL(Ropeobj168006*, HEX25_168905)(NimStringDesc* frmt, Ropeobj168006** args, NI argsLen0);
N_NIMCALL(NIM_BOOL, open_15603)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(void, writerope_168822)(FILE* f, Ropeobj168006* r);
N_NIMCALL(void, write_15689)(FILE* f, NimStringDesc* s);
N_NIMCALL(NIM_BOOL, equalsfile_169483)(Ropeobj168006* r, NimStringDesc* filename);
N_NIMCALL(NIM_BOOL, equalsfile_169403)(Ropeobj168006* r, FILE* f);
N_NIMCALL(NI, readbuffer_15754)(FILE* f, void* buffer, NI len);
N_NIMCALL(void, writerope_168836)(Ropeobj168006* head, NimStringDesc* filename, NIM_BOOL usewarning);
STRING_LITERAL(TMP3755, "$", 1);
TY168017 errorhandler_168022;
TY168072 cache_168073;
NI gcachetries_168238;
NI gcachemisses_168239;
NI gcacheinttries_168240;
Ropeobj168006* rnl_168903;
extern TNimType NTI3608; /* RootObj */
TNimType NTI168006; /* RopeObj */
extern TNimType NTI104; /* int */
extern TNimType NTI138; /* string */
TNimType NTI168004; /* Rope */
extern Gcheap50018 gch_50059;
extern NimStringDesc* tnl_166618;
Ropeobj168006* softrnl_168904;
extern TNimType NTI181350; /* seq[Rope] */
N_NIMCALL(void, TMP131)(void* p, NI op) {
	Ropeobj168006* a;
	a = (Ropeobj168006*)p;
	nimGCvisit((void*)(*a).left, op);
	nimGCvisit((void*)(*a).right, op);
	nimGCvisit((void*)(*a).data, op);
}

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

N_NIMCALL(Ropeobj168006*, newrope_168041)(NimStringDesc* data) {
	Ropeobj168006* result;
	result = 0;
	result = (Ropeobj168006*) newObj((&NTI168004), sizeof(Ropeobj168006));
	(*result).Sup.m_type = (&NTI168006);
	{
		NimStringDesc* LOC5;
		if (!!((data == NIM_NIL))) goto LA3;
		(*result).length = (data ? data->Sup.len : 0);
		LOC5 = 0;
		LOC5 = (*result).data; (*result).data = copyStringRC1(data);
		if (LOC5) nimGCunrefNoCycle(LOC5);
	}
	LA3: ;
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

N_NIMCALL(Ropeobj168006*, HEX26_168418)(Ropeobj168006* a, Ropeobj168006* b) {
	Ropeobj168006* result;
	result = 0;
	{
		if (!(a == NIM_NIL)) goto LA3;
		result = b;
	}
	goto LA1;
	LA3: ;
	{
		if (!(b == NIM_NIL)) goto LA6;
		result = a;
	}
	goto LA1;
	LA6: ;
	{
		result = newrope_168041(NIM_NIL);
		(*result).length = (NI)((*a).length + (*b).length);
		asgnRefNoCycle((void**) (&(*result).left), a);
		asgnRefNoCycle((void**) (&(*result).right), b);
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, add_168482)(Ropeobj168006** a, Ropeobj168006* b) {
	unsureAsgnRef((void**) (&(*a)), HEX26_168418((*a), b));
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

N_NIMCALL(Ropeobj168006*, insertincache_168241)(NimStringDesc* s) {
	Ropeobj168006* result;
	NI h;
	NI LOC1;
	result = 0;
	gcachetries_168238 += ((NI) 1);
	LOC1 = 0;
	LOC1 = hash_137827(s);
	h = (NI)(LOC1 & ((NI) 4095));
	result = cache_168073[(h)- 0];
	{
		NIM_BOOL LOC4;
		LOC4 = 0;
		LOC4 = result == 0;
		if (LOC4) goto LA5;
		LOC4 = !(eqStrings((*result).data, s));
		LA5: ;
		if (!LOC4) goto LA6;
		gcachemisses_168239 += ((NI) 1);
		result = newrope_168041(s);
		asgnRefNoCycle((void**) (&cache_168073[(h)- 0]), result);
	}
	LA6: ;
	return result;
}

N_NIMCALL(Ropeobj168006*, rope_168277)(NimStringDesc* s) {
	Ropeobj168006* result;
	result = 0;
	{
		if (!((s ? s->Sup.len : 0) == ((NI) 0))) goto LA3;
		result = NIM_NIL;
	}
	goto LA1;
	LA3: ;
	{
		result = insertincache_168241(s);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NI, len_168025)(Ropeobj168006* a) {
	NI result;
	result = 0;
	{
		if (!(a == NIM_NIL)) goto LA3;
		result = ((NI) 0);
	}
	goto LA1;
	LA3: ;
	{
		result = (*a).length;
	}
	LA1: ;
	return result;
}

static N_INLINE(Ropeobj168006*, pop_168530)(TY181350** s) {
	Ropeobj168006* result;
	NI L;
	result = 0;
	L = (NI)(((*s) ? (*s)->Sup.len : 0) - ((NI) 1));
	result = (*s)->data[L];
	(*s) = (TY181350*) setLengthSeq(&((*s))->Sup, sizeof(Ropeobj168006*), ((NI) (L)));
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, HEX24_168856)(Ropeobj168006* r) {
	NimStringDesc* result;
	NI LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = len_168025(r);
	result = mnewString(((NI) (LOC1)));
	result = setLengthStr(result, ((NI) 0));
	{
		NimStringDesc* s_168860;
		s_168860 = 0;
		{
			TY181350* stack_168865;
			TY168507 LOC7;
			if (!!((r == NIM_NIL))) goto LA5;
			stack_168865 = (TY181350*) newSeq((&NTI181350), 1);
			memset((void*)LOC7, 0, sizeof(LOC7));
			LOC7[0] = r;
			asgnRefNoCycle((void**) (&stack_168865->data[0]), LOC7[0]);
			{
				while (1) {
					Ropeobj168006* it_168867;
					if (!(((NI) 0) < (stack_168865 ? stack_168865->Sup.len : 0))) goto LA9;
					it_168867 = pop_168530((&stack_168865));
					{
						while (1) {
							if (!(*it_168867).data == 0) goto LA11;
							stack_168865 = (TY181350*) incrSeqV2(&(stack_168865)->Sup, sizeof(Ropeobj168006*));
							asgnRefNoCycle((void**) (&stack_168865->data[stack_168865->Sup.len]), (*it_168867).right);
							++stack_168865->Sup.len;
							it_168867 = (*it_168867).left;
						} LA11: ;
					}
					s_168860 = (*it_168867).data;
					result = resizeString(result, s_168860->Sup.len + 0);
appendString(result, s_168860);
				} LA9: ;
			}
		}
		LA5: ;
	}
	return result;
}

N_NIMCALL(Ropeobj168006*, HEX26_168447)(Ropeobj168006* a, NimStringDesc* b) {
	Ropeobj168006* result;
	Ropeobj168006* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = rope_168277(b);
	result = HEX26_168418(a, LOC1);
	return result;
}

N_NIMCALL(void, add_168487)(Ropeobj168006** a, NimStringDesc* b) {
	unsureAsgnRef((void**) (&(*a)), HEX26_168447((*a), b));
}

N_NIMCALL(Ropeobj168006*, HEX25_168905)(NimStringDesc* frmt, Ropeobj168006** args, NI argsLen0) {
	Ropeobj168006* result;
	NI i;
	NI length;
	NI num;
	result = 0;
	i = ((NI) 0);
	length = (frmt ? frmt->Sup.len : 0);
	result = NIM_NIL;
	num = ((NI) 0);
	{
		while (1) {
			NI start;
			if (!(i < length)) goto LA2;
			{
				if (!((NU8)(frmt->data[i]) == (NU8)(36))) goto LA5;
				i += ((NI) 1);
				switch (((NU8)(frmt->data[i]))) {
				case 36:
				{
					add_168487(&result, ((NimStringDesc*) &TMP3755));
					i += ((NI) 1);
				}
				break;
				case 35:
				{
					i += ((NI) 1);
					add_168482(&result, args[num]);
					num += ((NI) 1);
				}
				break;
				case 48 ... 57:
				{
					NI j;
					j = ((NI) 0);
					{
						while (1) {
							j = (NI)((NI)((NI)(j * ((NI) 10)) + ((NI) (((NU8)(frmt->data[i]))))) - ((NI) 48));
							i += ((NI) 1);
							{
								if (!!((((NU8)(frmt->data[i])) >= ((NU8)(48)) && ((NU8)(frmt->data[i])) <= ((NU8)(57))))) goto LA14;
								goto LA10;
							}
							LA14: ;
						}
					} LA10: ;
					num = j;
					{
						NimStringDesc* LOC20;
						if (!((NI)((argsLen0-1) + ((NI) 1)) < j)) goto LA18;
						LOC20 = 0;
						LOC20 = nimIntToStr(j);
						errorhandler_168022.ClEnv? errorhandler_168022.ClPrc(((NU8) 1), LOC20, NIM_FALSE, errorhandler_168022.ClEnv):((TMP3756)(errorhandler_168022.ClPrc))(((NU8) 1), LOC20, NIM_FALSE);
					}
					goto LA16;
					LA18: ;
					{
						add_168482(&result, args[(NI)(j - ((NI) 1))]);
					}
					LA16: ;
				}
				break;
				case 123:
				{
					NI j;
					i += ((NI) 1);
					j = ((NI) 0);
					{
						while (1) {
							if (!(((NU8)(frmt->data[i])) >= ((NU8)(48)) && ((NU8)(frmt->data[i])) <= ((NU8)(57)))) goto LA24;
							j = (NI)((NI)((NI)(j * ((NI) 10)) + ((NI) (((NU8)(frmt->data[i]))))) - ((NI) 48));
							i += ((NI) 1);
						} LA24: ;
					}
					num = j;
					{
						if (!((NU8)(frmt->data[i]) == (NU8)(125))) goto LA27;
						i += ((NI) 1);
					}
					goto LA25;
					LA27: ;
					{
						NimStringDesc* LOC30;
						LOC30 = 0;
						LOC30 = nimCharToStr(frmt->data[i]);
						errorhandler_168022.ClEnv? errorhandler_168022.ClPrc(((NU8) 1), LOC30, NIM_FALSE, errorhandler_168022.ClEnv):((TMP3757)(errorhandler_168022.ClPrc))(((NU8) 1), LOC30, NIM_FALSE);
					}
					LA25: ;
					{
						NimStringDesc* LOC35;
						if (!((NI)((argsLen0-1) + ((NI) 1)) < j)) goto LA33;
						LOC35 = 0;
						LOC35 = nimIntToStr(j);
						errorhandler_168022.ClEnv? errorhandler_168022.ClPrc(((NU8) 1), LOC35, NIM_FALSE, errorhandler_168022.ClEnv):((TMP3758)(errorhandler_168022.ClPrc))(((NU8) 1), LOC35, NIM_FALSE);
					}
					goto LA31;
					LA33: ;
					{
						add_168482(&result, args[(NI)(j - ((NI) 1))]);
					}
					LA31: ;
				}
				break;
				case 110:
				{
					add_168482(&result, softrnl_168904);
					i += ((NI) 1);
				}
				break;
				case 78:
				{
					add_168482(&result, rnl_168903);
					i += ((NI) 1);
				}
				break;
				default:
				{
					NimStringDesc* LOC40;
					LOC40 = 0;
					LOC40 = nimCharToStr(frmt->data[i]);
					errorhandler_168022.ClEnv? errorhandler_168022.ClPrc(((NU8) 1), LOC40, NIM_FALSE, errorhandler_168022.ClEnv):((TMP3759)(errorhandler_168022.ClPrc))(((NU8) 1), LOC40, NIM_FALSE);
				}
				break;
				}
			}
			LA5: ;
			start = i;
			{
				while (1) {
					if (!(i < length)) goto LA42;
					{
						if (!!(((NU8)(frmt->data[i]) == (NU8)(36)))) goto LA45;
						i += ((NI) 1);
					}
					goto LA43;
					LA45: ;
					{
						goto LA41;
					}
					LA43: ;
				} LA42: ;
			} LA41: ;
			{
				NimStringDesc* LOC52;
				if (!(start <= (NI)(i - ((NI) 1)))) goto LA50;
				LOC52 = 0;
				LOC52 = copyStrLast(frmt, start, (NI)(i - ((NI) 1)));
				add_168487(&result, LOC52);
			}
			LA50: ;
		} LA2: ;
	}
	return result;
}

N_NIMCALL(Ropeobj168006*, rope_168401)(NI64 i) {
	Ropeobj168006* result;
	NimStringDesc* LOC1;
	result = 0;
	gcacheinttries_168240 += ((NI) 1);
	LOC1 = 0;
	LOC1 = nimInt64ToStr(i);
	result = rope_168277(LOC1);
	return result;
}

N_NIMCALL(void, addf_169205)(Ropeobj168006** c, NimStringDesc* frmt, Ropeobj168006** args, NI argsLen0) {
	Ropeobj168006* LOC1;
	LOC1 = 0;
	LOC1 = HEX25_168905(frmt, args, argsLen0);
	add_168482(c, LOC1);
}

N_NIMCALL(Ropeobj168006*, HEX26_168452)(NimStringDesc* a, Ropeobj168006* b) {
	Ropeobj168006* result;
	Ropeobj168006* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = rope_168277(a);
	result = HEX26_168418(LOC1, b);
	return result;
}

N_NIMCALL(void, prepend_168893)(Ropeobj168006** a, Ropeobj168006* b) {
	unsureAsgnRef((void**) (&(*a)), HEX26_168418(b, (*a)));
}

N_NIMCALL(void, writerope_168822)(FILE* f, Ropeobj168006* r) {
	{
		NimStringDesc* s_168826;
		s_168826 = 0;
		{
			TY181350* stack_168833;
			TY168507 LOC6;
			if (!!((r == NIM_NIL))) goto LA4;
			stack_168833 = (TY181350*) newSeq((&NTI181350), 1);
			memset((void*)LOC6, 0, sizeof(LOC6));
			LOC6[0] = r;
			asgnRefNoCycle((void**) (&stack_168833->data[0]), LOC6[0]);
			{
				while (1) {
					Ropeobj168006* it_168835;
					if (!(((NI) 0) < (stack_168833 ? stack_168833->Sup.len : 0))) goto LA8;
					it_168835 = pop_168530((&stack_168833));
					{
						while (1) {
							if (!(*it_168835).data == 0) goto LA10;
							stack_168833 = (TY181350*) incrSeqV2(&(stack_168833)->Sup, sizeof(Ropeobj168006*));
							asgnRefNoCycle((void**) (&stack_168833->data[stack_168833->Sup.len]), (*it_168835).right);
							++stack_168833->Sup.len;
							it_168835 = (*it_168835).left;
						} LA10: ;
					}
					s_168826 = (*it_168835).data;
					write_15689(f, s_168826);
				} LA8: ;
			}
		}
		LA4: ;
	}
}

N_NIMCALL(void, writerope_168836)(Ropeobj168006* head, NimStringDesc* filename, NIM_BOOL usewarning) {
	FILE* f;
	f = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = open_15603(&f, filename, ((NU8) 1), ((NI) -1));
		if (!LOC3) goto LA4;
		{
			if (!!((head == NIM_NIL))) goto LA8;
			writerope_168822(f, head);
		}
		LA8: ;
		fclose(f);
	}
	goto LA1;
	LA4: ;
	{
		errorhandler_168022.ClEnv? errorhandler_168022.ClPrc(((NU8) 0), filename, usewarning, errorhandler_168022.ClEnv):((TMP4585)(errorhandler_168022.ClPrc))(((NU8) 0), filename, usewarning);
	}
	LA1: ;
}

N_NIMCALL(NIM_BOOL, equalsfile_169403)(Ropeobj168006* r, FILE* f) {
	NIM_BOOL result;
	TY169409 buf;
	NI bpos;
	NI blen;
	NI LOC26;
{	result = 0;
	memset((void*)buf, 0, sizeof(buf));
	bpos = ((NI) 1024);
	blen = ((NI) 1024);
	{
		NimStringDesc* s_169431;
		s_169431 = 0;
		{
			TY181350* stack_169480;
			TY168507 LOC6;
			if (!!((r == NIM_NIL))) goto LA4;
			stack_169480 = (TY181350*) newSeq((&NTI181350), 1);
			memset((void*)LOC6, 0, sizeof(LOC6));
			LOC6[0] = r;
			asgnRefNoCycle((void**) (&stack_169480->data[0]), LOC6[0]);
			{
				while (1) {
					Ropeobj168006* it_169482;
					NI spos;
					NI slen;
					if (!(((NI) 0) < (stack_169480 ? stack_169480->Sup.len : 0))) goto LA8;
					it_169482 = pop_168530((&stack_169480));
					{
						while (1) {
							if (!(*it_169482).data == 0) goto LA10;
							stack_169480 = (TY181350*) incrSeqV2(&(stack_169480)->Sup, sizeof(Ropeobj168006*));
							asgnRefNoCycle((void**) (&stack_169480->data[stack_169480->Sup.len]), (*it_169482).right);
							++stack_169480->Sup.len;
							it_169482 = (*it_169482).left;
						} LA10: ;
					}
					s_169431 = (*it_169482).data;
					spos = ((NI) 0);
					slen = (s_169431 ? s_169431->Sup.len : 0);
					{
						while (1) {
							NI n;
							if (!(spos < slen)) goto LA12;
							{
								if (!(bpos == blen)) goto LA15;
								bpos = ((NI) 0);
								blen = readbuffer_15754(f, ((void*) ((&buf[(((NI) 0))- 0]))), ((NI) 1024));
								{
									if (!(blen == ((NI) 0))) goto LA19;
									result = NIM_FALSE;
									goto BeforeRet;
								}
								LA19: ;
							}
							LA15: ;
							n = (((NI)(blen - bpos) <= (NI)(slen - spos)) ? (NI)(blen - bpos) : (NI)(slen - spos));
							{
								NIM_BOOL LOC23;
								LOC23 = 0;
								LOC23 = equalMem(((void*) ((&buf[(bpos)- 0]))), ((void*) ((NI)(((NI) (s_169431->data)) + spos))), ((NI) (n)));
								if (!!(LOC23)) goto LA24;
								result = NIM_FALSE;
								goto BeforeRet;
							}
							LA24: ;
							spos += n;
							bpos += n;
						} LA12: ;
					}
				} LA8: ;
			}
		}
		LA4: ;
	}
	LOC26 = 0;
	LOC26 = readbuffer_15754(f, ((void*) ((&buf[(((NI) 0))- 0]))), ((NI) 1));
	result = (LOC26 == ((NI) 0));
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, equalsfile_169483)(Ropeobj168006* r, NimStringDesc* filename) {
	NIM_BOOL result;
	FILE* f;
	result = 0;
	f = 0;
	result = open_15603(&f, filename, ((NU8) 0), ((NI) -1));
	{
		if (!result) goto LA3;
		result = equalsfile_169403(r, f);
		fclose(f);
	}
	LA3: ;
	return result;
}

N_NIMCALL(NIM_BOOL, writeropeifnotequal_169491)(Ropeobj168006* r, NimStringDesc* filename) {
	NIM_BOOL result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = equalsfile_169483(r, filename);
		if (!!(LOC3)) goto LA4;
		writerope_168836(r, filename, NIM_FALSE);
		result = NIM_TRUE;
	}
	goto LA1;
	LA4: ;
	{
		result = NIM_FALSE;
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, resetropecache_168075)(void) {
	{
		NI i_168214;
		NI res_168219;
		i_168214 = 0;
		res_168219 = ((NI) 0);
		{
			while (1) {
				if (!(res_168219 <= ((NI) 4095))) goto LA3;
				i_168214 = ((NI) (res_168219));
				asgnRefNoCycle((void**) (&cache_168073[(i_168214)- 0]), NIM_NIL);
				res_168219 += ((NI) 1);
			} LA3: ;
		}
	}
}
NIM_EXTERNC N_NOINLINE(void, compiler_ropesInit000)(void) {
	gcachetries_168238 = ((NI) 0);
	gcachemisses_168239 = ((NI) 0);
	gcacheinttries_168240 = ((NI) 0);
	asgnRefNoCycle((void**) (&rnl_168903), newrope_168041(tnl_166618));
	asgnRefNoCycle((void**) (&softrnl_168904), newrope_168041(tnl_166618));
}

NIM_EXTERNC N_NOINLINE(void, compiler_ropesDatInit000)(void) {
static TNimNode* TMP130[4];
static TNimNode TMP57[5];
NTI168006.size = sizeof(Ropeobj168006);
NTI168006.kind = 17;
NTI168006.base = (&NTI3608);
NTI168006.flags = 2;
TMP130[0] = &TMP57[1];
TMP57[1].kind = 1;
TMP57[1].offset = offsetof(Ropeobj168006, left);
TMP57[1].typ = (&NTI168004);
TMP57[1].name = "left";
TMP130[1] = &TMP57[2];
TMP57[2].kind = 1;
TMP57[2].offset = offsetof(Ropeobj168006, right);
TMP57[2].typ = (&NTI168004);
TMP57[2].name = "right";
TMP130[2] = &TMP57[3];
TMP57[3].kind = 1;
TMP57[3].offset = offsetof(Ropeobj168006, length);
TMP57[3].typ = (&NTI104);
TMP57[3].name = "length";
TMP130[3] = &TMP57[4];
TMP57[4].kind = 1;
TMP57[4].offset = offsetof(Ropeobj168006, data);
TMP57[4].typ = (&NTI138);
TMP57[4].name = "data";
TMP57[0].len = 4; TMP57[0].kind = 2; TMP57[0].sons = &TMP130[0];
NTI168006.node = &TMP57[0];
NTI168004.size = sizeof(Ropeobj168006*);
NTI168004.kind = 22;
NTI168004.base = (&NTI168006);
NTI168004.flags = 2;
NTI168004.marker = TMP131;
}

