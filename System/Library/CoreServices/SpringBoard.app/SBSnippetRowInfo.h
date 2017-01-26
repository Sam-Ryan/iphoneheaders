/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:23 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBRowInfo.h>

@class SBItemInfoLayoutCache, NCSnippetDatum;

@interface SBSnippetRowInfo : SBRowInfo {

	CGRect _textRect;
	SBItemInfoLayoutCache* _layoutCache;
	long long _location;

}

@property (nonatomic,readonly) double lastSnippetPadding; 
@property (nonatomic,readonly) NCSnippetDatum * representedSnippetDatum; 
+(double)topBaselineToCellTopInLayoutMode:(long long)arg1 ;
-(void)invalidateCachedLayoutData;
-(double)heightForReusableViewForNotificationCenterTableViewController:(id)arg1 layoutMode:(long long)arg2 sectionLocation:(long long)arg3 ;
-(void)populateReusableView:(id)arg1 ;
-(NCSnippetDatum *)representedSnippetDatum;
-(id)_representedBulletin;
-(double)lastSnippetPadding;
-(id)identifier;
-(Class)reusableViewClass;
@end

