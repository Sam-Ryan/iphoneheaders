/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:30:11 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SFSafeBrowsingJSControllerMethods.h>

@class _SFWebProcessPlugInPageSafeBrowsingController;

@interface SFSafeBrowsingJSController : NSObject <SFSafeBrowsingJSControllerMethods> {

	_SFWebProcessPlugInPageSafeBrowsingController* _safeBrowsingController;

}
-(id)initWithSafeBrowsingController:(id)arg1 ;
-(void)loaded;
-(void)ignoreWarningSelected;
-(void)goBackSelected;
-(void)closePageSelected;
-(id)UIString:(id)arg1 ;
-(BOOL)isRTL;
@end

