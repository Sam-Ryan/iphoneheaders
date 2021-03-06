/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:54 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/MusicProductTracklistTableViewConfiguration.h>
#import <libobjc.A.dylib/ISURLBagObserver.h>

@protocol MusicEntityProviding;
@class NSString;

@interface MusicAlbumTracklistViewConfiguration : MusicProductTracklistTableViewConfiguration <ISURLBagObserver> {

	id<MusicEntityProviding> _originalEntityProvider;
	id<MusicEntityProviding> _entityProvider;
	unsigned long long _originalMinimumNumberOfEntitiesForSection;
	NSString* _groupingProperty;
	NSString* _wantsGroupingProperty;

}

@property (nonatomic,copy) NSString * wantsGroupingProperty; 
@property (nonatomic,copy) NSString * groupingProperty; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)entityProvider;
-(id)initWithEntityProvider:(id)arg1 ;
-(void)_configureTracklistTableViewDescriptorWithTintInformation:(id)arg1 ;
-(id)_loadTracklistTableViewDescriptor;
-(void)_entityProviderDidInvalidate;
-(id)newSectionEntityValueContext;
-(void)setGroupingProperty:(NSString *)arg1 ;
-(void)_groupIfNecessary;
-(void)setWantsGroupingProperty:(NSString *)arg1 ;
-(void)_updateTracklistPopularityIndicatorVisibility;
-(void)_configureContentDescriptorsForSectioning:(BOOL)arg1 ;
-(void)bagDidChange:(id)arg1 ;
-(NSString *)groupingProperty;
-(NSString *)wantsGroupingProperty;
@end

