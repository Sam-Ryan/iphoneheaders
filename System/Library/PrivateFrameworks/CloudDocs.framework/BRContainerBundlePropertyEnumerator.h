/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:44 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSDictionary, NSEnumerator, NSString;

@interface BRContainerBundlePropertyEnumerator : NSEnumerator {

	NSDictionary* _plist;
	NSEnumerator* _enumerator;
	NSString* _propertyKey;
	Class _valueClass;

}
-(void)dealloc;
-(id)nextObject;
-(id)initWithContainerPlist:(id)arg1 propertyKey:(id)arg2 valuesOfClass:(Class)arg3 ;
@end

