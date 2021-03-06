/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:58:20 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebUI/WebUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/WBUFormAutoFillFrameHandle.h>
@class NSURL, NSArray;


@protocol WBUFormAutoFillFrameHandle <NSObject>
@property (nonatomic,readonly) NSURL * webui_URL; 
@property (nonatomic,readonly) NSArray * webui_certificateChain; 
@required
-(NSURL *)webui_URL;
-(NSArray *)webui_certificateChain;

@end


@class NSURL, NSArray, _WKFrameHandle, NSString;

@interface WBUFormAutoFillFrameHandle : NSObject <NSCopying, NSSecureCoding, WBUFormAutoFillFrameHandle> {

	NSURL* _URL;
	NSArray* _certificateChain;
	_WKFrameHandle* _frameHandle;

}

@property (nonatomic,readonly) _WKFrameHandle * frameHandle;                  //@synthesize frameHandle=_frameHandle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSURL * webui_URL; 
@property (nonatomic,readonly) NSArray * webui_certificateChain; 
+(BOOL)supportsSecureCoding;
-(id)initWithWebProcessPlugInFrame:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithFrameHandle:(id)arg1 URL:(id)arg2 certificateChain:(id)arg3 ;
-(NSURL *)webui_URL;
-(NSArray *)webui_certificateChain;
-(_WKFrameHandle *)frameHandle;
@end

