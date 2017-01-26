/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:09 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Pegasus/Pegasus-Structs.h>
#import <UIKit/UIView.h>

@class PGBackdropView, PGChevronView;

@interface PGStashedView : UIView {

	unsigned _active : 1;
	unsigned _stashed : 1;
	PGBackdropView* _backdropView;
	PGChevronView* _chevronViewLeftColorBurn;
	PGChevronView* _chevronViewLeftPlusD;
	PGChevronView* _chevronViewRightColorBurn;
	PGChevronView* _chevronViewRightPlusD;

}

@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (assign,getter=isStashed,nonatomic) BOOL stashed; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(void)setActive:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setStashed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setStashed:(BOOL)arg1 ;
-(BOOL)isStashed;
@end

