/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:13 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIDynamicBehavior.h>

@class UIAttachmentBehavior;

@interface _UIPlatterMenuSnapBehavior : UIDynamicBehavior {

	UIAttachmentBehavior* _spring1;
	UIAttachmentBehavior* _spring2;

}

@property (assign,nonatomic) double damping; 
@property (assign,nonatomic) double frequency; 
@property (assign,nonatomic) CGPoint anchorPoint; 
-(void)setDamping:(double)arg1 ;
-(CGPoint)anchorPoint;
-(void)setAnchorPoint:(CGPoint)arg1 ;
-(id)initWithItem:(id)arg1 attachedToAnchor:(CGPoint)arg2 ;
-(double)damping;
-(double)frequency;
-(void)setFrequency:(double)arg1 ;
@end

