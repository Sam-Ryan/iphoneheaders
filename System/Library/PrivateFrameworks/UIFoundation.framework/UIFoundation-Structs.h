/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:56:46 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSFont, NSMutableParagraphStyle;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct {
	unsigned field1 : 4;
	unsigned field2 : 1;
	unsigned field3 : 1;
	unsigned field4 : 1;
	unsigned field5 : 4;
	unsigned field6 : 4;
	unsigned field7 : 1;
	unsigned field8 : 1;
	unsigned field9 : 1;
	unsigned field10 : 1;
	unsigned field11 : 2;
	unsigned field12 : 1;
	unsigned field13 : 10;
} SCD_Struct_NS1;

typedef struct {
	/*function pointer*/void* field1;
	_ field2;
	NSRange field3;
	_ field4;
	NSRange field5;
	float field6;
	float field7;
	/*function pointer*/void* field8;
	/*function pointer*/void* field9;
	double field10;
	double field11;
	double field12;
	double field13;
	double field14;
	double field15;
	unsigned char field16;
	G field17;
	R field18;
	e field19;
	char field20;
	t field21;
	unsigned char field22;
	G field23;
	R field24;
	e field25;
	char field26;
	t field27;
	_ field28;
	NSRange field29;
	id field30;
	double field31;
	long long field32;
	SCD_Struct_NS1 field33;
	void* field34[0];
} SCD_Struct_NS2;

typedef struct {
	unsigned _resolvedWritingDirection : 2;
	unsigned _reserved : 30;
} SCD_Struct_NS3;

typedef struct __CTTypesetter* CTTypesetterRef;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct __CFString* CFStringRef;

typedef struct {
	long long location;
	long long length;
} SCD_Struct_NS7;

typedef struct _NSZone* NSZoneRef;

typedef struct __CTGlyphStorage* CTGlyphStorageRef;

typedef struct __CFArray* CFArrayRef;

typedef struct {
	unsigned field1 : 1;
	unsigned field2 : 1;
	unsigned field3 : 1;
	unsigned field4 : 1;
	unsigned field5 : 1;
	unsigned field6 : 1;
	unsigned field7 : 1;
	unsigned field8 : 1;
	unsigned field9 : 24;
} SCD_Struct_NS11;

typedef struct {
	id field1;
	id field2;
	long long field3;
	long long field4;
	double field5;
	double field6;
	double field7;
	double field8;
	CGRect field9;
	SCD_Struct_NS1 field10;
	1 field11;
} SCD_Struct_NS12;

typedef struct __CFSet* CFSetRef;

typedef struct {
	unsigned short field1;
	CGSize field2;
	unsigned field3;
	long long field4;
	long long field5;
} SCD_Struct_NS14;

typedef struct {
	long long field1;
	SCD_Struct_NS14 field2[0];
} SCD_Struct_NS15;

typedef struct __CTRun* CTRunRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct __CTLine* CTLineRef;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct CGContext* CGContextRef;

typedef struct NSAttributeDictionaryElement {
	unsigned long long hash;
	id key;
	id value;
} NSAttributeDictionaryElement;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
	BOOL field3;
} SCD_Struct_NS23;

typedef struct NSGlyphTree {
	_NSGlyphNode rootNode;
	_NSGlyphNode curNode;
	unsigned long long curCharIndex;
	unsigned long long curGlyphIndex;
} NSGlyphTree;

typedef struct NSLayoutTree {
	_NSLayoutNode rootNode;
	_NSLayoutNode curNode;
	unsigned long long curGlyphIndex;
	double curLongitudinalOrigin;
	CGRect extraLineFragmentRect;
	CGRect extraLineFragmentUsedRect;
	unsigned long long glyphsPerLineEstimate;
	double offsetPerLineEstimate;
} NSLayoutTree;

typedef struct {
	id field1;
	long long field2;
} SCD_Struct_NS26;

typedef struct {
	unsigned usesFontLeading : 1;
	unsigned usesScreenFonts : 1;
	unsigned showsInvisibleCharacters : 1;
	unsigned showsControlCharacters : 1;
	unsigned defaultAttachmentScaling : 4;
	unsigned typesetterBehavior : 8;
	unsigned reserved : 20;
} SCD_Struct_NS27;

typedef struct {
	float _hyphenationFactor;
	SCD_Struct_NS27 _flags;
} SCD_Struct_NS28;

typedef struct CGPath* CGPathRef;

typedef struct opaque_pthread_rwlock_t {
	long long __sig;
	char __opaque[192];
} opaque_pthread_rwlock_t;

typedef struct {
	/*function pointer*/void* field1;
	_ field2;
	NSRange field3;
	_ field4;
	NSRange field5;
	float field6;
	float field7;
	/*function pointer*/void* field8;
	/*function pointer*/void* field9;
	double field10;
	double field11;
	double field12;
	double field13;
	double field14;
	double field15;
	NSRange field16;
	SCD_Struct_NS1 field17;
	_ field18;
	CGRect field19;
	id field20;
	double field21;
	long long field22;
	CGRect field23;
	void* field24[0];
} SCD_Struct_NS31;

typedef union {
	unsigned char thin[128];
	unsigned short fat[128];
} SCD_Union_NS32;

typedef struct NSAttributeInfo {
	unsigned toUniCharEncoding;
	unsigned codePageEncoding;
	NSFont* font;
	double fontSize;
	double kern;
	NSMutableParagraphStyle* paraStyle;
	unsigned bold : 1;
	unsigned italic : 1;
	unsigned fontIsValid : 1;
	unsigned paraStyleIsValid : 1;
	unsigned kernIsValid : 1;
	unsigned attributesSameAsBefore : 1;
	unsigned multiByteEncoding : 1;
	unsigned unicodeAlternativeLength : 3;
	unsigned tabStopType : 4;
	unsigned curAttributesNeedsCopying : 1;
	unsigned paraStyleNeedsCopying : 1;
	unsigned hasWritingDirectionAttribute : 1;
	unsigned  : 15;
} NSAttributeInfo;

typedef struct NSRTFPriv {
	void reader;
	char* rtfInput;
	unsigned long long rtfInputLength;
	unsigned long long rtfInputLocation;
	unsigned long long rtfHeaderEndLocation;
	int pushedChar;
	int pushedClass;
	int pushedMajor;
	int pushedMinor;
	int pushedParam;
	char pushedTextBuf[1024];
	int prevChar;
	int bumpLine;
	RTFFont fontList;
	RTFColor colorList;
	RTFStyle styleList;
	char* inputName;
	char* outputName;
	/*function pointer*/void* ccb[5];
	/*function pointer*/void* readHook;
	/*function pointer*/void* msgProc;
	/*function pointer*/void* panicProc;
	char textBuf[1024];
	int textLen;
	int class;
	int major;
	int minor;
	int param;
	long long lineNum;
	long long linePos;
	int groupState;
} NSRTFPriv;

