/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct Table162376 Table162376;
typedef struct Keyvaluepairseq162379 Keyvaluepairseq162379;
typedef struct Keyvaluepair162382 Keyvaluepair162382;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tcell46147 Tcell46147;
typedef struct Tcellseq46163 Tcellseq46163;
typedef struct Tgcheap48016 Tgcheap48016;
typedef struct Tcellset46159 Tcellset46159;
typedef struct Tpagedesc46155 Tpagedesc46155;
typedef struct Tmemregion28010 Tmemregion28010;
typedef struct Tsmallchunk27240 Tsmallchunk27240;
typedef struct Tllchunk28004 Tllchunk28004;
typedef struct Tbigchunk27242 Tbigchunk27242;
typedef struct Tintset27217 Tintset27217;
typedef struct Ttrunk27213 Ttrunk27213;
typedef struct Tavlnode28008 Tavlnode28008;
typedef struct Tgcstat48014 Tgcstat48014;
typedef struct Table310052 Table310052;
typedef struct Keyvaluepairseq310055 Keyvaluepairseq310055;
typedef struct Keyvaluepair310058 Keyvaluepair310058;
typedef struct Table380650 Table380650;
typedef struct Keyvaluepairseq380653 Keyvaluepairseq380653;
typedef struct Keyvaluepair380656 Keyvaluepair380656;
typedef struct Tnode190813 Tnode190813;
typedef struct Table311411 Table311411;
typedef struct Keyvaluepairseq311414 Keyvaluepairseq311414;
typedef struct Keyvaluepair311417 Keyvaluepair311417;
typedef struct Tindexentry311398 Tindexentry311398;
typedef struct TY313708 TY313708;
typedef struct Tbasechunk27238 Tbasechunk27238;
typedef struct Tfreecell27230 Tfreecell27230;
typedef struct Ttype190849 Ttype190849;
typedef struct Tlineinfo162338 Tlineinfo162338;
typedef struct Tsym190843 Tsym190843;
typedef struct Tident166021 Tident166021;
typedef struct Tnodeseq190807 Tnodeseq190807;
typedef struct Tidobj166015 Tidobj166015;
typedef struct TNimObject TNimObject;
typedef struct Ttypeseq190845 Ttypeseq190845;
typedef struct Tloc190827 Tloc190827;
typedef struct Ropeobj160009 Ropeobj160009;
typedef struct Tscope190837 Tscope190837;
typedef struct TY190944 TY190944;
typedef struct Tstrtable190817 Tstrtable190817;
typedef struct Tsymseq190815 Tsymseq190815;
typedef struct Tlib190831 Tlib190831;
typedef struct Tinstantiation190833 Tinstantiation190833;
typedef struct Tlistentry129022 Tlistentry129022;
typedef struct TY190933 TY190933;
struct  Table162376  {
Keyvaluepairseq162379* data;
NI counter;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct Keyvaluepair162382 {
NI Field0;
NimStringDesc* Field1;
NI32 Field2;
};
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
struct  Tcell46147  {
NI refcount;
TNimType* typ;
};
struct  Tcellseq46163  {
NI len;
NI cap;
Tcell46147** d;
};
struct  Tcellset46159  {
NI counter;
NI max;
Tpagedesc46155* head;
Tpagedesc46155** data;
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
Tcellseq46163 zct;
Tcellseq46163 decstack;
Tcellset46159 cycleroots;
Tcellseq46163 tempstack;
NI recgclock;
Tmemregion28010 region;
Tgcstat48014 stat;
};
struct  Table310052  {
Keyvaluepairseq310055* data;
NI counter;
};
struct Keyvaluepair310058 {
NI Field0;
NimStringDesc* Field1;
NI Field2;
};
struct  Table380650  {
Keyvaluepairseq380653* data;
NI counter;
};
struct Keyvaluepair380656 {
NI Field0;
NI64 Field1;
Tnode190813* Field2;
};
struct  Table311411  {
Keyvaluepairseq311414* data;
NI counter;
};
struct  Tindexentry311398  {
NimStringDesc* keyword;
NimStringDesc* link;
NimStringDesc* linktitle;
NimStringDesc* linkdesc;
};
struct Keyvaluepair311417 {
NI Field0;
Tindexentry311398 Field1;
TY313708* Field2;
};
typedef NI TY27220[16];
struct  Tpagedesc46155  {
Tpagedesc46155* next;
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
struct  Tlineinfo162338  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tnode190813  {
Ttype190849* typ;
Tlineinfo162338 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym190843* sym;
} S4;
struct {Tident166021* ident;
} S5;
struct {Tnodeseq190807* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
struct  Tfreecell27230  {
Tfreecell27230* next;
NI zerofield;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj166015  {
  TNimObject Sup;
NI id;
};
struct  Tloc190827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype190849* t;
Ropeobj160009* r;
Ropeobj160009* heaproot;
};
struct  Ttype190849  {
  Tidobj166015 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq190845* sons;
Tnode190813* n;
Tsym190843* owner;
Tsym190843* sym;
Tsym190843* destructor;
Tsym190843* deepcopy;
Tsym190843* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc190827 loc;
};
struct  Tstrtable190817  {
NI counter;
Tsymseq190815* data;
};
struct  Tsym190843  {
  Tidobj166015 Sup;
NU8 kind;
union{
struct {Ttypeseq190845* typeinstcache;
Tscope190837* typscope;
} S1;
struct {TY190944* procinstcache;
Tsym190843* gcunsafetyreason;
} S2;
struct {TY190944* usedgenerics;
Tstrtable190817 tab;
} S3;
struct {Tsym190843* guard;
} S4;
} kindU;
NU16 magic;
Ttype190849* typ;
Tident166021* name;
Tlineinfo162338 info;
Tsym190843* owner;
NU32 flags;
Tnode190813* ast;
NU32 options;
NI position;
NI offset;
Tloc190827 loc;
Tlib190831* annex;
Tnode190813* constraint;
};
struct  Tident166021  {
  Tidobj166015 Sup;
NimStringDesc* s;
Tident166021* next;
NI h;
};
struct  Ropeobj160009  {
  TNimObject Sup;
Ropeobj160009* left;
Ropeobj160009* right;
NI length;
NimStringDesc* data;
};
struct  Tscope190837  {
NI depthlevel;
Tstrtable190817 symbols;
Tnodeseq190807* usingsyms;
Tscope190837* parent;
};
struct  Tlistentry129022  {
  TNimObject Sup;
Tlistentry129022* prev;
Tlistentry129022* next;
};
struct  Tlib190831  {
  Tlistentry129022 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj160009* name;
Tnode190813* path;
};
struct  Tinstantiation190833  {
Tsym190843* sym;
Ttypeseq190845* concretetypes;
TY190933* usedby;
};
struct Keyvaluepairseq162379 {
  TGenericSeq Sup;
  Keyvaluepair162382 data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq310055 {
  TGenericSeq Sup;
  Keyvaluepair310058 data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq380653 {
  TGenericSeq Sup;
  Keyvaluepair380656 data[SEQ_DECL_SIZE];
};
struct TY313708 {
  TGenericSeq Sup;
  Tindexentry311398 data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq311414 {
  TGenericSeq Sup;
  Keyvaluepair311417 data[SEQ_DECL_SIZE];
};
struct Tnodeseq190807 {
  TGenericSeq Sup;
  Tnode190813* data[SEQ_DECL_SIZE];
};
struct Ttypeseq190845 {
  TGenericSeq Sup;
  Ttype190849* data[SEQ_DECL_SIZE];
};
struct TY190944 {
  TGenericSeq Sup;
  Tinstantiation190833* data[SEQ_DECL_SIZE];
};
struct Tsymseq190815 {
  TGenericSeq Sup;
  Tsym190843* data[SEQ_DECL_SIZE];
};
struct TY190933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP127)(void* p, NI op);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
static N_INLINE(NI, rawget_162559)(Table162376 t, NimStringDesc* key, NI* hc);
N_NIMCALL(NI, hash_130839)(NimStringDesc* x);
static N_INLINE(NIM_BOOL, isfilled_155211)(NI hcode);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NI, nexttry_155420)(NI h, NI maxhash);
static N_INLINE(NIM_BOOL, mustrehash_155313)(NI length, NI counter);
N_NIMCALL(void, enlarge_162676)(Table162376* t);
static N_INLINE(NI, rawgetknownhc_162730)(Table162376 t, NimStringDesc* key, NI hc);
N_NIMCALL(void, rawinsert_162756)(Table162376* t, Keyvaluepairseq162379** data, NimStringDesc* key, NI32 val, NI hc, NI h);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46147*, usrtocell_49646)(void* usr);
static N_INLINE(void, rtladdzct_51204)(Tcell46147* c);
N_NOINLINE(void, addzct_49617)(Tcellseq46163* s, Tcell46147* c);
static N_INLINE(NI, rawget_311086)(Table310052 t, NimStringDesc* key, NI* hc);
N_NIMCALL(void, enlarge_311185)(Table310052* t);
N_NIMCALL(void, TMP2431)(void* p, NI op);
static N_INLINE(NI, rawgetknownhc_311239)(Table310052 t, NimStringDesc* key, NI hc);
N_NIMCALL(void, rawinsert_311265)(Table310052* t, Keyvaluepairseq310055** data, NimStringDesc* key, NI val, NI hc, NI h);
N_NIMCALL(void, TMP2918)(void* p, NI op);
static N_INLINE(NI, rawget_381112)(Table380650 t, NI64 key, NI* hc);
static N_INLINE(NI, hash_130811)(NI64 x);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, enlarge_381200)(Table380650* t);
static N_INLINE(NI, rawgetknownhc_381254)(Table380650 t, NI64 key, NI hc);
N_NIMCALL(void, rawinsert_381280)(Table380650* t, Keyvaluepairseq380653** data, NI64 key, Tnode190813* val, NI hc, NI h);
N_NIMCALL(void, TMP4918)(void* p, NI op);
static N_INLINE(NI, rawget_313294)(Table311411 t, Tindexentry311398 key, NI* hc);
N_NIMCALL(NI, hash_311443)(Tindexentry311398 x);
N_NIMCALL(NIM_BOOL, HEX3DHEX3D_313309)(Tindexentry311398 x, Tindexentry311398 y);
N_NIMCALL(void, genericSeqAssign)(void* dest, void* src_81004, TNimType* mt);
N_NIMCALL(void, enlarge_314109)(Table311411* t);
static N_INLINE(NI, rawgetknownhc_314163)(Table311411 t, Tindexentry311398 key, NI hc);
N_NIMCALL(void, rawinsert_314198)(Table311411* t, Keyvaluepairseq311414** data, Tindexentry311398 key, TY313708* val, NI hc, NI h);
TNimType NTI162382; /* KeyValuePair */
extern TNimType NTI130021; /* THash */
extern TNimType NTI149; /* string */
extern TNimType NTI114; /* int32 */
TNimType NTI162379; /* KeyValuePairSeq */
TNimType NTI162376; /* Table */
extern TNimType NTI108; /* int */
extern Tgcheap48016 gch_48044;
TNimType NTI310058; /* KeyValuePair */
TNimType NTI310055; /* KeyValuePairSeq */
TNimType NTI380656; /* KeyValuePair */
extern TNimType NTI5710; /* BiggestInt */
extern TNimType NTI190805; /* PNode */
TNimType NTI380653; /* KeyValuePairSeq */
TNimType NTI310052; /* Table */
TNimType NTI311417; /* KeyValuePair */
extern TNimType NTI311398; /* TIndexEntry */
extern TNimType NTI313708; /* seq[TIndexEntry] */
TNimType NTI311414; /* KeyValuePairSeq */
N_NIMCALL(void, TMP127)(void* p, NI op) {
	Keyvaluepairseq162379* a;
	NI LOC1;
	a = (Keyvaluepairseq162379*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field1, op);
	}
}

N_NIMCALL(void, inittable_162368)(NI initialsize, Table162376* Result) {
	(*Result).counter = ((NI) 0);
	unsureAsgnRef((void**) (&(*Result).data), (Keyvaluepairseq162379*) newSeq((&NTI162379), ((NI) (initialsize))));
}

static N_INLINE(NIM_BOOL, isfilled_155211)(NI hcode) {
	NIM_BOOL result;
	result = 0;
	result = !((hcode == ((NI) 0)));
	return result;
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

static N_INLINE(NI, nexttry_155420)(NI h, NI maxhash) {
	NI result;
	result = 0;
	result = (NI)((NI)(h + ((NI) 1)) & maxhash);
	return result;
}

static N_INLINE(NI, rawget_162559)(Table162376 t, NimStringDesc* key, NI* hc) {
	NI result;
	NI h;
{	result = 0;
	(*hc) = hash_130839(key);
	{
		if (!((*hc) == ((NI) 0))) goto LA3;
		(*hc) = ((NI) 314159265);
	}
	LA3: ;
	h = (NI)((*hc) & (t.data ? (t.data->Sup.len-1) : -1));
	{
		while (1) {
			NIM_BOOL LOC7;
			LOC7 = 0;
			LOC7 = isfilled_155211(t.data->data[h].Field0);
			if (!LOC7) goto LA6;
			{
				NIM_BOOL LOC10;
				LOC10 = 0;
				LOC10 = (t.data->data[h].Field0 == (*hc));
				if (!(LOC10)) goto LA11;
				LOC10 = eqStrings(t.data->data[h].Field1, key);
				LA11: ;
				if (!LOC10) goto LA12;
				result = h;
				goto BeforeRet;
			}
			LA12: ;
			h = nexttry_155420(h, (t.data ? (t.data->Sup.len-1) : -1));
		} LA6: ;
	}
	result = (NI)(((NI) -1) - h);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, haskey_162547)(Table162376 t, NimStringDesc* key) {
	NIM_BOOL result;
	NI hc;
	NI LOC1;
	result = 0;
	hc = 0;
	LOC1 = 0;
	LOC1 = rawget_162559(t, key, (&hc));
	result = (((NI) 0) <= LOC1);
	return result;
}

N_NIMCALL(NI32, HEX5BHEX5D_162590)(Table162376 t, NimStringDesc* key) {
	NI32 result;
	NI hc;
	NI index;
	result = 0;
	hc = 0;
	index = rawget_162559(t, key, (&hc));
	{
		if (!(((NI) 0) <= index)) goto LA3;
		result = t.data->data[index].Field2;
	}
	LA3: ;
	return result;
}

static N_INLINE(NIM_BOOL, mustrehash_155313)(NI length, NI counter) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = ((NI)(length * ((NI) 2)) < (NI)(counter * ((NI) 3)));
	if (LOC1) goto LA2;
	LOC1 = ((NI)(length - counter) < ((NI) 4));
	LA2: ;
	result = LOC1;
	return result;
}

static N_INLINE(NI, rawgetknownhc_162730)(Table162376 t, NimStringDesc* key, NI hc) {
	NI result;
	NI h;
{	result = 0;
	h = (NI)(hc & (t.data ? (t.data->Sup.len-1) : -1));
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = isfilled_155211(t.data->data[h].Field0);
			if (!LOC3) goto LA2;
			{
				NIM_BOOL LOC6;
				LOC6 = 0;
				LOC6 = (t.data->data[h].Field0 == hc);
				if (!(LOC6)) goto LA7;
				LOC6 = eqStrings(t.data->data[h].Field1, key);
				LA7: ;
				if (!LOC6) goto LA8;
				result = h;
				goto BeforeRet;
			}
			LA8: ;
			h = nexttry_155420(h, (t.data ? (t.data->Sup.len-1) : -1));
		} LA2: ;
	}
	result = (NI)(((NI) -1) - h);
	}BeforeRet: ;
	return result;
}

static N_INLINE(Tcell46147*, usrtocell_49646)(void* usr) {
	Tcell46147* result;
	result = 0;
	result = ((Tcell46147*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Tcell46147))))));
	return result;
}

static N_INLINE(void, rtladdzct_51204)(Tcell46147* c) {
	addzct_49617((&gch_48044.zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Tcell46147* c;
	c = usrtocell_49646(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_51204(c);
	}
	LA3: ;
}

N_NIMCALL(void, rawinsert_162756)(Table162376* t, Keyvaluepairseq162379** data, NimStringDesc* key, NI32 val, NI hc, NI h) {
	NimStringDesc* LOC1;
	LOC1 = 0;
	LOC1 = (*data)->data[h].Field1; (*data)->data[h].Field1 = copyStringRC1(key);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	(*data)->data[h].Field2 = val;
	(*data)->data[h].Field0 = hc;
}

N_NIMCALL(void, enlarge_162676)(Table162376* t) {
	Keyvaluepairseq162379* n;
	Keyvaluepairseq162379* LOC1;
	n = 0;
	n = (Keyvaluepairseq162379*) newSeq((&NTI162379), ((NI) ((NI)(((*t).data ? (*t).data->Sup.len : 0) * ((NI) 2)))));
	LOC1 = 0;
	LOC1 = (*t).data;
	unsureAsgnRef((void**) (&(*t).data), n);
	n = LOC1;
	{
		NI i_162728;
		NI HEX3Atmp_162782;
		NI res_162785;
		i_162728 = 0;
		HEX3Atmp_162782 = 0;
		HEX3Atmp_162782 = (n ? (n->Sup.len-1) : -1);
		res_162785 = ((NI) 0);
		{
			while (1) {
				if (!(res_162785 <= HEX3Atmp_162782)) goto LA4;
				i_162728 = res_162785;
				{
					NIM_BOOL LOC7;
					NI j;
					NI LOC10;
					LOC7 = 0;
					LOC7 = isfilled_155211(n->data[i_162728].Field0);
					if (!LOC7) goto LA8;
					LOC10 = 0;
					LOC10 = rawgetknownhc_162730((*t), n->data[i_162728].Field1, n->data[i_162728].Field0);
					j = (NI)(((NI) -1) - LOC10);
					rawinsert_162756(t, (&(*t).data), n->data[i_162728].Field1, n->data[i_162728].Field2, n->data[i_162728].Field0, j);
				}
				LA8: ;
				res_162785 += ((NI) 1);
			} LA4: ;
		}
	}
}

N_NIMCALL(void, HEX5BHEX5DHEX3D_162639)(Table162376* t, NimStringDesc* key, NI32 val) {
	NI hc;
	NI index;
	hc = 0;
	index = rawget_162559((*t), key, (&hc));
	{
		if (!(((NI) 0) <= index)) goto LA3;
		(*t).data->data[index].Field2 = val;
	}
	goto LA1;
	LA3: ;
	{
		{
			NIM_BOOL LOC8;
			LOC8 = 0;
			LOC8 = mustrehash_155313(((*t).data ? (*t).data->Sup.len : 0), (*t).counter);
			if (!LOC8) goto LA9;
			enlarge_162676(t);
			index = rawgetknownhc_162730((*t), key, hc);
		}
		LA9: ;
		index = (NI)(((NI) -1) - index);
		rawinsert_162756(t, (&(*t).data), key, val, hc, index);
		(*t).counter += ((NI) 1);
	}
	LA1: ;
}

static N_INLINE(NI, rawget_311086)(Table310052 t, NimStringDesc* key, NI* hc) {
	NI result;
	NI h;
{	result = 0;
	(*hc) = hash_130839(key);
	{
		if (!((*hc) == ((NI) 0))) goto LA3;
		(*hc) = ((NI) 314159265);
	}
	LA3: ;
	h = (NI)((*hc) & (t.data ? (t.data->Sup.len-1) : -1));
	{
		while (1) {
			NIM_BOOL LOC7;
			LOC7 = 0;
			LOC7 = isfilled_155211(t.data->data[h].Field0);
			if (!LOC7) goto LA6;
			{
				NIM_BOOL LOC10;
				LOC10 = 0;
				LOC10 = (t.data->data[h].Field0 == (*hc));
				if (!(LOC10)) goto LA11;
				LOC10 = eqStrings(t.data->data[h].Field1, key);
				LA11: ;
				if (!LOC10) goto LA12;
				result = h;
				goto BeforeRet;
			}
			LA12: ;
			h = nexttry_155420(h, (t.data ? (t.data->Sup.len-1) : -1));
		} LA6: ;
	}
	result = (NI)(((NI) -1) - h);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, haskey_311074)(Table310052 t, NimStringDesc* key) {
	NIM_BOOL result;
	NI hc;
	NI LOC1;
	result = 0;
	hc = 0;
	LOC1 = 0;
	LOC1 = rawget_311086(t, key, (&hc));
	result = (((NI) 0) <= LOC1);
	return result;
}
N_NIMCALL(void, TMP2431)(void* p, NI op) {
	Keyvaluepairseq310055* a;
	NI LOC1;
	a = (Keyvaluepairseq310055*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field1, op);
	}
}

static N_INLINE(NI, rawgetknownhc_311239)(Table310052 t, NimStringDesc* key, NI hc) {
	NI result;
	NI h;
{	result = 0;
	h = (NI)(hc & (t.data ? (t.data->Sup.len-1) : -1));
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = isfilled_155211(t.data->data[h].Field0);
			if (!LOC3) goto LA2;
			{
				NIM_BOOL LOC6;
				LOC6 = 0;
				LOC6 = (t.data->data[h].Field0 == hc);
				if (!(LOC6)) goto LA7;
				LOC6 = eqStrings(t.data->data[h].Field1, key);
				LA7: ;
				if (!LOC6) goto LA8;
				result = h;
				goto BeforeRet;
			}
			LA8: ;
			h = nexttry_155420(h, (t.data ? (t.data->Sup.len-1) : -1));
		} LA2: ;
	}
	result = (NI)(((NI) -1) - h);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, rawinsert_311265)(Table310052* t, Keyvaluepairseq310055** data, NimStringDesc* key, NI val, NI hc, NI h) {
	NimStringDesc* LOC1;
	LOC1 = 0;
	LOC1 = (*data)->data[h].Field1; (*data)->data[h].Field1 = copyStringRC1(key);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	(*data)->data[h].Field2 = val;
	(*data)->data[h].Field0 = hc;
}

N_NIMCALL(void, enlarge_311185)(Table310052* t) {
	Keyvaluepairseq310055* n;
	Keyvaluepairseq310055* LOC1;
	n = 0;
	n = (Keyvaluepairseq310055*) newSeq((&NTI310055), ((NI) ((NI)(((*t).data ? (*t).data->Sup.len : 0) * ((NI) 2)))));
	LOC1 = 0;
	LOC1 = (*t).data;
	unsureAsgnRef((void**) (&(*t).data), n);
	n = LOC1;
	{
		NI i_311237;
		NI HEX3Atmp_311291;
		NI res_311294;
		i_311237 = 0;
		HEX3Atmp_311291 = 0;
		HEX3Atmp_311291 = (n ? (n->Sup.len-1) : -1);
		res_311294 = ((NI) 0);
		{
			while (1) {
				if (!(res_311294 <= HEX3Atmp_311291)) goto LA4;
				i_311237 = res_311294;
				{
					NIM_BOOL LOC7;
					NI j;
					NI LOC10;
					LOC7 = 0;
					LOC7 = isfilled_155211(n->data[i_311237].Field0);
					if (!LOC7) goto LA8;
					LOC10 = 0;
					LOC10 = rawgetknownhc_311239((*t), n->data[i_311237].Field1, n->data[i_311237].Field0);
					j = (NI)(((NI) -1) - LOC10);
					rawinsert_311265(t, (&(*t).data), n->data[i_311237].Field1, n->data[i_311237].Field2, n->data[i_311237].Field0, j);
				}
				LA8: ;
				res_311294 += ((NI) 1);
			} LA4: ;
		}
	}
}

N_NIMCALL(void, HEX5BHEX5DHEX3D_311148)(Table310052* t, NimStringDesc* key, NI val) {
	NI hc;
	NI index;
	hc = 0;
	index = rawget_311086((*t), key, (&hc));
	{
		if (!(((NI) 0) <= index)) goto LA3;
		(*t).data->data[index].Field2 = val;
	}
	goto LA1;
	LA3: ;
	{
		{
			NIM_BOOL LOC8;
			LOC8 = 0;
			LOC8 = mustrehash_155313(((*t).data ? (*t).data->Sup.len : 0), (*t).counter);
			if (!LOC8) goto LA9;
			enlarge_311185(t);
			index = rawgetknownhc_311239((*t), key, hc);
		}
		LA9: ;
		index = (NI)(((NI) -1) - index);
		rawinsert_311265(t, (&(*t).data), key, val, hc, index);
		(*t).counter += ((NI) 1);
	}
	LA1: ;
}

N_NIMCALL(NI, HEX5BHEX5D_311117)(Table310052 t, NimStringDesc* key) {
	NI result;
	NI hc;
	NI index;
	result = 0;
	hc = 0;
	index = rawget_311086(t, key, (&hc));
	{
		if (!(((NI) 0) <= index)) goto LA3;
		result = t.data->data[index].Field2;
	}
	LA3: ;
	return result;
}
N_NIMCALL(void, TMP2918)(void* p, NI op) {
	Keyvaluepairseq380653* a;
	NI LOC1;
	a = (Keyvaluepairseq380653*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field2, op);
	}
}

N_NIMCALL(void, inittable_381471)(NI initialsize, Table380650* Result) {
	(*Result).counter = ((NI) 0);
	unsureAsgnRef((void**) (&(*Result).data), (Keyvaluepairseq380653*) newSeq((&NTI380653), ((NI) (initialsize))));
}

static N_INLINE(NI, hash_130811)(NI64 x) {
	NI result;
	result = 0;
	result = ((NI) (((NI32)(NU32)(NU64)(x))));
	return result;
}

static N_INLINE(NI, rawget_381112)(Table380650 t, NI64 key, NI* hc) {
	NI result;
	NI h;
{	result = 0;
	(*hc) = hash_130811(key);
	{
		if (!((*hc) == ((NI) 0))) goto LA3;
		(*hc) = ((NI) 314159265);
	}
	LA3: ;
	h = (NI)((*hc) & (t.data ? (t.data->Sup.len-1) : -1));
	{
		while (1) {
			NIM_BOOL LOC7;
			LOC7 = 0;
			LOC7 = isfilled_155211(t.data->data[h].Field0);
			if (!LOC7) goto LA6;
			{
				NIM_BOOL LOC10;
				LOC10 = 0;
				LOC10 = (t.data->data[h].Field0 == (*hc));
				if (!(LOC10)) goto LA11;
				LOC10 = (t.data->data[h].Field1 == key);
				LA11: ;
				if (!LOC10) goto LA12;
				result = h;
				goto BeforeRet;
			}
			LA12: ;
			h = nexttry_155420(h, (t.data ? (t.data->Sup.len-1) : -1));
		} LA6: ;
	}
	result = (NI)(((NI) -1) - h);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(Tnode190813*, HEX5BHEX5D_381100)(Table380650 t, NI64 key) {
	Tnode190813* result;
	NI hc;
	NI index;
	result = 0;
	hc = 0;
	index = rawget_381112(t, key, (&hc));
	{
		if (!(((NI) 0) <= index)) goto LA3;
		result = t.data->data[index].Field2;
	}
	LA3: ;
	return result;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Tcell46147* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_49646(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Tcell46147* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_49646((*dest));
		{
			(*c).refcount -= ((NI) 8);
			if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_51204(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

static N_INLINE(NI, rawgetknownhc_381254)(Table380650 t, NI64 key, NI hc) {
	NI result;
	NI h;
{	result = 0;
	h = (NI)(hc & (t.data ? (t.data->Sup.len-1) : -1));
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = isfilled_155211(t.data->data[h].Field0);
			if (!LOC3) goto LA2;
			{
				NIM_BOOL LOC6;
				LOC6 = 0;
				LOC6 = (t.data->data[h].Field0 == hc);
				if (!(LOC6)) goto LA7;
				LOC6 = (t.data->data[h].Field1 == key);
				LA7: ;
				if (!LOC6) goto LA8;
				result = h;
				goto BeforeRet;
			}
			LA8: ;
			h = nexttry_155420(h, (t.data ? (t.data->Sup.len-1) : -1));
		} LA2: ;
	}
	result = (NI)(((NI) -1) - h);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, rawinsert_381280)(Table380650* t, Keyvaluepairseq380653** data, NI64 key, Tnode190813* val, NI hc, NI h) {
	(*data)->data[h].Field1 = key;
	asgnRefNoCycle((void**) (&(*data)->data[h].Field2), val);
	(*data)->data[h].Field0 = hc;
}

N_NIMCALL(void, enlarge_381200)(Table380650* t) {
	Keyvaluepairseq380653* n;
	Keyvaluepairseq380653* LOC1;
	n = 0;
	n = (Keyvaluepairseq380653*) newSeq((&NTI380653), ((NI) ((NI)(((*t).data ? (*t).data->Sup.len : 0) * ((NI) 2)))));
	LOC1 = 0;
	LOC1 = (*t).data;
	unsureAsgnRef((void**) (&(*t).data), n);
	n = LOC1;
	{
		NI i_381252;
		NI HEX3Atmp_381306;
		NI res_381309;
		i_381252 = 0;
		HEX3Atmp_381306 = 0;
		HEX3Atmp_381306 = (n ? (n->Sup.len-1) : -1);
		res_381309 = ((NI) 0);
		{
			while (1) {
				if (!(res_381309 <= HEX3Atmp_381306)) goto LA4;
				i_381252 = res_381309;
				{
					NIM_BOOL LOC7;
					NI j;
					NI LOC10;
					LOC7 = 0;
					LOC7 = isfilled_155211(n->data[i_381252].Field0);
					if (!LOC7) goto LA8;
					LOC10 = 0;
					LOC10 = rawgetknownhc_381254((*t), n->data[i_381252].Field1, n->data[i_381252].Field0);
					j = (NI)(((NI) -1) - LOC10);
					rawinsert_381280(t, (&(*t).data), n->data[i_381252].Field1, n->data[i_381252].Field2, n->data[i_381252].Field0, j);
				}
				LA8: ;
				res_381309 += ((NI) 1);
			} LA4: ;
		}
	}
}

N_NIMCALL(void, HEX5BHEX5DHEX3D_381163)(Table380650* t, NI64 key, Tnode190813* val) {
	NI hc;
	NI index;
	hc = 0;
	index = rawget_381112((*t), key, (&hc));
	{
		if (!(((NI) 0) <= index)) goto LA3;
		asgnRefNoCycle((void**) (&(*t).data->data[index].Field2), val);
	}
	goto LA1;
	LA3: ;
	{
		{
			NIM_BOOL LOC8;
			LOC8 = 0;
			LOC8 = mustrehash_155313(((*t).data ? (*t).data->Sup.len : 0), (*t).counter);
			if (!LOC8) goto LA9;
			enlarge_381200(t);
			index = rawgetknownhc_381254((*t), key, hc);
		}
		LA9: ;
		index = (NI)(((NI) -1) - index);
		rawinsert_381280(t, (&(*t).data), key, val, hc, index);
		(*t).counter += ((NI) 1);
	}
	LA1: ;
}

N_NIMCALL(void, inittable_310118)(NI initialsize, Table310052* Result) {
	(*Result).counter = ((NI) 0);
	unsureAsgnRef((void**) (&(*Result).data), (Keyvaluepairseq310055*) newSeq((&NTI310055), ((NI) (initialsize))));
}
N_NIMCALL(void, TMP4918)(void* p, NI op) {
	Keyvaluepairseq311414* a;
	NI LOC1;
	a = (Keyvaluepairseq311414*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field1.keyword, op);
	nimGCvisit((void*)a->data[LOC1].Field1.link, op);
	nimGCvisit((void*)a->data[LOC1].Field1.linktitle, op);
	nimGCvisit((void*)a->data[LOC1].Field1.linkdesc, op);
	nimGCvisit((void*)a->data[LOC1].Field2, op);
	}
}

N_NIMCALL(void, inittable_313732)(NI initialsize, Table311411* Result) {
	(*Result).counter = ((NI) 0);
	unsureAsgnRef((void**) (&(*Result).data), (Keyvaluepairseq311414*) newSeq((&NTI311414), ((NI) (initialsize))));
}

N_NIMCALL(NI, len_314060)(Table311411 t) {
	NI result;
	result = 0;
	result = t.counter;
	return result;
}

static N_INLINE(NI, rawget_313294)(Table311411 t, Tindexentry311398 key, NI* hc) {
	NI result;
	NI h;
{	result = 0;
	(*hc) = hash_311443(key);
	{
		if (!((*hc) == ((NI) 0))) goto LA3;
		(*hc) = ((NI) 314159265);
	}
	LA3: ;
	h = (NI)((*hc) & (t.data ? (t.data->Sup.len-1) : -1));
	{
		while (1) {
			NIM_BOOL LOC7;
			LOC7 = 0;
			LOC7 = isfilled_155211(t.data->data[h].Field0);
			if (!LOC7) goto LA6;
			{
				NIM_BOOL LOC10;
				LOC10 = 0;
				LOC10 = (t.data->data[h].Field0 == (*hc));
				if (!(LOC10)) goto LA11;
				LOC10 = HEX3DHEX3D_313309(t.data->data[h].Field1, key);
				LA11: ;
				if (!LOC10) goto LA12;
				result = h;
				goto BeforeRet;
			}
			LA12: ;
			h = nexttry_155420(h, (t.data ? (t.data->Sup.len-1) : -1));
		} LA6: ;
	}
	result = (NI)(((NI) -1) - h);
	}BeforeRet: ;
	return result;
}

static N_INLINE(NI, rawgetknownhc_314163)(Table311411 t, Tindexentry311398 key, NI hc) {
	NI result;
	NI h;
{	result = 0;
	h = (NI)(hc & (t.data ? (t.data->Sup.len-1) : -1));
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = isfilled_155211(t.data->data[h].Field0);
			if (!LOC3) goto LA2;
			{
				NIM_BOOL LOC6;
				LOC6 = 0;
				LOC6 = (t.data->data[h].Field0 == hc);
				if (!(LOC6)) goto LA7;
				LOC6 = HEX3DHEX3D_313309(t.data->data[h].Field1, key);
				LA7: ;
				if (!LOC6) goto LA8;
				result = h;
				goto BeforeRet;
			}
			LA8: ;
			h = nexttry_155420(h, (t.data ? (t.data->Sup.len-1) : -1));
		} LA2: ;
	}
	result = (NI)(((NI) -1) - h);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, rawinsert_314198)(Table311411* t, Keyvaluepairseq311414** data, Tindexentry311398 key, TY313708* val, NI hc, NI h) {
	NimStringDesc* LOC1;
	NimStringDesc* LOC2;
	NimStringDesc* LOC3;
	NimStringDesc* LOC4;
	LOC1 = 0;
	LOC1 = (*data)->data[h].Field1.keyword; (*data)->data[h].Field1.keyword = copyStringRC1(key.keyword);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	LOC2 = 0;
	LOC2 = (*data)->data[h].Field1.link; (*data)->data[h].Field1.link = copyStringRC1(key.link);
	if (LOC2) nimGCunrefNoCycle(LOC2);
	LOC3 = 0;
	LOC3 = (*data)->data[h].Field1.linktitle; (*data)->data[h].Field1.linktitle = copyStringRC1(key.linktitle);
	if (LOC3) nimGCunrefNoCycle(LOC3);
	LOC4 = 0;
	LOC4 = (*data)->data[h].Field1.linkdesc; (*data)->data[h].Field1.linkdesc = copyStringRC1(key.linkdesc);
	if (LOC4) nimGCunrefNoCycle(LOC4);
	genericSeqAssign((&(*data)->data[h].Field2), val, (&NTI313708));
	(*data)->data[h].Field0 = hc;
}

N_NIMCALL(void, enlarge_314109)(Table311411* t) {
	Keyvaluepairseq311414* n;
	Keyvaluepairseq311414* LOC1;
	n = 0;
	n = (Keyvaluepairseq311414*) newSeq((&NTI311414), ((NI) ((NI)(((*t).data ? (*t).data->Sup.len : 0) * ((NI) 2)))));
	LOC1 = 0;
	LOC1 = (*t).data;
	unsureAsgnRef((void**) (&(*t).data), n);
	n = LOC1;
	{
		NI i_314161;
		NI HEX3Atmp_314224;
		NI res_314227;
		i_314161 = 0;
		HEX3Atmp_314224 = 0;
		HEX3Atmp_314224 = (n ? (n->Sup.len-1) : -1);
		res_314227 = ((NI) 0);
		{
			while (1) {
				if (!(res_314227 <= HEX3Atmp_314224)) goto LA4;
				i_314161 = res_314227;
				{
					NIM_BOOL LOC7;
					NI j;
					NI LOC10;
					LOC7 = 0;
					LOC7 = isfilled_155211(n->data[i_314161].Field0);
					if (!LOC7) goto LA8;
					LOC10 = 0;
					LOC10 = rawgetknownhc_314163((*t), n->data[i_314161].Field1, n->data[i_314161].Field0);
					j = (NI)(((NI) -1) - LOC10);
					rawinsert_314198(t, (&(*t).data), n->data[i_314161].Field1, n->data[i_314161].Field2, n->data[i_314161].Field0, j);
				}
				LA8: ;
				res_314227 += ((NI) 1);
			} LA4: ;
		}
	}
}

N_NIMCALL(void, HEX5BHEX5DHEX3D_314072)(Table311411* t, Tindexentry311398 key, TY313708* val) {
	NI hc;
	NI index;
	hc = 0;
	index = rawget_313294((*t), key, (&hc));
	{
		if (!(((NI) 0) <= index)) goto LA3;
		genericSeqAssign((&(*t).data->data[index].Field2), val, (&NTI313708));
	}
	goto LA1;
	LA3: ;
	{
		{
			NIM_BOOL LOC8;
			LOC8 = 0;
			LOC8 = mustrehash_155313(((*t).data ? (*t).data->Sup.len : 0), (*t).counter);
			if (!LOC8) goto LA9;
			enlarge_314109(t);
			index = rawgetknownhc_314163((*t), key, hc);
		}
		LA9: ;
		index = (NI)(((NI) -1) - index);
		rawinsert_314198(t, (&(*t).data), key, val, hc, index);
		(*t).counter += ((NI) 1);
	}
	LA1: ;
}

N_NIMCALL(TY313708*, HEX5BHEX5D_313282)(Table311411 t, Tindexentry311398 key) {
	TY313708* result;
	NI hc;
	NI index;
	result = 0;
	hc = 0;
	index = rawget_313294(t, key, (&hc));
	{
		if (!(((NI) 0) <= index)) goto LA3;
		genericSeqAssign((&result), t.data->data[index].Field2, (&NTI313708));
	}
	LA3: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_tablesInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_tablesDatInit)(void) {
static TNimNode* TMP126[3];
static TNimNode* TMP130[2];
static TNimNode* TMP2430[3];
static TNimNode* TMP2917[3];
static TNimNode* TMP4765[2];
static TNimNode* TMP4915[3];
static TNimNode TMP53[22];
NTI162382.size = sizeof(Keyvaluepair162382);
NTI162382.kind = 18;
NTI162382.base = 0;
NTI162382.flags = 2;
TMP126[0] = &TMP53[1];
TMP53[1].kind = 1;
TMP53[1].offset = offsetof(Keyvaluepair162382, Field0);
TMP53[1].typ = (&NTI130021);
TMP53[1].name = "Field0";
TMP126[1] = &TMP53[2];
TMP53[2].kind = 1;
TMP53[2].offset = offsetof(Keyvaluepair162382, Field1);
TMP53[2].typ = (&NTI149);
TMP53[2].name = "Field1";
TMP126[2] = &TMP53[3];
TMP53[3].kind = 1;
TMP53[3].offset = offsetof(Keyvaluepair162382, Field2);
TMP53[3].typ = (&NTI114);
TMP53[3].name = "Field2";
TMP53[0].len = 3; TMP53[0].kind = 2; TMP53[0].sons = &TMP126[0];
NTI162382.node = &TMP53[0];
NTI162379.size = sizeof(Keyvaluepairseq162379*);
NTI162379.kind = 24;
NTI162379.base = (&NTI162382);
NTI162379.flags = 2;
NTI162379.marker = TMP127;
NTI162376.size = sizeof(Table162376);
NTI162376.kind = 18;
NTI162376.base = 0;
NTI162376.flags = 2;
TMP130[0] = &TMP53[5];
TMP53[5].kind = 1;
TMP53[5].offset = offsetof(Table162376, data);
TMP53[5].typ = (&NTI162379);
TMP53[5].name = "data";
TMP130[1] = &TMP53[6];
TMP53[6].kind = 1;
TMP53[6].offset = offsetof(Table162376, counter);
TMP53[6].typ = (&NTI108);
TMP53[6].name = "counter";
TMP53[4].len = 2; TMP53[4].kind = 2; TMP53[4].sons = &TMP130[0];
NTI162376.node = &TMP53[4];
NTI310058.size = sizeof(Keyvaluepair310058);
NTI310058.kind = 18;
NTI310058.base = 0;
NTI310058.flags = 2;
TMP2430[0] = &TMP53[8];
TMP53[8].kind = 1;
TMP53[8].offset = offsetof(Keyvaluepair310058, Field0);
TMP53[8].typ = (&NTI130021);
TMP53[8].name = "Field0";
TMP2430[1] = &TMP53[9];
TMP53[9].kind = 1;
TMP53[9].offset = offsetof(Keyvaluepair310058, Field1);
TMP53[9].typ = (&NTI149);
TMP53[9].name = "Field1";
TMP2430[2] = &TMP53[10];
TMP53[10].kind = 1;
TMP53[10].offset = offsetof(Keyvaluepair310058, Field2);
TMP53[10].typ = (&NTI108);
TMP53[10].name = "Field2";
TMP53[7].len = 3; TMP53[7].kind = 2; TMP53[7].sons = &TMP2430[0];
NTI310058.node = &TMP53[7];
NTI310055.size = sizeof(Keyvaluepairseq310055*);
NTI310055.kind = 24;
NTI310055.base = (&NTI310058);
NTI310055.flags = 2;
NTI310055.marker = TMP2431;
NTI380656.size = sizeof(Keyvaluepair380656);
NTI380656.kind = 18;
NTI380656.base = 0;
NTI380656.flags = 2;
TMP2917[0] = &TMP53[12];
TMP53[12].kind = 1;
TMP53[12].offset = offsetof(Keyvaluepair380656, Field0);
TMP53[12].typ = (&NTI130021);
TMP53[12].name = "Field0";
TMP2917[1] = &TMP53[13];
TMP53[13].kind = 1;
TMP53[13].offset = offsetof(Keyvaluepair380656, Field1);
TMP53[13].typ = (&NTI5710);
TMP53[13].name = "Field1";
TMP2917[2] = &TMP53[14];
TMP53[14].kind = 1;
TMP53[14].offset = offsetof(Keyvaluepair380656, Field2);
TMP53[14].typ = (&NTI190805);
TMP53[14].name = "Field2";
TMP53[11].len = 3; TMP53[11].kind = 2; TMP53[11].sons = &TMP2917[0];
NTI380656.node = &TMP53[11];
NTI380653.size = sizeof(Keyvaluepairseq380653*);
NTI380653.kind = 24;
NTI380653.base = (&NTI380656);
NTI380653.flags = 2;
NTI380653.marker = TMP2918;
NTI310052.size = sizeof(Table310052);
NTI310052.kind = 18;
NTI310052.base = 0;
NTI310052.flags = 2;
TMP4765[0] = &TMP53[16];
TMP53[16].kind = 1;
TMP53[16].offset = offsetof(Table310052, data);
TMP53[16].typ = (&NTI310055);
TMP53[16].name = "data";
TMP4765[1] = &TMP53[17];
TMP53[17].kind = 1;
TMP53[17].offset = offsetof(Table310052, counter);
TMP53[17].typ = (&NTI108);
TMP53[17].name = "counter";
TMP53[15].len = 2; TMP53[15].kind = 2; TMP53[15].sons = &TMP4765[0];
NTI310052.node = &TMP53[15];
NTI311417.size = sizeof(Keyvaluepair311417);
NTI311417.kind = 18;
NTI311417.base = 0;
NTI311417.flags = 2;
TMP4915[0] = &TMP53[19];
TMP53[19].kind = 1;
TMP53[19].offset = offsetof(Keyvaluepair311417, Field0);
TMP53[19].typ = (&NTI130021);
TMP53[19].name = "Field0";
TMP4915[1] = &TMP53[20];
TMP53[20].kind = 1;
TMP53[20].offset = offsetof(Keyvaluepair311417, Field1);
TMP53[20].typ = (&NTI311398);
TMP53[20].name = "Field1";
TMP4915[2] = &TMP53[21];
TMP53[21].kind = 1;
TMP53[21].offset = offsetof(Keyvaluepair311417, Field2);
TMP53[21].typ = (&NTI313708);
TMP53[21].name = "Field2";
TMP53[18].len = 3; TMP53[18].kind = 2; TMP53[18].sons = &TMP4915[0];
NTI311417.node = &TMP53[18];
NTI311414.size = sizeof(Keyvaluepairseq311414*);
NTI311414.kind = 24;
NTI311414.base = (&NTI311417);
NTI311414.flags = 2;
NTI311414.marker = TMP4918;
}

