/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:17 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKit/UIViewController.h>

@class MPVolumeView;

@interface MPVolumeViewController : UIViewController {

	MPVolumeView* _volumeView;

}

@property (nonatomic,readonly) MPVolumeView * volumeView;              //@synthesize volumeView=_volumeView - In the implementation block
-(id)init;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(MPVolumeView *)volumeView;
@end

