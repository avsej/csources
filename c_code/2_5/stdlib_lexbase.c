/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Baselexer247024 Baselexer247024;
typedef struct TNimObject TNimObject;
typedef struct Streamobj138027 Streamobj138027;
typedef N_NIMCALL_PTR(void, TY3289) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3294) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3289 marker;
TY3294 deepcopy;
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
struct  Baselexer247024  {
  TNimObject Sup;
NI bufpos;
NCSTRING buf;
NI buflen;
Streamobj138027* input;
NI linenumber;
NI sentinel;
NI linestart;
NIM_BOOL fileopened;
};
typedef N_NIMCALL_PTR(void, TY138028) (Streamobj138027* s);
typedef N_NIMCALL_PTR(NIM_BOOL, TY138032) (Streamobj138027* s);
typedef N_NIMCALL_PTR(void, TY138036) (Streamobj138027* s, NI pos);
typedef N_NIMCALL_PTR(NI, TY138041) (Streamobj138027* s);
typedef N_NIMCALL_PTR(NI, TY138045) (Streamobj138027* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY138051) (Streamobj138027* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY138057) (Streamobj138027* s);
struct  Streamobj138027  {
  TNimObject Sup;
TY138028 closeimpl;
TY138032 atendimpl;
TY138036 setpositionimpl;
TY138041 getpositionimpl;
TY138045 readdataimpl;
TY138051 writedataimpl;
TY138057 flushimpl;
};
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NOCONV(void*, alloc_6001)(NI size);
N_NIMCALL(void, fillbuffer_247102)(Baselexer247024* L);
N_NIMCALL(NI, readdata_138174)(Streamobj138027* s, void* buffer, NI buflen);
N_NOCONV(void*, realloc_6033)(void* p, NI newsize);
N_NIMCALL(void, skiputf8bom_248416)(Baselexer247024* L);
N_NOCONV(void, dealloc_6048)(void* p);
N_NIMCALL(void, close_138085)(Streamobj138027* s);
N_NIMCALL(NI, fillbaselexer_247827)(Baselexer247024* L, NI pos);
extern TNimType NTI3411; /* RootObj */
TNimType NTI247024; /* BaseLexer */
extern TNimType NTI108; /* int */
extern TNimType NTI151; /* cstring */
extern TNimType NTI138025; /* Stream */
extern TNimType NTI138; /* bool */

N_NIMCALL(void, fillbuffer_247102)(Baselexer247024* L) {
	NI charsread;
	NI tocopy;
	NI s;
	NI oldbuflen;
	NI LOC5;
	charsread = 0;
	tocopy = 0;
	s = 0;
	oldbuflen = 0;
	tocopy = (NI)((NI)((*L).buflen - (*L).sentinel) - ((NI) 1));
	{
		if (!(((NI) 0) < tocopy)) goto LA3;
		memmove(((void*) ((*L).buf)), ((void*) ((&(*L).buf[(NI)((*L).sentinel + ((NI) 1))]))), ((NI) ((NI)(tocopy * ((NI) 1)))));
	}
	LA3: ;
	LOC5 = 0;
	LOC5 = readdata_138174((*L).input, ((void*) ((&(*L).buf[tocopy]))), (NI)((NI)((*L).sentinel + ((NI) 1)) * ((NI) 1)));
	charsread = (NI)(LOC5 / ((NI) 1));
	s = (NI)(tocopy + charsread);
	{
		if (!(charsread < (NI)((*L).sentinel + ((NI) 1)))) goto LA8;
		(*L).buf[s] = 0;
		(*L).sentinel = s;
	}
	goto LA6;
	LA8: ;
	{
		s -= ((NI) 1);
		{
			while (1) {
				{
					while (1) {
						NIM_BOOL LOC15;
						LOC15 = 0;
						LOC15 = (((NI) 0) <= s);
						if (!(LOC15)) goto LA16;
						LOC15 = !((((NU8)((*L).buf[s])) == ((NU8)(13)) || ((NU8)((*L).buf[s])) == ((NU8)(10))));
						LA16: ;
						if (!LOC15) goto LA14;
						s -= ((NI) 1);
					} LA14: ;
				}
				{
					if (!(((NI) 0) <= s)) goto LA19;
					(*L).sentinel = s;
					goto LA11;
				}
				goto LA17;
				LA19: ;
				{
					void* LOC22;
					NI LOC23;
					oldbuflen = (*L).buflen;
					(*L).buflen = (NI)((*L).buflen * ((NI) 2));
					LOC22 = 0;
					LOC22 = realloc_6033(((void*) ((*L).buf)), ((NI) ((NI)((*L).buflen * ((NI) 1)))));
					(*L).buf = ((NCSTRING) (LOC22));
					LOC23 = 0;
					LOC23 = readdata_138174((*L).input, ((void*) ((&(*L).buf[oldbuflen]))), (NI)(oldbuflen * ((NI) 1)));
					charsread = (NI)(LOC23 / ((NI) 1));
					{
						if (!(charsread < oldbuflen)) goto LA26;
						(*L).buf[(NI)(oldbuflen + charsread)] = 0;
						(*L).sentinel = (NI)(oldbuflen + charsread);
						goto LA11;
					}
					LA26: ;
					s = (NI)((*L).buflen - ((NI) 1));
				}
				LA17: ;
			}
		} LA11: ;
	}
	LA6: ;
}

N_NIMCALL(void, skiputf8bom_248416)(Baselexer247024* L) {
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		LOC3 = 0;
		LOC4 = 0;
		LOC4 = ((NU8)((*L).buf[((NI) 0)]) == (NU8)(239));
		if (!(LOC4)) goto LA5;
		LOC4 = ((NU8)((*L).buf[((NI) 1)]) == (NU8)(187));
		LA5: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA6;
		LOC3 = ((NU8)((*L).buf[((NI) 2)]) == (NU8)(191));
		LA6: ;
		if (!LOC3) goto LA7;
		(*L).bufpos += ((NI) 3);
		(*L).linestart += ((NI) 3);
	}
	LA7: ;
}

N_NIMCALL(void, open_247040)(Baselexer247024* L, Streamobj138027* input, NI buflen) {
	void* LOC1;
	unsureAsgnRef((void**) (&(*L).input), input);
	(*L).bufpos = ((NI) 0);
	(*L).buflen = buflen;
	LOC1 = 0;
	LOC1 = alloc_6001(((NI) ((NI)(buflen * ((NI) 1)))));
	(*L).buf = ((NCSTRING) (LOC1));
	(*L).sentinel = (NI)(buflen - ((NI) 1));
	(*L).linestart = ((NI) 0);
	(*L).linenumber = ((NI) 1);
	fillbuffer_247102(L);
	skiputf8bom_248416(L);
}

N_NIMCALL(void, close_247050)(Baselexer247024* L) {
	dealloc_6048(((void*) ((*L).buf)));
	close_138085((*L).input);
}

N_NIMCALL(NI, fillbaselexer_247827)(Baselexer247024* L, NI pos) {
	NI result;
	result = 0;
	{
		if (!(pos < (*L).sentinel)) goto LA3;
		result = (NI)(pos + ((NI) 1));
	}
	goto LA1;
	LA3: ;
	{
		fillbuffer_247102(L);
		(*L).bufpos = ((NI) 0);
		result = ((NI) 0);
	}
	LA1: ;
	(*L).linestart = result;
	return result;
}

N_NIMCALL(NI, handlecr_247071)(Baselexer247024* L, NI pos) {
	NI result;
	result = 0;
	(*L).linenumber += ((NI) 1);
	result = fillbaselexer_247827(L, pos);
	{
		if (!((NU8)((*L).buf[result]) == (NU8)(10))) goto LA3;
		result = fillbaselexer_247827(L, result);
	}
	LA3: ;
	return result;
}

N_NIMCALL(NI, handlelf_247079)(Baselexer247024* L, NI pos) {
	NI result;
	result = 0;
	(*L).linenumber += ((NI) 1);
	result = fillbaselexer_247827(L, pos);
	return result;
}

N_NIMCALL(NI, getcolnumber_247064)(Baselexer247024* L, NI pos) {
	NI result;
	result = 0;
	result = ((NI)(pos - (*L).linestart) > 0? ((NI)(pos - (*L).linestart)) : -((NI)(pos - (*L).linestart)));
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_lexbaseInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_lexbaseDatInit)(void) {
static TNimNode* TMP2681[8];
static TNimNode TMP858[9];
NTI247024.size = sizeof(Baselexer247024);
NTI247024.kind = 17;
NTI247024.base = (&NTI3411);
TMP2681[0] = &TMP858[1];
TMP858[1].kind = 1;
TMP858[1].offset = offsetof(Baselexer247024, bufpos);
TMP858[1].typ = (&NTI108);
TMP858[1].name = "bufpos";
TMP2681[1] = &TMP858[2];
TMP858[2].kind = 1;
TMP858[2].offset = offsetof(Baselexer247024, buf);
TMP858[2].typ = (&NTI151);
TMP858[2].name = "buf";
TMP2681[2] = &TMP858[3];
TMP858[3].kind = 1;
TMP858[3].offset = offsetof(Baselexer247024, buflen);
TMP858[3].typ = (&NTI108);
TMP858[3].name = "bufLen";
TMP2681[3] = &TMP858[4];
TMP858[4].kind = 1;
TMP858[4].offset = offsetof(Baselexer247024, input);
TMP858[4].typ = (&NTI138025);
TMP858[4].name = "input";
TMP2681[4] = &TMP858[5];
TMP858[5].kind = 1;
TMP858[5].offset = offsetof(Baselexer247024, linenumber);
TMP858[5].typ = (&NTI108);
TMP858[5].name = "lineNumber";
TMP2681[5] = &TMP858[6];
TMP858[6].kind = 1;
TMP858[6].offset = offsetof(Baselexer247024, sentinel);
TMP858[6].typ = (&NTI108);
TMP858[6].name = "sentinel";
TMP2681[6] = &TMP858[7];
TMP858[7].kind = 1;
TMP858[7].offset = offsetof(Baselexer247024, linestart);
TMP858[7].typ = (&NTI108);
TMP858[7].name = "lineStart";
TMP2681[7] = &TMP858[8];
TMP858[8].kind = 1;
TMP858[8].offset = offsetof(Baselexer247024, fileopened);
TMP858[8].typ = (&NTI138);
TMP858[8].name = "fileOpened";
TMP858[0].len = 8; TMP858[0].kind = 2; TMP858[0].sons = &TMP2681[0];
NTI247024.node = &TMP858[0];
}

