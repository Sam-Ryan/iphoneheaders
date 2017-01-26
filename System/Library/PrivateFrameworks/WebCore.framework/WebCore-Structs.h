/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:58:14 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _CFURLAuthChallenge* CFURLAuthChallengeRef;

typedef struct Ref<WTF::WeakReference<WebCore::FontCascade> > {
	WeakReference<WebCore::FontCascade> m_ptr;
} Ref<WTF::WeakReference<WebCore::FontCascade> >;

typedef struct WeakPtr<WebCore::FontCascade> {
	Ref<WTF::WeakReference<WebCore::FontCascade> > m_ref;
} WeakPtr<WebCore::FontCascade>;

typedef struct type {
	unsigned char __lx[8];
} type;

typedef struct Vector<WTF::RetainPtr<const __CTFontDescriptor *>, 16, WTF::CrashOnOverflow, 16> {
	RetainPtr<const __CTFontDescriptor *> m_buffer;
	unsigned m_capacity;
	unsigned m_size;
	type m_inlineBuffer[16];
} Vector<WTF::RetainPtr<const __CTFontDescriptor *>, 16, WTF::CrashOnOverflow, 16>;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct WKQuad {
	CGPoint p1;
	CGPoint p2;
	CGPoint p3;
	CGPoint p4;
} WKQuad;

typedef struct OpaqueJSContext* OpaqueJSContextRef;

typedef struct OpaqueJSValue* OpaqueJSValueRef;

typedef struct __CTFont* CTFontRef;

typedef struct __CFCharacterSet* CFCharacterSetRef;

typedef struct RootObject* RootObjectRef;

typedef struct _NSZone* NSZoneRef;

typedef struct DOMObjectInternal* DOMObjectInternalRef;

typedef struct CGImage* CGImageRef;

typedef struct CGColor* CGColorRef;

typedef struct CGContext* CGContextRef;

typedef struct {
	long long field1;
	int field2;
	unsigned field3;
	long long field4;
} SCD_Struct_We17;

typedef struct RetainPtr<MPVolumeView> {
	void m_ptr;
} RetainPtr<MPVolumeView>;

typedef struct RetainPtr<MPAVRoutingController> {
	void m_ptr;
} RetainPtr<MPAVRoutingController>;

typedef struct RefPtr<WebCore::PlatformSpeechSynthesisUtterance> {
	PlatformSpeechSynthesisUtterance m_ptr;
} RefPtr<WebCore::PlatformSpeechSynthesisUtterance>;

typedef struct RetainPtr<AVSpeechSynthesizer> {
	void m_ptr;
} RetainPtr<AVSpeechSynthesizer>;

typedef struct RefPtr<WebCore::SynchronousResourceHandleCFURLConnectionDelegate> {
	SynchronousResourceHandleCFURLConnectionDelegate m_ptr;
} RefPtr<WebCore::SynchronousResourceHandleCFURLConnectionDelegate>;

typedef struct RefPtr<WebCore::ResourceLoader> {
	ResourceLoader m_ptr;
} RefPtr<WebCore::ResourceLoader>;

typedef struct RefPtr<WebCore::SharedBuffer::DataBuffer> {
	DataBuffer m_ptr;
} RefPtr<WebCore::SharedBuffer::DataBuffer>;

typedef struct WKViewContext {
	/*function pointer*/void* notificationCallback;
	void notificationUserInfo;
	/*function pointer*/void* responderCallback;
	void responderUserInfo;
	/*function pointer*/void* willRemoveSubviewCallback;
	/*function pointer*/void* invalidateGStateCallback;
} WKViewContext;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct atomic<unsigned int> {
	AI __a_;
} atomic<unsigned int>;

typedef struct Atomic<unsigned int> {
	atomic<unsigned int> value;
} Atomic<unsigned int>;

typedef struct SpinLock {
	Atomic<unsigned int> m_lock;
} SpinLock;

typedef struct CGPath* CGPathRef;

typedef struct TextMarkerData {
	unsigned axID;
	Node node;
	int offset;
	int affinity;
} TextMarkerData;

typedef struct HashTable<WebCore::DeviceMotionClientIOS *, WebCore::DeviceMotionClientIOS *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::DeviceMotionClientIOS *>, WTF::HashTraits<WebCore::DeviceMotionClientIOS *>, WTF::HashTraits<WebCore::DeviceMotionClientIOS *> > {
	DeviceMotionClientIOS m_table;
	unsigned m_tableSize;
	unsigned m_tableSizeMask;
	unsigned m_keyCount;
	unsigned m_deletedCount;
} HashTable<WebCore::DeviceMotionClientIOS *, WebCore::DeviceMotionClientIOS *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::DeviceMotionClientIOS *>, WTF::HashTraits<WebCore::DeviceMotionClientIOS *>, WTF::HashTraits<WebCore::DeviceMotionClientIOS *> >;

typedef struct HashSet<WebCore::DeviceMotionClientIOS *, WTF::PtrHash<WebCore::DeviceMotionClientIOS *>, WTF::HashTraits<WebCore::DeviceMotionClientIOS *> > {
	HashTable<WebCore::DeviceMotionClientIOS *, WebCore::DeviceMotionClientIOS *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::DeviceMotionClientIOS *>, WTF::HashTraits<WebCore::DeviceMotionClientIOS *>, WTF::HashTraits<WebCore::DeviceMotionClientIOS *> > m_impl;
} HashSet<WebCore::DeviceMotionClientIOS *, WTF::PtrHash<WebCore::DeviceMotionClientIOS *>, WTF::HashTraits<WebCore::DeviceMotionClientIOS *> >;

typedef struct HashTable<WebCore::DeviceOrientationClientIOS *, WebCore::DeviceOrientationClientIOS *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::DeviceOrientationClientIOS *>, WTF::HashTraits<WebCore::DeviceOrientationClientIOS *>, WTF::HashTraits<WebCore::DeviceOrientationClientIOS *> > {
	DeviceOrientationClientIOS m_table;
	unsigned m_tableSize;
	unsigned m_tableSizeMask;
	unsigned m_keyCount;
	unsigned m_deletedCount;
} HashTable<WebCore::DeviceOrientationClientIOS *, WebCore::DeviceOrientationClientIOS *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::DeviceOrientationClientIOS *>, WTF::HashTraits<WebCore::DeviceOrientationClientIOS *>, WTF::HashTraits<WebCore::DeviceOrientationClientIOS *> >;

typedef struct HashSet<WebCore::DeviceOrientationClientIOS *, WTF::PtrHash<WebCore::DeviceOrientationClientIOS *>, WTF::HashTraits<WebCore::DeviceOrientationClientIOS *> > {
	HashTable<WebCore::DeviceOrientationClientIOS *, WebCore::DeviceOrientationClientIOS *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::DeviceOrientationClientIOS *>, WTF::HashTraits<WebCore::DeviceOrientationClientIOS *>, WTF::HashTraits<WebCore::DeviceOrientationClientIOS *> > m_impl;
} HashSet<WebCore::DeviceOrientationClientIOS *, WTF::PtrHash<WebCore::DeviceOrientationClientIOS *>, WTF::HashTraits<WebCore::DeviceOrientationClientIOS *> >;

typedef struct CGColorSpace* CGColorSpaceRef;

typedef struct _compressed_pair<WebCore::TileController *, std::__1::default_delete<WebCore::TileController> > {
	TileController __first_;
} compressed_pair<WebCore::TileController *, std::__1::default_delete<WebCore::TileController> >;

typedef struct unique_ptr<WebCore::TileController, std::__1::default_delete<WebCore::TileController> > {
	compressed_pair<WebCore::TileController *, std::__1::default_delete<WebCore::TileController> > __ptr_;
} unique_ptr<WebCore::TileController, std::__1::default_delete<WebCore::TileController> >;

typedef struct RefPtr<WebVideoFullscreenControllerContext> {
	WebVideoFullscreenControllerContext m_ptr;
} RefPtr<WebVideoFullscreenControllerContext>;

typedef struct RefPtr<WebCore::HTMLVideoElement> {
	HTMLVideoElement m_ptr;
} RefPtr<WebCore::HTMLVideoElement>;

typedef struct RetainPtr<WebAVPlayerController> {
	void m_ptr;
} RetainPtr<WebAVPlayerController>;

typedef struct RetainPtr<CALayer> {
	void m_ptr;
} RetainPtr<CALayer>;

typedef struct RetainPtr<NSString> {
	void m_ptr;
} RetainPtr<NSString>;

