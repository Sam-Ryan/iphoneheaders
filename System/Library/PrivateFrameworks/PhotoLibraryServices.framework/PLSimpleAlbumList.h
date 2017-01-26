/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:29 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PLAssetContainerList.h>

@class NSOrderedSet, NSString;

@interface PLSimpleAlbumList : NSObject <PLAssetContainerList> {

	NSOrderedSet* _containers;

}

@property (nonatomic,retain) NSOrderedSet * containers;                         //@synthesize containers=_containers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long containersCount; 
-(void)dealloc;
-(BOOL)isEmpty;
-(id)managedObjectContext;
-(id)initWithAssetContainers:(id)arg1 ;
-(void)setContainers:(NSOrderedSet *)arg1 ;
-(NSOrderedSet *)containers;
-(unsigned long long)containersCount;
-(id)initWithAssetContainer:(id)arg1 ;
-(id)photoLibrary;
-(BOOL)canEditContainers;
-(id)containersRelationshipName;
@end

