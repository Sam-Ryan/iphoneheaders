/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:47 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivityItemProvider.h>

@class NSString, PKPassView;

@interface PKStringActivityItemProvider : UIActivityItemProvider {

	NSString* _passSharingString;
	PKPassView* _passView;
	NSString* _passOrganizationName;

}
-(void)dealloc;
-(id)item;
-(id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 ;
-(id)initWithPass:(id)arg1 andPassView:(id)arg2 ;
@end

