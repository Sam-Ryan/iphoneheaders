/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:13 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUScriptObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SUScriptAction : SUScriptObject <NSCopying> {

	NSString* _actionType;

}

@property (copy) NSString * actionType; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)attributeKeys;
-(void)setActionType:(NSString *)arg1 ;
-(void)performAction;
-(id)initWithActionType:(id)arg1 ;
-(id)scriptAttributeKeys;
-(id)_className;
-(NSString *)actionType;
@end

