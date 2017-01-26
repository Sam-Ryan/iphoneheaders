/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:30:02 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <QuickLook/QLDisplayBundle.h>
#import <libobjc.A.dylib/QLGenericViewDelegate.h>

@class QLGenericView, NSError, NSString;

@interface QLGenericDisplayBundle : QLDisplayBundle <QLGenericViewDelegate> {

	QLGenericView* _airplayView;
	NSError* _error;

}

@property (retain) NSError * error;                                 //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)loadView;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)loadWithHints:(id)arg1 ;
-(id)airplayView;
-(void)setupAirPlayView;
-(void)discardAirPlayView;
-(void)genericViewDidClickOnArchiveButton:(id)arg1 ;
-(id)subtitleWithDescription:(id)arg1 fileSize:(unsigned long long)arg2 ;
-(void)_loadPreviewItemInfos;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
@end

