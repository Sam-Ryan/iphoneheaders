/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:58 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIImage.h>

@class XBApplicationSnapshot;

@interface XBApplicationSnapshotImage : UIImage {

	XBApplicationSnapshot* _snapshot;
	long long _interfaceOrientation;

}

@property (nonatomic,readonly) long long interfaceOrientation;              //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
-(void)dealloc;
-(id)description;
-(long long)interfaceOrientation;
-(id)initWithSnapshot:(id)arg1 interfaceOrientation:(long long)arg2 ;
@end

