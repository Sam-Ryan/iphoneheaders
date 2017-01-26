/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:13 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKPresentationCanvas.h>

@class NSString, NSMutableDictionary;

@interface OKPresentationFeeder : OKPresentationCanvas {

	NSString* _className;
	NSMutableDictionary* _internalSettings;

}

@property (nonatomic,copy) NSString * className;              //@synthesize className=_className - In the implementation block
+(id)feederWithName:(id)arg1 className:(id)arg2 settings:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(id)dictionary;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)className;
-(void)resolveIfNeeded;
-(void)setClassName:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 andName:(id)arg2 forPresentation:(id)arg3 ;
@end

