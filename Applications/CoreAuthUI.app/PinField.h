/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:28:40 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/CoreAuthUI.app/CoreAuthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreAuthUI/CoreAuthUI-Structs.h>
#import <UIKit/UIView.h>

@protocol PinFieldDelegate;
@class NSMutableArray, LASecureData;

@interface PinField : UIView {

	NSMutableArray* _pinDashViews;
	NSMutableArray* _pinDotViews;
	CGSize _pinDashSize;
	CGSize _pinDotSize;
	double _slotHeight;
	double _slotWidth;
	id<PinFieldDelegate> _delegate;
	LASecureData* _pinValue;
	unsigned long long _pinLength;

}

@property (assign,nonatomic,__weak) id<PinFieldDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) LASecureData * pinValue;                         //@synthesize pinValue=_pinValue - In the implementation block
@property (nonatomic,readonly) unsigned long long pinLength;                    //@synthesize pinLength=_pinLength - In the implementation block
-(id)initWithPinLength:(id)arg1 ;
-(void)updateLayoutForWidth:(double)arg1 ;
-(LASecureData *)pinValue;
-(void)appendPinCharacter:(id)arg1 ;
-(void)deleteLastPinCharacter;
-(void)setDelegate:(id<PinFieldDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<PinFieldDelegate>)delegate;
-(unsigned long long)pinLength;
@end

