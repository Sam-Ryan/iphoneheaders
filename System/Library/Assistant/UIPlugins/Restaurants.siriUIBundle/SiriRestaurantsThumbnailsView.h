/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:25:35 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/UIPlugins/Restaurants.siriUIBundle/Restaurants
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Restaurants/Restaurants-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray;

@interface SiriRestaurantsThumbnailsView : UIView {

	long long _numberOfPhotos;
	long long _numberOfCompletedDownloads;
	NSMutableArray* _imageSubLayers;

}
+(double)width;
-(CGRect)_bottomPhotoRect;
-(CGRect)_middlePhotoRect;
-(CGRect)topPhotoRect;
-(void)_addImage:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setPhotoList:(id)arg1 ;
@end
