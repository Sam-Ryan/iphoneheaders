/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:30:53 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSOperationQueue, NSArray;

@interface _UIDocumentPickerContainerModel : NSObject {

	NSObject*<OS_dispatch_queue> _underlyingQueue;
	int _sortOrder;
	NSMutableArray* _updateHandlers;
	NSOperationQueue* _thumbnailQueue;

}

@property (nonatomic,readonly) NSArray * modelObjects; 
@property (nonatomic,copy,readonly) NSArray * pickableTypes; 
@property (nonatomic,readonly) unsigned long long pickerMode; 
@property (assign,nonatomic) int sortOrder;                                  //@synthesize sortOrder=_sortOrder - In the implementation block
@property (nonatomic,readonly) BOOL afterInitialUpdate; 
@property (nonatomic,retain) NSMutableArray * updateHandlers;                //@synthesize updateHandlers=_updateHandlers - In the implementation block
@property (nonatomic,retain) NSOperationQueue * thumbnailQueue;              //@synthesize thumbnailQueue=_thumbnailQueue - In the implementation block
-(void)dealloc;
-(id)init;
-(id)displayTitle;
-(BOOL)afterInitialUpdate;
-(NSArray *)modelObjects;
-(void)updateSortDescriptors;
-(void)startMonitoringChanges;
-(void)stopMonitoringChanges;
-(void)refreshItem:(id)arg1 thumbnailOnly:(BOOL)arg2 ;
-(void)setSortOrder:(int)arg1 ;
-(NSArray *)pickableTypes;
-(unsigned long long)pickerMode;
-(int)sortOrder;
-(NSMutableArray *)updateHandlers;
-(void)setUpdateHandlers:(NSMutableArray *)arg1 ;
-(NSOperationQueue *)thumbnailQueue;
-(void)setThumbnailQueue:(NSOperationQueue *)arg1 ;
@end

