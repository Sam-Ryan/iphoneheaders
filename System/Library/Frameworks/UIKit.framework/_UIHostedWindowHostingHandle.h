/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:13 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _UIHostedWindowHostingHandle : NSObject <NSSecureCoding> {

	unsigned _contextID;
	CGAffineTransform _rootLayerTransform;
	CGRect _rootLayerFrame;

}

@property (nonatomic,readonly) unsigned contextID;                                //@synthesize contextID=_contextID - In the implementation block
@property (nonatomic,readonly) CGAffineTransform rootLayerTransform;              //@synthesize rootLayerTransform=_rootLayerTransform - In the implementation block
@property (nonatomic,readonly) CGRect rootLayerFrame;                             //@synthesize rootLayerFrame=_rootLayerFrame - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)hostedWindowHostingHandleWithContextID:(unsigned)arg1 rootLayerTransform:(CGAffineTransform)arg2 rootLayerFrame:(CGRect)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)contextID;
-(CGAffineTransform)rootLayerTransform;
-(CGRect)rootLayerFrame;
@end

