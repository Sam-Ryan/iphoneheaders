/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:12 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface SXMapSnapShotter : NSObject {

	NSMutableArray* _snapshotters;

}

@property (nonatomic,retain) NSMutableArray * snapshotters;              //@synthesize snapshotters=_snapshotters - In the implementation block
+(id)serialQueue;
-(NSMutableArray *)snapshotters;
-(/*^block*/id)snapShotWithOptions:(id)arg1 annotations:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setSnapshotters:(NSMutableArray *)arg1 ;
-(id)init;
@end

