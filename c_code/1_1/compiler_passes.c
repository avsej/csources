/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct Tsym192843 Tsym192843;
typedef struct Tnode192813 Tnode192813;
typedef struct Tpass242017 Tpass242017;
typedef struct Tpasscontext242005 Tpasscontext242005;
typedef struct Trodreader234030 Trodreader234030;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TNimObject TNimObject;
typedef struct Tllstream179204 Tllstream179204;
typedef struct Tparsers220035 Tparsers220035;
typedef struct Tparser208205 Tparser208205;
typedef struct Tlexer182185 Tlexer182185;
typedef struct Tbaselexer180024 Tbaselexer180024;
typedef struct Tlineinfo164338 Tlineinfo164338;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Ttoken182181 Ttoken182181;
typedef struct Tident168021 Tident168021;
typedef struct Tidobj168015 Tidobj168015;
typedef struct Ttypeseq192845 Ttypeseq192845;
typedef struct Tscope192837 Tscope192837;
typedef struct TY192944 TY192944;
typedef struct Tstrtable192817 Tstrtable192817;
typedef struct Tsymseq192815 Tsymseq192815;
typedef struct Ttype192849 Ttype192849;
typedef struct Tloc192827 Tloc192827;
typedef struct Ropeobj162009 Ropeobj162009;
typedef struct Tlib192831 Tlib192831;
typedef struct Tcell46146 Tcell46146;
typedef struct Tcellseq46162 Tcellseq46162;
typedef struct Tgcheap48016 Tgcheap48016;
typedef struct Tcellset46158 Tcellset46158;
typedef struct Tpagedesc46154 Tpagedesc46154;
typedef struct Tmemregion28010 Tmemregion28010;
typedef struct Tsmallchunk27240 Tsmallchunk27240;
typedef struct Tllchunk28004 Tllchunk28004;
typedef struct Tbigchunk27242 Tbigchunk27242;
typedef struct Tintset27217 Tintset27217;
typedef struct Ttrunk27213 Ttrunk27213;
typedef struct Tavlnode28008 Tavlnode28008;
typedef struct Tgcstat48014 Tgcstat48014;
typedef struct TY123008 TY123008;
typedef struct Tnodeseq192807 Tnodeseq192807;
typedef struct TY433293 TY433293;
typedef struct TY192933 TY192933;
typedef struct Tindex234028 Tindex234028;
typedef struct Tiitable200274 Tiitable200274;
typedef struct Tiipairseq200272 Tiipairseq200272;
typedef struct Tidtable192861 Tidtable192861;
typedef struct Tidpairseq192859 Tidpairseq192859;
typedef struct Memfile232208 Memfile232208;
typedef struct Tinstantiation192833 Tinstantiation192833;
typedef struct Tlistentry132022 Tlistentry132022;
typedef struct Tbasechunk27238 Tbasechunk27238;
typedef struct Tfreecell27230 Tfreecell27230;
typedef struct Tiipair200270 Tiipair200270;
typedef struct Tidpair192857 Tidpair192857;
typedef N_NIMCALL_PTR(Tsym192843*, TY242064) (Tsym192843* m, NI32 fileidx);
typedef N_NIMCALL_PTR(Tnode192813*, TY242069) (Tsym192843* m, NI32 fileidx);
typedef N_NIMCALL_PTR(Tpasscontext242005*, Tpassopen242009) (Tsym192843* module);
typedef N_NIMCALL_PTR(Tpasscontext242005*, Tpassopencached242011) (Tsym192843* module, Trodreader234030* rd);
typedef N_NIMCALL_PTR(Tnode192813*, Tpassprocess242015) (Tpasscontext242005* p, Tnode192813* toplevelstmt);
typedef N_NIMCALL_PTR(Tnode192813*, Tpassclose242013) (Tpasscontext242005* p, Tnode192813* n);
struct Tpass242017 {
Tpassopen242009 Field0;
Tpassopencached242011 Field1;
Tpassprocess242015 Field2;
Tpassclose242013 Field3;
};
typedef Tpass242017 TY242173[10];
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
struct  Tpasscontext242005  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
struct  Tbaselexer180024  {
  TNimObject Sup;
NI bufpos;
NCSTRING buf;
NI buflen;
Tllstream179204* stream;
NI linenumber;
NI sentinel;
NI linestart;
};
struct  Tlineinfo164338  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (Tlineinfo164338 info, NU16 msg, NimStringDesc* arg, void* ClEnv);
void* ClEnv;
} Terrorhandler182183;
struct  Tlexer182185  {
  Tbaselexer180024 Sup;
NI32 fileidx;
NI indentahead;
NI currlineindent;
NIM_BOOL strongspaces;
Terrorhandler182183 errorhandler;
};
struct  Ttoken182181  {
NU8 toktype;
NI indent;
Tident168021* ident;
NI64 inumber;
NF fnumber;
NU8 base;
NI8 strongspacea;
NI8 strongspaceb;
NimStringDesc* literal;
NI line;
NI col;
};
struct  Tparser208205  {
NI currind;
NIM_BOOL firsttok;
NIM_BOOL strongspaces;
Tlexer182185 lex;
Ttoken182181 tok;
NI inpragma;
NI insemistmtlist;
};
struct  Tparsers220035  {
NU8 skin;
Tparser208205 parser;
};
typedef Tpasscontext242005* Tpasscontextarray242168[10];
struct  Tidobj168015  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable192817  {
NI counter;
Tsymseq192815* data;
};
struct  Tloc192827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype192849* t;
Ropeobj162009* r;
Ropeobj162009* heaproot;
};
struct  Tsym192843  {
  Tidobj168015 Sup;
NU8 kind;
union{
struct {Ttypeseq192845* typeinstcache;
Tscope192837* typscope;
} S1;
struct {TY192944* procinstcache;
Tsym192843* gcunsafetyreason;
} S2;
struct {TY192944* usedgenerics;
Tstrtable192817 tab;
} S3;
struct {Tsym192843* guard;
} S4;
} kindU;
NU16 magic;
Ttype192849* typ;
Tident168021* name;
Tlineinfo164338 info;
Tsym192843* owner;
NU32 flags;
Tnode192813* ast;
NU32 options;
NI position;
NI offset;
Tloc192827 loc;
Tlib192831* annex;
Tnode192813* constraint;
};
struct  Tident168021  {
  Tidobj168015 Sup;
NimStringDesc* s;
Tident168021* next;
NI h;
};
struct  Tcell46146  {
NI refcount;
TNimType* typ;
};
struct  Tcellseq46162  {
NI len;
NI cap;
Tcell46146** d;
};
struct  Tcellset46158  {
NI counter;
NI max;
Tpagedesc46154* head;
Tpagedesc46154** data;
};
typedef Tsmallchunk27240* TY28022[512];
typedef Ttrunk27213* Ttrunkbuckets27215[256];
struct  Tintset27217  {
Ttrunkbuckets27215 data;
};
struct  Tmemregion28010  {
NI minlargeobj;
NI maxlargeobj;
TY28022 freesmallchunks;
Tllchunk28004* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Tbigchunk27242* freechunkslist;
Tintset27217 chunkstarts;
Tavlnode28008* root;
Tavlnode28008* deleted;
Tavlnode28008* last;
Tavlnode28008* freeavlnodes;
};
struct  Tgcstat48014  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Tgcheap48016  {
void* stackbottom;
NI cyclethreshold;
Tcellseq46162 zct;
Tcellseq46162 decstack;
Tcellset46158 cycleroots;
Tcellseq46162 tempstack;
NI recgclock;
Tmemregion28010 region;
Tgcstat48014 stat;
};
struct  Tnode192813  {
Ttype192849* typ;
Tlineinfo164338 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym192843* sym;
} S4;
struct {Tident168021* ident;
} S5;
struct {Tnodeseq192807* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
struct  Tllstream179204  {
  TNimObject Sup;
NU8 kind;
FILE* f;
NimStringDesc* s;
NI rd;
NI wr;
NI lineoffset;
};
struct  Ttype192849  {
  Tidobj168015 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq192845* sons;
Tnode192813* n;
Tsym192843* owner;
Tsym192843* sym;
Tsym192843* destructor;
Tsym192843* deepcopy;
Tsym192843* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc192827 loc;
};
struct TY433293 {
Tnode192813* Field0;
Tnode192813* Field1;
};
struct  Tiitable200274  {
NI counter;
Tiipairseq200272* data;
};
struct  Tindex234028  {
NI lastidxkey;
NI lastidxval;
Tiitable200274 tab;
NimStringDesc* r;
NI offset;
};
struct  Tidtable192861  {
NI counter;
Tidpairseq192859* data;
};
struct  Memfile232208  {
void* mem;
NI size;
NI fhandle;
NI maphandle;
};
struct  Trodreader234030  {
  TNimObject Sup;
NI pos;
NCSTRING s;
NU32 options;
NU8 reason;
TY192933* moddeps;
TY192933* files;
NI dataidx;
NI convertersidx;
NI initidx;
NI interfidx;
NI compilerprocsidx;
NI methodsidx;
NimStringDesc* filename;
Tindex234028 index;
Tindex234028 imports;
NI readerindex;
NI line;
NI moduleid;
Tidtable192861 syms;
Memfile232208 memfile;
Tsymseq192815* methods;
NimStringDesc* origfile;
NIM_BOOL inviewmode;
};
struct  Tscope192837  {
NI depthlevel;
Tstrtable192817 symbols;
Tnodeseq192807* usingsyms;
Tscope192837* parent;
};
struct  Ropeobj162009  {
  TNimObject Sup;
Ropeobj162009* left;
Ropeobj162009* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry132022  {
  TNimObject Sup;
Tlistentry132022* prev;
Tlistentry132022* next;
};
struct  Tlib192831  {
  Tlistentry132022 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj162009* name;
Tnode192813* path;
};
typedef NI TY27220[16];
struct  Tpagedesc46154  {
Tpagedesc46154* next;
NI key;
TY27220 bits;
};
struct  Tbasechunk27238  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Tsmallchunk27240  {
  Tbasechunk27238 Sup;
Tsmallchunk27240* next;
Tsmallchunk27240* prev;
Tfreecell27230* freelist;
NI free;
NI acc;
NF data;
};
struct  Tllchunk28004  {
NI size;
NI acc;
Tllchunk28004* next;
};
struct  Tbigchunk27242  {
  Tbasechunk27238 Sup;
Tbigchunk27242* next;
Tbigchunk27242* prev;
NI align;
NF data;
};
struct  Ttrunk27213  {
Ttrunk27213* next;
NI key;
TY27220 bits;
};
typedef Tavlnode28008* TY28014[2];
struct  Tavlnode28008  {
TY28014 link;
NI key;
NI upperbound;
NI level;
};
struct  Tiipair200270  {
NI key;
NI val;
};
struct  Tidpair192857  {
Tidobj168015* key;
TNimObject* val;
};
struct  Tinstantiation192833  {
Tsym192843* sym;
Ttypeseq192845* concretetypes;
TY192933* usedby;
};
struct  Tfreecell27230  {
Tfreecell27230* next;
NI zerofield;
};
struct TY123008 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct Ttypeseq192845 {
  TGenericSeq Sup;
  Ttype192849* data[SEQ_DECL_SIZE];
};
struct TY192944 {
  TGenericSeq Sup;
  Tinstantiation192833* data[SEQ_DECL_SIZE];
};
struct Tsymseq192815 {
  TGenericSeq Sup;
  Tsym192843* data[SEQ_DECL_SIZE];
};
struct Tnodeseq192807 {
  TGenericSeq Sup;
  Tnode192813* data[SEQ_DECL_SIZE];
};
struct TY192933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct Tiipairseq200272 {
  TGenericSeq Sup;
  Tiipair200270 data[SEQ_DECL_SIZE];
};
struct Tidpairseq192859 {
  TGenericSeq Sup;
  Tidpair192857 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, objectInit)(void* dest, TNimType* typ);
N_NIMCALL(void, openpasses_242293)(Tpasscontext242005** a, Tsym192843* module);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NimStringDesc*, tofullpathconsiderdirty_165407)(NI32 fileidx);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46146*, usrtocell_49646)(void* usr);
static N_INLINE(void, rtladdzct_51204)(Tcell46146* c);
N_NOINLINE(void, addzct_49617)(Tcellseq46162* s, Tcell46146* c);
N_NIMCALL(Tllstream179204*, llstreamopen_179238)(FILE* f);
N_NIMCALL(Tllstream179204*, llstreamopen_179256)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(void, rawmessage_165970)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, openparsers_220047)(Tparsers220035* p, NI32 fileidx, Tllstream179204* inputstream);
N_NIMCALL(void, processimplicits_242621)(TY123008* implicits, NU8 nodekind, Tpasscontext242005** a);
N_NIMCALL(Tnode192813*, newnodei_194351)(NU8 kind, Tlineinfo164338 info);
N_NIMCALL(Tnode192813*, newstrnode_193644)(NU8 kind, NimStringDesc* strval);
N_NIMCALL(void, addson_194819)(Tnode192813* father, Tnode192813* son);
N_NIMCALL(NIM_BOOL, processtoplevelstmt_242454)(Tnode192813* n, Tpasscontext242005** a);
N_NIMCALL(Tnode192813*, parsetoplevelstmt_220070)(Tparsers220035* p);
N_NIMCALL(void, closeparsers_220056)(Tparsers220035* p);
N_NIMCALL(void, closepasses_242404)(Tpasscontext242005** a);
N_NIMCALL(void, idsynchronizationpoint_191453)(NI idrange);
N_NIMCALL(void, openpassescached_242342)(Tpasscontext242005** a, Tsym192843* module, Trodreader234030* rd);
N_NIMCALL(Tnode192813*, loadinitsection_234077)(Trodreader234030* r);
N_NIMCALL(NI, sonslen_195403)(Tnode192813* n);
N_NIMCALL(void, processtoplevelstmtcached_242513)(Tnode192813* n, Tpasscontext242005** a);
N_NIMCALL(void, closepassescached_242563)(Tpasscontext242005** a);
N_NIMCALL(void, carrypass_242208)(Tpass242017 p, Tsym192843* module, TY433293 m, TY433293* Result);
STRING_LITERAL(TMP1514, "-", 1);
STRING_LITERAL(TMP1515, "stdinfile", 9);
TY242064 gimportmodule_242068;
TY242069 gincludefile_242073;
TY242173 gpasses_242175;
NI gpasseslen_242176;
extern TNimType NTI3411; /* RootObj */
TNimType NTI242005; /* TPassContext */
extern TNimType NTI138; /* bool */
extern TNimType NTI220035; /* TParsers */
extern Tgcheap48016 gch_48044;
extern Tlineinfo164338 gcmdlineinfo_164926;
extern TY123008* implicitimports_155280;
extern TY123008* implicitincludes_155300;

N_NIMCALL(void, openpasses_242293)(Tpasscontext242005** a, Tsym192843* module) {
	{
		NI i_242310;
		NI HEX3Atmp_242319;
		NI res_242322;
		i_242310 = 0;
		HEX3Atmp_242319 = 0;
		HEX3Atmp_242319 = (NI)(gpasseslen_242176 - ((NI) 1));
		res_242322 = ((NI) 0);
		{
			while (1) {
				if (!(res_242322 <= HEX3Atmp_242319)) goto LA3;
				i_242310 = res_242322;
				{
					if (!!(gpasses_242175[(i_242310)- 0].Field0 == 0)) goto LA6;
					unsureAsgnRef((void**) (&a[(i_242310)- 0]), gpasses_242175[(i_242310)- 0].Field0(module));
				}
				goto LA4;
				LA6: ;
				{
					unsureAsgnRef((void**) (&a[(i_242310)- 0]), NIM_NIL);
				}
				LA4: ;
				res_242322 += ((NI) 1);
			} LA3: ;
		}
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

static N_INLINE(Tcell46146*, usrtocell_49646)(void* usr) {
	Tcell46146* result;
	result = 0;
	result = ((Tcell46146*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Tcell46146))))));
	return result;
}

static N_INLINE(void, rtladdzct_51204)(Tcell46146* c) {
	addzct_49617((&gch_48044.zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Tcell46146* c;
	c = usrtocell_49646(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_51204(c);
	}
	LA3: ;
}

N_NIMCALL(NIM_BOOL, processtoplevelstmt_242454)(Tnode192813* n, Tpasscontext242005** a) {
	NIM_BOOL result;
	Tnode192813* m;
{	result = 0;
	m = n;
	{
		NI i_242473;
		NI HEX3Atmp_242490;
		NI res_242493;
		i_242473 = 0;
		HEX3Atmp_242490 = 0;
		HEX3Atmp_242490 = (NI)(gpasseslen_242176 - ((NI) 1));
		res_242493 = ((NI) 0);
		{
			while (1) {
				if (!(res_242493 <= HEX3Atmp_242490)) goto LA3;
				i_242473 = res_242493;
				{
					if (!!(gpasses_242175[(i_242473)- 0].Field2 == 0)) goto LA6;
					m = gpasses_242175[(i_242473)- 0].Field2(a[(i_242473)- 0], m);
					{
						if (!m == 0) goto LA10;
						result = NIM_FALSE;
						goto BeforeRet;
					}
					LA10: ;
				}
				LA6: ;
				res_242493 += ((NI) 1);
			} LA3: ;
		}
	}
	result = NIM_TRUE;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, processimplicits_242621)(TY123008* implicits, NU8 nodekind, Tpasscontext242005** a) {
	{
		NimStringDesc* module_242637;
		NI i_242644;
		NI L_242646;
		module_242637 = 0;
		i_242644 = ((NI) 0);
		L_242646 = (implicits ? implicits->Sup.len : 0);
		{
			while (1) {
				Tnode192813* importstmt;
				Tnode192813* str;
				if (!(i_242644 < L_242646)) goto LA3;
				module_242637 = implicits->data[i_242644];
				importstmt = newnodei_194351(nodekind, gcmdlineinfo_164926);
				str = newstrnode_193644(((NU8) 20), module_242637);
				(*str).info = gcmdlineinfo_164926;
				addson_194819(importstmt, str);
				{
					NIM_BOOL LOC6;
					LOC6 = 0;
					LOC6 = processtoplevelstmt_242454(importstmt, a);
					if (!!(LOC6)) goto LA7;
					goto LA1;
				}
				LA7: ;
				i_242644 += ((NI) 1);
			} LA3: ;
		}
	} LA1: ;
}

N_NIMCALL(void, closepasses_242404)(Tpasscontext242005** a) {
	Tnode192813* m;
	m = NIM_NIL;
	{
		NI i_242421;
		NI HEX3Atmp_242431;
		NI res_242434;
		i_242421 = 0;
		HEX3Atmp_242431 = 0;
		HEX3Atmp_242431 = (NI)(gpasseslen_242176 - ((NI) 1));
		res_242434 = ((NI) 0);
		{
			while (1) {
				if (!(res_242434 <= HEX3Atmp_242431)) goto LA3;
				i_242421 = res_242434;
				{
					if (!!(gpasses_242175[(i_242421)- 0].Field3 == 0)) goto LA6;
					m = gpasses_242175[(i_242421)- 0].Field3(a[(i_242421)- 0], m);
				}
				LA6: ;
				unsureAsgnRef((void**) (&a[(i_242421)- 0]), NIM_NIL);
				res_242434 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(void, openpassescached_242342)(Tpasscontext242005** a, Tsym192843* module, Trodreader234030* rd) {
	{
		NI i_242360;
		NI HEX3Atmp_242381;
		NI res_242384;
		i_242360 = 0;
		HEX3Atmp_242381 = 0;
		HEX3Atmp_242381 = (NI)(gpasseslen_242176 - ((NI) 1));
		res_242384 = ((NI) 0);
		{
			while (1) {
				if (!(res_242384 <= HEX3Atmp_242381)) goto LA3;
				i_242360 = res_242384;
				{
					if (!!(gpasses_242175[(i_242360)- 0].Field1 == 0)) goto LA6;
					unsureAsgnRef((void**) (&a[(i_242360)- 0]), gpasses_242175[(i_242360)- 0].Field1(module, rd));
					{
						if (!!((a[(i_242360)- 0] == NIM_NIL))) goto LA10;
						(*a[(i_242360)- 0]).fromcache = NIM_TRUE;
					}
					LA10: ;
				}
				goto LA4;
				LA6: ;
				{
					unsureAsgnRef((void**) (&a[(i_242360)- 0]), NIM_NIL);
				}
				LA4: ;
				res_242384 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(void, processtoplevelstmtcached_242513)(Tnode192813* n, Tpasscontext242005** a) {
	Tnode192813* m;
	m = n;
	{
		NI i_242531;
		NI HEX3Atmp_242540;
		NI res_242543;
		i_242531 = 0;
		HEX3Atmp_242540 = 0;
		HEX3Atmp_242540 = (NI)(gpasseslen_242176 - ((NI) 1));
		res_242543 = ((NI) 0);
		{
			while (1) {
				if (!(res_242543 <= HEX3Atmp_242540)) goto LA3;
				i_242531 = res_242543;
				{
					if (!!(gpasses_242175[(i_242531)- 0].Field1 == 0)) goto LA6;
					m = gpasses_242175[(i_242531)- 0].Field2(a[(i_242531)- 0], m);
				}
				LA6: ;
				res_242543 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(void, closepassescached_242563)(Tpasscontext242005** a) {
	Tnode192813* m;
	m = NIM_NIL;
	{
		NI i_242580;
		NI HEX3Atmp_242597;
		NI res_242600;
		i_242580 = 0;
		HEX3Atmp_242597 = 0;
		HEX3Atmp_242597 = (NI)(gpasseslen_242176 - ((NI) 1));
		res_242600 = ((NI) 0);
		{
			while (1) {
				if (!(res_242600 <= HEX3Atmp_242597)) goto LA3;
				i_242580 = res_242600;
				{
					NIM_BOOL LOC6;
					LOC6 = 0;
					LOC6 = !(gpasses_242175[(i_242580)- 0].Field1 == 0);
					if (!(LOC6)) goto LA7;
					LOC6 = !(gpasses_242175[(i_242580)- 0].Field3 == 0);
					LA7: ;
					if (!LOC6) goto LA8;
					m = gpasses_242175[(i_242580)- 0].Field3(a[(i_242580)- 0], m);
				}
				LA8: ;
				unsureAsgnRef((void**) (&a[(i_242580)- 0]), NIM_NIL);
				res_242600 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(void, processmodule_242056)(Tsym192843* module, Tllstream179204* stream, Trodreader234030* rd) {
	Tparsers220035 p;
	Tpasscontextarray242168 a;
	Tllstream179204* s;
	NI32 fileidx;
{	memset((void*)(&p), 0, sizeof(p));
	objectInit((&p), (&NTI220035));
	memset((void*)a, 0, sizeof(a));
	s = 0;
	fileidx = ((NI32) ((*module).position));
	{
		if (!(rd == NIM_NIL)) goto LA3;
		openpasses_242293(a, module);
		{
			NimStringDesc* filename;
			if (!(stream == NIM_NIL)) goto LA7;
			filename = tofullpathconsiderdirty_165407(fileidx);
			{
				NimStringDesc* LOC13;
				if (!eqStrings((*(*module).name).s, ((NimStringDesc*) &TMP1514))) goto LA11;
				LOC13 = 0;
				LOC13 = (*(*module).name).s; (*(*module).name).s = copyStringRC1(((NimStringDesc*) &TMP1515));
				if (LOC13) nimGCunrefNoCycle(LOC13);
				s = llstreamopen_179238(stdin);
			}
			goto LA9;
			LA11: ;
			{
				s = llstreamopen_179256(filename, ((NU8) 0));
			}
			LA9: ;
			{
				if (!(s == NIM_NIL)) goto LA17;
				rawmessage_165970(((NU16) 3), filename);
				goto BeforeRet;
			}
			LA17: ;
		}
		goto LA5;
		LA7: ;
		{
			s = stream;
		}
		LA5: ;
		{
			while (1) {
				openparsers_220047((&p), fileidx, s);
				{
					if (!!((((*module).flags &(1<<((((NU8) 13))&31)))!=0))) goto LA24;
					processimplicits_242621(implicitimports_155280, ((NU8) 116), a);
					processimplicits_242621(implicitincludes_155300, ((NU8) 121), a);
				}
				LA24: ;
				{
					while (1) {
						Tnode192813* n;
						n = parsetoplevelstmt_220070((&p));
						{
							if (!((*n).kind == ((NU8) 1))) goto LA30;
							goto LA26;
						}
						LA30: ;
						{
							NIM_BOOL LOC34;
							LOC34 = 0;
							LOC34 = processtoplevelstmt_242454(n, a);
							if (!!(LOC34)) goto LA35;
							goto LA26;
						}
						LA35: ;
					}
				} LA26: ;
				closeparsers_220056((&p));
				{
					if (!!(((*s).kind == ((NU8) 3)))) goto LA39;
					goto LA20;
				}
				LA39: ;
			}
		} LA20: ;
		closepasses_242404(a);
		idsynchronizationpoint_191453(((NI) 1000));
	}
	goto LA1;
	LA3: ;
	{
		Tnode192813* n;
		openpassescached_242342(a, module, rd);
		n = loadinitsection_234077(rd);
		{
			NI i_242766;
			NI HEX3Atmp_242777;
			NI LOC43;
			NI res_242780;
			i_242766 = 0;
			HEX3Atmp_242777 = 0;
			LOC43 = 0;
			LOC43 = sonslen_195403(n);
			HEX3Atmp_242777 = (NI)(LOC43 - ((NI) 1));
			res_242780 = ((NI) 0);
			{
				while (1) {
					if (!(res_242780 <= HEX3Atmp_242777)) goto LA45;
					i_242766 = res_242780;
					processtoplevelstmtcached_242513((*n).kindU.S6.sons->data[i_242766], a);
					res_242780 += ((NI) 1);
				} LA45: ;
			}
		}
		closepassescached_242563(a);
	}
	LA1: ;
	}BeforeRet: ;
}

N_NIMCALL(void, clearpasses_242182)(void) {
	gpasseslen_242176 = ((NI) 0);
}

N_NIMCALL(void, registerpass_242190)(Tpass242017 p) {
	gpasses_242175[(gpasseslen_242176)- 0] = p;
	gpasseslen_242176 += ((NI) 1);
}

N_NIMCALL(NIM_BOOL, astneeded_242093)(Tsym192843* s) {
	NIM_BOOL result;
	result = 0;
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		NIM_BOOL LOC5;
		LOC3 = 0;
		LOC4 = 0;
		LOC5 = 0;
		LOC5 = ((12288 &(1<<(((*s).kind)&31)))!=0);
		if (!(LOC5)) goto LA6;
		LOC5 = ((8454144 & (*s).flags) == 0);
		LA6: ;
		LOC4 = LOC5;
		if (!(LOC4)) goto LA7;
		LOC4 = !(((*(*s).typ).callconv == ((NU8) 5)));
		LA7: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA8;
		LOC3 = ((*(*(*s).ast).kindU.S6.sons->data[((NI) 2)]).kind == ((NU8) 1));
		LA8: ;
		if (!LOC3) goto LA9;
		result = NIM_FALSE;
	}
	goto LA1;
	LA9: ;
	{
		result = NIM_TRUE;
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, carrypass_242208)(Tpass242017 p, Tsym192843* module, TY433293 m, TY433293* Result) {
	Tpasscontext242005* c;
	c = p.Field0(module);
	unsureAsgnRef((void**) (&(*Result).Field0), p.Field2(c, m.Field0));
	{
		if (!!((p.Field3 == NIM_NIL))) goto LA3;
		unsureAsgnRef((void**) (&(*Result).Field1), p.Field3(c, m.Field1));
	}
	goto LA1;
	LA3: ;
	{
		unsureAsgnRef((void**) (&(*Result).Field1), m.Field1);
	}
	LA1: ;
}

N_NIMCALL(void, carrypasses_242231)(Tnode192813* nodes, Tsym192843* module, Tpass242017* passes, NI passesLen0) {
	TY433293 passdata;
	memset((void*)(&passdata), 0, sizeof(passdata));
	passdata.Field0 = nodes;
	{
		Tpass242017 pass_242272;
		NI i_242277;
		memset((void*)(&pass_242272), 0, sizeof(pass_242272));
		i_242277 = ((NI) 0);
		{
			while (1) {
				TY433293 LOC4;
				if (!(i_242277 < passesLen0)) goto LA3;
				pass_242272 = passes[i_242277];
				memset((void*)(&LOC4), 0, sizeof(LOC4));
				carrypass_242208(pass_242272, module, passdata, (&LOC4));
				passdata.Field0 = LOC4.Field0;
				passdata.Field1 = LOC4.Field1;
				i_242277 += ((NI) 1);
			} LA3: ;
		}
	}
}
NIM_EXTERNC N_NOINLINE(void, compiler_passesInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_passesDatInit)(void) {
static TNimNode TMP838[1];
NTI242005.size = sizeof(Tpasscontext242005);
NTI242005.kind = 17;
NTI242005.base = (&NTI3411);
NTI242005.flags = 1;
TMP838[0].kind = 1;
TMP838[0].offset = offsetof(Tpasscontext242005, fromcache);
TMP838[0].typ = (&NTI138);
TMP838[0].name = "fromCache";
NTI242005.node = &TMP838[0];
}

