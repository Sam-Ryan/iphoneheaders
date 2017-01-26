/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:56 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MusicProductDescription : NSObject <NSCopying> {

	long long _format;
	NSString* _text;
	NSString* _storeEditorNotes;

}

@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (nonatomic,readonly) long long format;                         //@synthesize format=_format - In the implementation block
@property (nonatomic,readonly) NSString * text;                          //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) NSString * storeEditorNotes;              //@synthesize storeEditorNotes=_storeEditorNotes - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(NSString *)text;
-(id)initWithText:(id)arg1 ;
-(long long)format;
-(id)initWithStoreEditorNotes:(id)arg1 ;
-(NSString *)storeEditorNotes;
@end

