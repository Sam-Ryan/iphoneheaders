/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:09 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <libobjc.A.dylib/MKStackingViewControllerPreferredSizeUse.h>
#import <libobjc.A.dylib/MKHideableBottomSeparator.h>

@protocol MKPlaceSharedAttributionDelegate;
@class NSAttributedString, NSString;

@interface MKSharedAttributionViewController : UITableViewController <MKStackingViewControllerPreferredSizeUse, MKHideableBottomSeparator> {

	BOOL _isSelectable;
	BOOL _viewShouldHideBottommostSeparator;
	NSAttributedString* _attribution;
	id<MKPlaceSharedAttributionDelegate> _delegate;

}

@property (assign,nonatomic) BOOL isSelectable;                                                 //@synthesize isSelectable=_isSelectable - In the implementation block
@property (nonatomic,copy) NSAttributedString * attribution;                                    //@synthesize attribution=_attribution - In the implementation block
@property (assign,nonatomic,__weak) id<MKPlaceSharedAttributionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL requiresPreferredContentSizeInStackingView; 
@property (assign,nonatomic) BOOL viewShouldHideBottommostSeparator;                            //@synthesize viewShouldHideBottommostSeparator=_viewShouldHideBottommostSeparator - In the implementation block
-(void)setDelegate:(id<MKPlaceSharedAttributionDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<MKPlaceSharedAttributionDelegate>)delegate;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(BOOL)isSelectable;
-(void)setAttribution:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attribution;
-(void)contentSizeDidChange;
-(BOOL)requiresPreferredContentSizeInStackingView;
-(void)setIsSelectable:(BOOL)arg1 ;
-(BOOL)viewShouldHideBottommostSeparator;
-(void)setViewShouldHideBottommostSeparator:(BOOL)arg1 ;
@end

