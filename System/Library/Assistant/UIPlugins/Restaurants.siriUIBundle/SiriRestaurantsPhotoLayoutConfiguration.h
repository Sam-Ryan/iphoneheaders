/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:25:35 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/UIPlugins/Restaurants.siriUIBundle/Restaurants
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Restaurants/Restaurants-Structs.h>
@interface SiriRestaurantsPhotoLayoutConfiguration : NSObject {

	UIEdgeInsets _insets;
	CGSize _photoSize;
	double _interphotoSpacing;

}
-(double)heightForWidth:(double)arg1 numberOfPhotos:(long long)arg2 ;
-(double)unusedHorizontalSpaceForWidth:(double)arg1 ;
-(double)interphotoSpacing;
-(id)initWithInsets:(UIEdgeInsets)arg1 photoSize:(CGSize)arg2 interphotoSpacing:(double)arg3 ;
-(UIEdgeInsets)insets;
-(long long)_numberOfColumnsForWidth:(double)arg1 ;
-(CGSize)photoSize;
@end
