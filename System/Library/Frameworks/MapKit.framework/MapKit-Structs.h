/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:11 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct {
	double field1;
	double field2;
} SCD_Struct_MK0;

typedef struct {
	SCD_Struct_MK0 field1;
	SCD_Struct_MK0 field2;
} SCD_Struct_MK1;

typedef struct {
	double field1;
	double field2;
	double field3;
} SCD_Struct_MK2;

typedef struct {
	unsigned char field1;
	unsigned char field2;
	unsigned char field3;
} SCD_Struct_MK3;

typedef struct UIEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} UIEdgeInsets;

typedef struct {
	double field1;
	SCD_Struct_MK0 field2;
} SCD_Struct_MK5;

typedef struct {
	BOOL field1;
} SCD_Struct_MK6;

typedef struct {
	double latitude;
	double longitude;
} SCD_Struct_MK7;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGImage* CGImageRef;

typedef struct {
	SCD_Struct_MK7 origin;
	SCD_Struct_MK7 size;
} SCD_Struct_MK10;

typedef struct CGPath* CGPathRef;

typedef struct CGContext* CGContextRef;

typedef struct {
	unsigned field1;
	unsigned field2;
	unsigned field3;
} SCD_Struct_MK13;

typedef struct CGColor* CGColorRef;

typedef struct {
	unsigned char timePeriod;
	unsigned char overlayType;
	unsigned char applicationState;
} SCD_Struct_MK15;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct _NSZone* NSZoneRef;

typedef struct __CTLine* CTLineRef;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct {
	long long field1;
	SCD_Struct_MK7 field2;
	CGPoint field3;
	CGPoint field4;
	id field5;
	BOOL field6;
} SCD_Struct_MK21;

typedef struct {
	long long field1;
	long long field2;
	long long field3;
	double field4;
} SCD_Struct_MK22;

typedef struct {
	long long x;
	long long y;
	long long z;
	double contentScaleFactor;
} SCD_Struct_MK23;

typedef struct GEOTileKey {
	unsigned z : 6;
	unsigned x : 26;
	unsigned y : 26;
	unsigned type : 6;
	unsigned pixelSize : 8;
	unsigned textScale : 8;
	unsigned provider : 8;
	unsigned expires : 1;
	unsigned reserved1 : 7;
	unsigned char reserved2[4];
} GEOTileKey;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> > > {
	unsigned long long __first_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> > >;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, void *> *> > {
	unsigned long long __first_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, void *> *> >;

typedef struct _compressed_pair<unsigned long, std::__1::__unordered_map_hasher<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, std::__1::hash<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, true> > {
	unsigned long long __first_;
} compressed_pair<unsigned long, std::__1::__unordered_map_hasher<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, std::__1::hash<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, true> >;

typedef struct _compressed_pair<float, std::__1::__unordered_map_equal<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, std::__1::equal_to<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, true> > {
	float __first_;
} compressed_pair<float, std::__1::__unordered_map_equal<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, std::__1::equal_to<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, true> >;

typedef struct _hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, void *> *> {
	__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, void *> __next_;
} hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, void *> *>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, void *> > > {
	hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, void *> *> __first_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, void *> > >;

typedef struct _bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, void *> *> > {
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, void *> *> > __data_;
} bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, void *> *> >;

typedef struct _compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, void *> *> > > {
	__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, void *> __first_;
	bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, void *> *> > __second_;
} compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, void *> *> > >;

typedef struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, void *> *> > > {
	compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, void *> *> > > __ptr_;
} unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, void *> *> > >;

typedef struct _hash_table<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, std::__1::__unordered_map_hasher<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, std::__1::hash<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, true>, std::__1::__unordered_map_equal<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, std::__1::equal_to<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, true>, std::__1::allocator<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> > > > {
	unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, void *> *> > > __bucket_list_;
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, void *> > > __p1_;
	compressed_pair<unsigned long, std::__1::__unordered_map_hasher<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, std::__1::hash<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, true> > __p2_;
	compressed_pair<float, std::__1::__unordered_map_equal<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, std::__1::equal_to<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, true> > __p3_;
} hash_table<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, std::__1::__unordered_map_hasher<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, std::__1::hash<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, true>, std::__1::__unordered_map_equal<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, std::__1::equal_to<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, true>, std::__1::allocator<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> > > >;

typedef struct unordered_map<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *>, std::__1::hash<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::equal_to<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::allocator<std::__1::pair<const geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> > > > {
	hash_table<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, std::__1::__unordered_map_hasher<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, std::__1::hash<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, true>, std::__1::__unordered_map_equal<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, std::__1::equal_to<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, true>, std::__1::allocator<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> > > > __table_;
} unordered_map<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *>, std::__1::hash<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::equal_to<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::allocator<std::__1::pair<const geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> > > >;

typedef struct _list_node_base<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> {
	__list_node<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> __prev_;
	__list_node<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> __next_;
} list_node_base<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *>;

typedef struct list<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, std::__1::allocator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr> > > {
	list_node_base<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> __end_;
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> > > __size_alloc_;
} list<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, std::__1::allocator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr> > >;

typedef struct mutex {
	opaque_pthread_mutex_t __m_;
} mutex;

typedef struct GEOGenericContainer<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, std::__1::hash<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::equal_to<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, geo::GEOGenericContainerWeakReferenceTag, 0, 0, geo::GEOGenericContainerLockingTag, detail::_default_pointer_type> {
	mutex _lock;
	list<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, std::__1::allocator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr> > > _list;
	unordered_map<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *>, std::__1::hash<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::equal_to<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::allocator<std::__1::pair<const geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> > > > _map;
	unsigned long long _maxCapacity;
	unsigned long long _maxCost;
	unsigned long long _currentCost;
	unsigned long long _currentCount;
} GEOGenericContainer<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, std::__1::hash<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::equal_to<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, geo::GEOGenericContainerWeakReferenceTag, 0, 0, geo::GEOGenericContainerLockingTag, detail::_default_pointer_type>;

typedef struct GEOGenericContainer<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, std::__1::hash<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::equal_to<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, geo::GEOGenericContainerStrongReferenceTag, 64, 2097152, geo::GEOGenericContainerLockingTag, detail::_default_pointer_type> {
	mutex _lock;
	list<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, std::__1::allocator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr> > > _list;
	unordered_map<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *>, std::__1::hash<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::equal_to<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::allocator<std::__1::pair<const geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> > > > _map;
	unsigned long long _maxCapacity;
	unsigned long long _maxCost;
	unsigned long long _currentCost;
	unsigned long long _currentCount;
} GEOGenericContainer<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, std::__1::hash<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::equal_to<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, geo::GEOGenericContainerStrongReferenceTag, 64, 2097152, geo::GEOGenericContainerLockingTag, detail::_default_pointer_type>;

typedef struct __IOHIDEventSystemClient* IOHIDEventSystemClientRef;

typedef struct _compressed_pair<double **, std::__1::allocator<double *> > {
	double __first_;
} compressed_pair<double **, std::__1::allocator<double *> >;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<double> > {
	unsigned long long __first_;
} compressed_pair<unsigned long, std::__1::allocator<double> >;

typedef struct _split_buffer<double *, std::__1::allocator<double *> > {
	double __first_;
	double __begin_;
	double __end_;
	compressed_pair<double **, std::__1::allocator<double *> > __end_cap_;
} split_buffer<double *, std::__1::allocator<double *> >;

typedef struct deque<double, std::__1::allocator<double> > {
	split_buffer<double *, std::__1::allocator<double *> > __map_;
	unsigned long long __start_;
	compressed_pair<unsigned long, std::__1::allocator<double> > __size_;
} deque<double, std::__1::allocator<double> >;

typedef struct __IOHIDEvent* IOHIDEventRef;

typedef struct {
	unsigned field1 : 1;
	unsigned field2 : 1;
	unsigned field3 : 1;
} SCD_Struct_MK48;

typedef struct {
	int field1;
	int field2;
	int field3;
	SCD_Struct_MK48 field4;
} SCD_Struct_MK49;

typedef struct {
	CGSize field1;
	double field2;
	double field3;
	double field4;
	CGSize field5;
	double field6;
	double field7;
	double field8;
	long long field9;
	double field10;
	double field11;
	double field12;
	double field13;
	double field14;
	double field15;
	double field16;
	double field17;
	double field18;
	double field19;
	double field20;
	double field21;
	double field22;
	double field23;
	double field24;
	double field25;
	BOOL field26;
	double field27;
	double field28;
	double field29;
	BOOL field30;
	BOOL field31;
} SCD_Struct_MK50;

