/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:23 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSLock, NSBundle;

@interface CATLocalizationHelper : NSObject {

	NSMutableDictionary* mStringByKeyByTableName;
	NSLock* mLock;
	NSBundle* _bundle;

}

@property (nonatomic,__weak,readonly) NSBundle * bundle;              //@synthesize bundle=_bundle - In the implementation block
+(id)helperForBundle:(id)arg1 ;
-(NSBundle *)bundle;
-(id)initWithBundle:(id)arg1 ;
-(id)stringsForKey:(id)arg1 value:(id)arg2 table:(id)arg3 ;
-(id)stringByKeyForTableName:(id)arg1 ;
@end

