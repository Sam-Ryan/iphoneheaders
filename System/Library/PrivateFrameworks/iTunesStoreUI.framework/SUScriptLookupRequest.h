/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:14 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class SSLookupRequest, NSString;

@interface SUScriptLookupRequest : SUScriptObject {

	SSLookupRequest* _request;

}

@property (retain) id authenticatesIfNeeded; 
@property (copy) NSString * keyProfile; 
@property (assign) long long localizationStyle; 
@property (readonly) long long localizationStyleDevice; 
@property (readonly) long long localizationStyleServer; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
-(void)dealloc;
-(id)init;
-(id)attributeKeys;
-(id)valueForRequestParameter:(id)arg1 ;
-(long long)localizationStyle;
-(void)startWithLookupFunction:(id)arg1 ;
-(id)authenticatesIfNeeded;
-(void)setAuthenticatesIfNeeded:(id)arg1 ;
-(long long)localizationStyleDevice;
-(long long)localizationStyleServer;
-(void)setValue:(id)arg1 forRequestParameter:(id)arg2 ;
-(id)scriptAttributeKeys;
-(id)_className;
-(void)setKeyProfile:(NSString *)arg1 ;
-(NSString *)keyProfile;
-(void)setLocalizationStyle:(long long)arg1 ;
@end
