/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:00:01 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TPPageGenerator.h>

@class TPFootnoteLayoutController, NSString;

@interface TPEndnotePageGenerator : NSObject <TPPageGenerator> {

	TPFootnoteLayoutController* _footnoteLayoutController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)wantsPageInSectionHint:(id)arg1 withState:(id)arg2 ;
-(void)createOrUpdatePageHintInSectionHint:(id)arg1 withState:(id)arg2 ;
-(id)initWithFootnoteLayoutController:(id)arg1 ;
-(id)init;
@end

