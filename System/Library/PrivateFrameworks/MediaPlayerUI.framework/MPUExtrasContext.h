/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:48:09 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MPUExtrasPlaybackDelegate.h>

@protocol MPUExtrasContextDelegate;
@class UIViewController, MPPlaybackContext, MPUExtrasRootViewController, MPMediaItem, NSURL, NSString;

@interface MPUExtrasContext : NSObject <MPUExtrasPlaybackDelegate> {

	id<MPUExtrasContextDelegate> _delegate;
	UIViewController* _featurePlaybackViewController;
	MPPlaybackContext* _featurePlaybackContext;
	MPUExtrasRootViewController* _extrasRootViewController;
	MPMediaItem* _mediaItem;
	NSURL* _javascriptURL;
	NSString* _buyParameters;
	long long _storeID;

}

@property (assign,nonatomic,__weak) id<MPUExtrasContextDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIViewController * featurePlaybackViewController;                      //@synthesize featurePlaybackViewController=_featurePlaybackViewController - In the implementation block
@property (nonatomic,retain) MPPlaybackContext * featurePlaybackContext;                            //@synthesize featurePlaybackContext=_featurePlaybackContext - In the implementation block
@property (nonatomic,readonly) MPUExtrasRootViewController * extrasRootViewController;              //@synthesize extrasRootViewController=_extrasRootViewController - In the implementation block
@property (nonatomic,readonly) MPMediaItem * mediaItem;                                             //@synthesize mediaItem=_mediaItem - In the implementation block
@property (nonatomic,copy,readonly) NSURL * javascriptURL;                                          //@synthesize javascriptURL=_javascriptURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * buyParameters;                                       //@synthesize buyParameters=_buyParameters - In the implementation block
@property (nonatomic,readonly) long long storeID;                                                   //@synthesize storeID=_storeID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)extrasRootViewControllerClass;
+(id)overriddenJavascriptURL;
+(void)overrideJavascriptURL:(id)arg1 ;
-(void)setDelegate:(id<MPUExtrasContextDelegate>)arg1 ;
-(id)init;
-(id<MPUExtrasContextDelegate>)delegate;
-(NSString *)buyParameters;
-(long long)storeID;
-(void)failWithError:(id)arg1 ;
-(MPMediaItem *)mediaItem;
-(void)extrasRequestsMediaPlayback:(id)arg1 isBackground:(BOOL)arg2 ;
-(MPUExtrasRootViewController *)extrasRootViewController;
-(void)extrasRequestsPlaybackStop;
-(UIViewController *)featurePlaybackViewController;
-(void)extrasRequestReloadWithContext:(id)arg1 ;
-(NSURL *)javascriptURL;
-(void)_configureForMediaItem:(id)arg1 ;
-(MPPlaybackContext *)featurePlaybackContext;
-(id)initWithApplicationJavascriptURL:(id)arg1 storeID:(long long)arg2 buyParameters:(id)arg3 ;
-(void)setFeaturePlaybackViewController:(UIViewController *)arg1 ;
-(void)setFeaturePlaybackContext:(MPPlaybackContext *)arg1 ;
-(id)initWithMediaItem:(id)arg1 ;
@end

