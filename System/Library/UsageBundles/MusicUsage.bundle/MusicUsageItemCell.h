/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:05:35 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/UsageBundles/MusicUsage.bundle/MusicUsage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSUsageBundleCell.h>

@class MusicUsageItem, MPArtworkCatalog;

@interface MusicUsageItemCell : PSUsageBundleCell {

	MusicUsageItem* _usageItem;
	MPArtworkCatalog* _artworkCatalog;

}
-(void)layoutSubviews;
-(id)blankIcon;
-(id)getLazyIcon;
-(id)getLazyIconID;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
@end

