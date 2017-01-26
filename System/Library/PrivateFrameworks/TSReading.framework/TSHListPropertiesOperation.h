/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:32:30 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSHXmlOperation.h>

@class NSNumber, NSArray, NSMutableDictionary, NSMutableString, NSString;

@interface TSHListPropertiesOperation : TSHXmlOperation {

	NSNumber* mDepth;
	NSArray* mLimitedProperties;
	long long mParserDepth;
	long long mHrefDepth;
	long long mPropDepth;
	NSMutableDictionary* mProperties;
	NSMutableDictionary* mNamespacePrefixes;
	BOOL mInProp;
	BOOL mInHref;
	NSMutableString* mPath;
	NSString* mProperty;

}
-(void)appendValue:(id)arg1 toProperty:(id)arg2 atPath:(id)arg3 ;
-(void)start:(id)arg1 notifyWhenFinished:(id)arg2 ;
-(id)namespacePrefixes;
-(id)initWithAccount:(id)arg1 andPath:(id)arg2 depth:(id)arg3 limitedProperties:(id)arg4 delegate:(id)arg5 ;
-(id)initWithURL:(id)arg1 user:(id)arg2 password:(id)arg3 persistence:(unsigned long long)arg4 depth:(id)arg5 limitedProperties:(id)arg6 delegate:(id)arg7 ;
-(id)getProperty:(id)arg1 propertyNamespace:(id)arg2 href:(id)arg3 ;
-(void)dealloc;
-(id)description;
-(id)request;
-(id)properties;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(id)depth;
@end

