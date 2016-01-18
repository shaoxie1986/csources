/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include "winsock2.h"
#include <string.h>
#include <setjmp.h>
typedef struct Socketimpl524404 Socketimpl524404;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Addrinfo107850 Addrinfo107850;
typedef struct Timeouterror524412 Timeouterror524412;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct Cell47304 Cell47304;
typedef struct Cellseq47320 Cellseq47320;
typedef struct Gcheap49618 Gcheap49618;
typedef struct Gcstack49616 Gcstack49616;
typedef struct Cellset47316 Cellset47316;
typedef struct Pagedesc47312 Pagedesc47312;
typedef struct Memregion29487 Memregion29487;
typedef struct Smallchunk29439 Smallchunk29439;
typedef struct Llchunk29481 Llchunk29481;
typedef struct Bigchunk29441 Bigchunk29441;
typedef struct Intset29414 Intset29414;
typedef struct Trunk29410 Trunk29410;
typedef struct Avlnode29485 Avlnode29485;
typedef struct Gcstat49614 Gcstat49614;
typedef struct TY527219 TY527219;
typedef struct TSafePoint TSafePoint;
typedef struct Basechunk29437 Basechunk29437;
typedef struct Freecell29429 Freecell29429;
typedef NIM_CHAR TY524418[4001];
struct  Socketimpl524404  {
NI fd;
NIM_BOOL isbuffered;
union{
struct {TY524418 buffer;
NI currpos;
NI buflen;
} S1;
} isbufferedU;
NI32 lasterror;
NU8 domain;
NU8 socktype;
NU8 protocol;
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
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NIM_CHAR TY107873[8];
struct  Addrinfo107850  {
int aiflags;
int aifamily;
int aisocktype;
int aiprotocol;
NI aiaddrlen;
NCSTRING aicanonname;
SOCKADDR* aiaddr;
Addrinfo107850* ainext;
};
typedef N_STDCALL_PTR(int, TY108067) (NI s, void* buf, int len, int flags);
typedef N_STDCALL_PTR(NI, TY107990) (NI s, SOCKADDR* a, unsigned int* addrlen);
typedef N_STDCALL_PTR(NCSTRING, TY108147) (IN_ADDR i);
struct  TNimObject  {
TNimType* m_type;
};
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
struct  Timeouterror524412  {
  Exception Sup;
};
struct  Cell47304  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47320  {
NI len;
NI cap;
Cell47304** d;
};
struct  Cellset47316  {
NI counter;
NI max;
Pagedesc47312* head;
Pagedesc47312** data;
};
typedef Smallchunk29439* TY29502[512];
typedef Trunk29410* Trunkbuckets29412[256];
struct  Intset29414  {
Trunkbuckets29412 data;
};
struct  Memregion29487  {
NI minlargeobj;
NI maxlargeobj;
TY29502 freesmallchunks;
Llchunk29481* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29441* freechunkslist;
Intset29414 chunkstarts;
Avlnode29485* root;
Avlnode29485* deleted;
Avlnode29485* last;
Avlnode29485* freeavlnodes;
};
struct  Gcstat49614  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Gcheap49618  {
Gcstack49616* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47320 zct;
Cellseq47320 decstack;
Cellset47316 cycleroots;
Cellseq47320 tempstack;
NI recgclock;
Memregion29487 region;
Gcstat49614 stat;
};
typedef NI TY527208[1];
typedef N_STDCALL_PTR(int, TY108042) (NI s, void* buf, int len, int flags);
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClPrc) (Exception* e, void* ClEnv);
void* ClEnv;
} TY17811;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY17811 raiseAction;
};
typedef NIM_CHAR TY107866[14];
struct  Gcstack49616  {
Gcstack49616* prev;
Gcstack49616* next;
void* starts;
void* pos;
NI maxstacksize;
};
typedef NI TY29418[16];
struct  Pagedesc47312  {
Pagedesc47312* next;
NI key;
TY29418 bits;
};
struct  Basechunk29437  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29439  {
  Basechunk29437 Sup;
Smallchunk29439* next;
Smallchunk29439* prev;
Freecell29429* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29481  {
NI size;
NI acc;
Llchunk29481* next;
};
struct  Bigchunk29441  {
  Basechunk29437 Sup;
Bigchunk29441* next;
Bigchunk29441* prev;
NI align;
NF data;
};
struct  Trunk29410  {
Trunk29410* next;
NI key;
TY29418 bits;
};
typedef Avlnode29485* TY29492[2];
struct  Avlnode29485  {
TY29492 link;
NI key;
NI upperbound;
NI level;
};
struct  Freecell29429  {
Freecell29429* next;
NI zerofield;
};
struct TY527219 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, TMP5274)(void* p, NI op);
N_NIMCALL(NI, newnativesocket_519001)(NU8 domain, NU8 socktype, NU8 protocol);
N_NOINLINE(void, raiseoserror_120024)(NI32 errorcode, NimStringDesc* additionalinfo);
N_NIMCALL(NI32, oslasterror_120040)(void);
N_NIMCALL(Socketimpl524404*, newsocket_524674)(NI fd, NU8 domain, NU8 socktype, NU8 protocol, NIM_BOOL buffered);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(int, toint_518820)(NU8 domain);
N_NIMCALL(NI16, ntohs_520001)(NI16 x);
N_NIMCALL(NI32, ntohl_519806)(NI32 x);
N_NIMCALL(int, bindaddr_519201)(NI socket, SOCKADDR* name, unsigned int namelen);
N_NIMCALL(Addrinfo107850*, getaddrinfo_519402)(NimStringDesc* address, NU16 port, NU8 domain, NU8 socktype, NU8 protocol);
N_NIMCALL(void, dealloc_519802)(Addrinfo107850* ai);
N_NIMCALL(int, listen_519208)(NI socket, int backlog);
N_NIMCALL(NI, send_528678)(Socketimpl524404* socket, void* data, NI size);
N_NIMCALL(NIM_BOOL, isdisconnectionerror_524473)(NU8 flags, NI32 lasterror);
N_NIMCALL(void, socketerror_524467)(Socketimpl524404* socket, NI err, NIM_BOOL async, NI32 lasterror);
N_NIMCALL(NI32, getsocketerror_525001)(Socketimpl524404* socket);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(void, acceptaddr_525807)(Socketimpl524404* server, Socketimpl524404** client, NimStringDesc** address, NU8 flags);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(NI, waitfor_527807)(Socketimpl524404* socket, NF* waited, NI timeout, NI size, NimStringDesc* funcname);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP5286)(void* p, NI op);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Cell47304*, usrtocell_51240)(void* usr);
static N_INLINE(void, rtladdzct_52801)(Cell47304* c);
N_NOINLINE(void, addzct_51217)(Cellseq47320* s, Cell47304* c);
N_NIMCALL(void, raiseException)(Exception* e, NCSTRING ename);
N_NIMCALL(NF, ntepochTime)(void);
N_NIMCALL(NI, select_527201)(Socketimpl524404* readfd, NI timeout);
N_NIMCALL(NIM_BOOL, hasdatabuffered_527001)(Socketimpl524404* s);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(NI, select_523060)(TY527219** readfds, NI timeout);
static N_INLINE(void, HEX2BHEX3D_109802)(NF* x, NF y);
N_NIMCALL(NI, recv_527416)(Socketimpl524404* socket, void* data, NI size);
N_NIMCALL(NI, readintobuf_527223)(Socketimpl524404* socket, NI32 flags);
N_NIMCALL(NI, peekchar_528426)(Socketimpl524404* socket, NIM_CHAR* c);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(void, close_519013)(NI socket);
N_NIMCALL(void, reraiseException)(void);
TNimNode* NimDT_524404_isbuffered[3];
STRING_LITERAL(TMP5280, "", 0);
STRING_LITERAL(TMP5283, "No valid socket error code available", 36);
STRING_LITERAL(TMP5284, "Could not send all data.", 24);
STRING_LITERAL(TMP5287, "Call to \'", 9);
STRING_LITERAL(TMP5288, "\' timed out.", 12);
STRING_LITERAL(TMP5290, "readLine", 8);
STRING_LITERAL(TMP5291, "\015\012", 2);
TNimType NTI524404; /* SocketImpl */
extern TNimType NTI104; /* int */
extern TNimType NTI130; /* bool */
extern TNimType NTI136; /* char */
TNimType NTI524418; /* array[0..4000, char] */
extern TNimType NTI110; /* int32 */
extern TNimType NTI518604; /* Domain */
extern TNimType NTI518606; /* SockType */
extern TNimType NTI518608; /* Protocol */
TNimType NTI524406; /* Socket */
extern NI osinvalidsocket_518645;
extern TY108067 Dl_108066;
extern TY107990 Dl_107989;
extern TY108147 Dl_108146;
extern TNimType NTI3624; /* Exception */
TNimType NTI524412; /* TimeoutError */
TNimType NTI528014; /* ref TimeoutError */
extern Gcheap49618 gch_49659;
extern TNimType NTI527219; /* seq[SocketHandle] */
extern TY108042 Dl_108041;
extern TSafePoint* exchandler_19437;
N_NIMCALL(void, TMP5274)(void* p, NI op) {
	Socketimpl524404* a;
	NI LOC1;
	a = (Socketimpl524404*)p;
	switch ((*a).isbuffered) {
	case NIM_TRUE:
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < 4001; LOC1++) {
	}
	break;
	case NIM_FALSE:
	break;
	} 
}

N_NIMCALL(Socketimpl524404*, newsocket_524674)(NI fd, NU8 domain, NU8 socktype, NU8 protocol, NIM_BOOL buffered) {
	Socketimpl524404* result;
	result = 0;
	result = (Socketimpl524404*) newObj((&NTI524406), sizeof(Socketimpl524404));
	(*result).fd = fd;
	(*result).isbuffered = buffered;
	(*result).domain = domain;
	(*result).socktype = socktype;
	(*result).protocol = protocol;
	{
		if (!buffered) goto LA3;
		(*result).isbufferedU.S1.currpos = ((NI) 0);
	}
	LA3: ;
	return result;
}

N_NIMCALL(Socketimpl524404*, newsocket_524821)(NU8 domain, NU8 socktype, NU8 protocol, NIM_BOOL buffered) {
	Socketimpl524404* result;
	NI fd;
	result = 0;
	fd = newnativesocket_519001(domain, socktype, protocol);
	{
		NI32 LOC5;
		if (!(fd == osinvalidsocket_518645)) goto LA3;
		LOC5 = 0;
		LOC5 = oslasterror_120040();
		raiseoserror_120024(LOC5, ((NimStringDesc*) &TMP5280));
	}
	LA3: ;
	result = newsocket_524674(fd, domain, socktype, protocol, buffered);
	return result;
}

N_NIMCALL(void, bindaddr_525607)(Socketimpl524404* socket, NU16 port, NimStringDesc* address) {
	{
		SOCKADDR_IN name;
		int LOC5;
		if (!((address) && (address)->Sup.len == 0)) goto LA3;
		memset((void*)(&name), 0, sizeof(name));
		LOC5 = 0;
		LOC5 = toint_518820(((NU8) 2));
		name.sin_family = ((NI16) (LOC5));
		name.sin_port = ntohs_520001(((NI16) (port)));
		name.sin_addr.s_addr = ntohl_519806(((NI32) 0));
		{
			int LOC8;
			NI32 LOC11;
			LOC8 = 0;
			LOC8 = bindaddr_519201((*socket).fd, ((SOCKADDR*) ((&name))), ((unsigned int) (((NI)sizeof(SOCKADDR_IN)))));
			if (!(LOC8 < ((NI32) 0))) goto LA9;
			LOC11 = 0;
			LOC11 = oslasterror_120040();
			raiseoserror_120024(LOC11, ((NimStringDesc*) &TMP5280));
		}
		LA9: ;
	}
	goto LA1;
	LA3: ;
	{
		Addrinfo107850* ailist;
		ailist = getaddrinfo_519402(address, port, (*socket).domain, ((NU8) 1), ((NU8) 6));
		{
			int LOC15;
			NI32 LOC18;
			LOC15 = 0;
			LOC15 = bindaddr_519201((*socket).fd, (*ailist).aiaddr, ((unsigned int) ((*ailist).aiaddrlen)));
			if (!(LOC15 < ((NI32) 0))) goto LA16;
			dealloc_519802(ailist);
			LOC18 = 0;
			LOC18 = oslasterror_120040();
			raiseoserror_120024(LOC18, ((NimStringDesc*) &TMP5280));
		}
		LA16: ;
		dealloc_519802(ailist);
	}
	LA1: ;
}

N_NIMCALL(void, listen_525603)(Socketimpl524404* socket, int backlog) {
	{
		int LOC3;
		NI32 LOC6;
		LOC3 = 0;
		LOC3 = listen_519208((*socket).fd, backlog);
		if (!(LOC3 < ((NI32) 0))) goto LA4;
		LOC6 = 0;
		LOC6 = oslasterror_120040();
		raiseoserror_120024(LOC6, ((NimStringDesc*) &TMP5280));
	}
	LA4: ;
}

N_NIMCALL(NI, send_528678)(Socketimpl524404* socket, void* data, NI size) {
	NI result;
	int LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = Dl_108066((*socket).fd, data, ((int) (size)), ((NI32) 0));
	result = ((NI) (LOC1));
	return result;
}

N_NIMCALL(NIM_BOOL, isdisconnectionerror_524473)(NU8 flags, NI32 lasterror) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = ((flags &(1U<<((NU)(((NU8) 1))&7U)))!=0);
	if (!(LOC1)) goto LA2;
	LOC1 = (lasterror == ((NI) 10054) || lasterror == ((NI) 10053) || lasterror == ((NI) 10052) || lasterror == ((NI) 10101) || lasterror == ((NI) 64));
	LA2: ;
	result = LOC1;
	return result;
}

N_NIMCALL(NI32, getsocketerror_525001)(Socketimpl524404* socket) {
	NI32 result;
	result = 0;
	result = oslasterror_120040();
	{
		if (!(result == ((NI32) 0))) goto LA3;
		result = (*socket).lasterror;
	}
	LA3: ;
	{
		if (!(result == ((NI32) 0))) goto LA7;
		raiseoserror_120024(result, ((NimStringDesc*) &TMP5283));
	}
	LA7: ;
	return result;
}

N_NIMCALL(void, socketerror_524467)(Socketimpl524404* socket, NI err, NIM_BOOL async, NI32 lasterror) {
{	{
		NIM_BOOL LOC3;
		NI32 laste;
		LOC3 = 0;
		LOC3 = (err == ((NI) -1));
		if (!(LOC3)) goto LA4;
		LOC3 = NIM_TRUE;
		LA4: ;
		if (!LOC3) goto LA5;
		{
			if (!(((NI) (lasterror)) == ((NI) -1))) goto LA9;
			laste = getsocketerror_525001(socket);
		}
		goto LA7;
		LA9: ;
		{
			laste = lasterror;
		}
		LA7: ;
		{
			if (!async) goto LA14;
			{
				if (!(laste == ((NI32) 10035))) goto LA18;
				goto BeforeRet;
			}
			goto LA16;
			LA18: ;
			{
				raiseoserror_120024(laste, ((NimStringDesc*) &TMP5280));
			}
			LA16: ;
		}
		goto LA12;
		LA14: ;
		{
			raiseoserror_120024(laste, ((NimStringDesc*) &TMP5280));
		}
		LA12: ;
	}
	LA5: ;
	}BeforeRet: ;
}

N_NIMCALL(void, send_529002)(Socketimpl524404* socket, NimStringDesc* data, NU8 flags) {
	NI sent;
{	sent = send_528678(socket, ((void*) (data->data)), (data ? data->Sup.len : 0));
	{
		NI32 lasterror;
		if (!(sent < ((NI) 0))) goto LA3;
		lasterror = oslasterror_120040();
		{
			NIM_BOOL LOC7;
			LOC7 = 0;
			LOC7 = isdisconnectionerror_524473(flags, lasterror);
			if (!LOC7) goto LA8;
			goto BeforeRet;
		}
		LA8: ;
		socketerror_524467(socket, ((NI) -1), NIM_FALSE, lasterror);
	}
	LA3: ;
	{
		NI32 LOC14;
		if (!!((sent == (data ? data->Sup.len : 0)))) goto LA12;
		LOC14 = 0;
		LOC14 = oslasterror_120040();
		raiseoserror_120024(LOC14, ((NimStringDesc*) &TMP5284));
	}
	LA12: ;
	}BeforeRet: ;
}

N_NIMCALL(void, acceptaddr_525807)(Socketimpl524404* server, Socketimpl524404** client, NimStringDesc** address, NU8 flags) {
	SOCKADDR_IN sockaddress;
	unsigned int addrlen;
	NI sock;
	memset((void*)(&sockaddress), 0, sizeof(sockaddress));
	addrlen = ((unsigned int) (((NI)sizeof(SOCKADDR_IN))));
	sock = Dl_107989((*server).fd, ((SOCKADDR*) ((&sockaddress))), (&addrlen));
	{
		NI32 err;
		if (!(sock == osinvalidsocket_518645)) goto LA3;
		err = oslasterror_120040();
		{
			NIM_BOOL LOC7;
			LOC7 = 0;
			LOC7 = isdisconnectionerror_524473(flags, err);
			if (!LOC7) goto LA8;
			acceptaddr_525807(server, client, address, flags);
		}
		LA8: ;
		raiseoserror_120024(err, ((NimStringDesc*) &TMP5280));
	}
	goto LA1;
	LA3: ;
	{
		NCSTRING LOC11;
		(*(*client)).fd = sock;
		(*(*client)).isbuffered = (*server).isbuffered;
		LOC11 = 0;
		LOC11 = Dl_108146(sockaddress.sin_addr);
		unsureAsgnRef((void**) (&(*address)), cstrToNimstr(LOC11));
	}
	LA1: ;
}

N_NIMCALL(void, accept_526401)(Socketimpl524404* server, Socketimpl524404** client, NU8 flags) {
	NimStringDesc* addrdummy;
	addrdummy = copyString(((NimStringDesc*) &TMP5280));
	acceptaddr_525807(server, client, (&addrdummy), flags);
}
N_NIMCALL(void, TMP5286)(void* p, NI op) {
	Timeouterror524412* a;
	a = (Timeouterror524412*)p;
	nimGCvisit((void*)(*a).Sup.parent, op);
	nimGCvisit((void*)(*a).Sup.message, op);
	nimGCvisit((void*)(*a).Sup.trace, op);
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(Cell47304*, usrtocell_51240)(void* usr) {
	Cell47304* result;
	result = 0;
	result = ((Cell47304*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Cell47304))))));
	return result;
}

static N_INLINE(void, rtladdzct_52801)(Cell47304* c) {
	addzct_51217((&gch_49659.zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Cell47304* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_51240(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell47304* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_51240((*dest));
		{
			(*c).refcount -= ((NI) 8);
			if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_52801(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(NIM_BOOL, hasdatabuffered_527001)(Socketimpl524404* s) {
	NIM_BOOL result;
	result = 0;
	result = NIM_FALSE;
	{
		NIM_BOOL LOC5;
		if (!(*s).isbuffered) goto LA3;
		LOC5 = 0;
		LOC5 = (((NI) 0) < (*s).isbufferedU.S1.buflen);
		if (!(LOC5)) goto LA6;
		LOC5 = !(((*s).isbufferedU.S1.currpos == (*s).isbufferedU.S1.buflen));
		LA6: ;
		result = LOC5;
	}
	LA3: ;
	return result;
}

N_NIMCALL(NI, select_527201)(Socketimpl524404* readfd, NI timeout) {
	NI result;
	TY527219* fds;
	TY527208 LOC6;
{	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = hasdatabuffered_527001(readfd);
		if (!LOC3) goto LA4;
		result = ((NI) 1);
		goto BeforeRet;
	}
	LA4: ;
	fds = (TY527219*) newSeq((&NTI527219), 1);
	LOC6[0] = (*readfd).fd;
	fds->data[0] = LOC6[0];
	result = select_523060((&fds), timeout);
	}BeforeRet: ;
	return result;
}

static N_INLINE(void, HEX2BHEX3D_109802)(NF* x, NF y) {
	(*x) = ((NF)((*x)) + (NF)(y));
}

N_NIMCALL(NI, waitfor_527807)(Socketimpl524404* socket, NF* waited, NI timeout, NI size, NimStringDesc* funcname) {
	NI result;
{	result = 0;
	result = ((NI) 1);
	{
		if (!(size <= ((NI) 0))) goto LA3;
	}
	LA3: ;
	{
		if (!(timeout == ((NI) -1))) goto LA7;
		result = size;
		goto BeforeRet;
	}
	LA7: ;
	{
		NIM_BOOL LOC11;
		NIM_BOOL LOC12;
		LOC11 = 0;
		LOC12 = 0;
		LOC12 = (*socket).isbuffered;
		if (!(LOC12)) goto LA13;
		LOC12 = !(((*socket).isbufferedU.S1.buflen == ((NI) 0)));
		LA13: ;
		LOC11 = LOC12;
		if (!(LOC11)) goto LA14;
		LOC11 = !(((*socket).isbufferedU.S1.buflen == (*socket).isbufferedU.S1.currpos));
		LA14: ;
		if (!LOC11) goto LA15;
		result = (NI)((*socket).isbufferedU.S1.buflen - (*socket).isbufferedU.S1.currpos);
		result = ((result <= size) ? result : size);
	}
	goto LA9;
	LA15: ;
	{
		NF starttime;
		NI selret;
		NF LOC33;
		{
			Timeouterror524412* e_528013;
			NimStringDesc* LOC22;
			if (!((NI)(timeout - ((NI) (((NF)((*waited)) * (NF)(1.0000000000000000e+03))))) < ((NI) 1))) goto LA20;
			e_528013 = 0;
			e_528013 = (Timeouterror524412*) newObj((&NTI528014), sizeof(Timeouterror524412));
			(*e_528013).Sup.Sup.m_type = (&NTI524412);
			LOC22 = 0;
			LOC22 = rawNewString(funcname->Sup.len + 21);
appendString(LOC22, ((NimStringDesc*) &TMP5287));
appendString(LOC22, funcname);
appendString(LOC22, ((NimStringDesc*) &TMP5288));
			asgnRefNoCycle((void**) (&(*e_528013).Sup.message), LOC22);
			raiseException((Exception*)e_528013, "TimeoutError");
		}
		LA20: ;
		starttime = ntepochTime();
		selret = select_527201(socket, (NI)(timeout - ((NI) (((NF)((*waited)) * (NF)(1.0000000000000000e+03))))));
		{
			NI32 LOC27;
			if (!(selret < ((NI) 0))) goto LA25;
			LOC27 = 0;
			LOC27 = oslasterror_120040();
			raiseoserror_120024(LOC27, ((NimStringDesc*) &TMP5280));
		}
		LA25: ;
		{
			Timeouterror524412* e_528206;
			NimStringDesc* LOC32;
			if (!!((selret == ((NI) 1)))) goto LA30;
			e_528206 = 0;
			e_528206 = (Timeouterror524412*) newObj((&NTI528014), sizeof(Timeouterror524412));
			(*e_528206).Sup.Sup.m_type = (&NTI524412);
			LOC32 = 0;
			LOC32 = rawNewString(funcname->Sup.len + 21);
appendString(LOC32, ((NimStringDesc*) &TMP5287));
appendString(LOC32, funcname);
appendString(LOC32, ((NimStringDesc*) &TMP5288));
			asgnRefNoCycle((void**) (&(*e_528206).Sup.message), LOC32);
			raiseException((Exception*)e_528206, "TimeoutError");
		}
		LA30: ;
		LOC33 = 0;
		LOC33 = ntepochTime();
		HEX2BHEX3D_109802(waited, ((NF)(LOC33) - (NF)(starttime)));
	}
	LA9: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NI, readintobuf_527223)(Socketimpl524404* socket, NI32 flags) {
	NI result;
	int LOC1;
{	result = 0;
	result = ((NI) 0);
	LOC1 = 0;
	LOC1 = Dl_108041((*socket).fd, ((void*) ((*socket).isbufferedU.S1.buffer)), ((int) 4000), flags);
	result = ((NI) (LOC1));
	{
		if (!(result < ((NI) 0))) goto LA4;
		(*socket).lasterror = oslasterror_120040();
	}
	LA4: ;
	{
		if (!(result <= ((NI) 0))) goto LA8;
		(*socket).isbufferedU.S1.buflen = ((NI) 0);
		(*socket).isbufferedU.S1.currpos = ((NI) 0);
		goto BeforeRet;
	}
	LA8: ;
	(*socket).isbufferedU.S1.buflen = result;
	(*socket).isbufferedU.S1.currpos = ((NI) 0);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NI, recv_527416)(Socketimpl524404* socket, void* data, NI size) {
	NI result;
{	result = 0;
	{
		if (!(size == ((NI) 0))) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	{
		NI read;
		if (!(*socket).isbuffered) goto LA7;
		{
			NI res;
			if (!((*socket).isbufferedU.S1.buflen == ((NI) 0))) goto LA11;
			res = readintobuf_527223(socket, ((NI32) 0));
			{
				if (!(res <= ((NI) 0))) goto LA15;
				{
					if (!NIM_FALSE) goto LA19;
					result = ((NI) 0);
					goto BeforeRet;
				}
				goto LA17;
				LA19: ;
				{
					result = res;
					goto BeforeRet;
				}
				LA17: ;
			}
			LA15: ;
		}
		LA11: ;
		read = ((NI) 0);
		{
			while (1) {
				NI chunk;
				NCSTRING d;
				if (!(read < size)) goto LA23;
				{
					NI res;
					if (!((*socket).isbufferedU.S1.buflen <= (*socket).isbufferedU.S1.currpos)) goto LA26;
					res = readintobuf_527223(socket, ((NI32) 0));
					{
						if (!(res <= ((NI) 0))) goto LA30;
						{
							if (!(((NI) 0) < read)) goto LA34;
							result = read;
							goto BeforeRet;
						}
						goto LA32;
						LA34: ;
						{
							result = res;
							goto BeforeRet;
						}
						LA32: ;
					}
					LA30: ;
				}
				LA26: ;
				chunk = (((NI)((*socket).isbufferedU.S1.buflen - (*socket).isbufferedU.S1.currpos) <= (NI)(size - read)) ? (NI)((*socket).isbufferedU.S1.buflen - (*socket).isbufferedU.S1.currpos) : (NI)(size - read));
				d = ((NCSTRING) (data));
				memcpy(((void*) ((&d[read]))), ((void*) ((&(*socket).isbufferedU.S1.buffer[((*socket).isbufferedU.S1.currpos)- 0]))), ((NI) (chunk)));
				read += chunk;
				(*socket).isbufferedU.S1.currpos += chunk;
			} LA23: ;
		}
		result = read;
	}
	goto LA5;
	LA7: ;
	{
		int LOC38;
		LOC38 = 0;
		LOC38 = Dl_108041((*socket).fd, data, ((int) (size)), ((NI32) 0));
		result = ((NI) (LOC38));
		{
			if (!(result < ((NI) 0))) goto LA41;
			(*socket).lasterror = oslasterror_120040();
		}
		LA41: ;
	}
	LA5: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NI, peekchar_528426)(Socketimpl524404* socket, NIM_CHAR* c) {
	NI result;
	result = 0;
	{
		if (!(*socket).isbuffered) goto LA3;
		result = ((NI) 1);
		{
			NIM_BOOL LOC7;
			NI res;
			LOC7 = 0;
			LOC7 = ((*socket).isbufferedU.S1.buflen == ((NI) 0));
			if (LOC7) goto LA8;
			LOC7 = ((NI)((*socket).isbufferedU.S1.buflen - ((NI) 1)) < (*socket).isbufferedU.S1.currpos);
			LA8: ;
			if (!LOC7) goto LA9;
			res = readintobuf_527223(socket, ((NI32) 0));
			{
				if (!(res <= ((NI) 0))) goto LA13;
				result = res;
			}
			LA13: ;
		}
		LA9: ;
		(*c) = (*socket).isbufferedU.S1.buffer[((*socket).isbufferedU.S1.currpos)- 0];
	}
	goto LA1;
	LA3: ;
	{
		int LOC16;
		LOC16 = 0;
		LOC16 = Dl_108041((*socket).fd, ((void*) (c)), ((int) 1), ((int) 2));
		result = ((NI) (LOC16));
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, readline_528602)(Socketimpl524404* socket, NimStringDesc** line, NI timeout, NU8 flags) {
	NF waited;
{	waited = 0.0;
	(*line) = setLengthStr((*line), ((NI) 0));
	{
		while (1) {
			NIM_CHAR c;
			NI LOC3;
			NI n;
			c = 0;
			LOC3 = 0;
			LOC3 = waitfor_527807(socket, (&waited), timeout, ((NI) 1), ((NimStringDesc*) &TMP5290));
			n = recv_527416(socket, ((void*) ((&c))), ((NI) 1));
			{
				NI32 lasterror;
				if (!(n < ((NI) 0))) goto LA6;
				lasterror = getsocketerror_525001(socket);
				{
					NIM_BOOL LOC10;
					LOC10 = 0;
					LOC10 = isdisconnectionerror_524473(flags, lasterror);
					if (!LOC10) goto LA11;
					(*line) = setLengthStr((*line), ((NI) 0));
					goto BeforeRet;
				}
				LA11: ;
				socketerror_524467(socket, n, NIM_FALSE, lasterror);
			}
			goto LA4;
			LA6: ;
			{
				if (!(n == ((NI) 0))) goto LA14;
				(*line) = setLengthStr((*line), ((NI) 0));
				goto BeforeRet;
			}
			goto LA4;
			LA14: ;
			LA4: ;
			{
				NI LOC20;
				if (!((NU8)(c) == (NU8)(13))) goto LA18;
				LOC20 = 0;
				LOC20 = waitfor_527807(socket, (&waited), timeout, ((NI) 1), ((NimStringDesc*) &TMP5290));
				n = peekchar_528426(socket, (&c));
				{
					NIM_BOOL LOC23;
					NI LOC27;
					LOC23 = 0;
					LOC23 = (((NI) 0) < n);
					if (!(LOC23)) goto LA24;
					LOC23 = ((NU8)(c) == (NU8)(10));
					LA24: ;
					if (!LOC23) goto LA25;
					LOC27 = 0;
					LOC27 = recv_527416(socket, ((void*) ((&c))), ((NI) 1));
				}
				goto LA21;
				LA25: ;
				{
					NI32 lasterror;
					if (!(n <= ((NI) 0))) goto LA29;
					lasterror = getsocketerror_525001(socket);
					{
						NIM_BOOL LOC33;
						LOC33 = 0;
						LOC33 = isdisconnectionerror_524473(flags, lasterror);
						if (!LOC33) goto LA34;
						(*line) = setLengthStr((*line), ((NI) 0));
						goto BeforeRet;
					}
					LA34: ;
					socketerror_524467(socket, n, NIM_FALSE, lasterror);
				}
				goto LA21;
				LA29: ;
				LA21: ;
				{
					if (!(((*line) ? (*line)->Sup.len : 0) == ((NI) 0))) goto LA38;
					(*line) = resizeString((*line), 2);
appendString((*line), ((NimStringDesc*) &TMP5291));
				}
				LA38: ;
				goto BeforeRet;
			}
			goto LA16;
			LA18: ;
			{
				if (!((NU8)(c) == (NU8)(10))) goto LA41;
				{
					if (!(((*line) ? (*line)->Sup.len : 0) == ((NI) 0))) goto LA45;
					(*line) = resizeString((*line), 2);
appendString((*line), ((NimStringDesc*) &TMP5291));
				}
				LA45: ;
				goto BeforeRet;
			}
			goto LA16;
			LA41: ;
			LA16: ;
			(*line) = addChar((*line), c);
		}
	}
	}BeforeRet: ;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = exchandler_19437;
	exchandler_19437 = s;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_19437 = (*exchandler_19437).prev;
}

N_NIMCALL(void, close_526411)(Socketimpl524404* socket) {
	TSafePoint TMP5292;
	pushSafePoint(&TMP5292);
	TMP5292.status = setjmp(TMP5292.context);
	if (TMP5292.status == 0) {
		popSafePoint();
	}
	else {
		popSafePoint();
	}
	{
		close_519013((*socket).fd);
	}
	if (TMP5292.status != 0) reraiseException();
}
NIM_EXTERNC N_NOINLINE(void, stdlib_netInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_netDatInit000)(void) {
static TNimNode* TMP5263[6];
static TNimNode* TMP5264[3];
static TNimNode TMP1199[13];
NTI524404.size = sizeof(Socketimpl524404);
NTI524404.kind = 18;
NTI524404.base = 0;
NTI524404.flags = 3;
TMP5263[0] = &TMP1199[1];
TMP1199[1].kind = 1;
TMP1199[1].offset = offsetof(Socketimpl524404, fd);
TMP1199[1].typ = (&NTI104);
TMP1199[1].name = "fd";
TMP5263[1] = &TMP1199[2];
TMP1199[2].kind = 3;
TMP1199[2].offset = offsetof(Socketimpl524404, isbuffered);
TMP1199[2].typ = (&NTI130);
TMP1199[2].name = "isBuffered";
TMP1199[2].sons = &NimDT_524404_isbuffered[0];
TMP1199[2].len = 2;
TMP5264[0] = &TMP1199[4];
NTI524418.size = sizeof(TY524418);
NTI524418.kind = 16;
NTI524418.base = (&NTI136);
NTI524418.flags = 3;
TMP1199[4].kind = 1;
TMP1199[4].offset = offsetof(Socketimpl524404, isbufferedU.S1.buffer);
TMP1199[4].typ = (&NTI524418);
TMP1199[4].name = "buffer";
TMP5264[1] = &TMP1199[5];
TMP1199[5].kind = 1;
TMP1199[5].offset = offsetof(Socketimpl524404, isbufferedU.S1.currpos);
TMP1199[5].typ = (&NTI104);
TMP1199[5].name = "currPos";
TMP5264[2] = &TMP1199[6];
TMP1199[6].kind = 1;
TMP1199[6].offset = offsetof(Socketimpl524404, isbufferedU.S1.buflen);
TMP1199[6].typ = (&NTI104);
TMP1199[6].name = "bufLen";
TMP1199[3].len = 3; TMP1199[3].kind = 2; TMP1199[3].sons = &TMP5264[0];
NimDT_524404_isbuffered[1] = &TMP1199[3];
TMP1199[7].len = 0; TMP1199[7].kind = 2;
NimDT_524404_isbuffered[0] = &TMP1199[7];
TMP5263[2] = &TMP1199[8];
TMP1199[8].kind = 1;
TMP1199[8].offset = offsetof(Socketimpl524404, lasterror);
TMP1199[8].typ = (&NTI110);
TMP1199[8].name = "lastError";
TMP5263[3] = &TMP1199[9];
TMP1199[9].kind = 1;
TMP1199[9].offset = offsetof(Socketimpl524404, domain);
TMP1199[9].typ = (&NTI518604);
TMP1199[9].name = "domain";
TMP5263[4] = &TMP1199[10];
TMP1199[10].kind = 1;
TMP1199[10].offset = offsetof(Socketimpl524404, socktype);
TMP1199[10].typ = (&NTI518606);
TMP1199[10].name = "sockType";
TMP5263[5] = &TMP1199[11];
TMP1199[11].kind = 1;
TMP1199[11].offset = offsetof(Socketimpl524404, protocol);
TMP1199[11].typ = (&NTI518608);
TMP1199[11].name = "protocol";
TMP1199[0].len = 6; TMP1199[0].kind = 2; TMP1199[0].sons = &TMP5263[0];
NTI524404.node = &TMP1199[0];
NTI524406.size = sizeof(Socketimpl524404*);
NTI524406.kind = 22;
NTI524406.base = (&NTI524404);
NTI524406.flags = 2;
NTI524406.marker = TMP5274;
NTI524412.size = sizeof(Timeouterror524412);
NTI524412.kind = 17;
NTI524412.base = (&NTI3624);
TMP1199[12].len = 0; TMP1199[12].kind = 2;
NTI524412.node = &TMP1199[12];
NTI528014.size = sizeof(Timeouterror524412*);
NTI528014.kind = 22;
NTI528014.base = (&NTI524412);
NTI528014.marker = TMP5286;
}

