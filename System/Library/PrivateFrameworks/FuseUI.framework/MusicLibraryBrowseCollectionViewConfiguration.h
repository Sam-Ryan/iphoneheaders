/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:57 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/MusicLibraryViewConfiguration.h>

@class MusicEntityCollectionViewDescriptor;

@interface MusicLibraryBrowseCollectionViewConfiguration : MusicLibraryViewConfiguration {

	MusicEntityCollectionViewDescriptor* _entityCollectionViewDescriptor;

}

@property (nonatomic,readonly) MusicEntityCollectionViewDescriptor * entityViewDescriptor; 
-(id)init;
-(id)loadEntityViewDescriptor;
-(MusicEntityCollectionViewDescriptor *)entityViewDescriptor;
@end

