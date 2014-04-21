/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct tbaselexer176018 tbaselexer176018;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tllstream174204 tllstream174204;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef NU8 TY122387[32];
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
struct  TNimObject  {
TNimType* m_type;
};
struct  tbaselexer176018  {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
tllstream174204* Stream;
NI Linenumber;
NI Sentinel;
NI Linestart;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tllstream174204  {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
};
N_NIMCALL(void, closebaselexer_176035)(tbaselexer176018* l);
N_NOCONV(void, dealloc_4645)(void* p);
N_NIMCALL(void, llstreamclose_174238)(tllstream174204* s);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, fillbuffer_176072)(tbaselexer176018* l);
N_NIMCALL(void, failedassertimpl_80021)(NimStringDesc* msg);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(NI, mulInt)(NI a, NI b);
N_NIMCALL(NI, llstreamread_174242)(tllstream174204* s, void* buf, NI buflen);
static N_INLINE(NI, divInt)(NI a, NI b);
N_NOINLINE(void, raiseDivByZero)(void);
N_NOCONV(void*, realloc_4631)(void* p, NI newsize);
N_NIMCALL(NI, fillbaselexer_176812)(tbaselexer176018* l, NI pos);
N_NIMCALL(NI, handlecr_176050)(tbaselexer176018* l, NI pos);
N_NIMCALL(NI, handlelf_176056)(tbaselexer176018* l, NI pos);
N_NIMCALL(void, skiputf8bom_177419)(tbaselexer176018* l);
N_NIMCALL(void, openbaselexer_176027)(tbaselexer176018* l, tllstream174204* inputstream, NI buflen);
N_NOCONV(void*, alloc_4601)(NI size);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NI, getcolnumber_176045)(tbaselexer176018* l, NI pos);
N_NIMCALL(NimStringDesc*, getcurrentline_176040)(tbaselexer176018* l, NIM_BOOL marker);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NI count, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
NIM_CONST TY122387 newlines_176014 = {
0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP1643, "L.sentinel < L.bufLen ", 22);
STRING_LITERAL(TMP1646, "toCopy >= 0 ", 12);
STRING_LITERAL(TMP1654, "s < L.bufLen ", 13);
STRING_LITERAL(TMP1658, "L.bufLen - oldBufLen == oldBufLen ", 34);
STRING_LITERAL(TMP1664, "pos <= L.sentinel ", 18);
STRING_LITERAL(TMP1666, "L.buf[pos] == CR ", 17);
STRING_LITERAL(TMP1667, "L.buf[pos] == LF ", 17);
STRING_LITERAL(TMP1668, "bufLen > 0 ", 11);
STRING_LITERAL(TMP1672, "", 0);
STRING_LITERAL(TMP1673, "\012", 1);
STRING_LITERAL(TMP1674, "^\012", 2);
extern TFrame* frameptr_13238;
extern TNimType NTI2409; /* TObject */
TNimType NTI176018; /* TBaseLexer */
extern TNimType NTI106; /* int */
extern TNimType NTI145; /* cstring */
extern TNimType NTI174206; /* PLLStream */

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13238;
	frameptr_13238 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13238 = (*frameptr_13238).prev;
}

N_NIMCALL(void, closebaselexer_176035)(tbaselexer176018* l) {
	nimfr("closeBaseLexer", "nimlexbase.nim")
	nimln(71, "nimlexbase.nim");
	dealloc_4645(((void*) ((*l).Buf)));
	nimln(72, "nimlexbase.nim");
	llstreamclose_174238((*l).Stream);
	popFrame();
}

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU32)(a) - (NU32)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ (NI)((NU32) ~(b))));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	BeforeRet: ;
	return result;
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU32)(a) + (NU32)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ b));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	BeforeRet: ;
	return result;
}

static N_INLINE(NI, divInt)(NI a, NI b) {
	NI result;
	result = 0;
	{
		if (!(b == 0)) goto LA3;
		raiseDivByZero();
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (a == (-2147483647 -1));
		if (!(LOC7)) goto LA8;
		LOC7 = (b == -1);
		LA8: ;
		if (!LOC7) goto LA9;
		raiseOverflow();
	}
	LA9: ;
	result = (NI32)(a / b);
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, fillbuffer_176072)(tbaselexer176018* l) {
	NI charsread;
	NI tocopy;
	NI s;
	NI oldbuflen;
	NI TMP1644;
	NI TMP1645;
	NI TMP1649;
	NI TMP1650;
	NI LOC13;
	NI TMP1651;
	NI TMP1652;
	nimfr("fillBuffer", "nimlexbase.nim")
	charsread = 0;
	tocopy = 0;
	s = 0;
	oldbuflen = 0;
	nimln(82, "nimlexbase.nim");
	{
		nimln(82, "nimlexbase.nim");
		nimln(82, "nimlexbase.nim");
		if (!!(((*l).Sentinel < (*l).Buflen))) goto LA3;
		nimln(82, "nimlexbase.nim");
		failedassertimpl_80021(((NimStringDesc*) &TMP1643));
	}
	LA3: ;
	nimln(83, "nimlexbase.nim");
	nimln(83, "nimlexbase.nim");
	nimln(83, "nimlexbase.nim");
	TMP1644 = subInt((*l).Buflen, (*l).Sentinel);
	TMP1645 = subInt((NI32)(TMP1644), 1);
	tocopy = (NI32)(TMP1645);
	nimln(84, "nimlexbase.nim");
	{
		nimln(84, "nimlexbase.nim");
		nimln(84, "nimlexbase.nim");
		if (!!((0 <= tocopy))) goto LA7;
		nimln(84, "nimlexbase.nim");
		failedassertimpl_80021(((NimStringDesc*) &TMP1646));
	}
	LA7: ;
	nimln(85, "nimlexbase.nim");
	{
		NI TMP1647;
		NI TMP1648;
		nimln(85, "nimlexbase.nim");
		if (!(0 < tocopy)) goto LA11;
		nimln(86, "nimlexbase.nim");
		nimln(86, "nimlexbase.nim");
		TMP1647 = addInt((*l).Sentinel, 1);
		nimln(86, "nimlexbase.nim");
		TMP1648 = mulInt(tocopy, 1);
		memmove(((void*) ((*l).Buf)), ((void*) (&(*l).Buf[(NI32)(TMP1647)])), (NI32)(TMP1648));
	}
	LA11: ;
	nimln(88, "nimlexbase.nim");
	nimln(89, "nimlexbase.nim");
	nimln(88, "nimlexbase.nim");
	nimln(89, "nimlexbase.nim");
	nimln(89, "nimlexbase.nim");
	TMP1649 = addInt((*l).Sentinel, 1);
	TMP1650 = mulInt((NI32)(TMP1649), 1);
	LOC13 = 0;
	LOC13 = llstreamread_174242((*l).Stream, ((void*) (&(*l).Buf[tocopy])), (NI32)(TMP1650));
	TMP1651 = divInt(LOC13, 1);
	charsread = (NI32)(TMP1651);
	nimln(90, "nimlexbase.nim");
	nimln(90, "nimlexbase.nim");
	TMP1652 = addInt(tocopy, charsread);
	s = (NI32)(TMP1652);
	nimln(91, "nimlexbase.nim");
	{
		NI TMP1653;
		nimln(91, "nimlexbase.nim");
		nimln(91, "nimlexbase.nim");
		TMP1653 = addInt((*l).Sentinel, 1);
		if (!(charsread < (NI32)(TMP1653))) goto LA16;
		nimln(92, "nimlexbase.nim");
		(*l).Buf[s] = 0;
		nimln(93, "nimlexbase.nim");
		(*l).Sentinel = s;
	}
	goto LA14;
	LA16: ;
	{
		nimln(96, "nimlexbase.nim");
		s = subInt(s, 1);
		nimln(97, "nimlexbase.nim");
		while (1) {
			nimln(98, "nimlexbase.nim");
			{
				nimln(98, "nimlexbase.nim");
				nimln(98, "nimlexbase.nim");
				if (!!((s < (*l).Buflen))) goto LA22;
				nimln(98, "nimlexbase.nim");
				failedassertimpl_80021(((NimStringDesc*) &TMP1654));
			}
			LA22: ;
			nimln(99, "nimlexbase.nim");
			while (1) {
				NIM_BOOL LOC25;
				nimln(99, "nimlexbase.nim");
				LOC25 = 0;
				nimln(99, "nimlexbase.nim");
				LOC25 = (0 <= s);
				if (!(LOC25)) goto LA26;
				nimln(99, "nimlexbase.nim");
				nimln(99, "nimlexbase.nim");
				LOC25 = !((((NU8)((*l).Buf[s])) == ((NU8)(13)) || ((NU8)((*l).Buf[s])) == ((NU8)(10))));
				LA26: ;
				if (!LOC25) goto LA24;
				nimln(99, "nimlexbase.nim");
				s = subInt(s, 1);
			} LA24: ;
			nimln(100, "nimlexbase.nim");
			{
				nimln(100, "nimlexbase.nim");
				if (!(0 <= s)) goto LA29;
				nimln(102, "nimlexbase.nim");
				(*l).Sentinel = s;
				nimln(103, "nimlexbase.nim");
				goto LA19;
			}
			goto LA27;
			LA29: ;
			{
				NI TMP1655;
				NI TMP1656;
				void* LOC32;
				NI TMP1659;
				NI LOC37;
				NI TMP1660;
				NI TMP1663;
				nimln(107, "nimlexbase.nim");
				oldbuflen = (*l).Buflen;
				nimln(108, "nimlexbase.nim");
				nimln(108, "nimlexbase.nim");
				TMP1655 = mulInt((*l).Buflen, 2);
				(*l).Buflen = (NI32)(TMP1655);
				nimln(109, "nimlexbase.nim");
				nimln(109, "nimlexbase.nim");
				nimln(109, "nimlexbase.nim");
				TMP1656 = mulInt((*l).Buflen, 1);
				LOC32 = 0;
				LOC32 = realloc_4631(((void*) ((*l).Buf)), (NI32)(TMP1656));
				(*l).Buf = ((NCSTRING) (LOC32));
				nimln(110, "nimlexbase.nim");
				{
					NI TMP1657;
					nimln(110, "nimlexbase.nim");
					nimln(110, "nimlexbase.nim");
					nimln(110, "nimlexbase.nim");
					TMP1657 = subInt((*l).Buflen, oldbuflen);
					if (!!(((NI32)(TMP1657) == oldbuflen))) goto LA35;
					nimln(110, "nimlexbase.nim");
					failedassertimpl_80021(((NimStringDesc*) &TMP1658));
				}
				LA35: ;
				nimln(111, "nimlexbase.nim");
				nimln(112, "nimlexbase.nim");
				nimln(111, "nimlexbase.nim");
				nimln(112, "nimlexbase.nim");
				TMP1659 = mulInt(oldbuflen, 1);
				LOC37 = 0;
				LOC37 = llstreamread_174242((*l).Stream, ((void*) (&(*l).Buf[oldbuflen])), (NI32)(TMP1659));
				TMP1660 = divInt(LOC37, 1);
				charsread = (NI32)(TMP1660);
				nimln(113, "nimlexbase.nim");
				{
					NI TMP1661;
					NI TMP1662;
					nimln(113, "nimlexbase.nim");
					if (!(charsread < oldbuflen)) goto LA40;
					nimln(114, "nimlexbase.nim");
					nimln(114, "nimlexbase.nim");
					TMP1661 = addInt(oldbuflen, charsread);
					(*l).Buf[(NI32)(TMP1661)] = 0;
					nimln(115, "nimlexbase.nim");
					nimln(115, "nimlexbase.nim");
					TMP1662 = addInt(oldbuflen, charsread);
					(*l).Sentinel = (NI32)(TMP1662);
					nimln(116, "nimlexbase.nim");
					goto LA19;
				}
				LA40: ;
				nimln(117, "nimlexbase.nim");
				nimln(117, "nimlexbase.nim");
				TMP1663 = subInt((*l).Buflen, 1);
				s = (NI32)(TMP1663);
			}
			LA27: ;
		} LA19: ;
	}
	LA14: ;
	popFrame();
}

N_NIMCALL(NI, fillbaselexer_176812)(tbaselexer176018* l, NI pos) {
	NI result;
	nimfr("fillBaseLexer", "nimlexbase.nim")
	result = 0;
	nimln(120, "nimlexbase.nim");
	{
		nimln(120, "nimlexbase.nim");
		nimln(120, "nimlexbase.nim");
		if (!!((pos <= (*l).Sentinel))) goto LA3;
		nimln(120, "nimlexbase.nim");
		failedassertimpl_80021(((NimStringDesc*) &TMP1664));
	}
	LA3: ;
	nimln(121, "nimlexbase.nim");
	{
		NI TMP1665;
		nimln(121, "nimlexbase.nim");
		if (!(pos < (*l).Sentinel)) goto LA7;
		nimln(122, "nimlexbase.nim");
		nimln(122, "nimlexbase.nim");
		TMP1665 = addInt(pos, 1);
		result = (NI32)(TMP1665);
	}
	goto LA5;
	LA7: ;
	{
		nimln(124, "nimlexbase.nim");
		fillbuffer_176072(l);
		nimln(125, "nimlexbase.nim");
		(*l).Bufpos = 0;
		nimln(126, "nimlexbase.nim");
		result = 0;
	}
	LA5: ;
	nimln(127, "nimlexbase.nim");
	(*l).Linestart = result;
	popFrame();
	return result;
}

N_NIMCALL(NI, handlecr_176050)(tbaselexer176018* l, NI pos) {
	NI result;
	nimfr("handleCR", "nimlexbase.nim")
	result = 0;
	nimln(130, "nimlexbase.nim");
	{
		nimln(130, "nimlexbase.nim");
		nimln(130, "nimlexbase.nim");
		if (!!(((NU8)((*l).Buf[pos]) == (NU8)(13)))) goto LA3;
		nimln(130, "nimlexbase.nim");
		failedassertimpl_80021(((NimStringDesc*) &TMP1666));
	}
	LA3: ;
	nimln(131, "nimlexbase.nim");
	(*l).Linenumber = addInt((*l).Linenumber, 1);
	nimln(132, "nimlexbase.nim");
	result = fillbaselexer_176812(l, pos);
	nimln(133, "nimlexbase.nim");
	{
		nimln(133, "nimlexbase.nim");
		if (!((NU8)((*l).Buf[result]) == (NU8)(10))) goto LA7;
		nimln(134, "nimlexbase.nim");
		result = fillbaselexer_176812(l, result);
	}
	LA7: ;
	popFrame();
	return result;
}

N_NIMCALL(NI, handlelf_176056)(tbaselexer176018* l, NI pos) {
	NI result;
	nimfr("handleLF", "nimlexbase.nim")
	result = 0;
	nimln(137, "nimlexbase.nim");
	{
		nimln(137, "nimlexbase.nim");
		nimln(137, "nimlexbase.nim");
		if (!!(((NU8)((*l).Buf[pos]) == (NU8)(10)))) goto LA3;
		nimln(137, "nimlexbase.nim");
		failedassertimpl_80021(((NimStringDesc*) &TMP1667));
	}
	LA3: ;
	nimln(138, "nimlexbase.nim");
	(*l).Linenumber = addInt((*l).Linenumber, 1);
	nimln(139, "nimlexbase.nim");
	result = fillbaselexer_176812(l, pos);
	popFrame();
	return result;
}

N_NIMCALL(void, skiputf8bom_177419)(tbaselexer176018* l) {
	nimfr("skipUTF8BOM", "nimlexbase.nim")
	nimln(142, "nimlexbase.nim");
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		nimln(142, "nimlexbase.nim");
		LOC3 = 0;
		nimln(142, "nimlexbase.nim");
		LOC4 = 0;
		nimln(142, "nimlexbase.nim");
		LOC4 = ((NU8)((*l).Buf[0]) == (NU8)(239));
		if (!(LOC4)) goto LA5;
		nimln(142, "nimlexbase.nim");
		LOC4 = ((NU8)((*l).Buf[1]) == (NU8)(187));
		LA5: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA6;
		nimln(142, "nimlexbase.nim");
		LOC3 = ((NU8)((*l).Buf[2]) == (NU8)(191));
		LA6: ;
		if (!LOC3) goto LA7;
		nimln(143, "nimlexbase.nim");
		(*l).Bufpos = addInt((*l).Bufpos, 3);
		nimln(144, "nimlexbase.nim");
		(*l).Linestart = addInt((*l).Linestart, 3);
	}
	LA7: ;
	popFrame();
}

N_NIMCALL(void, openbaselexer_176027)(tbaselexer176018* l, tllstream174204* inputstream, NI buflen) {
	NI TMP1669;
	void* LOC5;
	NI TMP1670;
	nimfr("openBaseLexer", "nimlexbase.nim")
	nimln(147, "nimlexbase.nim");
	{
		nimln(147, "nimlexbase.nim");
		nimln(147, "nimlexbase.nim");
		if (!!((0 < buflen))) goto LA3;
		nimln(147, "nimlexbase.nim");
		failedassertimpl_80021(((NimStringDesc*) &TMP1668));
	}
	LA3: ;
	nimln(148, "nimlexbase.nim");
	(*l).Bufpos = 0;
	nimln(149, "nimlexbase.nim");
	(*l).Buflen = buflen;
	nimln(150, "nimlexbase.nim");
	nimln(150, "nimlexbase.nim");
	nimln(150, "nimlexbase.nim");
	TMP1669 = mulInt(buflen, 1);
	LOC5 = 0;
	LOC5 = alloc_4601((NI32)(TMP1669));
	(*l).Buf = ((NCSTRING) (LOC5));
	nimln(151, "nimlexbase.nim");
	nimln(151, "nimlexbase.nim");
	TMP1670 = subInt(buflen, 1);
	(*l).Sentinel = (NI32)(TMP1670);
	nimln(152, "nimlexbase.nim");
	(*l).Linestart = 0;
	nimln(153, "nimlexbase.nim");
	(*l).Linenumber = 1;
	nimln(154, "nimlexbase.nim");
	unsureAsgnRef((void**) &(*l).Stream, inputstream);
	nimln(155, "nimlexbase.nim");
	fillbuffer_176072(l);
	nimln(156, "nimlexbase.nim");
	skiputf8bom_177419(l);
	popFrame();
}

N_NIMCALL(NI, getcolnumber_176045)(tbaselexer176018* l, NI pos) {
	NI result;
	NI TMP1671;
	nimfr("getColNumber", "nimlexbase.nim")
	result = 0;
	nimln(159, "nimlexbase.nim");
	nimln(159, "nimlexbase.nim");
	nimln(159, "nimlexbase.nim");
	TMP1671 = subInt(pos, (*l).Linestart);
	if ((NI32)(TMP1671) == (-2147483647 -1)) raiseOverflow();
	result = (NI32)abs((NI32)(TMP1671));
	popFrame();
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, getcurrentline_176040)(tbaselexer176018* l, NIM_BOOL marker) {
	NimStringDesc* result;
	NI i;
	nimfr("getCurrentLine", "nimlexbase.nim")
	result = 0;
	nimln(162, "nimlexbase.nim");
	result = copyString(((NimStringDesc*) &TMP1672));
	nimln(163, "nimlexbase.nim");
	i = (*l).Linestart;
	nimln(164, "nimlexbase.nim");
	while (1) {
		nimln(164, "nimlexbase.nim");
		nimln(164, "nimlexbase.nim");
		if (!!((((NU8)((*l).Buf[i])) == ((NU8)(13)) || ((NU8)((*l).Buf[i])) == ((NU8)(10)) || ((NU8)((*l).Buf[i])) == ((NU8)(0))))) goto LA1;
		nimln(165, "nimlexbase.nim");
		result = addChar(result, (*l).Buf[i]);
		nimln(166, "nimlexbase.nim");
		i = addInt(i, 1);
	} LA1: ;
	nimln(167, "nimlexbase.nim");
	result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TMP1673));
	nimln(168, "nimlexbase.nim");
	{
		NimStringDesc* LOC6;
		NI LOC7;
		NimStringDesc* LOC8;
		if (!marker) goto LA4;
		nimln(169, "nimlexbase.nim");
		nimln(169, "nimlexbase.nim");
		LOC6 = 0;
		nimln(169, "nimlexbase.nim");
		nimln(169, "nimlexbase.nim");
		LOC7 = 0;
		LOC7 = getcolnumber_176045(l, (*l).Bufpos);
		LOC8 = 0;
		LOC8 = nsuRepeatChar(LOC7, 32);
		LOC6 = rawNewString(LOC8->Sup.len + 2);
appendString(LOC6, LOC8);
appendString(LOC6, ((NimStringDesc*) &TMP1674));
		result = resizeString(result, LOC6->Sup.len + 0);
appendString(result, LOC6);
	}
	LA4: ;
	popFrame();
	return result;
}
N_NOINLINE(void, nimlexbaseInit)(void) {
	nimfr("nimlexbase", "nimlexbase.nim")
	popFrame();
}

N_NOINLINE(void, nimlexbaseDatInit)(void) {
static TNimNode* TMP1912[7];
static TNimNode TMP1618[8];
NTI176018.size = sizeof(tbaselexer176018);
NTI176018.kind = 17;
NTI176018.base = (&NTI2409);
TMP1912[0] = &TMP1618[1];
TMP1618[1].kind = 1;
TMP1618[1].offset = offsetof(tbaselexer176018, Bufpos);
TMP1618[1].typ = (&NTI106);
TMP1618[1].name = "bufpos";
TMP1912[1] = &TMP1618[2];
TMP1618[2].kind = 1;
TMP1618[2].offset = offsetof(tbaselexer176018, Buf);
TMP1618[2].typ = (&NTI145);
TMP1618[2].name = "buf";
TMP1912[2] = &TMP1618[3];
TMP1618[3].kind = 1;
TMP1618[3].offset = offsetof(tbaselexer176018, Buflen);
TMP1618[3].typ = (&NTI106);
TMP1618[3].name = "bufLen";
TMP1912[3] = &TMP1618[4];
TMP1618[4].kind = 1;
TMP1618[4].offset = offsetof(tbaselexer176018, Stream);
TMP1618[4].typ = (&NTI174206);
TMP1618[4].name = "stream";
TMP1912[4] = &TMP1618[5];
TMP1618[5].kind = 1;
TMP1618[5].offset = offsetof(tbaselexer176018, Linenumber);
TMP1618[5].typ = (&NTI106);
TMP1618[5].name = "lineNumber";
TMP1912[5] = &TMP1618[6];
TMP1618[6].kind = 1;
TMP1618[6].offset = offsetof(tbaselexer176018, Sentinel);
TMP1618[6].typ = (&NTI106);
TMP1618[6].name = "sentinel";
TMP1912[6] = &TMP1618[7];
TMP1618[7].kind = 1;
TMP1618[7].offset = offsetof(tbaselexer176018, Linestart);
TMP1618[7].typ = (&NTI106);
TMP1618[7].name = "lineStart";
TMP1618[0].len = 7; TMP1618[0].kind = 2; TMP1618[0].sons = &TMP1912[0];
NTI176018.node = &TMP1618[0];
}
