/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:30:53 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIDocumentPickerDirectoryObserverItem.h>

@class _UIDocumentPickerURLContainerModel, NSOperation, NSMapTable, _UIDocumentPickerContainerModel, NSString, NSURL, NSDate;

@interface _UIDocumentPickerContainerItem : NSObject <_UIDocumentPickerDirectoryObserverItem> {

	_UIDocumentPickerURLContainerModel* _model;
	_UIDocumentPickerURLContainerModel* _weak_model;
	long long _modelDisplayCount;
	id _resourceIdentifier;
	NSOperation* _thumbnailLoadOperation;
	BOOL _pickable;
	long long _type;
	NSMapTable* _thumbnailsBySize;
	_UIDocumentPickerContainerModel* _parentModel;
	NSString* _pickabilityReason;

}

@property (nonatomic,readonly) long long type;                                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,retain,readonly) NSString * title; 
@property (nonatomic,retain,readonly) NSString * subtitle; 
@property (nonatomic,retain,readonly) NSString * subtitle2; 
@property (nonatomic,retain,readonly) NSURL * url; 
@property (nonatomic,retain,readonly) NSURL * urlInLocalContainer; 
@property (assign,nonatomic) BOOL pickable;                                                     //@synthesize pickable=_pickable - In the implementation block
@property (nonatomic,readonly) NSDate * sortDate; 
@property (nonatomic,readonly) BOOL renameable; 
@property (nonatomic,retain,readonly) _UIDocumentPickerContainerModel * model; 
@property (nonatomic,retain) NSMapTable * thumbnailsBySize;                                     //@synthesize thumbnailsBySize=_thumbnailsBySize - In the implementation block
@property (assign,nonatomic,__weak) _UIDocumentPickerContainerModel * parentModel;              //@synthesize parentModel=_parentModel - In the implementation block
@property (nonatomic,copy) NSString * pickabilityReason;                                        //@synthesize pickabilityReason=_pickabilityReason - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_lruThumbnailArray;
+(void)markThumbnailAsRecentlyUsed:(id)arg1 ;
+(id)_blockingThumbnailForItem:(id)arg1 documentProxy:(id)arg2 withSize:(CGSize)arg3 scale:(double)arg4 wantsBorder:(BOOL*)arg5 ;
+(void)clearLRUThumbnailCache;
-(unsigned long long)indentationLevel;
-(id)sortPath;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSURL *)url;
-(long long)type;
-(NSString *)title;
-(id)modificationDate;
-(id)contentType;
-(_UIDocumentPickerContainerModel *)model;
-(id)_formattedSubtitleForNumberOfItems:(unsigned long long)arg1 ;
-(NSString *)subtitle;
-(NSString *)subtitle2;
-(NSURL *)urlInLocalContainer;
-(id)tags;
-(NSDate *)sortDate;
-(void)_modelChanged;
-(BOOL)renameable;
-(void)setPickable:(BOOL)arg1 ;
-(void)setParentModel:(_UIDocumentPickerContainerModel *)arg1 ;
-(void)setPickabilityReason:(NSString *)arg1 ;
-(BOOL)pickable;
-(_UIDocumentPickerContainerModel *)parentModel;
-(id)_createThumbnailWithSize:(CGSize)arg1 scale:(double)arg2 ;
-(id)_blockingThumbnailWithSize:(CGSize)arg1 scale:(double)arg2 wantsBorder:(BOOL*)arg3 ;
-(id)_resourceIdentifier;
-(id)_blipWithTags:(id)arg1 height:(double)arg2 scale:(double)arg3 ;
-(void)_ensureModelPresent;
-(void)modelChanged;
-(id)thumbnailWithSize:(CGSize)arg1 scale:(double)arg2 ;
-(id)tagBlipsWithHeight:(double)arg1 scale:(double)arg2 ;
-(id)sortTag;
-(void)incrementModelDisplayCount;
-(void)decrementModelDisplayCount;
-(NSMapTable *)thumbnailsBySize;
-(void)setThumbnailsBySize:(NSMapTable *)arg1 ;
-(NSString *)pickabilityReason;
@end

