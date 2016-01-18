/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
typedef struct TY210112 TY210112;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
typedef struct NimStringDesc NimStringDesc;
typedef struct Tlexer205173 Tlexer205173;
typedef struct Tbaselexer203015 Tbaselexer203015;
typedef struct TNimObject TNimObject;
typedef struct Tllstream202204 Tllstream202204;
typedef struct Tlineinfo182337 Tlineinfo182337;
typedef struct Ttoken205169 Ttoken205169;
typedef struct Tident189012 Tident189012;
typedef struct Tidobj189006 Tidobj189006;
typedef struct Stringtableobj140209 Stringtableobj140209;
typedef struct Basechunk29638 Basechunk29638;
typedef struct Freecell29630 Freecell29630;
typedef struct Keyvaluepairseq140207 Keyvaluepairseq140207;
typedef struct Keyvaluepair140205 Keyvaluepair140205;
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
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Tbaselexer203015  {
  TNimObject Sup;
NI bufpos;
NCSTRING buf;
NI buflen;
Tllstream202204* stream;
NI linenumber;
NI sentinel;
NI linestart;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Tlineinfo182337 info, NU16 msg, NimStringDesc* arg, void* ClEnv);
void* ClEnv;
} Terrorhandler205171;
struct  Tlexer205173  {
  Tbaselexer203015 Sup;
NI32 fileidx;
NI indentahead;
NI currlineindent;
NIM_BOOL strongspaces;
Terrorhandler205171 errorhandler;
};
struct  Ttoken205169  {
NU8 toktype;
NI indent;
Tident189012* ident;
NI64 inumber;
NF fnumber;
NU8 base;
NI8 strongspacea;
NI8 strongspaceb;
NimStringDesc* literal;
NI line;
NI col;
};
struct  Tidobj189006  {
  TNimObject Sup;
NI id;
};
struct  Tident189012  {
  Tidobj189006 Sup;
NimStringDesc* s;
Tident189012* next;
NI h;
};
struct  Tlineinfo182337  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NimStringDesc* TY184156[3];
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
struct  Tllstream202204  {
  TNimObject Sup;
NU8 kind;
FILE* f;
NimStringDesc* s;
NI rd;
NI wr;
NI lineoffset;
};
struct  Stringtableobj140209  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq140207* data;
NU8 mode;
};
struct  Freecell29630  {
Freecell29630* next;
NI zerofield;
};
struct Keyvaluepair140205 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct TY210112 {
  TGenericSeq Sup;
  NIM_BOOL data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq140207 {
  TGenericSeq Sup;
  Keyvaluepair140205 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, TMP800)(void* p, NI op);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Cell47505*, usrtocell_51440)(void* usr);
static N_INLINE(void, rtladdzct_53001)(Cell47505* c);
N_NOINLINE(void, addzct_51417)(Cellseq47521* s, Cell47505* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(void, setdefaultlibpath_160298)(void);
N_NIMCALL(void, readconfigfile_210382)(NimStringDesc* filename);
N_NIMCALL(Tllstream202204*, llstreamopen_202241)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(void, inittoken_205306)(Ttoken205169* L);
N_NIMCALL(void, openlexer_205329)(Tlexer205173* lex, NimStringDesc* filename, Tllstream202204* inputstream);
N_NIMCALL(void, conftok_210275)(Tlexer205173* L, Ttoken205169* tok);
N_NIMCALL(void, ppgettok_210003)(Tlexer205173* L, Ttoken205169* tok);
N_NIMCALL(void, rawgettok_208824)(Tlexer205173* L, Ttoken205169* tok);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(void, parsedirective_210246)(Tlexer205173* L, Ttoken205169* tok);
N_NIMCALL(NU16, whichkeyword_196362)(Tident189012* id);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemsize, NI newlen);
N_NIMCALL(NIM_BOOL, evalppif_210096)(Tlexer205173* L, Ttoken205169* tok);
N_NIMCALL(NIM_BOOL, parseexpr_210021)(Tlexer205173* L, Ttoken205169* tok);
N_NIMCALL(NIM_BOOL, parseandexpr_210061)(Tlexer205173* L, Ttoken205169* tok);
N_NIMCALL(NIM_BOOL, parseatom_210027)(Tlexer205173* L, Ttoken205169* tok);
N_NIMCALL(void, lexmessage_205370)(Tlexer205173* L, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NIM_BOOL, isdefined_190140)(Tident189012* symbol);
N_NIMCALL(void, jumptodirective_210151)(Tlexer205173* L, Ttoken205169* tok, NU8 dest);
N_NIMCALL(void, doelse_210158)(Tlexer205173* L, Ttoken205169* tok);
N_NIMCALL(void, doelif_210173)(Tlexer205173* L, Ttoken205169* tok);
N_NIMCALL(void, doend_210131)(Tlexer205173* L, Ttoken205169* tok);
N_NIMCALL(void, msgwriteln_183449)(NimStringDesc* s, NU8 flags);
N_NIMCALL(NimStringDesc*, nstFormat)(NimStringDesc* f, Stringtableobj140209* t, NU8 flags);
N_NIMCALL(NimStringDesc*, toktostr_205281)(Ttoken205169* tok);
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* s);
N_NIMCALL(void, putenv_125838)(NimStringDesc* key, NimStringDesc* val);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, getenv_125825)(NimStringDesc* key);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, parseassignment_210319)(Tlexer205173* L, Ttoken205169* tok);
N_NIMCALL(Tident189012*, getident_189441)(NimStringDesc* identifier);
static N_INLINE(Tlineinfo182337, getlineinfo_205200)(Tlexer205173* L, Ttoken205169* tok);
N_NIMCALL(Tlineinfo182337, newlineinfo_183023)(NI32 fileinfoidx, NI line, NI col);
N_NIMCALL(void, checksymbol_210294)(Tlexer205173* L, Ttoken205169* tok);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(void, processswitch_200016)(NimStringDesc* switch_200018, NimStringDesc* arg, NU8 pass, Tlineinfo182337 info);
N_NIMCALL(void, closelexer_205335)(Tlexer205173* lex);
N_NIMCALL(void, rawmessage_185612)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, getsystemconfigpath_210434)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, getprefixdir_160295)(void);
N_NIMCALL(NimStringDesc*, nosjoinPathOpenArray)(NimStringDesc** parts, NI partsLen0);
N_NIMCALL(NIM_BOOL, nosexistsFile)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, getuserconfigpath_210428)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, nosjoinPath)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(NimStringDesc*, nosgetConfigDir)(void);
N_NIMCALL(NimStringDesc*, nosgetCurrentDir)(void);
N_NIMCALL(NimStringDesc*, HEX2F_118465)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(NIM_BOOL, nosisRootDir)(NimStringDesc* path);
N_NIMCALL(NimStringDesc*, nosparentDir)(NimStringDesc* path);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_79810, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, noschangeFileExt)(NimStringDesc* filename, NimStringDesc* ext);
static N_INLINE(NIM_BOOL, fileexists_121804)(NimStringDesc* filename);
STRING_LITERAL(TMP2035, "@", 1);
STRING_LITERAL(TMP2036, "\')\'", 3);
STRING_LITERAL(TMP2037, "\':\'", 3);
STRING_LITERAL(TMP2038, "@if", 3);
STRING_LITERAL(TMP2039, "@end", 4);
STRING_LITERAL(TMP2041, "putenv", 6);
STRING_LITERAL(TMP2042, "prependenv", 10);
STRING_LITERAL(TMP2043, "appendenv", 9);
STRING_LITERAL(TMP2044, "-", 1);
STRING_LITERAL(TMP2045, "--", 2);
STRING_LITERAL(TMP2046, "", 0);
STRING_LITERAL(TMP2047, "\']\'", 3);
STRING_LITERAL(TMP2048, "%=", 2);
STRING_LITERAL(TMP2049, "&", 1);
STRING_LITERAL(TMP2050, "config", 6);
STRING_LITERAL(TMP2051, "etc", 3);
STRING_LITERAL(TMP2052, "/etc/", 5);
STRING_LITERAL(TMP2054, "nimcfg", 6);
STRING_LITERAL(TMP2055, "nim.cfg", 7);
STRING_LITERAL(TMP2056, "nimrod.cfg", 10);
TY210112* condstack_210129;
extern TNimType NTI130; /* bool */
TNimType NTI210112; /* seq[bool] */
extern Gcheap49818 gch_49859;
extern NU32 gglobaloptions_160121;
extern TNimType NTI205173; /* TLexer */
extern Stringtableobj140209* gconfigvars_160195;
extern NimStringDesc* gprojectpath_160200;
extern NimStringDesc* gprojectname_160199;
extern NimStringDesc* gprojectfull_160201;
N_NIMCALL(void, TMP800)(void* p, NI op) {
	TY210112* a;
	NI LOC1;
	a = (TY210112*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
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

N_NIMCALL(void, ppgettok_210003)(Tlexer205173* L, Ttoken205169* tok) {
	rawgettok_208824(L, tok);
	{
		while (1) {
			if (!((*tok).toktype == ((NU8) 113))) goto LA2;
			rawgettok_208824(L, tok);
		} LA2: ;
	}
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

N_NIMCALL(NIM_BOOL, parseatom_210027)(Tlexer205173* L, Ttoken205169* tok) {
	NIM_BOOL result;
	result = 0;
	{
		if (!((*tok).toktype == ((NU8) 93))) goto LA3;
		ppgettok_210003(L, tok);
		result = parseexpr_210021(L, tok);
		{
			if (!((*tok).toktype == ((NU8) 94))) goto LA7;
			ppgettok_210003(L, tok);
		}
		goto LA5;
		LA7: ;
		{
			lexmessage_205370((&(*L)), ((NU16) 24), ((NimStringDesc*) &TMP2036));
		}
		LA5: ;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC13;
		if (!((*(*tok).ident).Sup.id == ((NI) 45))) goto LA11;
		ppgettok_210003(L, tok);
		LOC13 = 0;
		LOC13 = parseatom_210027(L, tok);
		result = !(LOC13);
	}
	goto LA1;
	LA11: ;
	{
		result = isdefined_190140((*tok).ident);
		ppgettok_210003(L, tok);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NIM_BOOL, parseandexpr_210061)(Tlexer205173* L, Ttoken205169* tok) {
	NIM_BOOL result;
	result = 0;
	result = parseatom_210027(L, tok);
	{
		while (1) {
			NIM_BOOL b;
			NIM_BOOL LOC3;
			if (!((*(*tok).ident).Sup.id == ((NI) 2))) goto LA2;
			ppgettok_210003(L, tok);
			b = parseatom_210027(L, tok);
			LOC3 = 0;
			LOC3 = result;
			if (!(LOC3)) goto LA4;
			LOC3 = b;
			LA4: ;
			result = LOC3;
		} LA2: ;
	}
	return result;
}

N_NIMCALL(NIM_BOOL, parseexpr_210021)(Tlexer205173* L, Ttoken205169* tok) {
	NIM_BOOL result;
	result = 0;
	result = parseandexpr_210061(L, tok);
	{
		while (1) {
			NIM_BOOL b;
			NIM_BOOL LOC3;
			if (!((*(*tok).ident).Sup.id == ((NI) 49))) goto LA2;
			ppgettok_210003(L, tok);
			b = parseandexpr_210061(L, tok);
			LOC3 = 0;
			LOC3 = result;
			if (LOC3) goto LA4;
			LOC3 = b;
			LA4: ;
			result = LOC3;
		} LA2: ;
	}
	return result;
}

N_NIMCALL(NIM_BOOL, evalppif_210096)(Tlexer205173* L, Ttoken205169* tok) {
	NIM_BOOL result;
	result = 0;
	ppgettok_210003(L, tok);
	result = parseexpr_210021(L, tok);
	{
		if (!((*tok).toktype == ((NU8) 107))) goto LA3;
		ppgettok_210003(L, tok);
	}
	goto LA1;
	LA3: ;
	{
		lexmessage_205370((&(*L)), ((NU16) 24), ((NimStringDesc*) &TMP2037));
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, doelse_210158)(Tlexer205173* L, Ttoken205169* tok) {
	{
		if (!((condstack_210129 ? (condstack_210129->Sup.len-1) : -1) < ((NI) 0))) goto LA3;
		lexmessage_205370((&(*L)), ((NU16) 24), ((NimStringDesc*) &TMP2038));
	}
	LA3: ;
	ppgettok_210003(L, tok);
	{
		if (!((*tok).toktype == ((NU8) 107))) goto LA7;
		ppgettok_210003(L, tok);
	}
	LA7: ;
	{
		if (!condstack_210129->data[(condstack_210129 ? (condstack_210129->Sup.len-1) : -1)]) goto LA11;
		jumptodirective_210151(L, tok, ((NU8) 0));
	}
	LA11: ;
}

N_NIMCALL(void, doelif_210173)(Tlexer205173* L, Ttoken205169* tok) {
	NIM_BOOL res;
	{
		if (!((condstack_210129 ? (condstack_210129->Sup.len-1) : -1) < ((NI) 0))) goto LA3;
		lexmessage_205370((&(*L)), ((NU16) 24), ((NimStringDesc*) &TMP2038));
	}
	LA3: ;
	res = evalppif_210096(L, tok);
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = condstack_210129->data[(condstack_210129 ? (condstack_210129->Sup.len-1) : -1)];
		if (LOC7) goto LA8;
		LOC7 = !(res);
		LA8: ;
		if (!LOC7) goto LA9;
		jumptodirective_210151(L, tok, ((NU8) 1));
	}
	goto LA5;
	LA9: ;
	{
		condstack_210129->data[(condstack_210129 ? (condstack_210129->Sup.len-1) : -1)] = NIM_TRUE;
	}
	LA5: ;
}

N_NIMCALL(void, doend_210131)(Tlexer205173* L, Ttoken205169* tok) {
	{
		if (!((condstack_210129 ? (condstack_210129->Sup.len-1) : -1) < ((NI) 0))) goto LA3;
		lexmessage_205370((&(*L)), ((NU16) 24), ((NimStringDesc*) &TMP2038));
	}
	LA3: ;
	ppgettok_210003(L, tok);
	condstack_210129 = (TY210112*) setLengthSeq(&(condstack_210129)->Sup, sizeof(NIM_BOOL), ((NI) ((condstack_210129 ? (condstack_210129->Sup.len-1) : -1))));
}

N_NIMCALL(void, jumptodirective_210151)(Tlexer205173* L, Ttoken205169* tok, NU8 dest) {
	NI nestedifs;
	nestedifs = ((NI) 0);
	{
		while (1) {
			{
				NIM_BOOL LOC5;
				NU16 LOC9;
				LOC5 = 0;
				LOC5 = !(((*tok).ident == NIM_NIL));
				if (!(LOC5)) goto LA6;
				LOC5 = eqStrings((*(*tok).ident).s, ((NimStringDesc*) &TMP2035));
				LA6: ;
				if (!LOC5) goto LA7;
				ppgettok_210003(L, tok);
				LOC9 = 0;
				LOC9 = whichkeyword_196362((*tok).ident);
				switch (LOC9) {
				case ((NU16) 31):
				{
					nestedifs += ((NI) 1);
				}
				break;
				case ((NU16) 21):
				{
					{
						NIM_BOOL LOC14;
						LOC14 = 0;
						LOC14 = (dest == ((NU8) 1));
						if (!(LOC14)) goto LA15;
						LOC14 = (nestedifs == ((NI) 0));
						LA15: ;
						if (!LOC14) goto LA16;
						doelse_210158(L, tok);
						goto LA1;
					}
					LA16: ;
				}
				break;
				case ((NU16) 20):
				{
					{
						NIM_BOOL LOC21;
						LOC21 = 0;
						LOC21 = (dest == ((NU8) 1));
						if (!(LOC21)) goto LA22;
						LOC21 = (nestedifs == ((NI) 0));
						LA22: ;
						if (!LOC21) goto LA23;
						doelif_210173(L, tok);
						goto LA1;
					}
					LA23: ;
				}
				break;
				case ((NU16) 22):
				{
					{
						if (!(nestedifs == ((NI) 0))) goto LA28;
						doend_210131(L, tok);
						goto LA1;
					}
					LA28: ;
					{
						if (!(((NI) 0) < nestedifs)) goto LA32;
						nestedifs -= ((NI) 1);
					}
					LA32: ;
				}
				break;
				default:
				{
				}
				break;
				}
				ppgettok_210003(L, tok);
			}
			goto LA3;
			LA7: ;
			{
				if (!((*tok).toktype == ((NU8) 1))) goto LA36;
				lexmessage_205370((&(*L)), ((NU16) 24), ((NimStringDesc*) &TMP2039));
			}
			goto LA3;
			LA36: ;
			{
				ppgettok_210003(L, tok);
			}
			LA3: ;
		}
	} LA1: ;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(void, parsedirective_210246)(Tlexer205173* L, Ttoken205169* tok) {
	NU16 LOC1;
	ppgettok_210003(L, tok);
	LOC1 = 0;
	LOC1 = whichkeyword_196362((*tok).ident);
	switch (LOC1) {
	case ((NU16) 31):
	{
		NIM_BOOL res;
		condstack_210129 = (TY210112*) setLengthSeq(&(condstack_210129)->Sup, sizeof(NIM_BOOL), ((NI) ((NI)((condstack_210129 ? condstack_210129->Sup.len : 0) + ((NI) 1)))));
		res = evalppif_210096(L, tok);
		condstack_210129->data[(condstack_210129 ? (condstack_210129->Sup.len-1) : -1)] = res;
		{
			if (!!(res)) goto LA5;
			jumptodirective_210151(L, tok, ((NU8) 1));
		}
		LA5: ;
	}
	break;
	case ((NU16) 20):
	{
		doelif_210173(L, tok);
	}
	break;
	case ((NU16) 21):
	{
		doelse_210158(L, tok);
	}
	break;
	case ((NU16) 22):
	{
		doend_210131(L, tok);
	}
	break;
	case ((NU16) 183):
	{
		NimStringDesc* LOC11;
		NimStringDesc* LOC12;
		ppgettok_210003(L, tok);
		LOC11 = 0;
		LOC11 = toktostr_205281((&(*tok)));
		LOC12 = 0;
		LOC12 = nstFormat(LOC11, gconfigvars_160195, 5);
		msgwriteln_183449(LOC12, 0);
		ppgettok_210003(L, tok);
	}
	break;
	default:
	{
		NimStringDesc* LOC14;
		LOC14 = 0;
		LOC14 = nsuNormalize((*(*tok).ident).s);
		if (eqStrings(LOC14, ((NimStringDesc*) &TMP2041))) goto LA15;
		if (eqStrings(LOC14, ((NimStringDesc*) &TMP2042))) goto LA16;
		if (eqStrings(LOC14, ((NimStringDesc*) &TMP2043))) goto LA17;
		goto LA18;
		LA15: ;
		{
			NimStringDesc* key;
			NimStringDesc* LOC21;
			ppgettok_210003(L, tok);
			key = toktostr_205281((&(*tok)));
			ppgettok_210003(L, tok);
			LOC21 = 0;
			LOC21 = toktostr_205281((&(*tok)));
			putenv_125838(key, LOC21);
			ppgettok_210003(L, tok);
		}
		goto LA19;
		LA16: ;
		{
			NimStringDesc* key;
			NimStringDesc* LOC23;
			NimStringDesc* LOC24;
			NimStringDesc* LOC25;
			ppgettok_210003(L, tok);
			key = toktostr_205281((&(*tok)));
			ppgettok_210003(L, tok);
			LOC23 = 0;
			LOC24 = 0;
			LOC24 = toktostr_205281((&(*tok)));
			LOC25 = 0;
			LOC25 = getenv_125825(key);
			LOC23 = rawNewString(LOC24->Sup.len + LOC25->Sup.len + 0);
appendString(LOC23, LOC24);
appendString(LOC23, LOC25);
			putenv_125838(key, LOC23);
			ppgettok_210003(L, tok);
		}
		goto LA19;
		LA17: ;
		{
			NimStringDesc* key;
			NimStringDesc* LOC27;
			NimStringDesc* LOC28;
			NimStringDesc* LOC29;
			ppgettok_210003(L, tok);
			key = toktostr_205281((&(*tok)));
			ppgettok_210003(L, tok);
			LOC27 = 0;
			LOC28 = 0;
			LOC28 = getenv_125825(key);
			LOC29 = 0;
			LOC29 = toktostr_205281((&(*tok)));
			LOC27 = rawNewString(LOC28->Sup.len + LOC29->Sup.len + 0);
appendString(LOC27, LOC28);
appendString(LOC27, LOC29);
			putenv_125838(key, LOC27);
			ppgettok_210003(L, tok);
		}
		goto LA19;
		LA18: ;
		{
			NimStringDesc* LOC31;
			LOC31 = 0;
			LOC31 = toktostr_205281((&(*tok)));
			lexmessage_205370((&(*L)), ((NU16) 31), LOC31);
		}
		LA19: ;
	}
	break;
	}
}

N_NIMCALL(void, conftok_210275)(Tlexer205173* L, Ttoken205169* tok) {
	ppgettok_210003(L, tok);
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = !(((*tok).ident == NIM_NIL));
			if (!(LOC3)) goto LA4;
			LOC3 = eqStrings((*(*tok).ident).s, ((NimStringDesc*) &TMP2035));
			LA4: ;
			if (!LOC3) goto LA2;
			parsedirective_210246(L, tok);
		} LA2: ;
	}
}

static N_INLINE(Tlineinfo182337, getlineinfo_205200)(Tlexer205173* L, Ttoken205169* tok) {
	Tlineinfo182337 result;
	memset((void*)(&result), 0, sizeof(result));
	result = newlineinfo_183023((*L).fileidx, (*tok).line, (*tok).col);
	return result;
}

N_NIMCALL(void, checksymbol_210294)(Tlexer205173* L, Ttoken205169* tok) {
	{
		NimStringDesc* LOC5;
		if (!!(((*tok).toktype >= ((NU8) 2) && (*tok).toktype <= ((NU8) 72) || (*tok).toktype >= ((NU8) 87) && (*tok).toktype <= ((NU8) 89)))) goto LA3;
		LOC5 = 0;
		LOC5 = toktostr_205281(tok);
		lexmessage_205370(L, ((NU16) 20), LOC5);
	}
	LA3: ;
}

N_NIMCALL(void, parseassignment_210319)(Tlexer205173* L, Ttoken205169* tok) {
	Tlineinfo182337 info;
	NimStringDesc* s;
	NimStringDesc* val;
	NIM_BOOL percent;
	Tident189012* LOC22;
	{
		NIM_BOOL LOC3;
		Tident189012* LOC4;
		Tident189012* LOC6;
		LOC3 = 0;
		LOC4 = 0;
		LOC4 = getident_189441(((NimStringDesc*) &TMP2044));
		LOC3 = ((*(*tok).ident).Sup.id == (*LOC4).Sup.id);
		if (LOC3) goto LA5;
		LOC6 = 0;
		LOC6 = getident_189441(((NimStringDesc*) &TMP2045));
		LOC3 = ((*(*tok).ident).Sup.id == (*LOC6).Sup.id);
		LA5: ;
		if (!LOC3) goto LA7;
		conftok_210275(L, tok);
	}
	LA7: ;
	info = getlineinfo_205200((&(*L)), (&(*tok)));
	checksymbol_210294((&(*L)), (&(*tok)));
	s = toktostr_205281((&(*tok)));
	conftok_210275(L, tok);
	val = copyString(((NimStringDesc*) &TMP2046));
	{
		while (1) {
			NimStringDesc* LOC11;
			if (!((*tok).toktype == ((NU8) 110))) goto LA10;
			s = addChar(s, 46);
			conftok_210275(L, tok);
			checksymbol_210294((&(*L)), (&(*tok)));
			LOC11 = 0;
			LOC11 = toktostr_205281((&(*tok)));
			s = resizeString(s, LOC11->Sup.len + 0);
appendString(s, LOC11);
			conftok_210275(L, tok);
		} LA10: ;
	}
	{
		NimStringDesc* LOC16;
		if (!((*tok).toktype == ((NU8) 95))) goto LA14;
		conftok_210275(L, tok);
		checksymbol_210294((&(*L)), (&(*tok)));
		LOC16 = 0;
		LOC16 = toktostr_205281((&(*tok)));
		val = resizeString(val, LOC16->Sup.len + 0);
appendString(val, LOC16);
		conftok_210275(L, tok);
		{
			if (!((*tok).toktype == ((NU8) 96))) goto LA19;
			conftok_210275(L, tok);
		}
		goto LA17;
		LA19: ;
		{
			lexmessage_205370((&(*L)), ((NU16) 24), ((NimStringDesc*) &TMP2047));
		}
		LA17: ;
		val = addChar(val, 93);
	}
	LA14: ;
	LOC22 = 0;
	LOC22 = getident_189441(((NimStringDesc*) &TMP2048));
	percent = ((*(*tok).ident).Sup.id == (*LOC22).Sup.id);
	{
		NIM_BOOL LOC25;
		NimStringDesc* LOC33;
		LOC25 = 0;
		LOC25 = ((*tok).toktype == ((NU8) 107) || (*tok).toktype == ((NU8) 109));
		if (LOC25) goto LA26;
		LOC25 = percent;
		LA26: ;
		if (!LOC25) goto LA27;
		{
			if (!(((NI) 0) < (val ? val->Sup.len : 0))) goto LA31;
			val = addChar(val, 58);
		}
		LA31: ;
		conftok_210275(L, tok);
		checksymbol_210294((&(*L)), (&(*tok)));
		LOC33 = 0;
		LOC33 = toktostr_205281((&(*tok)));
		val = resizeString(val, LOC33->Sup.len + 0);
appendString(val, LOC33);
		conftok_210275(L, tok);
		{
			while (1) {
				NIM_BOOL LOC36;
				Tident189012* LOC38;
				NimStringDesc* LOC39;
				LOC36 = 0;
				LOC36 = !(((*tok).ident == NIM_NIL));
				if (!(LOC36)) goto LA37;
				LOC38 = 0;
				LOC38 = getident_189441(((NimStringDesc*) &TMP2049));
				LOC36 = ((*(*tok).ident).Sup.id == (*LOC38).Sup.id);
				LA37: ;
				if (!LOC36) goto LA35;
				conftok_210275(L, tok);
				checksymbol_210294((&(*L)), (&(*tok)));
				LOC39 = 0;
				LOC39 = toktostr_205281((&(*tok)));
				val = resizeString(val, LOC39->Sup.len + 0);
appendString(val, LOC39);
				conftok_210275(L, tok);
			} LA35: ;
		}
	}
	LA27: ;
	{
		NimStringDesc* LOC44;
		if (!percent) goto LA42;
		LOC44 = 0;
		LOC44 = nstFormat(val, gconfigvars_160195, 3);
		processswitch_200016(s, LOC44, ((NU8) 2), info);
	}
	goto LA40;
	LA42: ;
	{
		processswitch_200016(s, val, ((NU8) 2), info);
	}
	LA40: ;
}

N_NIMCALL(void, readconfigfile_210382)(NimStringDesc* filename) {
	Tlexer205173 L;
	Ttoken205169 tok;
	Tllstream202204* stream;
	memset((void*)(&L), 0, sizeof(L));
	L.Sup.Sup.m_type = (&NTI205173);
	memset((void*)(&tok), 0, sizeof(tok));
	stream = 0;
	stream = llstreamopen_202241(filename, ((NU8) 0));
	{
		if (!!((stream == NIM_NIL))) goto LA3;
		inittoken_205306((&tok));
		openlexer_205329((&L), filename, stream);
		tok.toktype = ((NU8) 1);
		conftok_210275((&L), (&tok));
		{
			while (1) {
				if (!!((tok.toktype == ((NU8) 1)))) goto LA6;
				parseassignment_210319((&L), (&tok));
			} LA6: ;
		}
		{
			if (!(((NI) 0) < (condstack_210129 ? condstack_210129->Sup.len : 0))) goto LA9;
			lexmessage_205370((&L), ((NU16) 24), ((NimStringDesc*) &TMP2039));
		}
		LA9: ;
		closelexer_205335((&L));
		rawmessage_185612(((NU16) 279), filename);
	}
	LA3: ;
}

N_NIMCALL(NimStringDesc*, getsystemconfigpath_210434)(NimStringDesc* filename) {
	NimStringDesc* result;
	NimStringDesc* p;
	TY184156 LOC1;
	result = 0;
	p = getprefixdir_160295();
	memset((void*)LOC1, 0, sizeof(LOC1));
	LOC1[0] = copyString(p);
	LOC1[1] = copyString(((NimStringDesc*) &TMP2050));
	LOC1[2] = copyString(filename);
	result = nosjoinPathOpenArray(LOC1, 3);
	{
		NIM_BOOL LOC4;
		TY184156 LOC7;
		LOC4 = 0;
		LOC4 = nosexistsFile(result);
		if (!!(LOC4)) goto LA5;
		memset((void*)LOC7, 0, sizeof(LOC7));
		LOC7[0] = copyString(p);
		LOC7[1] = copyString(((NimStringDesc*) &TMP2051));
		LOC7[2] = copyString(filename);
		result = nosjoinPathOpenArray(LOC7, 3);
	}
	LA5: ;
	{
		NIM_BOOL LOC10;
		NimStringDesc* LOC13;
		LOC10 = 0;
		LOC10 = nosexistsFile(result);
		if (!!(LOC10)) goto LA11;
		LOC13 = 0;
		LOC13 = rawNewString(filename->Sup.len + 5);
appendString(LOC13, ((NimStringDesc*) &TMP2052));
appendString(LOC13, filename);
		result = LOC13;
	}
	LA11: ;
	return result;
}

N_NIMCALL(NimStringDesc*, getuserconfigpath_210428)(NimStringDesc* filename) {
	NimStringDesc* result;
	NimStringDesc* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = nosgetConfigDir();
	result = nosjoinPath(LOC1, filename);
	return result;
}

static N_INLINE(NIM_BOOL, fileexists_121804)(NimStringDesc* filename) {
	NIM_BOOL result;
	result = 0;
	result = nosexistsFile(filename);
	return result;
}

N_NIMCALL(void, loadconfigs_210603)(NimStringDesc* cfg) {
	NimStringDesc* pd;
	setdefaultlibpath_160298();
	{
		NimStringDesc* LOC5;
		if (!!(((gglobaloptions_160121 &(1U<<((NU)(((NU8) 16))&31U)))!=0))) goto LA3;
		LOC5 = 0;
		LOC5 = getsystemconfigpath_210434(cfg);
		readconfigfile_210382(LOC5);
	}
	LA3: ;
	{
		NimStringDesc* LOC10;
		if (!!(((gglobaloptions_160121 &(1U<<((NU)(((NU8) 18))&31U)))!=0))) goto LA8;
		LOC10 = 0;
		LOC10 = getuserconfigpath_210428(cfg);
		readconfigfile_210382(LOC10);
	}
	LA8: ;
	{
		if (!(((NI) 0) < (gprojectpath_160200 ? gprojectpath_160200->Sup.len : 0))) goto LA13;
		pd = copyString(gprojectpath_160200);
	}
	goto LA11;
	LA13: ;
	{
		pd = nosgetCurrentDir();
	}
	LA11: ;
	{
		if (!!(((gglobaloptions_160121 &(1U<<((NU)(((NU8) 19))&31U)))!=0))) goto LA18;
		{
			NimStringDesc* dir_210637;
			dir_210637 = 0;
			{
				NimStringDesc* current_210654;
				if (!NIM_FALSE) goto LA23;
				current_210654 = copyString(pd);
				{
					NimStringDesc* LOC29;
					if (!NIM_FALSE) goto LA27;
					dir_210637 = pd;
					LOC29 = 0;
					LOC29 = HEX2F_118465(dir_210637, cfg);
					readconfigfile_210382(LOC29);
				}
				LA27: ;
				{
					while (1) {
						NimStringDesc* LOC37;
						{
							NIM_BOOL LOC34;
							LOC34 = 0;
							LOC34 = nosisRootDir(current_210654);
							if (!LOC34) goto LA35;
							goto LA30;
						}
						LA35: ;
						current_210654 = nosparentDir(current_210654);
						dir_210637 = current_210654;
						LOC37 = 0;
						LOC37 = HEX2F_118465(dir_210637, cfg);
						readconfigfile_210382(LOC37);
					}
				} LA30: ;
			}
			goto LA21;
			LA23: ;
			{
				{
					NI i_210656;
					NI HEX3Atmp_210658;
					NI res_210660;
					i_210656 = 0;
					HEX3Atmp_210658 = 0;
					HEX3Atmp_210658 = (NI)((pd ? pd->Sup.len : 0) - ((NI) 2));
					res_210660 = ((NI) 0);
					{
						while (1) {
							if (!(res_210660 <= HEX3Atmp_210658)) goto LA41;
							i_210656 = res_210660;
							{
								NIM_BOOL LOC44;
								NIM_BOOL LOC46;
								NimStringDesc* LOC50;
								LOC44 = 0;
								LOC44 = (((NU8)(pd->data[i_210656])) == ((NU8)(47)) || ((NU8)(pd->data[i_210656])) == ((NU8)(47)));
								if (!(LOC44)) goto LA45;
								LOC46 = 0;
								LOC46 = (i_210656 == ((NI) 0));
								if (LOC46) goto LA47;
								LOC46 = !((((NU8)(pd->data[(NI)(i_210656 - ((NI) 1))])) == ((NU8)(47)) || ((NU8)(pd->data[(NI)(i_210656 - ((NI) 1))])) == ((NU8)(47))));
								LA47: ;
								LOC44 = LOC46;
								LA45: ;
								if (!LOC44) goto LA48;
								dir_210637 = copyStrLast(pd, ((NI) 0), i_210656);
								LOC50 = 0;
								LOC50 = HEX2F_118465(dir_210637, cfg);
								readconfigfile_210382(LOC50);
							}
							LA48: ;
							res_210660 += ((NI) 1);
						} LA41: ;
					}
				}
				{
					NimStringDesc* LOC55;
					if (!NIM_FALSE) goto LA53;
					dir_210637 = pd;
					LOC55 = 0;
					LOC55 = HEX2F_118465(dir_210637, cfg);
					readconfigfile_210382(LOC55);
				}
				LA53: ;
			}
			LA21: ;
		}
	}
	LA18: ;
	{
		NimStringDesc* LOC60;
		if (!!(((gglobaloptions_160121 &(1U<<((NU)(((NU8) 17))&31U)))!=0))) goto LA58;
		LOC60 = 0;
		LOC60 = HEX2F_118465(pd, cfg);
		readconfigfile_210382(LOC60);
		{
			NimStringDesc* projectconfig;
			if (!!(((gprojectname_160199 ? gprojectname_160199->Sup.len : 0) == ((NI) 0)))) goto LA63;
			projectconfig = noschangeFileExt(gprojectfull_160201, ((NimStringDesc*) &TMP2054));
			{
				NIM_BOOL LOC67;
				LOC67 = 0;
				LOC67 = fileexists_121804(projectconfig);
				if (!!(LOC67)) goto LA68;
				projectconfig = noschangeFileExt(gprojectfull_160201, ((NimStringDesc*) &TMP2055));
			}
			LA68: ;
			{
				NIM_BOOL LOC72;
				LOC72 = 0;
				LOC72 = fileexists_121804(projectconfig);
				if (!!(LOC72)) goto LA73;
				projectconfig = noschangeFileExt(gprojectfull_160201, ((NimStringDesc*) &TMP2056));
				{
					NIM_BOOL LOC77;
					LOC77 = 0;
					LOC77 = fileexists_121804(projectconfig);
					if (!LOC77) goto LA78;
					rawmessage_185612(((NU16) 241), projectconfig);
				}
				LA78: ;
			}
			LA73: ;
			readconfigfile_210382(projectconfig);
		}
		LA63: ;
	}
	LA58: ;
}
NIM_EXTERNC N_NOINLINE(void, compiler_nimconfInit000)(void) {
	if (condstack_210129) nimGCunrefNoCycle(condstack_210129);
	condstack_210129 = (TY210112*) newSeqRC1((&NTI210112), 0);
}

NIM_EXTERNC N_NOINLINE(void, compiler_nimconfDatInit000)(void) {
NTI210112.size = sizeof(TY210112*);
NTI210112.kind = 24;
NTI210112.base = (&NTI130);
NTI210112.flags = 2;
NTI210112.marker = TMP800;
}

