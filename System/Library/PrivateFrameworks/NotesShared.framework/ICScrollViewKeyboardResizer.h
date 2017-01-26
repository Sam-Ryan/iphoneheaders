/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:13 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ICScrollViewKeyboardResizerDelegate;
#import <NotesShared/NotesShared-Structs.h>
@class UIScrollView;

@interface ICScrollViewKeyboardResizer : NSObject {

	BOOL _autoResizing;
	BOOL _observingKeyboardNotifications;
	BOOL _didResizeScrollView;
	UIScrollView* _scrollView;
	id<ICScrollViewKeyboardResizerDelegate> _delegate;

}

@property (nonatomic,readonly) UIScrollView * scrollView;                                                              //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic,__weak) id<ICScrollViewKeyboardResizerDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isAutoResizing,nonatomic) BOOL autoResizing;                                                  //@synthesize autoResizing=_autoResizing - In the implementation block
@property (assign,getter=isObservingKeyboardNotifications,nonatomic) BOOL observingKeyboardNotifications;              //@synthesize observingKeyboardNotifications=_observingKeyboardNotifications - In the implementation block
@property (assign,nonatomic) BOOL didResizeScrollView;                                                                 //@synthesize didResizeScrollView=_didResizeScrollView - In the implementation block
-(void)setDelegate:(id<ICScrollViewKeyboardResizerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<ICScrollViewKeyboardResizerDelegate>)delegate;
-(UIScrollView *)scrollView;
-(id)initWithScrollView:(id)arg1 ;
-(void)stopAutoResizing;
-(void)startAutoResizing;
-(BOOL)isObservingKeyboardNotifications;
-(void)handleKeyboardWillShow:(id)arg1 ;
-(void)handleKeyboardWillHide:(id)arg1 ;
-(void)setObservingKeyboardNotifications:(BOOL)arg1 ;
-(void)applyInsetsFromKeyboardFrame:(CGRect)arg1 ;
-(BOOL)didResizeScrollView;
-(void)clearInsets;
-(void)setAutoResizing:(BOOL)arg1 ;
-(void)setDidResizeScrollView:(BOOL)arg1 ;
-(BOOL)isAutoResizing;
@end

