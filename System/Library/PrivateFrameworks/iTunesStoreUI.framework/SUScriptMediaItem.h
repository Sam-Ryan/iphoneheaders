/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:12 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class MPMediaItem;

@interface SUScriptMediaItem : SUScriptObject

@property (nonatomic,readonly) MPMediaItem * nativeItem; 
+(void)initialize;
+(id)scriptMediaTypeForNativeMediaType:(unsigned long long)arg1 ;
+(id)copyScriptMediaTypesForNativeMediaTypes:(unsigned long long)arg1 ;
+(unsigned long long)nativeMediaTypesForScriptMediaTypes:(id)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(id)imageURLWithWidth:(id)arg1 height:(id)arg2 ;
-(MPMediaItem *)nativeItem;
-(id)_className;
@end

