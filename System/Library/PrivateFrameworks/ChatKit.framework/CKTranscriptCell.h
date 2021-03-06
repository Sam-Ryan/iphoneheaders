/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:40 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKEditableCollectionViewCell.h>

@interface CKTranscriptCell : CKEditableCollectionViewCell {

	BOOL _wantsDrawerLayout;
	char _orientation;
	double _drawerPercentRevealed;

}

@property (assign,nonatomic) BOOL wantsDrawerLayout;                    //@synthesize wantsDrawerLayout=_wantsDrawerLayout - In the implementation block
@property (assign,nonatomic) char orientation;                          //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) double drawerPercentRevealed;              //@synthesize drawerPercentRevealed=_drawerPercentRevealed - In the implementation block
-(void)configureForChatItem:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setOrientation:(char)arg1 ;
-(char)orientation;
-(void)layoutSubviewsForDrawer;
-(double)drawerPercentRevealed;
-(BOOL)wantsDrawerLayout;
-(void)layoutSubviewsForAlignmentContents;
-(void)setDrawerPercentRevealed:(double)arg1 ;
-(void)setWantsDrawerLayout:(BOOL)arg1 ;
-(void)performRemoval:(/*^block*/id)arg1 ;
-(void)performReload:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)performInsertion:(/*^block*/id)arg1 ;
-(void)layoutSubviewsForContents;
@end

