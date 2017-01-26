/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:28:46 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <MobileCal/ImmunityFromCustomAdaptationOfPresentedViewControllersAcrossSizeClasses.h>

@class NSString;

@interface SplashScreenViewController : UIViewController <ImmunityFromCustomAdaptationOfPresentedViewControllersAcrossSizeClasses> {

	/*^block*/id _doneBlock;

}

@property (nonatomic,copy) id doneBlock;                            //@synthesize doneBlock=_doneBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)_currentSplashScreenVersion;
+(BOOL)mustDisplayToTheUser;
-(void)_continueButtonTappedCallback;
-(id)doneBlock;
-(void)setDoneBlock:(id)arg1 ;
-(BOOL)isImmuneToCustomAdaptation;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
@end
