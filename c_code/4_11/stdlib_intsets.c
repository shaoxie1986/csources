/* Generated by Nim Compiler v0.17.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#undef linux
#undef near
typedef struct IntSet_PQrmFm4BXFkFSVOUl1ojSg IntSet_PQrmFm4BXFkFSVOUl1ojSg;
typedef struct Trunk_ul49aWfv9aes8cutmeltT3gQ Trunk_ul49aWfv9aes8cutmeltT3gQ;
typedef struct TY_9brg1xNurxcus33lU4IE1Dw TY_9brg1xNurxcus33lU4IE1Dw;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Cell_1zcF9cV8XIAtbN8h5HRUB8g Cell_1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct CellSeq_Axo1XVm9aaQueTOldv8le5w CellSeq_Axo1XVm9aaQueTOldv8le5w;
typedef struct GcHeap_1TRH1TZMaVZTnLNcIHuNFQ GcHeap_1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct GcStack_7fytPA5bBsob6See21YMRA GcStack_7fytPA5bBsob6See21YMRA;
typedef struct MemRegion_x81NhDv59b8ercDZ9bi85jyg MemRegion_x81NhDv59b8ercDZ9bi85jyg;
typedef struct SmallChunk_tXn60W2f8h3jgAYdEmy5NQ SmallChunk_tXn60W2f8h3jgAYdEmy5NQ;
typedef struct LLChunk_XsENErzHIZV9bhvyJx56wGw LLChunk_XsENErzHIZV9bhvyJx56wGw;
typedef struct BigChunk_Rv9c70Uhp2TytkX7eH78qEg BigChunk_Rv9c70Uhp2TytkX7eH78qEg;
typedef struct IntSet_EZObFrE3NC9bIb3YMkY9crZA IntSet_EZObFrE3NC9bIb3YMkY9crZA;
typedef struct Trunk_W0r8S0Y3UGke6T9bIUWnnuw Trunk_W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct AvlNode_IaqjtwKhxLEpvDS9bct9blEw AvlNode_IaqjtwKhxLEpvDS9bct9blEw;
typedef struct HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct TY_ujsjpB2O9cjj3uDHsXbnSzg TY_ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct GcStat_0RwLoVBHZPfUAcLczmfQAg GcStat_0RwLoVBHZPfUAcLczmfQAg;
typedef struct CellSet_jG87P0AI9aZtss9ccTYBIISQ CellSet_jG87P0AI9aZtss9ccTYBIISQ;
typedef struct PageDesc_fublkgIY4LG3mT51LU2WHg PageDesc_fublkgIY4LG3mT51LU2WHg;
typedef struct BaseChunk_Sdq7WpT6qAH858F5ZEdG3w BaseChunk_Sdq7WpT6qAH858F5ZEdG3w;
typedef struct FreeCell_u6M5LHprqzkn9axr04yg9bGQ FreeCell_u6M5LHprqzkn9axr04yg9bGQ;
struct  IntSet_PQrmFm4BXFkFSVOUl1ojSg  {
NI counter;
NI max;
Trunk_ul49aWfv9aes8cutmeltT3gQ* head;
TY_9brg1xNurxcus33lU4IE1Dw* data;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
typedef NI TY_9a8QARi5WsUggNU9bom7kzTQ[8];
struct  Trunk_ul49aWfv9aes8cutmeltT3gQ  {
Trunk_ul49aWfv9aes8cutmeltT3gQ* next;
NI key;
TY_9a8QARi5WsUggNU9bom7kzTQ bits;
};
typedef NU8 TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ_Set;
typedef N_NIMCALL_PTR(void, TY_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct  TNimType  {
NI size;
TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ_Set flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY_ojoeKfW4VYIm36I9cpDTQIg marker;
TY_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef NU8 TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct  TNimNode  {
TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Cell_1zcF9cV8XIAtbN8h5HRUB8g  {
NI refcount;
TNimType* typ;
};
struct  GcStack_7fytPA5bBsob6See21YMRA  {
void* bottom;
};
struct  CellSeq_Axo1XVm9aaQueTOldv8le5w  {
NI len;
NI cap;
Cell_1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* TY_SiRwrEKZdLgxqz9a9aoVBglg[512];
typedef Trunk_W0r8S0Y3UGke6T9bIUWnnuw* TY_lh2A89ahMmYg9bCmpVaplLbA[256];
struct  IntSet_EZObFrE3NC9bIb3YMkY9crZA  {
TY_lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef AvlNode_IaqjtwKhxLEpvDS9bct9blEw* TY_0aOLqZchNi8nWtMTi8ND8w[2];
struct  AvlNode_IaqjtwKhxLEpvDS9bct9blEw  {
TY_0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct TY_ujsjpB2O9cjj3uDHsXbnSzg {
BigChunk_Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef TY_ujsjpB2O9cjj3uDHsXbnSzg TY_LzOv2eCDGiceMKQstCLmhw[30];
struct  HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg  {
NI len;
TY_LzOv2eCDGiceMKQstCLmhw chunks;
HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct  MemRegion_x81NhDv59b8ercDZ9bi85jyg  {
NI minLargeObj;
NI maxLargeObj;
TY_SiRwrEKZdLgxqz9a9aoVBglg freeSmallChunks;
LLChunk_XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI lastSize;
BigChunk_Rv9c70Uhp2TytkX7eH78qEg* freeChunksList;
IntSet_EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
AvlNode_IaqjtwKhxLEpvDS9bct9blEw* root;
AvlNode_IaqjtwKhxLEpvDS9bct9blEw* deleted;
AvlNode_IaqjtwKhxLEpvDS9bct9blEw* last;
AvlNode_IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
AvlNode_IaqjtwKhxLEpvDS9bct9blEw bottomData;
HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct  GcStat_0RwLoVBHZPfUAcLczmfQAg  {
NI stackScans;
NI cycleCollections;
NI maxThreshold;
NI maxStackSize;
NI maxStackCells;
NI cycleTableSize;
NI64 maxPause;
};
struct  CellSet_jG87P0AI9aZtss9ccTYBIISQ  {
NI counter;
NI max;
PageDesc_fublkgIY4LG3mT51LU2WHg* head;
PageDesc_fublkgIY4LG3mT51LU2WHg** data;
};
struct  GcHeap_1TRH1TZMaVZTnLNcIHuNFQ  {
GcStack_7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
CellSeq_Axo1XVm9aaQueTOldv8le5w zct;
CellSeq_Axo1XVm9aaQueTOldv8le5w decStack;
CellSeq_Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
MemRegion_x81NhDv59b8ercDZ9bi85jyg region;
GcStat_0RwLoVBHZPfUAcLczmfQAg stat;
CellSet_jG87P0AI9aZtss9ccTYBIISQ marked;
CellSeq_Axo1XVm9aaQueTOldv8le5w additionalRoots;
};
struct  BaseChunk_Sdq7WpT6qAH858F5ZEdG3w  {
NI prevSize;
NI size;
};
struct  SmallChunk_tXn60W2f8h3jgAYdEmy5NQ  {
  BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* next;
SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* prev;
FreeCell_u6M5LHprqzkn9axr04yg9bGQ* freeList;
NI free;
NI acc;
NF data;
};
struct  LLChunk_XsENErzHIZV9bhvyJx56wGw  {
NI size;
NI acc;
LLChunk_XsENErzHIZV9bhvyJx56wGw* next;
};
struct  BigChunk_Rv9c70Uhp2TytkX7eH78qEg  {
  BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
BigChunk_Rv9c70Uhp2TytkX7eH78qEg* next;
BigChunk_Rv9c70Uhp2TytkX7eH78qEg* prev;
NF data;
};
struct  Trunk_W0r8S0Y3UGke6T9bIUWnnuw  {
Trunk_W0r8S0Y3UGke6T9bIUWnnuw* next;
NI key;
TY_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct  PageDesc_fublkgIY4LG3mT51LU2WHg  {
PageDesc_fublkgIY4LG3mT51LU2WHg* next;
NI key;
TY_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct  FreeCell_u6M5LHprqzkn9axr04yg9bGQ  {
FreeCell_u6M5LHprqzkn9axr04yg9bGQ* next;
NI zeroField;
};
struct TY_9brg1xNurxcus33lU4IE1Dw {
  TGenericSeq Sup;
  Trunk_ul49aWfv9aes8cutmeltT3gQ* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_TY_Vz0pPzxitckVclPPWiz0xw)(void* p, NI op);
static N_NIMCALL(void, Marker_TY_9brg1xNurxcus33lU4IE1Dw)(void* p, NI op);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(Trunk_ul49aWfv9aes8cutmeltT3gQ*, intSetPut_0ZDJhLLWVElSxfwD0RRxbQ)(IntSet_PQrmFm4BXFkFSVOUl1ojSg* t, NI key);
static N_INLINE(NI, nextTry_Tx9c0j9b5WTbCx0lfW5eXjQgintsets)(NI h, NI maxHash);
static N_INLINE(NIM_BOOL, mustRehash_taHuV1HJYdnKkjS6Tm5Tswintsets)(NI length, NI counter);
N_NIMCALL(void, intSetEnlarge_Ayv9chaeD5Za6gYR3XnnA3A)(IntSet_PQrmFm4BXFkFSVOUl1ojSg* t);
N_NIMCALL(void, intSetRawInsert_I4xwTnLJbJwT2BPkb1SYSA)(IntSet_PQrmFm4BXFkFSVOUl1ojSg* t, TY_9brg1xNurxcus33lU4IE1Dw** data, Trunk_ul49aWfv9aes8cutmeltT3gQ* desc);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef_9cAA5YuQAAC3MVbnGeV86swsystem)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, decRef_MV4BBk6J1qu70IbBxwEn4wsystem)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(CellSeq_Axo1XVm9aaQueTOldv8le5w* s, Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(Trunk_ul49aWfv9aes8cutmeltT3gQ*, intSetGet_IcxbJfpUmsxePO8Fvv2aCg)(IntSet_PQrmFm4BXFkFSVOUl1ojSg* t, NI key);
N_NIMCALL(void, incl_iUpE9bYmIR0fROyJskQwN8g)(IntSet_PQrmFm4BXFkFSVOUl1ojSg* s, NI key);
TNimType NTI_ul49aWfv9aes8cutmeltT3gQ_;
extern TNimType NTI_rR5Bzr1D5krxoo1NcNyeMA_;
TNimType NTI_9a8QARi5WsUggNU9bom7kzTQ_;
TNimType NTI_Vz0pPzxitckVclPPWiz0xw_;
TNimType NTI_9brg1xNurxcus33lU4IE1Dw_;
TNimType NTI_PQrmFm4BXFkFSVOUl1ojSg_;
extern GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
static N_NIMCALL(void, Marker_TY_Vz0pPzxitckVclPPWiz0xw)(void* p, NI op) {
	Trunk_ul49aWfv9aes8cutmeltT3gQ* a;
	NI T1_;
	a = (Trunk_ul49aWfv9aes8cutmeltT3gQ*)p;
	nimGCvisit((void*)(*a).next, op);
	T1_ = (NI)0;
	for (T1_ = 0; T1_ < 8; T1_++) {
	}
}
static N_NIMCALL(void, Marker_TY_9brg1xNurxcus33lU4IE1Dw)(void* p, NI op) {
	TY_9brg1xNurxcus33lU4IE1Dw* a;
	NI T1_;
	a = (TY_9brg1xNurxcus33lU4IE1Dw*)p;
	T1_ = (NI)0;
	for (T1_ = 0; T1_ < a->Sup.len; T1_++) {
	nimGCvisit((void*)a->data[T1_], op);
	}
}

N_NIMCALL(void, initIntSet_a9a80eJplB17xrdZJ41Baww)(IntSet_PQrmFm4BXFkFSVOUl1ojSg* Result) {
	unsureAsgnRef((void**) (&(*Result).data), (TY_9brg1xNurxcus33lU4IE1Dw*) newSeq((&NTI_9brg1xNurxcus33lU4IE1Dw_), ((NI) 8)));
	(*Result).max = ((NI) 7);
	(*Result).counter = ((NI) 0);
	unsureAsgnRef((void**) (&(*Result).head), NIM_NIL);
}

static N_INLINE(NI, nextTry_Tx9c0j9b5WTbCx0lfW5eXjQgintsets)(NI h, NI maxHash) {
	NI result;
	result = (NI)0;
	result = (NI)((NI)((NI)(((NI) 5) * h) + ((NI) 1)) & maxHash);
	return result;
}

static N_INLINE(NIM_BOOL, mustRehash_taHuV1HJYdnKkjS6Tm5Tswintsets)(NI length, NI counter) {
	NIM_BOOL result;
	NIM_BOOL T1_;
	result = (NIM_BOOL)0;
	T1_ = (NIM_BOOL)0;
	T1_ = ((NI)(length * ((NI) 2)) < (NI)(counter * ((NI) 3)));
	if (T1_) goto LA2_;
	T1_ = ((NI)(length - counter) < ((NI) 4));
	LA2_: ;
	result = T1_;
	return result;
}

static N_INLINE(void, incRef_9cAA5YuQAAC3MVbnGeV86swsystem)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));
}

static N_INLINE(Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr) {
	Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;
	result = (Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	result = ((Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Cell_1zcF9cV8XIAtbN8h5HRUB8g))))));
	return result;
}

static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	addZCT_fCDI7oO1NNVXXURtxSzsRw((&gch_IcYaEuuWivYAS86vFMTS3Q.zct), c);
}

static N_INLINE(void, decRef_MV4BBk6J1qu70IbBxwEn4wsystem)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3_;
		rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c);
	}
	LA3_: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		Cell_1zcF9cV8XIAtbN8h5HRUB8g* T5_;
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T5_ = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(src);
		incRef_9cAA5YuQAAC3MVbnGeV86swsystem(T5_);
	}
	LA3_: ;
	{
		Cell_1zcF9cV8XIAtbN8h5HRUB8g* T10_;
		if (!!(((*dest) == NIM_NIL))) goto LA8_;
		T10_ = (Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T10_ = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem((*dest));
		decRef_MV4BBk6J1qu70IbBxwEn4wsystem(T10_);
	}
	LA8_: ;
	(*dest) = src;
}

N_NIMCALL(void, intSetRawInsert_I4xwTnLJbJwT2BPkb1SYSA)(IntSet_PQrmFm4BXFkFSVOUl1ojSg* t, TY_9brg1xNurxcus33lU4IE1Dw** data, Trunk_ul49aWfv9aes8cutmeltT3gQ* desc) {
	NI h;
	h = (NI)((*desc).key & (*t).max);
	{
		while (1) {
			if (!!(((*data)->data[h] == NIM_NIL))) goto LA2;
			h = nextTry_Tx9c0j9b5WTbCx0lfW5eXjQgintsets(h, (*t).max);
		} LA2: ;
	}
	asgnRef((void**) (&(*data)->data[h]), desc);
}

N_NIMCALL(void, intSetEnlarge_Ayv9chaeD5Za6gYR3XnnA3A)(IntSet_PQrmFm4BXFkFSVOUl1ojSg* t) {
	TY_9brg1xNurxcus33lU4IE1Dw* n;
	NI oldMax;
	TY_9brg1xNurxcus33lU4IE1Dw* T8_;
	n = (TY_9brg1xNurxcus33lU4IE1Dw*)0;
	oldMax = (*t).max;
	(*t).max = (NI)((NI)((NI)((*t).max + ((NI) 1)) * ((NI) 2)) - ((NI) 1));
	n = (TY_9brg1xNurxcus33lU4IE1Dw*) newSeq((&NTI_9brg1xNurxcus33lU4IE1Dw_), ((NI) ((NI)((*t).max + ((NI) 1)))));
	{
		NI i;
		NI res;
		i = (NI)0;
		res = ((NI) 0);
		{
			while (1) {
				if (!(res <= oldMax)) goto LA3;
				i = res;
				{
					if (!!(((*t).data->data[i] == NIM_NIL))) goto LA6_;
					intSetRawInsert_I4xwTnLJbJwT2BPkb1SYSA((&(*t)), (&n), (*t).data->data[i]);
				}
				LA6_: ;
				res += ((NI) 1);
			} LA3: ;
		}
	}
	T8_ = (TY_9brg1xNurxcus33lU4IE1Dw*)0;
	T8_ = (*t).data;
	unsureAsgnRef((void**) (&(*t).data), n);
	n = T8_;
}

N_NIMCALL(Trunk_ul49aWfv9aes8cutmeltT3gQ*, intSetPut_0ZDJhLLWVElSxfwD0RRxbQ)(IntSet_PQrmFm4BXFkFSVOUl1ojSg* t, NI key) {
	Trunk_ul49aWfv9aes8cutmeltT3gQ* result;
	NI h;
{	result = (Trunk_ul49aWfv9aes8cutmeltT3gQ*)0;
	h = (NI)(key & (*t).max);
	{
		while (1) {
			if (!!(((*t).data->data[h] == NIM_NIL))) goto LA2;
			{
				if (!((*(*t).data->data[h]).key == key)) goto LA5_;
				result = (*t).data->data[h];
				goto BeforeRet_;
			}
			LA5_: ;
			h = nextTry_Tx9c0j9b5WTbCx0lfW5eXjQgintsets(h, (*t).max);
		} LA2: ;
	}
	{
		NIM_BOOL T9_;
		T9_ = (NIM_BOOL)0;
		T9_ = mustRehash_taHuV1HJYdnKkjS6Tm5Tswintsets((NI)((*t).max + ((NI) 1)), (*t).counter);
		if (!T9_) goto LA10_;
		intSetEnlarge_Ayv9chaeD5Za6gYR3XnnA3A(t);
	}
	LA10_: ;
	(*t).counter += ((NI) 1);
	h = (NI)(key & (*t).max);
	{
		while (1) {
			if (!!(((*t).data->data[h] == NIM_NIL))) goto LA13;
			h = nextTry_Tx9c0j9b5WTbCx0lfW5eXjQgintsets(h, (*t).max);
		} LA13: ;
	}
	result = (Trunk_ul49aWfv9aes8cutmeltT3gQ*) newObj((&NTI_Vz0pPzxitckVclPPWiz0xw_), sizeof(Trunk_ul49aWfv9aes8cutmeltT3gQ));
	asgnRef((void**) (&(*result).next), (*t).head);
	(*result).key = key;
	unsureAsgnRef((void**) (&(*t).head), result);
	asgnRef((void**) (&(*t).data->data[h]), result);
	}BeforeRet_: ;
	return result;
}

N_NIMCALL(void, incl_iUpE9bYmIR0fROyJskQwN8g)(IntSet_PQrmFm4BXFkFSVOUl1ojSg* s, NI key) {
	Trunk_ul49aWfv9aes8cutmeltT3gQ* t;
	NI u;
	t = intSetPut_0ZDJhLLWVElSxfwD0RRxbQ(s, (NI)((NU64)(key) >> (NU64)(((NI) 9))));
	u = (NI)(key & ((NI) 511));
	(*t).bits[((NI)((NU64)(((NI) (u))) >> (NU64)(((NI) 6))))- 0] = (NI)((*t).bits[((NI)((NU64)(((NI) (u))) >> (NU64)(((NI) 6))))- 0] | (NI)((NU64)(((NI) 1)) << (NU64)(((NI) ((NI)(((NI) (u)) & ((NI) 63)))))));
}

N_NIMCALL(Trunk_ul49aWfv9aes8cutmeltT3gQ*, intSetGet_IcxbJfpUmsxePO8Fvv2aCg)(IntSet_PQrmFm4BXFkFSVOUl1ojSg* t, NI key) {
	Trunk_ul49aWfv9aes8cutmeltT3gQ* result;
	NI h;
{	result = (Trunk_ul49aWfv9aes8cutmeltT3gQ*)0;
	h = (NI)(key & (*t).max);
	{
		while (1) {
			if (!!(((*t).data->data[h] == NIM_NIL))) goto LA2;
			{
				if (!((*(*t).data->data[h]).key == key)) goto LA5_;
				result = (*t).data->data[h];
				goto BeforeRet_;
			}
			LA5_: ;
			h = nextTry_Tx9c0j9b5WTbCx0lfW5eXjQgintsets(h, (*t).max);
		} LA2: ;
	}
	result = NIM_NIL;
	}BeforeRet_: ;
	return result;
}

N_NIMCALL(NIM_BOOL, containsOrIncl_B0EhVMrh5BBBZOOtYjAvVg)(IntSet_PQrmFm4BXFkFSVOUl1ojSg* s, NI key) {
	NIM_BOOL result;
	Trunk_ul49aWfv9aes8cutmeltT3gQ* t;
	result = (NIM_BOOL)0;
	t = intSetGet_IcxbJfpUmsxePO8Fvv2aCg((&(*s)), (NI)((NU64)(key) >> (NU64)(((NI) 9))));
	{
		NI u;
		if (!!((t == NIM_NIL))) goto LA3_;
		u = (NI)(key & ((NI) 511));
		result = !(((NI)((*t).bits[((NI)((NU64)(((NI) (u))) >> (NU64)(((NI) 6))))- 0] & (NI)((NU64)(((NI) 1)) << (NU64)(((NI) ((NI)(((NI) (u)) & ((NI) 63))))))) == ((NI) 0)));
		{
			if (!!(result)) goto LA7_;
			(*t).bits[((NI)((NU64)(((NI) (u))) >> (NU64)(((NI) 6))))- 0] = (NI)((*t).bits[((NI)((NU64)(((NI) (u))) >> (NU64)(((NI) 6))))- 0] | (NI)((NU64)(((NI) 1)) << (NU64)(((NI) ((NI)(((NI) (u)) & ((NI) 63)))))));
		}
		LA7_: ;
	}
	goto LA1_;
	LA3_: ;
	{
		incl_iUpE9bYmIR0fROyJskQwN8g(s, key);
		result = NIM_FALSE;
	}
	LA1_: ;
	return result;
}

N_NIMCALL(NIM_BOOL, contains_sYBLNwnPJlAFi0nfWU79awg)(IntSet_PQrmFm4BXFkFSVOUl1ojSg* s, NI key) {
	NIM_BOOL result;
	Trunk_ul49aWfv9aes8cutmeltT3gQ* t;
	result = (NIM_BOOL)0;
	t = intSetGet_IcxbJfpUmsxePO8Fvv2aCg(s, (NI)((NU64)(key) >> (NU64)(((NI) 9))));
	{
		NI u;
		if (!!((t == NIM_NIL))) goto LA3_;
		u = (NI)(key & ((NI) 511));
		result = !(((NI)((*t).bits[((NI)((NU64)(((NI) (u))) >> (NU64)(((NI) 6))))- 0] & (NI)((NU64)(((NI) 1)) << (NU64)(((NI) ((NI)(((NI) (u)) & ((NI) 63))))))) == ((NI) 0)));
	}
	goto LA1_;
	LA3_: ;
	{
		result = NIM_FALSE;
	}
	LA1_: ;
	return result;
}

N_NIMCALL(void, assign_a2uuNOWD29cFDODAp4nip0A)(IntSet_PQrmFm4BXFkFSVOUl1ojSg* dest, IntSet_PQrmFm4BXFkFSVOUl1ojSg* src) {
	Trunk_ul49aWfv9aes8cutmeltT3gQ* it;
	(*dest).counter = (*src).counter;
	(*dest).max = (*src).max;
	unsureAsgnRef((void**) (&(*dest).data), (TY_9brg1xNurxcus33lU4IE1Dw*) newSeq((&NTI_9brg1xNurxcus33lU4IE1Dw_), ((NI) (((*src).data ? (*src).data->Sup.len : 0)))));
	it = (*src).head;
	{
		while (1) {
			NI h;
			Trunk_ul49aWfv9aes8cutmeltT3gQ* n;
			if (!!((it == NIM_NIL))) goto LA2;
			h = (NI)((*it).key & (*dest).max);
			{
				while (1) {
					if (!!(((*dest).data->data[h] == NIM_NIL))) goto LA4;
					h = nextTry_Tx9c0j9b5WTbCx0lfW5eXjQgintsets(h, (*dest).max);
				} LA4: ;
			}
			n = (Trunk_ul49aWfv9aes8cutmeltT3gQ*)0;
			n = (Trunk_ul49aWfv9aes8cutmeltT3gQ*) newObj((&NTI_Vz0pPzxitckVclPPWiz0xw_), sizeof(Trunk_ul49aWfv9aes8cutmeltT3gQ));
			asgnRef((void**) (&(*n).next), (*dest).head);
			(*n).key = (*it).key;
			memcpy((void*)(*n).bits, (NIM_CONST void*)(*it).bits, sizeof(TY_9a8QARi5WsUggNU9bom7kzTQ));
			unsureAsgnRef((void**) (&(*dest).head), n);
			asgnRef((void**) (&(*dest).data->data[h]), n);
			it = (*it).next;
		} LA2: ;
	}
}

N_NIMCALL(void, excl_iUpE9bYmIR0fROyJskQwN8g_2)(IntSet_PQrmFm4BXFkFSVOUl1ojSg* s, NI key) {
	Trunk_ul49aWfv9aes8cutmeltT3gQ* t;
	t = intSetGet_IcxbJfpUmsxePO8Fvv2aCg((&(*s)), (NI)((NU64)(key) >> (NU64)(((NI) 9))));
	{
		NI u;
		if (!!((t == NIM_NIL))) goto LA3_;
		u = (NI)(key & ((NI) 511));
		(*t).bits[((NI)((NU64)(((NI) (u))) >> (NU64)(((NI) 6))))- 0] = (NI)((*t).bits[((NI)((NU64)(((NI) (u))) >> (NU64)(((NI) 6))))- 0] & (NI)((NU64) ~((NI)((NU64)(((NI) 1)) << (NU64)(((NI) ((NI)(((NI) (u)) & ((NI) 63)))))))));
	}
	LA3_: ;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_intsetsInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_intsetsDatInit000)(void) {
static TNimNode* TM_ulJ2WYumkJwZ9b5Ewe7sCpg_2[3];
static TNimNode* TM_ulJ2WYumkJwZ9b5Ewe7sCpg_3[4];
static TNimNode TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[9];
NTI_ul49aWfv9aes8cutmeltT3gQ_.size = sizeof(Trunk_ul49aWfv9aes8cutmeltT3gQ);
NTI_ul49aWfv9aes8cutmeltT3gQ_.kind = 18;
NTI_ul49aWfv9aes8cutmeltT3gQ_.base = 0;
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_2[0] = &TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[1];
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[1].kind = 1;
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[1].offset = offsetof(Trunk_ul49aWfv9aes8cutmeltT3gQ, next);
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[1].typ = (&NTI_Vz0pPzxitckVclPPWiz0xw_);
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[1].name = "next";
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_2[1] = &TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[2];
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[2].kind = 1;
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[2].offset = offsetof(Trunk_ul49aWfv9aes8cutmeltT3gQ, key);
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[2].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[2].name = "key";
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_2[2] = &TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[3];
NTI_9a8QARi5WsUggNU9bom7kzTQ_.size = sizeof(TY_9a8QARi5WsUggNU9bom7kzTQ);
NTI_9a8QARi5WsUggNU9bom7kzTQ_.kind = 16;
NTI_9a8QARi5WsUggNU9bom7kzTQ_.base = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
NTI_9a8QARi5WsUggNU9bom7kzTQ_.flags = 3;
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[3].kind = 1;
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[3].offset = offsetof(Trunk_ul49aWfv9aes8cutmeltT3gQ, bits);
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[3].typ = (&NTI_9a8QARi5WsUggNU9bom7kzTQ_);
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[3].name = "bits";
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[0].len = 3; TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[0].kind = 2; TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[0].sons = &TM_ulJ2WYumkJwZ9b5Ewe7sCpg_2[0];
NTI_ul49aWfv9aes8cutmeltT3gQ_.node = &TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[0];
NTI_Vz0pPzxitckVclPPWiz0xw_.size = sizeof(Trunk_ul49aWfv9aes8cutmeltT3gQ*);
NTI_Vz0pPzxitckVclPPWiz0xw_.kind = 22;
NTI_Vz0pPzxitckVclPPWiz0xw_.base = (&NTI_ul49aWfv9aes8cutmeltT3gQ_);
NTI_Vz0pPzxitckVclPPWiz0xw_.marker = Marker_TY_Vz0pPzxitckVclPPWiz0xw;
NTI_9brg1xNurxcus33lU4IE1Dw_.size = sizeof(TY_9brg1xNurxcus33lU4IE1Dw*);
NTI_9brg1xNurxcus33lU4IE1Dw_.kind = 24;
NTI_9brg1xNurxcus33lU4IE1Dw_.base = (&NTI_Vz0pPzxitckVclPPWiz0xw_);
NTI_9brg1xNurxcus33lU4IE1Dw_.flags = 2;
NTI_9brg1xNurxcus33lU4IE1Dw_.marker = Marker_TY_9brg1xNurxcus33lU4IE1Dw;
NTI_PQrmFm4BXFkFSVOUl1ojSg_.size = sizeof(IntSet_PQrmFm4BXFkFSVOUl1ojSg);
NTI_PQrmFm4BXFkFSVOUl1ojSg_.kind = 18;
NTI_PQrmFm4BXFkFSVOUl1ojSg_.base = 0;
NTI_PQrmFm4BXFkFSVOUl1ojSg_.flags = 2;
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_3[0] = &TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[5];
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[5].kind = 1;
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[5].offset = offsetof(IntSet_PQrmFm4BXFkFSVOUl1ojSg, counter);
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[5].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[5].name = "counter";
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_3[1] = &TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[6];
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[6].kind = 1;
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[6].offset = offsetof(IntSet_PQrmFm4BXFkFSVOUl1ojSg, max);
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[6].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[6].name = "max";
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_3[2] = &TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[7];
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[7].kind = 1;
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[7].offset = offsetof(IntSet_PQrmFm4BXFkFSVOUl1ojSg, head);
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[7].typ = (&NTI_Vz0pPzxitckVclPPWiz0xw_);
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[7].name = "head";
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_3[3] = &TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[8];
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[8].kind = 1;
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[8].offset = offsetof(IntSet_PQrmFm4BXFkFSVOUl1ojSg, data);
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[8].typ = (&NTI_9brg1xNurxcus33lU4IE1Dw_);
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[8].name = "data";
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[4].len = 4; TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[4].kind = 2; TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[4].sons = &TM_ulJ2WYumkJwZ9b5Ewe7sCpg_3[0];
NTI_PQrmFm4BXFkFSVOUl1ojSg_.node = &TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[4];
}

