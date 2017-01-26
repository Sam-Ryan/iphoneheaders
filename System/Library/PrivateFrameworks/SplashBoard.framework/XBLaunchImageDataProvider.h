/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:58 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SplashBoard/SplashBoard-Structs.h>
#import <libobjc.A.dylib/XBSnapshotDataProvider.h>

@class XBSnapshotDataProviderContext, XBDisplaySnapshot, UIImage, NSString;

@interface XBLaunchImageDataProvider : NSObject <XBSnapshotDataProvider> {

	XBDisplaySnapshot* _snapshot;
	UIImage* _cachedImage;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) XBSnapshotDataProviderContext * context; 
-(void)dealloc;
-(XBSnapshotDataProviderContext *)context;
-(id)initWithRequest:(id)arg1 contextID:(unsigned)arg2 ;
-(void)_invalidateSnapshotData;
-(id)fetchImage;
@end

